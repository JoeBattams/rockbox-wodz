#include "multivoc.h"

#include "fixedpoint.h"

#include "../global.h" /* for readLE16 */

extern char  *MV_MixDestination;
extern uint32_t MV_MixPosition;
extern int *MV_GLast, *MV_GPos, *MV_GVal;

extern int MV_LeftVolume, MV_LeftScale;
extern int MV_RightVolume, MV_RightScale;
extern const int MV_MaxVolume;

// extern unsigned char *MV_HarshClipTable;

extern int MV_RightChannelOffset;
extern int MV_SampleSize;
extern int MV_Channels;

//int do_cubic = 1;

extern int g_CV_CubicInterpolation;

#define do_cubic (g_CV_CubicInterpolation)

#define gval0 MV_GVal[*MV_GPos&3]
#define gval(x) MV_GVal[(*MV_GPos+x)&3]

int MV_cubic(int position)
{
    int xd, fa;
    xd = (position >> 1) & 0x7FFF;

    fa  = gval(3) - 3*gval(2) + 3*gval(1) - gval0;
    fa *= (xd - (2<<15)) / 6;
    fa >>= 15;
    fa += gval(2) - gval(1) - gval(1) + gval0;
    fa *= (xd - (1<<15)) >> 1;
    fa >>= 15;
    fa += gval(1) - gval0;
    fa *= xd;
    fa >>= 15;
    fa += gval0;
    return fa;
}

/*
  static int MV_cubic8(const unsigned char *src, int position, int rate)
  {
  int temp, hpos = position >> 16;

  if (abs(hpos - *MV_GLast) > 3) *MV_GLast = hpos;

  temp = hpos;

  while (hpos > *MV_GLast)
  {
  gval0 = ((int)src[temp++] - 0x80) << 8;
  *MV_GPos = (*MV_GPos + 1) & 3;
  (*MV_GLast)++;
  }

  return do_cubic ? (MV_cubic(position) >> 8) + 0x80 : (gval(3) >> 8) + 0x80;
  }
*/

static int MV_cubic16(const short *src, int position, int rate)
{
    int temp, hpos = position >> 16;

    if (abs(hpos - *MV_GLast) > 3)
        *MV_GLast = hpos;

    temp = hpos;

    while (hpos > *MV_GLast)
    {
        /* readLE16 returns unsigned short, but it won't be casted
         * implicitly, since gval0 is of type int. */
        gval0 = (short) readLE16(src + temp);
        temp++;

        *MV_GPos = (*MV_GPos + 1) & 3;
        (*MV_GLast)++;
    }

    return do_cubic ? MV_cubic(position) : gval(3);
}

static int MV_cubic8to16(const unsigned char *src, int position, int rate)
{
    int temp, hpos = position >> 16;

    if (abs(hpos - *MV_GLast) > 3) *MV_GLast = hpos;

    temp = hpos;

    while (hpos > *MV_GLast)
    {
        gval0 = ((int)src[temp++] - 0x80) << 8;
        *MV_GPos = (*MV_GPos + 1) & 3;
        (*MV_GLast)++;
    }

    return do_cubic ? MV_cubic(position) : gval(3);
}

/*
  static int MV_cubic16to8(const short *src, int position, int rate)
  {
  int temp, hpos = position >> 16;

  if (abs(hpos - *MV_GLast) > 3) *MV_GLast = hpos;

  temp = hpos;

  while (hpos > *MV_GLast)
  {
  gval0 = src[temp++];
  *MV_GPos = (*MV_GPos + 1) & 3;
  (*MV_GLast)++;
  }

  return do_cubic ? (MV_cubic(position) >> 8) + 0x80 : (gval(3) >> 8) + 0x80;
  }
*/

/*
void MV_Mix8BitMono( uint32_t position, uint32_t rate,
                     const char *start, uint32_t length )
{
    const unsigned char *src;
    unsigned char *dest;
    unsigned int i;

    src = (const unsigned char *)start;
    dest = (unsigned char *)MV_MixDestination;

    for (i = 0; i < length; i++) {
        int s = MV_cubic8to16(src, position, rate);
        int d = (*dest - 0x80) << 8;
		
        d += (s * MV_LeftVolume) / MV_MaxVolume;

        if (d < -32768) *dest = 0;
        else if (d > 32767) *dest = 255;
        else *dest = (d >> 8) + 128;
		
        position += rate;
        dest += MV_SampleSize;
    }
	
    MV_MixPosition = position;
    MV_MixDestination = (char *)dest;
}

void MV_Mix8BitStereo( uint32_t position,
                       uint32_t rate, const char *start, uint32_t length )
{
    const unsigned char *src;
    unsigned char *dest;
    unsigned int i;
	
    src = (const unsigned char *)start;
    dest = (unsigned char *)MV_MixDestination;

    for (i = 0; i < length; i++) {
        int s = MV_cubic8to16(src, position, rate);
        int dl = (dest[0] - 0x80) << 8;
        int dr = (dest[MV_RightChannelOffset] - 0x80) << 8;
		
        dl += (MV_LeftVolume * s) / MV_MaxVolume;
        dr += (MV_RightVolume * s) / MV_MaxVolume;

        if (dl < -32768) dest[0] = 0;
        else if (dl > 32767) dest[0] = 255;
        else dest[0] = (dl >> 8) + 128;

        if (dr < -32768) dest[MV_RightChannelOffset] = 0;
        else if (dr > 32767) dest[MV_RightChannelOffset] = 255;
        else dest[MV_RightChannelOffset] = (dl >> 8) + 128;
		
        position += rate;
        dest += MV_SampleSize;
    }
	
    MV_MixPosition = position;
    MV_MixDestination = (char *)dest;
}

void MV_Mix16BitMono( uint32_t position,
                      uint32_t rate, const char *start, uint32_t length )
{
    const unsigned char *src;
    short *dest;
    unsigned int i;

    src = (const unsigned char *)start;
    dest = (short *)MV_MixDestination;
	
    for (i = 0; i < length; i++) {
        int s = MV_cubic8to16(src, position, rate);
        int d = readLE16(dest);

        d += (MV_LeftVolume * s) / MV_MaxVolume;

        if (d < -32768) *dest = -32768;
        else if (d >  32767) *dest =  32767;
        else *dest = d;
		
        position += rate;
        dest += MV_SampleSize/2;
    }
	
    MV_MixPosition = position;
    MV_MixDestination = (char *)dest;
}

void MV_Mix16BitStereo( uint32_t position,
                        uint32_t rate, const char *start, uint32_t length )
{
    const unsigned char *src;
    short *dest;
    unsigned int i;

    src = (unsigned char *)start;
    dest = (short *)MV_MixDestination;
	
    for (i = 0; i < length; i++) {
        int s = MV_cubic8to16(src, position, rate);
        int dl = readLE16(dest);
        int dr = readLE16(dest + MV_RightChannelOffset/2);
		
        dl += (MV_LeftVolume * s) / MV_MaxVolume;
        dr += (MV_RightVolume * s) / MV_MaxVolume;
		
        if (dl < -32768) dest[0] = -32768;
        else if (dl >  32767) dest[0] =  32767;
        else dest[0] = dl;

        if (dr < -32768) dest[MV_RightChannelOffset/2] = -32768;
        else if (dr >  32767) dest[MV_RightChannelOffset/2] =  32767;
        else dest[MV_RightChannelOffset/2] = dr;
		
        position += rate;
        dest += MV_SampleSize/2;
    }
	
    MV_MixPosition = position;
    MV_MixDestination = (char *)dest;
}

void MV_Mix8BitMono16( uint32_t position, uint32_t rate,
                       const char *start, uint32_t length )
{
    const short *src;
    unsigned char *dest;
    unsigned int i;

    src = (const short *)start;
    dest = (unsigned char *)MV_MixDestination;

    for (i = 0; i < length; i++) {
        int s = MV_cubic16(src, position, rate);
        int d = (*dest - 0x80) << 8;

        d += (MV_LeftVolume * s) / MV_MaxVolume;

        if (d < -32768) *dest = 0;
        else if (d > 32767) *dest = 255;
        else *dest = (d >> 8) + 128;
		
        position += rate;
        dest += MV_SampleSize;
    }
	
    MV_MixPosition = position;
    MV_MixDestination = (char *)dest;
}

void MV_Mix8BitStereo16( uint32_t position,
                         uint32_t rate, const char *start, uint32_t length )
{
    const short *src;
    unsigned char *dest;
    unsigned int i;
	
    src = (const short *)start;
    dest = (unsigned char *)MV_MixDestination;
	
    for (i = 0; i < length; i++) {
        int s = MV_cubic16(src, position, rate);
        int dl = (dest[0] - 0x80) << 8;
        int dr = (dest[MV_RightChannelOffset/2] - 0x80) << 8;
		
        dl += (MV_LeftVolume * s) / MV_MaxVolume;
        dr += (MV_RightVolume * s) / MV_MaxVolume;

        if (dl < -32768) dest[0] = 0;
        else if (dl > 32767) dest[0] = 255;
        else dest[0] = (dl >> 8) + 128;

        if (dr < -32768) dest[MV_RightChannelOffset] = 0;
        else if (dr > 32767) dest[MV_RightChannelOffset] = 255;
        else dest[MV_RightChannelOffset] = (dl >> 8) + 128;
		
        position += rate;
        dest += MV_SampleSize;
    }
	
    MV_MixPosition = position;
    MV_MixDestination = (char *)dest;
}

void MV_Mix16BitMono16( uint32_t position,
                        uint32_t rate, const char *start, uint32_t length )
{
    const short *src;
    short *dest;
    unsigned int i;
	
    src = (const short *)start;
    dest = (short *)MV_MixDestination;
	
    for (i = 0; i < length; i++) {
        int s = MV_cubic16(src, position, rate);
        int d = readLE16(dest);
		
        d += (MV_LeftVolume * s) / MV_MaxVolume;
		
        if (d < -32768) *dest = -32768;
        else if (d >  32767) *dest =  32767;
        else *dest = d;
		
        position += rate;
        dest += MV_SampleSize/2;
    }
	
    MV_MixPosition = position;
    MV_MixDestination = (char *)dest;
}

void MV_Mix16BitStereo16( uint32_t position,
                          uint32_t rate, const char *start, uint32_t length )
{
    const short *src;
    short *dest;
    unsigned int i;

    src = (const short *)start;
    dest = (short *)MV_MixDestination;

    for (i = 0; i < length; i++) {
        int s = MV_cubic16(src, position, rate);
        int dl = readLE16(dest);
        int dr = readLE16(dest + MV_RightChannelOffset/2);

        dl += (MV_LeftVolume * s) / MV_MaxVolume;
        dr += (MV_RightVolume * s) / MV_MaxVolume;

        if (dl < -32768) dest[0] = -32768;
        else if (dl > 32767) dest[0] = 32767;
        else dest[0] = dl;

        if (dr < -32768) dest[MV_RightChannelOffset/2] = -32768;
        else if (dr > 32767) dest[MV_RightChannelOffset/2] = 32767;
        else dest[MV_RightChannelOffset/2] = dl;
		
        position += rate;
        dest += MV_SampleSize/2;
    }
	
    MV_MixPosition = position;
    MV_MixDestination = (char *)dest;
}
*/

int fp_calls[4] = {0, 0, 0, 0};

//static const double recip = 1/(double)(1<<FRACBITS);

/* #2 */
void MV_MixFPMono8( uint32_t position,
                    uint32_t rate, const char *start, uint32_t length )
{
    ++fp_calls[0];
    const unsigned char *src;
    long *dest;
    unsigned int i;

    src = (const unsigned char *)start;
    dest = (long *)MV_MixDestination;

    for (i = 0; i < length; i++) {
        int s = MV_cubic8to16(src, position, rate) << FRACBITS;
        long out;

        out = (s * MV_LeftScale) >> FRACBITS;
        *dest += out;

        position += rate;
        dest += MV_Channels;
    }
	
    MV_MixPosition = position;
    MV_MixDestination = (char *)dest;
}

/* #1 performance hog */
void MV_MixFPStereo8( uint32_t position,
                      uint32_t rate, const char *start, uint32_t length )
{
    ++fp_calls[1];
    const unsigned char *src;
    long *dest;
    unsigned int i;
	
    src = (const unsigned char *)start;
    dest = (long *)MV_MixDestination;

    for (i = 0; i < length; i++) {
        int s = MV_cubic8to16(src, position, rate) << FRACBITS;
        long left, right;

        left = (s * MV_LeftScale) >> FRACBITS;
        right = (s * MV_RightScale) >> FRACBITS;

        dest[0] += left;
        dest[1] += right;

        position += rate;
        dest += MV_Channels;
    }
	
    MV_MixPosition = position;
    MV_MixDestination = (char *)dest;

}

/* rarely called */
void MV_MixFPMono16( uint32_t position,
                     uint32_t rate, const char *start, uint32_t length )
{
    ++fp_calls[2];
    const short *src;
    long *dest;
    unsigned int i;

    src = (const short *)start;
    dest = (long *)MV_MixDestination;

    for (i = 0; i < length; i++) {
        int s = MV_cubic16(src, position, rate) << FRACBITS;
        long out;

        out = (s * MV_LeftScale) >> FRACBITS;
        *dest += out;

        position += rate;
        dest += MV_Channels;
    }
	
    MV_MixPosition = position;
    MV_MixDestination = (char *)dest;
}

/* #3 performance hog */
void MV_MixFPStereo16( uint32_t position,
                       uint32_t rate, const char *start, uint32_t length )
{
    ++fp_calls[3];
    const short *src;
    long *dest;
    unsigned int i;
	
    src = (const short *)start;
    dest = (long *)MV_MixDestination;

    for (i = 0; i < length; i++) {
        int s = MV_cubic16(src, position, rate) << FRACBITS;

        long left, right;

        left = (s * MV_LeftScale) >> FRACBITS;
        right = (s * MV_RightScale) >> FRACBITS;

        dest[0] += left;
        dest[1] += right;

        position += rate;
        dest += MV_Channels;
    }
	
    MV_MixPosition = position;
    MV_MixDestination = (char *)dest;

}
