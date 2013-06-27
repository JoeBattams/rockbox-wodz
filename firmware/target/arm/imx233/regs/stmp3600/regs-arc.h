/***************************************************************************
 *             __________               __   ___.
 *   Open      \______   \ ____   ____ |  | _\_ |__   _______  ___
 *   Source     |       _//  _ \_/ ___\|  |/ /| __ \ /  _ \  \/  /
 *   Jukebox    |    |   (  <_> )  \___|    < | \_\ (  <_> > <  <
 *   Firmware   |____|_  /\____/ \___  >__|_ \|___  /\____/__/\_ \
 *                     \/            \/     \/    \/            \/
 * This file was automatically generated by headergen, DO NOT EDIT it.
 * headergen version: 2.1.7
 * XML versions: stmp3600:2.3.0
 *
 * Copyright (C) 2013 by Amaury Pouly
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
#ifndef __HEADERGEN__STMP3600__ARC__H__
#define __HEADERGEN__STMP3600__ARC__H__

#define REGS_ARC_BASE (0x80080000)

#define REGS_ARC_VERSION "2.3.0"

/**
 * Register: HW_ARC_BASE
 * Address: 0
 * SCT: no
*/
#define HW_ARC_BASE (*(volatile unsigned long *)(REGS_ARC_BASE + 0x0))

/**
 * Register: HW_ARC_ID
 * Address: 0
 * SCT: no
*/
#define HW_ARC_ID   (*(volatile unsigned long *)(REGS_ARC_BASE + 0x0))

/**
 * Register: HW_ARC_HCSPARAMS
 * Address: 0x104
 * SCT: no
*/
#define HW_ARC_HCSPARAMS    (*(volatile unsigned long *)(REGS_ARC_BASE + 0x104))

/**
 * Register: HW_ARC_USBCMD
 * Address: 0x140
 * SCT: no
*/
#define HW_ARC_USBCMD   (*(volatile unsigned long *)(REGS_ARC_BASE + 0x140))

/**
 * Register: HW_ARC_USBSTS
 * Address: 0x144
 * SCT: no
*/
#define HW_ARC_USBSTS   (*(volatile unsigned long *)(REGS_ARC_BASE + 0x144))

/**
 * Register: HW_ARC_USBINTR
 * Address: 0x148
 * SCT: no
*/
#define HW_ARC_USBINTR  (*(volatile unsigned long *)(REGS_ARC_BASE + 0x148))

/**
 * Register: HW_ARC_FRINDEX
 * Address: 0x14c
 * SCT: no
*/
#define HW_ARC_FRINDEX  (*(volatile unsigned long *)(REGS_ARC_BASE + 0x14c))

/**
 * Register: HW_ARC_DEVADDR
 * Address: 0x154
 * SCT: no
*/
#define HW_ARC_DEVADDR  (*(volatile unsigned long *)(REGS_ARC_BASE + 0x154))

/**
 * Register: HW_ARC_ENDPTLISTADDR
 * Address: 0x158
 * SCT: no
*/
#define HW_ARC_ENDPTLISTADDR    (*(volatile unsigned long *)(REGS_ARC_BASE + 0x158))

/**
 * Register: HW_ARC_PORTSC1
 * Address: 0x184
 * SCT: no
*/
#define HW_ARC_PORTSC1  (*(volatile unsigned long *)(REGS_ARC_BASE + 0x184))

/**
 * Register: HW_ARC_OTGSC
 * Address: 0x1a4
 * SCT: no
*/
#define HW_ARC_OTGSC    (*(volatile unsigned long *)(REGS_ARC_BASE + 0x1a4))

/**
 * Register: HW_ARC_USBMODE
 * Address: 0x1a8
 * SCT: no
*/
#define HW_ARC_USBMODE  (*(volatile unsigned long *)(REGS_ARC_BASE + 0x1a8))

/**
 * Register: HW_ARC_ENDPTSETUPSTAT
 * Address: 0x1ac
 * SCT: no
*/
#define HW_ARC_ENDPTSETUPSTAT   (*(volatile unsigned long *)(REGS_ARC_BASE + 0x1ac))

/**
 * Register: HW_ARC_ENDPTPRIME
 * Address: 0x1b0
 * SCT: no
*/
#define HW_ARC_ENDPTPRIME   (*(volatile unsigned long *)(REGS_ARC_BASE + 0x1b0))

/**
 * Register: HW_ARC_ENDPTFLUSH
 * Address: 0x1b4
 * SCT: no
*/
#define HW_ARC_ENDPTFLUSH   (*(volatile unsigned long *)(REGS_ARC_BASE + 0x1b4))

/**
 * Register: HW_ARC_ENDPTSTATUS
 * Address: 0x1b8
 * SCT: no
*/
#define HW_ARC_ENDPTSTATUS  (*(volatile unsigned long *)(REGS_ARC_BASE + 0x1b8))

/**
 * Register: HW_ARC_ENDPTCOMPLETE
 * Address: 0x1bc
 * SCT: no
*/
#define HW_ARC_ENDPTCOMPLETE    (*(volatile unsigned long *)(REGS_ARC_BASE + 0x1bc))

/**
 * Register: HW_ARC_ENDPTCTRL0
 * Address: 0x1c0
 * SCT: no
*/
#define HW_ARC_ENDPTCTRL0   (*(volatile unsigned long *)(REGS_ARC_BASE + 0x1c0))

/**
 * Register: HW_ARC_ENDPTCTRL1
 * Address: 0x1c4
 * SCT: no
*/
#define HW_ARC_ENDPTCTRL1   (*(volatile unsigned long *)(REGS_ARC_BASE + 0x1c4))

/**
 * Register: HW_ARC_ENDPTCTRL2
 * Address: 0x1c8
 * SCT: no
*/
#define HW_ARC_ENDPTCTRL2   (*(volatile unsigned long *)(REGS_ARC_BASE + 0x1c8))

/**
 * Register: HW_ARC_ENDPTCTRL3
 * Address: 0x1cc
 * SCT: no
*/
#define HW_ARC_ENDPTCTRL3   (*(volatile unsigned long *)(REGS_ARC_BASE + 0x1cc))

/**
 * Register: HW_ARC_ENDPTCTRL4
 * Address: 0x1d0
 * SCT: no
*/
#define HW_ARC_ENDPTCTRL4   (*(volatile unsigned long *)(REGS_ARC_BASE + 0x1d0))

/**
 * Register: HW_ARC_ENDPTCTRL5
 * Address: 0x1d4
 * SCT: no
*/
#define HW_ARC_ENDPTCTRL5   (*(volatile unsigned long *)(REGS_ARC_BASE + 0x1d4))

/**
 * Register: HW_ARC_ENDPTCTRL6
 * Address: 0x1d8
 * SCT: no
*/
#define HW_ARC_ENDPTCTRL6   (*(volatile unsigned long *)(REGS_ARC_BASE + 0x1d8))

/**
 * Register: HW_ARC_ENDPTCTRL7
 * Address: 0x1dc
 * SCT: no
*/
#define HW_ARC_ENDPTCTRL7   (*(volatile unsigned long *)(REGS_ARC_BASE + 0x1dc))

/**
 * Register: HW_ARC_ENDPTCTRL8
 * Address: 0x1e0
 * SCT: no
*/
#define HW_ARC_ENDPTCTRL8   (*(volatile unsigned long *)(REGS_ARC_BASE + 0x1e0))

/**
 * Register: HW_ARC_ENDPTCTRL9
 * Address: 0x1e4
 * SCT: no
*/
#define HW_ARC_ENDPTCTRL9   (*(volatile unsigned long *)(REGS_ARC_BASE + 0x1e4))

/**
 * Register: HW_ARC_ENDPTCTRL10
 * Address: 0x1e8
 * SCT: no
*/
#define HW_ARC_ENDPTCTRL10  (*(volatile unsigned long *)(REGS_ARC_BASE + 0x1e8))

/**
 * Register: HW_ARC_ENDPTCTRL11
 * Address: 0x1ec
 * SCT: no
*/
#define HW_ARC_ENDPTCTRL11  (*(volatile unsigned long *)(REGS_ARC_BASE + 0x1ec))

/**
 * Register: HW_ARC_ENDPTCTRL12
 * Address: 0x1f0
 * SCT: no
*/
#define HW_ARC_ENDPTCTRL12  (*(volatile unsigned long *)(REGS_ARC_BASE + 0x1f0))

/**
 * Register: HW_ARC_ENDPTCTRL13
 * Address: 0x1f4
 * SCT: no
*/
#define HW_ARC_ENDPTCTRL13  (*(volatile unsigned long *)(REGS_ARC_BASE + 0x1f4))

/**
 * Register: HW_ARC_ENDPTCTRL14
 * Address: 0x1f8
 * SCT: no
*/
#define HW_ARC_ENDPTCTRL14  (*(volatile unsigned long *)(REGS_ARC_BASE + 0x1f8))

/**
 * Register: HW_ARC_ENDPTCTRL15
 * Address: 0x1fc
 * SCT: no
*/
#define HW_ARC_ENDPTCTRL15  (*(volatile unsigned long *)(REGS_ARC_BASE + 0x1fc))

/**
 * Register: HW_ARC_ENDPTCTRLn
 * Address: 0x1c0+n*0x4
 * SCT: no
*/
#define HW_ARC_ENDPTCTRLn(n)    (*(volatile unsigned long *)(REGS_ARC_BASE + 0x1c0+(n)*0x4))

#endif /* __HEADERGEN__STMP3600__ARC__H__ */