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
#ifndef __HEADERGEN_REGS_SD_H__
#define __HEADERGEN_REGS_SD_H__

#define SD_CTL                          (*(volatile uint32_t *)SD_CTL_ADDR)
#define SD_CTL_ADDR                     (0xb00b0000 + 0x0)
#define BP_SD_CTL_RESERVED31_11         11
#define BM_SD_CTL_RESERVED31_11         0xfffff800
#define BF_SD_CTL_RESERVED31_11(v)      (((v) & 0x1fffff) << 11)
#define BFM_SD_CTL_RESERVED31_11(v)     BM_SD_CTL_RESERVED31_11
#define BF_SD_CTL_RESERVED31_11_V(e)    BF_SD_CTL_RESERVED31_11(BV_SD_CTL_RESERVED31_11__##e)
#define BFM_SD_CTL_RESERVED31_11_V(v)   BM_SD_CTL_RESERVED31_11
#define BP_SD_CTL_RESE                  10
#define BM_SD_CTL_RESE                  0x400
#define BV_SD_CTL_RESE__DISABLE         0x0
#define BV_SD_CTL_RESE__ENABLE          0x1
#define BF_SD_CTL_RESE(v)               (((v) & 0x1) << 10)
#define BFM_SD_CTL_RESE(v)              BM_SD_CTL_RESE
#define BF_SD_CTL_RESE_V(e)             BF_SD_CTL_RESE(BV_SD_CTL_RESE__##e)
#define BFM_SD_CTL_RESE_V(v)            BM_SD_CTL_RESE
#define BP_SD_CTL_RESERVED9             9
#define BM_SD_CTL_RESERVED9             0x200
#define BF_SD_CTL_RESERVED9(v)          (((v) & 0x1) << 9)
#define BFM_SD_CTL_RESERVED9(v)         BM_SD_CTL_RESERVED9
#define BF_SD_CTL_RESERVED9_V(e)        BF_SD_CTL_RESERVED9(BV_SD_CTL_RESERVED9__##e)
#define BFM_SD_CTL_RESERVED9_V(v)       BM_SD_CTL_RESERVED9
#define BP_SD_CTL_CLKS                  8
#define BM_SD_CTL_CLKS                  0x100
#define BV_SD_CTL_CLKS__CEB6            0x0
#define BV_SD_CTL_CLKS__CEB2            0x1
#define BF_SD_CTL_CLKS(v)               (((v) & 0x1) << 8)
#define BFM_SD_CTL_CLKS(v)              BM_SD_CTL_CLKS
#define BF_SD_CTL_CLKS_V(e)             BF_SD_CTL_CLKS(BV_SD_CTL_CLKS__##e)
#define BFM_SD_CTL_CLKS_V(v)            BM_SD_CTL_CLKS
#define BP_SD_CTL_EN                    7
#define BM_SD_CTL_EN                    0x80
#define BV_SD_CTL_EN__DISABLE           0x0
#define BV_SD_CTL_EN__ENABLE            0x1
#define BF_SD_CTL_EN(v)                 (((v) & 0x1) << 7)
#define BFM_SD_CTL_EN(v)                BM_SD_CTL_EN
#define BF_SD_CTL_EN_V(e)               BF_SD_CTL_EN(BV_SD_CTL_EN__##e)
#define BFM_SD_CTL_EN_V(v)              BM_SD_CTL_EN
#define BP_SD_CTL_BSEL                  6
#define BM_SD_CTL_BSEL                  0x40
#define BV_SD_CTL_BSEL__AHB             0x0
#define BV_SD_CTL_BSEL__DMA             0x1
#define BF_SD_CTL_BSEL(v)               (((v) & 0x1) << 6)
#define BFM_SD_CTL_BSEL(v)              BM_SD_CTL_BSEL
#define BF_SD_CTL_BSEL_V(e)             BF_SD_CTL_BSEL(BV_SD_CTL_BSEL__##e)
#define BFM_SD_CTL_BSEL_V(v)            BM_SD_CTL_BSEL
#define BP_SD_CTL_RESERVED              2
#define BM_SD_CTL_RESERVED              0x3c
#define BF_SD_CTL_RESERVED(v)           (((v) & 0xf) << 2)
#define BFM_SD_CTL_RESERVED(v)          BM_SD_CTL_RESERVED
#define BF_SD_CTL_RESERVED_V(e)         BF_SD_CTL_RESERVED(BV_SD_CTL_RESERVED__##e)
#define BFM_SD_CTL_RESERVED_V(v)        BM_SD_CTL_RESERVED
#define BP_SD_CTL_DATAWID               0
#define BM_SD_CTL_DATAWID               0x3
#define BV_SD_CTL_DATAWID__1BIT         0x0
#define BV_SD_CTL_DATAWID__4BIT         0x1
#define BV_SD_CTL_DATAWID__8BIT         0x2
#define BF_SD_CTL_DATAWID(v)            (((v) & 0x3) << 0)
#define BFM_SD_CTL_DATAWID(v)           BM_SD_CTL_DATAWID
#define BF_SD_CTL_DATAWID_V(e)          BF_SD_CTL_DATAWID(BV_SD_CTL_DATAWID__##e)
#define BFM_SD_CTL_DATAWID_V(v)         BM_SD_CTL_DATAWID

#define SD_CMDRSP                       (*(volatile uint32_t *)SD_CMDRSP_ADDR)
#define SD_CMDRSP_ADDR                  (0xb00b0000 + 0x4)
#define BP_SD_CMDRSP_RESERVED31_6       6
#define BM_SD_CMDRSP_RESERVED31_6       0xffffffc0
#define BF_SD_CMDRSP_RESERVED31_6(v)    (((v) & 0x3ffffff) << 6)
#define BFM_SD_CMDRSP_RESERVED31_6(v)   BM_SD_CMDRSP_RESERVED31_6
#define BF_SD_CMDRSP_RESERVED31_6_V(e)  BF_SD_CMDRSP_RESERVED31_6(BV_SD_CMDRSP_RESERVED31_6__##e)
#define BFM_SD_CMDRSP_RESERVED31_6_V(v) BM_SD_CMDRSP_RESERVED31_6
#define BP_SD_CMDRSP_RB                 5
#define BM_SD_CMDRSP_RB                 0x20
#define BV_SD_CMDRSP_RB__BUSY           0x0
#define BV_SD_CMDRSP_RB__READY          0x1
#define BF_SD_CMDRSP_RB(v)              (((v) & 0x1) << 5)
#define BFM_SD_CMDRSP_RB(v)             BM_SD_CMDRSP_RB
#define BF_SD_CMDRSP_RB_V(e)            BF_SD_CMDRSP_RB(BV_SD_CMDRSP_RB__##e)
#define BFM_SD_CMDRSP_RB_V(v)           BM_SD_CMDRSP_RB
#define BP_SD_CMDRSP_RSP2               4
#define BM_SD_CMDRSP_RSP2               0x10
#define BF_SD_CMDRSP_RSP2(v)            (((v) & 0x1) << 4)
#define BFM_SD_CMDRSP_RSP2(v)           BM_SD_CMDRSP_RSP2
#define BF_SD_CMDRSP_RSP2_V(e)          BF_SD_CMDRSP_RSP2(BV_SD_CMDRSP_RSP2__##e)
#define BFM_SD_CMDRSP_RSP2_V(v)         BM_SD_CMDRSP_RSP2
#define BP_SD_CMDRSP_RSP3               3
#define BM_SD_CMDRSP_RSP3               0x8
#define BF_SD_CMDRSP_RSP3(v)            (((v) & 0x1) << 3)
#define BFM_SD_CMDRSP_RSP3(v)           BM_SD_CMDRSP_RSP3
#define BF_SD_CMDRSP_RSP3_V(e)          BF_SD_CMDRSP_RSP3(BV_SD_CMDRSP_RSP3__##e)
#define BFM_SD_CMDRSP_RSP3_V(v)         BM_SD_CMDRSP_RSP3
#define BP_SD_CMDRSP_NRSP               2
#define BM_SD_CMDRSP_NRSP               0x4
#define BF_SD_CMDRSP_NRSP(v)            (((v) & 0x1) << 2)
#define BFM_SD_CMDRSP_NRSP(v)           BM_SD_CMDRSP_NRSP
#define BF_SD_CMDRSP_NRSP_V(e)          BF_SD_CMDRSP_NRSP(BV_SD_CMDRSP_NRSP__##e)
#define BFM_SD_CMDRSP_NRSP_V(v)         BM_SD_CMDRSP_NRSP
#define BP_SD_CMDRSP_RSP1               1
#define BM_SD_CMDRSP_RSP1               0x2
#define BF_SD_CMDRSP_RSP1(v)            (((v) & 0x1) << 1)
#define BFM_SD_CMDRSP_RSP1(v)           BM_SD_CMDRSP_RSP1
#define BF_SD_CMDRSP_RSP1_V(e)          BF_SD_CMDRSP_RSP1(BV_SD_CMDRSP_RSP1__##e)
#define BFM_SD_CMDRSP_RSP1_V(v)         BM_SD_CMDRSP_RSP1
#define BP_SD_CMDRSP_STAT               0
#define BM_SD_CMDRSP_STAT               0x1
#define BV_SD_CMDRSP_STAT__OK           0x0
#define BV_SD_CMDRSP_STAT__ERROR        0x1
#define BF_SD_CMDRSP_STAT(v)            (((v) & 0x1) << 0)
#define BFM_SD_CMDRSP_STAT(v)           BM_SD_CMDRSP_STAT
#define BF_SD_CMDRSP_STAT_V(e)          BF_SD_CMDRSP_STAT(BV_SD_CMDRSP_STAT__##e)
#define BFM_SD_CMDRSP_STAT_V(v)         BM_SD_CMDRSP_STAT

#define SD_RW                           (*(volatile uint32_t *)SD_RW_ADDR)
#define SD_RW_ADDR                      (0xb00b0000 + 0x8)
#define BP_SD_RW_RESERVED31_17          17
#define BM_SD_RW_RESERVED31_17          0xfffe0000
#define BF_SD_RW_RESERVED31_17(v)       (((v) & 0x7fff) << 17)
#define BFM_SD_RW_RESERVED31_17(v)      BM_SD_RW_RESERVED31_17
#define BF_SD_RW_RESERVED31_17_V(e)     BF_SD_RW_RESERVED31_17(BV_SD_RW_RESERVED31_17__##e)
#define BFM_SD_RW_RESERVED31_17_V(v)    BM_SD_RW_RESERVED31_17
#define BP_SD_RW_FC16                   16
#define BM_SD_RW_FC16                   0x10000
#define BV_SD_RW_FC16__ENABLE           0x0
#define BV_SD_RW_FC16__DISABLE          0x1
#define BF_SD_RW_FC16(v)                (((v) & 0x1) << 16)
#define BFM_SD_RW_FC16(v)               BM_SD_RW_FC16
#define BF_SD_RW_FC16_V(e)              BF_SD_RW_FC16(BV_SD_RW_FC16__##e)
#define BFM_SD_RW_FC16_V(v)             BM_SD_RW_FC16
#define BP_SD_RW_STWR                   15
#define BM_SD_RW_STWR                   0x8000
#define BV_SD_RW_STWR__START            0x1
#define BF_SD_RW_STWR(v)                (((v) & 0x1) << 15)
#define BFM_SD_RW_STWR(v)               BM_SD_RW_STWR
#define BF_SD_RW_STWR_V(e)              BF_SD_RW_STWR(BV_SD_RW_STWR__##e)
#define BFM_SD_RW_STWR_V(v)             BM_SD_RW_STWR
#define BP_SD_RW_RESERVED14_10          10
#define BM_SD_RW_RESERVED14_10          0x7c00
#define BF_SD_RW_RESERVED14_10(v)       (((v) & 0x1f) << 10)
#define BFM_SD_RW_RESERVED14_10(v)      BM_SD_RW_RESERVED14_10
#define BF_SD_RW_RESERVED14_10_V(e)     BF_SD_RW_RESERVED14_10(BV_SD_RW_RESERVED14_10__##e)
#define BFM_SD_RW_RESERVED14_10_V(v)    BM_SD_RW_RESERVED14_10
#define BP_SD_RW_WCEF                   9
#define BM_SD_RW_WCEF                   0x200
#define BV_SD_RW_WCEF__END              0x1
#define BF_SD_RW_WCEF(v)                (((v) & 0x1) << 9)
#define BFM_SD_RW_WCEF(v)               BM_SD_RW_WCEF
#define BF_SD_RW_WCEF_V(e)              BF_SD_RW_WCEF(BV_SD_RW_WCEF__##e)
#define BFM_SD_RW_WCEF_V(v)             BM_SD_RW_WCEF
#define BP_SD_RW_WCST                   8
#define BM_SD_RW_WCST                   0x100
#define BV_SD_RW_WCST__OK               0x0
#define BV_SD_RW_WCST__ERROR            0x1
#define BF_SD_RW_WCST(v)                (((v) & 0x1) << 8)
#define BFM_SD_RW_WCST(v)               BM_SD_RW_WCST
#define BF_SD_RW_WCST_V(e)              BF_SD_RW_WCST(BV_SD_RW_WCST__##e)
#define BFM_SD_RW_WCST_V(v)             BM_SD_RW_WCST
#define BP_SD_RW_STRD                   7
#define BM_SD_RW_STRD                   0x80
#define BV_SD_RW_STRD__START            0x1
#define BF_SD_RW_STRD(v)                (((v) & 0x1) << 7)
#define BFM_SD_RW_STRD(v)               BM_SD_RW_STRD
#define BF_SD_RW_STRD_V(e)              BF_SD_RW_STRD(BV_SD_RW_STRD__##e)
#define BFM_SD_RW_STRD_V(v)             BM_SD_RW_STRD
#define BP_SD_RW_RCST                   6
#define BM_SD_RW_RCST                   0x40
#define BV_SD_RW_RCST__OK               0x0
#define BV_SD_RW_RCST__ERROR            0x1
#define BF_SD_RW_RCST(v)                (((v) & 0x1) << 6)
#define BFM_SD_RW_RCST(v)               BM_SD_RW_RCST
#define BF_SD_RW_RCST_V(e)              BF_SD_RW_RCST(BV_SD_RW_RCST__##e)
#define BFM_SD_RW_RCST_V(v)             BM_SD_RW_RCST
#define BP_SD_RW_RESERVED5_1            1
#define BM_SD_RW_RESERVED5_1            0x3e
#define BF_SD_RW_RESERVED5_1(v)         (((v) & 0x1f) << 1)
#define BFM_SD_RW_RESERVED5_1(v)        BM_SD_RW_RESERVED5_1
#define BF_SD_RW_RESERVED5_1_V(e)       BF_SD_RW_RESERVED5_1(BV_SD_RW_RESERVED5_1__##e)
#define BFM_SD_RW_RESERVED5_1_V(v)      BM_SD_RW_RESERVED5_1
#define BP_SD_RW_RWST                   0
#define BM_SD_RW_RWST                   0x1
#define BV_SD_RW_RWST__READ             0x0
#define BV_SD_RW_RWST__WRITE            0x1
#define BF_SD_RW_RWST(v)                (((v) & 0x1) << 0)
#define BFM_SD_RW_RWST(v)               BM_SD_RW_RWST
#define BF_SD_RW_RWST_V(e)              BF_SD_RW_RWST(BV_SD_RW_RWST__##e)
#define BFM_SD_RW_RWST_V(v)             BM_SD_RW_RWST

#define SD_FIFOCTL                          (*(volatile uint32_t *)SD_FIFOCTL_ADDR)
#define SD_FIFOCTL_ADDR                     (0xb00b0000 + 0xc)
#define BP_SD_FIFOCTL_RESERVED31_11         11
#define BM_SD_FIFOCTL_RESERVED31_11         0xfffff800
#define BF_SD_FIFOCTL_RESERVED31_11(v)      (((v) & 0x1fffff) << 11)
#define BFM_SD_FIFOCTL_RESERVED31_11(v)     BM_SD_FIFOCTL_RESERVED31_11
#define BF_SD_FIFOCTL_RESERVED31_11_V(e)    BF_SD_FIFOCTL_RESERVED31_11(BV_SD_FIFOCTL_RESERVED31_11__##e)
#define BFM_SD_FIFOCTL_RESERVED31_11_V(v)   BM_SD_FIFOCTL_RESERVED31_11
#define BP_SD_FIFOCTL_BLOC                  10
#define BM_SD_FIFOCTL_BLOC                  0x400
#define BF_SD_FIFOCTL_BLOC(v)               (((v) & 0x1) << 10)
#define BFM_SD_FIFOCTL_BLOC(v)              BM_SD_FIFOCTL_BLOC
#define BF_SD_FIFOCTL_BLOC_V(e)             BF_SD_FIFOCTL_BLOC(BV_SD_FIFOCTL_BLOC__##e)
#define BFM_SD_FIFOCTL_BLOC_V(v)            BM_SD_FIFOCTL_BLOC
#define BP_SD_FIFOCTL_EMPTY                 9
#define BM_SD_FIFOCTL_EMPTY                 0x200
#define BF_SD_FIFOCTL_EMPTY(v)              (((v) & 0x1) << 9)
#define BFM_SD_FIFOCTL_EMPTY(v)             BM_SD_FIFOCTL_EMPTY
#define BF_SD_FIFOCTL_EMPTY_V(e)            BF_SD_FIFOCTL_EMPTY(BV_SD_FIFOCTL_EMPTY__##e)
#define BFM_SD_FIFOCTL_EMPTY_V(v)           BM_SD_FIFOCTL_EMPTY
#define BP_SD_FIFOCTL_MODE                  8
#define BM_SD_FIFOCTL_MODE                  0x100
#define BV_SD_FIFOCTL_MODE__DMA             0x0
#define BV_SD_FIFOCTL_MODE__BUS             0x1
#define BF_SD_FIFOCTL_MODE(v)               (((v) & 0x1) << 8)
#define BFM_SD_FIFOCTL_MODE(v)              BM_SD_FIFOCTL_MODE
#define BF_SD_FIFOCTL_MODE_V(e)             BF_SD_FIFOCTL_MODE(BV_SD_FIFOCTL_MODE__##e)
#define BFM_SD_FIFOCTL_MODE_V(v)            BM_SD_FIFOCTL_MODE
#define BP_SD_FIFOCTL_DRQF                  7
#define BM_SD_FIFOCTL_DRQF                  0x80
#define BF_SD_FIFOCTL_DRQF(v)               (((v) & 0x1) << 7)
#define BFM_SD_FIFOCTL_DRQF(v)              BM_SD_FIFOCTL_DRQF
#define BF_SD_FIFOCTL_DRQF_V(e)             BF_SD_FIFOCTL_DRQF(BV_SD_FIFOCTL_DRQF__##e)
#define BFM_SD_FIFOCTL_DRQF_V(v)            BM_SD_FIFOCTL_DRQF
#define BP_SD_FIFOCTL_RST                   6
#define BM_SD_FIFOCTL_RST                   0x40
#define BF_SD_FIFOCTL_RST(v)                (((v) & 0x1) << 6)
#define BFM_SD_FIFOCTL_RST(v)               BM_SD_FIFOCTL_RST
#define BF_SD_FIFOCTL_RST_V(e)              BF_SD_FIFOCTL_RST(BV_SD_FIFOCTL_RST__##e)
#define BFM_SD_FIFOCTL_RST_V(v)             BM_SD_FIFOCTL_RST
#define BP_SD_FIFOCTL_THRH                  4
#define BM_SD_FIFOCTL_THRH                  0x30
#define BV_SD_FIFOCTL_THRH__4_16EMPTY       0x0
#define BV_SD_FIFOCTL_THRH__8_16EMPTY       0x1
#define BV_SD_FIFOCTL_THRH__10_16EMPTY      0x2
#define BV_SD_FIFOCTL_THRH__12_16EMPTY      0x3
#define BF_SD_FIFOCTL_THRH(v)               (((v) & 0x3) << 4)
#define BFM_SD_FIFOCTL_THRH(v)              BM_SD_FIFOCTL_THRH
#define BF_SD_FIFOCTL_THRH_V(e)             BF_SD_FIFOCTL_THRH(BV_SD_FIFOCTL_THRH__##e)
#define BFM_SD_FIFOCTL_THRH_V(v)            BM_SD_FIFOCTL_THRH
#define BP_SD_FIFOCTL_FULL                  3
#define BM_SD_FIFOCTL_FULL                  0x8
#define BF_SD_FIFOCTL_FULL(v)               (((v) & 0x1) << 3)
#define BFM_SD_FIFOCTL_FULL(v)              BM_SD_FIFOCTL_FULL
#define BF_SD_FIFOCTL_FULL_V(e)             BF_SD_FIFOCTL_FULL(BV_SD_FIFOCTL_FULL__##e)
#define BFM_SD_FIFOCTL_FULL_V(v)            BM_SD_FIFOCTL_FULL
#define BP_SD_FIFOCTL_IRQP                  2
#define BM_SD_FIFOCTL_IRQP                  0x4
#define BF_SD_FIFOCTL_IRQP(v)               (((v) & 0x1) << 2)
#define BFM_SD_FIFOCTL_IRQP(v)              BM_SD_FIFOCTL_IRQP
#define BF_SD_FIFOCTL_IRQP_V(e)             BF_SD_FIFOCTL_IRQP(BV_SD_FIFOCTL_IRQP__##e)
#define BFM_SD_FIFOCTL_IRQP_V(v)            BM_SD_FIFOCTL_IRQP
#define BP_SD_FIFOCTL_IRQE                  1
#define BM_SD_FIFOCTL_IRQE                  0x2
#define BF_SD_FIFOCTL_IRQE(v)               (((v) & 0x1) << 1)
#define BFM_SD_FIFOCTL_IRQE(v)              BM_SD_FIFOCTL_IRQE
#define BF_SD_FIFOCTL_IRQE_V(e)             BF_SD_FIFOCTL_IRQE(BV_SD_FIFOCTL_IRQE__##e)
#define BFM_SD_FIFOCTL_IRQE_V(v)            BM_SD_FIFOCTL_IRQE
#define BP_SD_FIFOCTL_DRQE                  0
#define BM_SD_FIFOCTL_DRQE                  0x1
#define BF_SD_FIFOCTL_DRQE(v)               (((v) & 0x1) << 0)
#define BFM_SD_FIFOCTL_DRQE(v)              BM_SD_FIFOCTL_DRQE
#define BF_SD_FIFOCTL_DRQE_V(e)             BF_SD_FIFOCTL_DRQE(BV_SD_FIFOCTL_DRQE__##e)
#define BFM_SD_FIFOCTL_DRQE_V(v)            BM_SD_FIFOCTL_DRQE

#define SD_CMD                          (*(volatile uint32_t *)SD_CMD_ADDR)
#define SD_CMD_ADDR                     (0xb00b0000 + 0x10)
#define BP_SD_CMD_RESERVED31_8          8
#define BM_SD_CMD_RESERVED31_8          0xffffff00
#define BF_SD_CMD_RESERVED31_8(v)       (((v) & 0xffffff) << 8)
#define BFM_SD_CMD_RESERVED31_8(v)      BM_SD_CMD_RESERVED31_8
#define BF_SD_CMD_RESERVED31_8_V(e)     BF_SD_CMD_RESERVED31_8(BV_SD_CMD_RESERVED31_8__##e)
#define BFM_SD_CMD_RESERVED31_8_V(v)    BM_SD_CMD_RESERVED31_8
#define BP_SD_CMD_CMD                   0
#define BM_SD_CMD_CMD                   0xff
#define BF_SD_CMD_CMD(v)                (((v) & 0xff) << 0)
#define BFM_SD_CMD_CMD(v)               BM_SD_CMD_CMD
#define BF_SD_CMD_CMD_V(e)              BF_SD_CMD_CMD(BV_SD_CMD_CMD__##e)
#define BFM_SD_CMD_CMD_V(v)             BM_SD_CMD_CMD

#define SD_ARG      (*(volatile uint32_t *)SD_ARG_ADDR)
#define SD_ARG_ADDR (0xb00b0000 + 0x14)

#define SD_CRC7                         (*(volatile uint32_t *)SD_CRC7_ADDR)
#define SD_CRC7_ADDR                    (0xb00b0000 + 0x18)
#define BP_SD_CRC7_RESERVED31_8         8
#define BM_SD_CRC7_RESERVED31_8         0xffffff00
#define BF_SD_CRC7_RESERVED31_8(v)      (((v) & 0xffffff) << 8)
#define BFM_SD_CRC7_RESERVED31_8(v)     BM_SD_CRC7_RESERVED31_8
#define BF_SD_CRC7_RESERVED31_8_V(e)    BF_SD_CRC7_RESERVED31_8(BV_SD_CRC7_RESERVED31_8__##e)
#define BFM_SD_CRC7_RESERVED31_8_V(v)   BM_SD_CRC7_RESERVED31_8
#define BP_SD_CRC7_CRC7                 0
#define BM_SD_CRC7_CRC7                 0xff
#define BF_SD_CRC7_CRC7(v)              (((v) & 0xff) << 0)
#define BFM_SD_CRC7_CRC7(v)             BM_SD_CRC7_CRC7
#define BF_SD_CRC7_CRC7_V(e)            BF_SD_CRC7_CRC7(BV_SD_CRC7_CRC7__##e)
#define BFM_SD_CRC7_CRC7_V(v)           BM_SD_CRC7_CRC7

#define SD_RSPBUF(_n1)      (*(volatile uint32_t *)SD_RSPBUF_ADDR(_n1))
#define SD_RSPBUF_ADDR(_n1) (0xb00b0000 + 0x1c+((_n1)*4))

#define SD_DAT      (*(volatile uint32_t *)SD_DAT_ADDR)
#define SD_DAT_ADDR (0xb00b0000 + 0x30)

#define SD_CLK                          (*(volatile uint32_t *)SD_CLK_ADDR)
#define SD_CLK_ADDR                     (0xb00b0000 + 0x34)
#define BP_SD_CLK_RESERVED31_8          8
#define BM_SD_CLK_RESERVED31_8          0xffffff00
#define BF_SD_CLK_RESERVED31_8(v)       (((v) & 0xffffff) << 8)
#define BFM_SD_CLK_RESERVED31_8(v)      BM_SD_CLK_RESERVED31_8
#define BF_SD_CLK_RESERVED31_8_V(e)     BF_SD_CLK_RESERVED31_8(BV_SD_CLK_RESERVED31_8__##e)
#define BFM_SD_CLK_RESERVED31_8_V(v)    BM_SD_CLK_RESERVED31_8
#define BP_SD_CLK_INITCLKNUM            1
#define BM_SD_CLK_INITCLKNUM            0xfe
#define BF_SD_CLK_INITCLKNUM(v)         (((v) & 0x7f) << 1)
#define BFM_SD_CLK_INITCLKNUM(v)        BM_SD_CLK_INITCLKNUM
#define BF_SD_CLK_INITCLKNUM_V(e)       BF_SD_CLK_INITCLKNUM(BV_SD_CLK_INITCLKNUM__##e)
#define BFM_SD_CLK_INITCLKNUM_V(v)      BM_SD_CLK_INITCLKNUM
#define BP_SD_CLK_SNDC                  0
#define BM_SD_CLK_SNDC                  0x1
#define BV_SD_CLK_SNDC__START           0x1
#define BF_SD_CLK_SNDC(v)               (((v) & 0x1) << 0)
#define BFM_SD_CLK_SNDC(v)              BM_SD_CLK_SNDC
#define BF_SD_CLK_SNDC_V(e)             BF_SD_CLK_SNDC(BV_SD_CLK_SNDC__##e)
#define BFM_SD_CLK_SNDC_V(v)            BM_SD_CLK_SNDC

#define SD_BYTECNT                          (*(volatile uint32_t *)SD_BYTECNT_ADDR)
#define SD_BYTECNT_ADDR                     (0xb00b0000 + 0x38)
#define BP_SD_BYTECNT_RESERVED31_16         16
#define BM_SD_BYTECNT_RESERVED31_16         0xffff0000
#define BF_SD_BYTECNT_RESERVED31_16(v)      (((v) & 0xffff) << 16)
#define BFM_SD_BYTECNT_RESERVED31_16(v)     BM_SD_BYTECNT_RESERVED31_16
#define BF_SD_BYTECNT_RESERVED31_16_V(e)    BF_SD_BYTECNT_RESERVED31_16(BV_SD_BYTECNT_RESERVED31_16__##e)
#define BFM_SD_BYTECNT_RESERVED31_16_V(v)   BM_SD_BYTECNT_RESERVED31_16
#define BP_SD_BYTECNT_BYTECNT               0
#define BM_SD_BYTECNT_BYTECNT               0xffff
#define BF_SD_BYTECNT_BYTECNT(v)            (((v) & 0xffff) << 0)
#define BFM_SD_BYTECNT_BYTECNT(v)           BM_SD_BYTECNT_BYTECNT
#define BF_SD_BYTECNT_BYTECNT_V(e)          BF_SD_BYTECNT_BYTECNT(BV_SD_BYTECNT_BYTECNT__##e)
#define BFM_SD_BYTECNT_BYTECNT_V(v)         BM_SD_BYTECNT_BYTECNT

#endif /* __HEADERGEN_REGS_SD_H__*/
