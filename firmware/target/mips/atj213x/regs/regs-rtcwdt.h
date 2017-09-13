/***************************************************************************
 *             __________               __   ___.
 *   Open      \______   \ ____   ____ |  | _\_ |__   _______  ___
 *   Source     |       _//  _ \_/ ___\|  |/ /| __ \ /  _ \  \/  /
 *   Jukebox    |    |   (  <_> )  \___|    < | \_\ (  <_> > <  <
 *   Firmware   |____|_  /\____/ \___  >__|_ \|___  /\____/__/\_ \
 *                     \/            \/     \/    \/            \/
 * This file was automatically generated by headergen, DO NOT EDIT it.
 * headergen version: 3.0.0
 * atj213x version: 1.1
 * atj213x authors: Marcin Bukat
 *
 * Copyright (C) 2015 by the authors
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This software is distributed on an "AS IS" basis, WITHOUT WARRANTY OF ANY
 * KIND, either express or implied.
 *
 ****************************************************************************/
#ifndef __HEADERGEN_REGS_RTCWDT_H__
#define __HEADERGEN_REGS_RTCWDT_H__

#define RTCWDT_CTL      (*(volatile uint32_t *)RTCWDT_CTL_ADDR)
#define RTCWDT_CTL_ADDR (0xb0018000 + 0x0)

#define RTCWDT_DHMS                         (*(volatile uint32_t *)RTCWDT_DHMS_ADDR)
#define RTCWDT_DHMS_ADDR                    (0xb0018000 + 0x4)
#define BP_RTCWDT_DHMS_RESERVED31_27        27
#define BM_RTCWDT_DHMS_RESERVED31_27        0xf8000000
#define BF_RTCWDT_DHMS_RESERVED31_27(v)     (((v) & 0x1f) << 27)
#define BFM_RTCWDT_DHMS_RESERVED31_27(v)    BM_RTCWDT_DHMS_RESERVED31_27
#define BF_RTCWDT_DHMS_RESERVED31_27_V(e)   BF_RTCWDT_DHMS_RESERVED31_27(BV_RTCWDT_DHMS_RESERVED31_27__##e)
#define BFM_RTCWDT_DHMS_RESERVED31_27_V(v)  BM_RTCWDT_DHMS_RESERVED31_27
#define BP_RTCWDT_DHMS_DAY                  24
#define BM_RTCWDT_DHMS_DAY                  0x7000000
#define BF_RTCWDT_DHMS_DAY(v)               (((v) & 0x7) << 24)
#define BFM_RTCWDT_DHMS_DAY(v)              BM_RTCWDT_DHMS_DAY
#define BF_RTCWDT_DHMS_DAY_V(e)             BF_RTCWDT_DHMS_DAY(BV_RTCWDT_DHMS_DAY__##e)
#define BFM_RTCWDT_DHMS_DAY_V(v)            BM_RTCWDT_DHMS_DAY
#define BP_RTCWDT_DHMS_RESERVED23_21        21
#define BM_RTCWDT_DHMS_RESERVED23_21        0xe00000
#define BF_RTCWDT_DHMS_RESERVED23_21(v)     (((v) & 0x7) << 21)
#define BFM_RTCWDT_DHMS_RESERVED23_21(v)    BM_RTCWDT_DHMS_RESERVED23_21
#define BF_RTCWDT_DHMS_RESERVED23_21_V(e)   BF_RTCWDT_DHMS_RESERVED23_21(BV_RTCWDT_DHMS_RESERVED23_21__##e)
#define BFM_RTCWDT_DHMS_RESERVED23_21_V(v)  BM_RTCWDT_DHMS_RESERVED23_21
#define BP_RTCWDT_DHMS_HOUR                 16
#define BM_RTCWDT_DHMS_HOUR                 0x1f0000
#define BF_RTCWDT_DHMS_HOUR(v)              (((v) & 0x1f) << 16)
#define BFM_RTCWDT_DHMS_HOUR(v)             BM_RTCWDT_DHMS_HOUR
#define BF_RTCWDT_DHMS_HOUR_V(e)            BF_RTCWDT_DHMS_HOUR(BV_RTCWDT_DHMS_HOUR__##e)
#define BFM_RTCWDT_DHMS_HOUR_V(v)           BM_RTCWDT_DHMS_HOUR
#define BP_RTCWDT_DHMS_RESERVED15_14        14
#define BM_RTCWDT_DHMS_RESERVED15_14        0xc000
#define BF_RTCWDT_DHMS_RESERVED15_14(v)     (((v) & 0x3) << 14)
#define BFM_RTCWDT_DHMS_RESERVED15_14(v)    BM_RTCWDT_DHMS_RESERVED15_14
#define BF_RTCWDT_DHMS_RESERVED15_14_V(e)   BF_RTCWDT_DHMS_RESERVED15_14(BV_RTCWDT_DHMS_RESERVED15_14__##e)
#define BFM_RTCWDT_DHMS_RESERVED15_14_V(v)  BM_RTCWDT_DHMS_RESERVED15_14
#define BP_RTCWDT_DHMS_MIN                  8
#define BM_RTCWDT_DHMS_MIN                  0x3f00
#define BF_RTCWDT_DHMS_MIN(v)               (((v) & 0x3f) << 8)
#define BFM_RTCWDT_DHMS_MIN(v)              BM_RTCWDT_DHMS_MIN
#define BF_RTCWDT_DHMS_MIN_V(e)             BF_RTCWDT_DHMS_MIN(BV_RTCWDT_DHMS_MIN__##e)
#define BFM_RTCWDT_DHMS_MIN_V(v)            BM_RTCWDT_DHMS_MIN
#define BP_RTCWDT_DHMS_RESERVED7_6          6
#define BM_RTCWDT_DHMS_RESERVED7_6          0xc0
#define BF_RTCWDT_DHMS_RESERVED7_6(v)       (((v) & 0x3) << 6)
#define BFM_RTCWDT_DHMS_RESERVED7_6(v)      BM_RTCWDT_DHMS_RESERVED7_6
#define BF_RTCWDT_DHMS_RESERVED7_6_V(e)     BF_RTCWDT_DHMS_RESERVED7_6(BV_RTCWDT_DHMS_RESERVED7_6__##e)
#define BFM_RTCWDT_DHMS_RESERVED7_6_V(v)    BM_RTCWDT_DHMS_RESERVED7_6
#define BP_RTCWDT_DHMS_SEC                  0
#define BM_RTCWDT_DHMS_SEC                  0x3f
#define BF_RTCWDT_DHMS_SEC(v)               (((v) & 0x3f) << 0)
#define BFM_RTCWDT_DHMS_SEC(v)              BM_RTCWDT_DHMS_SEC
#define BF_RTCWDT_DHMS_SEC_V(e)             BF_RTCWDT_DHMS_SEC(BV_RTCWDT_DHMS_SEC__##e)
#define BFM_RTCWDT_DHMS_SEC_V(v)            BM_RTCWDT_DHMS_SEC

#define RTCWDT_YMD                          (*(volatile uint32_t *)RTCWDT_YMD_ADDR)
#define RTCWDT_YMD_ADDR                     (0xb0018000 + 0x8)
#define BP_RTCWDT_YMD_RESERVED31            31
#define BM_RTCWDT_YMD_RESERVED31            0x80000000
#define BF_RTCWDT_YMD_RESERVED31(v)         (((v) & 0x1) << 31)
#define BFM_RTCWDT_YMD_RESERVED31(v)        BM_RTCWDT_YMD_RESERVED31
#define BF_RTCWDT_YMD_RESERVED31_V(e)       BF_RTCWDT_YMD_RESERVED31(BV_RTCWDT_YMD_RESERVED31__##e)
#define BFM_RTCWDT_YMD_RESERVED31_V(v)      BM_RTCWDT_YMD_RESERVED31
#define BP_RTCWDT_YMD_CENT                  24
#define BM_RTCWDT_YMD_CENT                  0x7f000000
#define BF_RTCWDT_YMD_CENT(v)               (((v) & 0x7f) << 24)
#define BFM_RTCWDT_YMD_CENT(v)              BM_RTCWDT_YMD_CENT
#define BF_RTCWDT_YMD_CENT_V(e)             BF_RTCWDT_YMD_CENT(BV_RTCWDT_YMD_CENT__##e)
#define BFM_RTCWDT_YMD_CENT_V(v)            BM_RTCWDT_YMD_CENT
#define BP_RTCWDT_YMD_RESERVED23            23
#define BM_RTCWDT_YMD_RESERVED23            0x800000
#define BF_RTCWDT_YMD_RESERVED23(v)         (((v) & 0x1) << 23)
#define BFM_RTCWDT_YMD_RESERVED23(v)        BM_RTCWDT_YMD_RESERVED23
#define BF_RTCWDT_YMD_RESERVED23_V(e)       BF_RTCWDT_YMD_RESERVED23(BV_RTCWDT_YMD_RESERVED23__##e)
#define BFM_RTCWDT_YMD_RESERVED23_V(v)      BM_RTCWDT_YMD_RESERVED23
#define BP_RTCWDT_YMD_YEAR                  16
#define BM_RTCWDT_YMD_YEAR                  0x7f0000
#define BF_RTCWDT_YMD_YEAR(v)               (((v) & 0x7f) << 16)
#define BFM_RTCWDT_YMD_YEAR(v)              BM_RTCWDT_YMD_YEAR
#define BF_RTCWDT_YMD_YEAR_V(e)             BF_RTCWDT_YMD_YEAR(BV_RTCWDT_YMD_YEAR__##e)
#define BFM_RTCWDT_YMD_YEAR_V(v)            BM_RTCWDT_YMD_YEAR
#define BP_RTCWDT_YMD_RESERVED15_12         12
#define BM_RTCWDT_YMD_RESERVED15_12         0xf000
#define BF_RTCWDT_YMD_RESERVED15_12(v)      (((v) & 0xf) << 12)
#define BFM_RTCWDT_YMD_RESERVED15_12(v)     BM_RTCWDT_YMD_RESERVED15_12
#define BF_RTCWDT_YMD_RESERVED15_12_V(e)    BF_RTCWDT_YMD_RESERVED15_12(BV_RTCWDT_YMD_RESERVED15_12__##e)
#define BFM_RTCWDT_YMD_RESERVED15_12_V(v)   BM_RTCWDT_YMD_RESERVED15_12
#define BP_RTCWDT_YMD_MON                   8
#define BM_RTCWDT_YMD_MON                   0xf00
#define BF_RTCWDT_YMD_MON(v)                (((v) & 0xf) << 8)
#define BFM_RTCWDT_YMD_MON(v)               BM_RTCWDT_YMD_MON
#define BF_RTCWDT_YMD_MON_V(e)              BF_RTCWDT_YMD_MON(BV_RTCWDT_YMD_MON__##e)
#define BFM_RTCWDT_YMD_MON_V(v)             BM_RTCWDT_YMD_MON
#define BP_RTCWDT_YMD_RESERVED7_5           5
#define BM_RTCWDT_YMD_RESERVED7_5           0xe0
#define BF_RTCWDT_YMD_RESERVED7_5(v)        (((v) & 0x7) << 5)
#define BFM_RTCWDT_YMD_RESERVED7_5(v)       BM_RTCWDT_YMD_RESERVED7_5
#define BF_RTCWDT_YMD_RESERVED7_5_V(e)      BF_RTCWDT_YMD_RESERVED7_5(BV_RTCWDT_YMD_RESERVED7_5__##e)
#define BFM_RTCWDT_YMD_RESERVED7_5_V(v)     BM_RTCWDT_YMD_RESERVED7_5
#define BP_RTCWDT_YMD_DATE                  0
#define BM_RTCWDT_YMD_DATE                  0x1f
#define BF_RTCWDT_YMD_DATE(v)               (((v) & 0x1f) << 0)
#define BFM_RTCWDT_YMD_DATE(v)              BM_RTCWDT_YMD_DATE
#define BF_RTCWDT_YMD_DATE_V(e)             BF_RTCWDT_YMD_DATE(BV_RTCWDT_YMD_DATE__##e)
#define BFM_RTCWDT_YMD_DATE_V(v)            BM_RTCWDT_YMD_DATE

#define RTCWDT_DHMSALM                          (*(volatile uint32_t *)RTCWDT_DHMSALM_ADDR)
#define RTCWDT_DHMSALM_ADDR                     (0xb0018000 + 0xc)
#define BP_RTCWDT_DHMSALM_RESERVED31_21         21
#define BM_RTCWDT_DHMSALM_RESERVED31_21         0xffe00000
#define BF_RTCWDT_DHMSALM_RESERVED31_21(v)      (((v) & 0x7ff) << 21)
#define BFM_RTCWDT_DHMSALM_RESERVED31_21(v)     BM_RTCWDT_DHMSALM_RESERVED31_21
#define BF_RTCWDT_DHMSALM_RESERVED31_21_V(e)    BF_RTCWDT_DHMSALM_RESERVED31_21(BV_RTCWDT_DHMSALM_RESERVED31_21__##e)
#define BFM_RTCWDT_DHMSALM_RESERVED31_21_V(v)   BM_RTCWDT_DHMSALM_RESERVED31_21
#define BP_RTCWDT_DHMSALM_HOURAL                16
#define BM_RTCWDT_DHMSALM_HOURAL                0x1f0000
#define BF_RTCWDT_DHMSALM_HOURAL(v)             (((v) & 0x1f) << 16)
#define BFM_RTCWDT_DHMSALM_HOURAL(v)            BM_RTCWDT_DHMSALM_HOURAL
#define BF_RTCWDT_DHMSALM_HOURAL_V(e)           BF_RTCWDT_DHMSALM_HOURAL(BV_RTCWDT_DHMSALM_HOURAL__##e)
#define BFM_RTCWDT_DHMSALM_HOURAL_V(v)          BM_RTCWDT_DHMSALM_HOURAL
#define BP_RTCWDT_DHMSALM_RESERVED15_14         14
#define BM_RTCWDT_DHMSALM_RESERVED15_14         0xc000
#define BF_RTCWDT_DHMSALM_RESERVED15_14(v)      (((v) & 0x3) << 14)
#define BFM_RTCWDT_DHMSALM_RESERVED15_14(v)     BM_RTCWDT_DHMSALM_RESERVED15_14
#define BF_RTCWDT_DHMSALM_RESERVED15_14_V(e)    BF_RTCWDT_DHMSALM_RESERVED15_14(BV_RTCWDT_DHMSALM_RESERVED15_14__##e)
#define BFM_RTCWDT_DHMSALM_RESERVED15_14_V(v)   BM_RTCWDT_DHMSALM_RESERVED15_14
#define BP_RTCWDT_DHMSALM_MINAL                 8
#define BM_RTCWDT_DHMSALM_MINAL                 0x3f00
#define BF_RTCWDT_DHMSALM_MINAL(v)              (((v) & 0x3f) << 8)
#define BFM_RTCWDT_DHMSALM_MINAL(v)             BM_RTCWDT_DHMSALM_MINAL
#define BF_RTCWDT_DHMSALM_MINAL_V(e)            BF_RTCWDT_DHMSALM_MINAL(BV_RTCWDT_DHMSALM_MINAL__##e)
#define BFM_RTCWDT_DHMSALM_MINAL_V(v)           BM_RTCWDT_DHMSALM_MINAL
#define BP_RTCWDT_DHMSALM_RESERVED7_6           6
#define BM_RTCWDT_DHMSALM_RESERVED7_6           0xc0
#define BF_RTCWDT_DHMSALM_RESERVED7_6(v)        (((v) & 0x3) << 6)
#define BFM_RTCWDT_DHMSALM_RESERVED7_6(v)       BM_RTCWDT_DHMSALM_RESERVED7_6
#define BF_RTCWDT_DHMSALM_RESERVED7_6_V(e)      BF_RTCWDT_DHMSALM_RESERVED7_6(BV_RTCWDT_DHMSALM_RESERVED7_6__##e)
#define BFM_RTCWDT_DHMSALM_RESERVED7_6_V(v)     BM_RTCWDT_DHMSALM_RESERVED7_6
#define BP_RTCWDT_DHMSALM_SECAL                 0
#define BM_RTCWDT_DHMSALM_SECAL                 0x3f
#define BF_RTCWDT_DHMSALM_SECAL(v)              (((v) & 0x3f) << 0)
#define BFM_RTCWDT_DHMSALM_SECAL(v)             BM_RTCWDT_DHMSALM_SECAL
#define BF_RTCWDT_DHMSALM_SECAL_V(e)            BF_RTCWDT_DHMSALM_SECAL(BV_RTCWDT_DHMSALM_SECAL__##e)
#define BFM_RTCWDT_DHMSALM_SECAL_V(v)           BM_RTCWDT_DHMSALM_SECAL

#define RTCWDT_YMDALM                           (*(volatile uint32_t *)RTCWDT_YMDALM_ADDR)
#define RTCWDT_YMDALM_ADDR                      (0xb0018000 + 0x10)
#define BP_RTCWDT_YMDALM_RESERVED31_23          23
#define BM_RTCWDT_YMDALM_RESERVED31_23          0xff800000
#define BF_RTCWDT_YMDALM_RESERVED31_23(v)       (((v) & 0x1ff) << 23)
#define BFM_RTCWDT_YMDALM_RESERVED31_23(v)      BM_RTCWDT_YMDALM_RESERVED31_23
#define BF_RTCWDT_YMDALM_RESERVED31_23_V(e)     BF_RTCWDT_YMDALM_RESERVED31_23(BV_RTCWDT_YMDALM_RESERVED31_23__##e)
#define BFM_RTCWDT_YMDALM_RESERVED31_23_V(v)    BM_RTCWDT_YMDALM_RESERVED31_23
#define BP_RTCWDT_YMDALM_YEARAL                 16
#define BM_RTCWDT_YMDALM_YEARAL                 0x7f0000
#define BF_RTCWDT_YMDALM_YEARAL(v)              (((v) & 0x7f) << 16)
#define BFM_RTCWDT_YMDALM_YEARAL(v)             BM_RTCWDT_YMDALM_YEARAL
#define BF_RTCWDT_YMDALM_YEARAL_V(e)            BF_RTCWDT_YMDALM_YEARAL(BV_RTCWDT_YMDALM_YEARAL__##e)
#define BFM_RTCWDT_YMDALM_YEARAL_V(v)           BM_RTCWDT_YMDALM_YEARAL
#define BP_RTCWDT_YMDALM_RESERVED15_12          12
#define BM_RTCWDT_YMDALM_RESERVED15_12          0xf000
#define BF_RTCWDT_YMDALM_RESERVED15_12(v)       (((v) & 0xf) << 12)
#define BFM_RTCWDT_YMDALM_RESERVED15_12(v)      BM_RTCWDT_YMDALM_RESERVED15_12
#define BF_RTCWDT_YMDALM_RESERVED15_12_V(e)     BF_RTCWDT_YMDALM_RESERVED15_12(BV_RTCWDT_YMDALM_RESERVED15_12__##e)
#define BFM_RTCWDT_YMDALM_RESERVED15_12_V(v)    BM_RTCWDT_YMDALM_RESERVED15_12
#define BP_RTCWDT_YMDALM_MONAL                  8
#define BM_RTCWDT_YMDALM_MONAL                  0xf00
#define BF_RTCWDT_YMDALM_MONAL(v)               (((v) & 0xf) << 8)
#define BFM_RTCWDT_YMDALM_MONAL(v)              BM_RTCWDT_YMDALM_MONAL
#define BF_RTCWDT_YMDALM_MONAL_V(e)             BF_RTCWDT_YMDALM_MONAL(BV_RTCWDT_YMDALM_MONAL__##e)
#define BFM_RTCWDT_YMDALM_MONAL_V(v)            BM_RTCWDT_YMDALM_MONAL
#define BP_RTCWDT_YMDALM_RESERVED7_5            5
#define BM_RTCWDT_YMDALM_RESERVED7_5            0xe0
#define BF_RTCWDT_YMDALM_RESERVED7_5(v)         (((v) & 0x7) << 5)
#define BFM_RTCWDT_YMDALM_RESERVED7_5(v)        BM_RTCWDT_YMDALM_RESERVED7_5
#define BF_RTCWDT_YMDALM_RESERVED7_5_V(e)       BF_RTCWDT_YMDALM_RESERVED7_5(BV_RTCWDT_YMDALM_RESERVED7_5__##e)
#define BFM_RTCWDT_YMDALM_RESERVED7_5_V(v)      BM_RTCWDT_YMDALM_RESERVED7_5
#define BP_RTCWDT_YMDALM_DATEAL                 0
#define BM_RTCWDT_YMDALM_DATEAL                 0x1f
#define BF_RTCWDT_YMDALM_DATEAL(v)              (((v) & 0x1f) << 0)
#define BFM_RTCWDT_YMDALM_DATEAL(v)             BM_RTCWDT_YMDALM_DATEAL
#define BF_RTCWDT_YMDALM_DATEAL_V(e)            BF_RTCWDT_YMDALM_DATEAL(BV_RTCWDT_YMDALM_DATEAL__##e)
#define BFM_RTCWDT_YMDALM_DATEAL_V(v)           BM_RTCWDT_YMDALM_DATEAL

#define RTCWDT_WDCTL        (*(volatile uint32_t *)RTCWDT_WDCTL_ADDR)
#define RTCWDT_WDCTL_ADDR   (0xb0018000 + 0x14)

#define RTCWDT_TCTL(_n1)        (*(volatile uint32_t *)RTCWDT_TCTL_ADDR(_n1))
#define RTCWDT_TCTL_ADDR(_n1)   (0xb0018000 + 0x18 + ((_n1)*8))

#define RTCWDT_T(_n1)       (*(volatile uint32_t *)RTCWDT_T_ADDR(_n1))
#define RTCWDT_T_ADDR(_n1)  (0xb0018000 + 0x1c + ((_n1)*8))

#endif /* __HEADERGEN_REGS_RTCWDT_H__*/
