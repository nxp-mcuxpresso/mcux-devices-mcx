/*
** ###################################################################
**     Processors:          MCXL253VDF_cm0plus
**                          MCXL253VDF_cm33
**                          MCXL253VLL_cm0plus
**                          MCXL253VLL_cm33
**                          MCXL254VDF_cm0plus
**                          MCXL254VDF_cm33
**                          MCXL254VLL_cm0plus
**                          MCXL254VLL_cm33
**                          MCXL255VDF_cm0plus
**                          MCXL255VDF_cm33
**                          MCXL255VLL_cm0plus
**                          MCXL255VLL_cm33
**
**     Version:             rev. 1.0, 2023-01-09
**     Build:               b250320
**
**     Abstract:
**         CMSIS Peripheral Access Layer for MBC
**
**     Copyright 1997-2016 Freescale Semiconductor, Inc.
**     Copyright 2016-2025 NXP
**     SPDX-License-Identifier: BSD-3-Clause
**
**     http:                 www.nxp.com
**     mail:                 support@nxp.com
**
**     Revisions:
**     - rev. 1.0 (2023-01-09)
**         Generated based on Rev1 DraftI.
**
** ###################################################################
*/

/*!
 * @file MBC.h
 * @version 1.0
 * @date 2023-01-09
 * @brief CMSIS Peripheral Access Layer for MBC
 *
 * CMSIS Peripheral Access Layer for MBC
 */

#if !defined(MBC_H_)
#define MBC_H_                                   /**< Symbol preventing repeated inclusion */

#if (defined(CPU_MCXL253VDF_cm0plus) || defined(CPU_MCXL253VLL_cm0plus))
#include "MCXL253_cm0plus_COMMON.h"
#elif (defined(CPU_MCXL253VDF_cm33) || defined(CPU_MCXL253VLL_cm33))
#include "MCXL253_cm33_COMMON.h"
#elif (defined(CPU_MCXL254VDF_cm0plus) || defined(CPU_MCXL254VLL_cm0plus))
#include "MCXL254_cm0plus_COMMON.h"
#elif (defined(CPU_MCXL254VDF_cm33) || defined(CPU_MCXL254VLL_cm33))
#include "MCXL254_cm33_COMMON.h"
#elif (defined(CPU_MCXL255VDF_cm0plus) || defined(CPU_MCXL255VLL_cm0plus))
#include "MCXL255_cm0plus_COMMON.h"
#elif (defined(CPU_MCXL255VDF_cm33) || defined(CPU_MCXL255VLL_cm33))
#include "MCXL255_cm33_COMMON.h"
#else
  #error "No valid CPU defined!"
#endif

/* ----------------------------------------------------------------------------
   -- Device Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup Peripheral_access_layer Device Peripheral Access Layer
 * @{
 */


/*
** Start of section using anonymous unions
*/

#if defined(__ARMCC_VERSION)
  #if (__ARMCC_VERSION >= 6010050)
    #pragma clang diagnostic push
  #else
    #pragma push
    #pragma anon_unions
  #endif
#elif defined(__GNUC__)
  /* anonymous unions are enabled by default */
#elif defined(__IAR_SYSTEMS_ICC__)
  #pragma language=extended
#else
  #error Not supported compiler type
#endif

/* ----------------------------------------------------------------------------
   -- MBC Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup MBC_Peripheral_Access_Layer MBC Peripheral Access Layer
 * @{
 */

/** MBC - Size of Registers Arrays */
#define MBC_MBC_MEM_GLBCFG0_COUNT                 4u
#define MBC_MBC_MEMN_GLBAC0_COUNT                 8u
#define MBC_MBC_DOM0_COUNT                        1u

/** MBC - Register Layout Typedef */
typedef struct {
  __IO uint32_t MBC0_MEM_GLBCFG[MBC_MBC_MEM_GLBCFG0_COUNT]; /**< MBC Global Configuration Register, array offset: 0x0, array step: 0x4 */
       uint8_t RESERVED_0[16];
  __IO uint32_t MBC0_MEMN_GLBAC[MBC_MBC_MEMN_GLBAC0_COUNT]; /**< MBC Global Access Control, array offset: 0x20, array step: 0x4 */
  struct {                                         /* offset: 0x40, array step: 0x16C */
    __IO uint32_t MBC0_DOM_MEM0_BLK_CFG_W0;          /**< MBC Memory Block Configuration Word, array offset: 0x40, array step: 0x16C */
    __IO uint32_t MBC0_DOM_MEM0_BLK_CFG_W1;          /**< MBC Memory Block Configuration Word, array offset: 0x44, array step: 0x16C */
    __IO uint32_t MBC0_DOM_MEM0_BLK_CFG_W2;          /**< MBC Memory Block Configuration Word, array offset: 0x48, array step: 0x16C */
    __IO uint32_t MBC0_DOM_MEM0_BLK_CFG_W3;          /**< MBC Memory Block Configuration Word, array offset: 0x4C, array step: 0x16C */
    __IO uint32_t MBC0_DOM_MEM0_BLK_CFG_W4;          /**< MBC Memory Block Configuration Word, array offset: 0x50, array step: 0x16C */
    __IO uint32_t MBC0_DOM_MEM0_BLK_CFG_W5;          /**< MBC Memory Block Configuration Word, array offset: 0x54, array step: 0x16C */
    __IO uint32_t MBC0_DOM_MEM0_BLK_CFG_W6;          /**< MBC Memory Block Configuration Word, array offset: 0x58, array step: 0x16C */
    __IO uint32_t MBC0_DOM_MEM0_BLK_CFG_W7;          /**< MBC Memory Block Configuration Word, array offset: 0x5C, array step: 0x16C */
         uint8_t RESERVED_0[288];
    __IO uint32_t MBC0_DOM_MEM1_BLK_CFG_W0;          /**< MBC Memory Block Configuration Word, array offset: 0x180, array step: 0x16C */
    __IO uint32_t MBC0_DOM_MEM1_BLK_CFG_W1;          /**< MBC Memory Block Configuration Word, array offset: 0x184, array step: 0x16C */
         uint8_t RESERVED_1[32];
    __IO uint32_t MBC0_DOM_MEM2_BLK_CFG_W0;          /**< MBC Memory Block Configuration Word, array offset: 0x1A8, array step: 0x16C */
  } MBC_DOM0[MBC_MBC_DOM0_COUNT];
} MBC_Type;

/* ----------------------------------------------------------------------------
   -- MBC Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup MBC_Register_Masks MBC Register Masks
 * @{
 */

/*! @name MBC0_MEM_GLBCFG - MBC Global Configuration Register */
/*! @{ */

#define MBC_MBC0_MEM_GLBCFG_NBLKS_MASK           (0x3FFU)
#define MBC_MBC0_MEM_GLBCFG_NBLKS_SHIFT          (0U)
/*! NBLKS - Number of blocks in this memory */
#define MBC_MBC0_MEM_GLBCFG_NBLKS(x)             (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_MEM_GLBCFG_NBLKS_SHIFT)) & MBC_MBC0_MEM_GLBCFG_NBLKS_MASK)

#define MBC_MBC0_MEM_GLBCFG_SIZE_LOG2_MASK       (0x1F0000U)
#define MBC_MBC0_MEM_GLBCFG_SIZE_LOG2_SHIFT      (16U)
/*! SIZE_LOG2 - Log2 size per block */
#define MBC_MBC0_MEM_GLBCFG_SIZE_LOG2(x)         (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_MEM_GLBCFG_SIZE_LOG2_SHIFT)) & MBC_MBC0_MEM_GLBCFG_SIZE_LOG2_MASK)

#define MBC_MBC0_MEM_GLBCFG_CLRE_MASK            (0xC0000000U)
#define MBC_MBC0_MEM_GLBCFG_CLRE_SHIFT           (30U)
/*! CLRE - Clear Error */
#define MBC_MBC0_MEM_GLBCFG_CLRE(x)              (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_MEM_GLBCFG_CLRE_SHIFT)) & MBC_MBC0_MEM_GLBCFG_CLRE_MASK)
/*! @} */

/* The count of MBC_MBC0_MEM_GLBCFG */
#define MBC_MBC0_MEM_GLBCFG_COUNT                (4U)

/*! @name MBC0_MEMN_GLBAC - MBC Global Access Control */
/*! @{ */

#define MBC_MBC0_MEMN_GLBAC_NUX_MASK             (0x1U)
#define MBC_MBC0_MEMN_GLBAC_NUX_SHIFT            (0U)
/*! NUX - NonsecureUser Execute
 *  0b0..Execute access is not allowed in Nonsecure User mode.
 *  0b1..Execute access is allowed in Nonsecure User mode.
 */
#define MBC_MBC0_MEMN_GLBAC_NUX(x)               (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_MEMN_GLBAC_NUX_SHIFT)) & MBC_MBC0_MEMN_GLBAC_NUX_MASK)

#define MBC_MBC0_MEMN_GLBAC_NUW_MASK             (0x2U)
#define MBC_MBC0_MEMN_GLBAC_NUW_SHIFT            (1U)
/*! NUW - NonsecureUser Write
 *  0b0..Write access is not allowed in Nonsecure User mode.
 *  0b1..Write access is allowed in Nonsecure User mode.
 */
#define MBC_MBC0_MEMN_GLBAC_NUW(x)               (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_MEMN_GLBAC_NUW_SHIFT)) & MBC_MBC0_MEMN_GLBAC_NUW_MASK)

#define MBC_MBC0_MEMN_GLBAC_NUR_MASK             (0x4U)
#define MBC_MBC0_MEMN_GLBAC_NUR_SHIFT            (2U)
/*! NUR - NonsecureUser Read
 *  0b0..Read access is not allowed in Nonsecure User mode.
 *  0b1..Read access is allowed in Nonsecure User mode.
 */
#define MBC_MBC0_MEMN_GLBAC_NUR(x)               (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_MEMN_GLBAC_NUR_SHIFT)) & MBC_MBC0_MEMN_GLBAC_NUR_MASK)

#define MBC_MBC0_MEMN_GLBAC_NPX_MASK             (0x10U)
#define MBC_MBC0_MEMN_GLBAC_NPX_SHIFT            (4U)
/*! NPX - NonsecurePriv Execute
 *  0b0..Execute access is not allowed in Nonsecure Privilege mode.
 *  0b1..Execute access is allowed in Nonsecure Privilege mode.
 */
#define MBC_MBC0_MEMN_GLBAC_NPX(x)               (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_MEMN_GLBAC_NPX_SHIFT)) & MBC_MBC0_MEMN_GLBAC_NPX_MASK)

#define MBC_MBC0_MEMN_GLBAC_NPW_MASK             (0x20U)
#define MBC_MBC0_MEMN_GLBAC_NPW_SHIFT            (5U)
/*! NPW - NonsecurePriv Write
 *  0b0..Write access is not allowed in Nonsecure Privilege mode.
 *  0b1..Write access is allowed in Nonsecure Privilege mode.
 */
#define MBC_MBC0_MEMN_GLBAC_NPW(x)               (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_MEMN_GLBAC_NPW_SHIFT)) & MBC_MBC0_MEMN_GLBAC_NPW_MASK)

#define MBC_MBC0_MEMN_GLBAC_NPR_MASK             (0x40U)
#define MBC_MBC0_MEMN_GLBAC_NPR_SHIFT            (6U)
/*! NPR - NonsecurePriv Read
 *  0b0..Read access is not allowed in Nonsecure Privilege mode.
 *  0b1..Read access is allowed in Nonsecure Privilege mode.
 */
#define MBC_MBC0_MEMN_GLBAC_NPR(x)               (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_MEMN_GLBAC_NPR_SHIFT)) & MBC_MBC0_MEMN_GLBAC_NPR_MASK)

#define MBC_MBC0_MEMN_GLBAC_SUX_MASK             (0x100U)
#define MBC_MBC0_MEMN_GLBAC_SUX_SHIFT            (8U)
/*! SUX - SecureUser Execute
 *  0b0..Execute access is not allowed in Secure User mode.
 *  0b1..Execute access is allowed in Secure User mode.
 */
#define MBC_MBC0_MEMN_GLBAC_SUX(x)               (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_MEMN_GLBAC_SUX_SHIFT)) & MBC_MBC0_MEMN_GLBAC_SUX_MASK)

#define MBC_MBC0_MEMN_GLBAC_SUW_MASK             (0x200U)
#define MBC_MBC0_MEMN_GLBAC_SUW_SHIFT            (9U)
/*! SUW - SecureUser Write
 *  0b0..Write access is not allowed in Secure User mode.
 *  0b1..Write access is allowed in Secure User mode.
 */
#define MBC_MBC0_MEMN_GLBAC_SUW(x)               (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_MEMN_GLBAC_SUW_SHIFT)) & MBC_MBC0_MEMN_GLBAC_SUW_MASK)

#define MBC_MBC0_MEMN_GLBAC_SUR_MASK             (0x400U)
#define MBC_MBC0_MEMN_GLBAC_SUR_SHIFT            (10U)
/*! SUR - SecureUser Read
 *  0b0..Read access is not allowed in Secure User mode.
 *  0b1..Read access is allowed in Secure User mode.
 */
#define MBC_MBC0_MEMN_GLBAC_SUR(x)               (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_MEMN_GLBAC_SUR_SHIFT)) & MBC_MBC0_MEMN_GLBAC_SUR_MASK)

#define MBC_MBC0_MEMN_GLBAC_SPX_MASK             (0x1000U)
#define MBC_MBC0_MEMN_GLBAC_SPX_SHIFT            (12U)
/*! SPX - SecurePriv Execute
 *  0b0..Execute access is not allowed in Secure Privilege mode.
 *  0b1..Execute access is allowed in Secure Privilege mode.
 */
#define MBC_MBC0_MEMN_GLBAC_SPX(x)               (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_MEMN_GLBAC_SPX_SHIFT)) & MBC_MBC0_MEMN_GLBAC_SPX_MASK)

#define MBC_MBC0_MEMN_GLBAC_SPW_MASK             (0x2000U)
#define MBC_MBC0_MEMN_GLBAC_SPW_SHIFT            (13U)
/*! SPW - SecurePriv Write
 *  0b0..Write access is not allowed in Secure Privilege mode.
 *  0b1..Write access is allowed in Secure Privilege mode.
 */
#define MBC_MBC0_MEMN_GLBAC_SPW(x)               (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_MEMN_GLBAC_SPW_SHIFT)) & MBC_MBC0_MEMN_GLBAC_SPW_MASK)

#define MBC_MBC0_MEMN_GLBAC_SPR_MASK             (0x4000U)
#define MBC_MBC0_MEMN_GLBAC_SPR_SHIFT            (14U)
/*! SPR - SecurePriv Read
 *  0b0..Read access is not allowed in Secure Privilege mode.
 *  0b1..Read access is allowed in Secure Privilege mode.
 */
#define MBC_MBC0_MEMN_GLBAC_SPR(x)               (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_MEMN_GLBAC_SPR_SHIFT)) & MBC_MBC0_MEMN_GLBAC_SPR_MASK)

#define MBC_MBC0_MEMN_GLBAC_LK_MASK              (0x80000000U)
#define MBC_MBC0_MEMN_GLBAC_LK_SHIFT             (31U)
/*! LK - LOCK
 *  0b0..This register is not locked and can be altered.
 *  0b1..This register is locked and cannot be altered.
 */
#define MBC_MBC0_MEMN_GLBAC_LK(x)                (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_MEMN_GLBAC_LK_SHIFT)) & MBC_MBC0_MEMN_GLBAC_LK_MASK)
/*! @} */

/* The count of MBC_MBC0_MEMN_GLBAC */
#define MBC_MBC0_MEMN_GLBAC_COUNT                (8U)

/*! @name MBC0_DOM_MEM0_BLK_CFG_W0 - MBC Memory Block Configuration Word */
/*! @{ */

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W0_MBACSEL0_MASK (0x7U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W0_MBACSEL0_SHIFT (0U)
/*! MBACSEL0 - Memory Block Access Control Select for block B
 *  0b000..select MBC_MEMN_GLBAC0 access control policy for block B
 *  0b001..select MBC_MEMN_GLBAC1 access control policy for block B
 *  0b010..select MBC_MEMN_GLBAC2 access control policy for block B
 *  0b011..select MBC_MEMN_GLBAC3 access control policy for block B
 *  0b100..select MBC_MEMN_GLBAC4 access control policy for block B
 *  0b101..select MBC_MEMN_GLBAC5 access control policy for block B
 *  0b110..select MBC_MEMN_GLBAC6 access control policy for block B
 *  0b111..select MBC_MEMN_GLBAC7 access control policy for block B
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W0_MBACSEL0(x) (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W0_MBACSEL0_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W0_MBACSEL0_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W0_NSE0_MASK   (0x8U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W0_NSE0_SHIFT  (3U)
/*! NSE0 - NonSecure Enable for block B
 *  0b0..Secure accesses to block B are based on corresponding MBACSEL field in this register
 *       (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]), nonsecure accesses to block B are not allowed.
 *  0b1..Secure accesses to block B are not allowed, nonsecure accesses to block B are based on corresponding
 *       MBACSEL field in this register (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]).
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W0_NSE0(x)     (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W0_NSE0_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W0_NSE0_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W0_MBACSEL1_MASK (0x70U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W0_MBACSEL1_SHIFT (4U)
/*! MBACSEL1 - Memory Block Access Control Select for block B
 *  0b000..select MBC_MEMN_GLBAC0 access control policy for block B
 *  0b001..select MBC_MEMN_GLBAC1 access control policy for block B
 *  0b010..select MBC_MEMN_GLBAC2 access control policy for block B
 *  0b011..select MBC_MEMN_GLBAC3 access control policy for block B
 *  0b100..select MBC_MEMN_GLBAC4 access control policy for block B
 *  0b101..select MBC_MEMN_GLBAC5 access control policy for block B
 *  0b110..select MBC_MEMN_GLBAC6 access control policy for block B
 *  0b111..select MBC_MEMN_GLBAC7 access control policy for block B
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W0_MBACSEL1(x) (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W0_MBACSEL1_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W0_MBACSEL1_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W0_NSE1_MASK   (0x80U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W0_NSE1_SHIFT  (7U)
/*! NSE1 - NonSecure Enable for block B
 *  0b0..Secure accesses to block B are based on corresponding MBACSEL field in this register
 *       (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]), nonsecure accesses to block B are not allowed.
 *  0b1..Secure accesses to block B are not allowed, nonsecure accesses to block B are based on corresponding
 *       MBACSEL field in this register (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]).
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W0_NSE1(x)     (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W0_NSE1_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W0_NSE1_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W0_MBACSEL2_MASK (0x700U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W0_MBACSEL2_SHIFT (8U)
/*! MBACSEL2 - Memory Block Access Control Select for block B
 *  0b000..select MBC_MEMN_GLBAC0 access control policy for block B
 *  0b001..select MBC_MEMN_GLBAC1 access control policy for block B
 *  0b010..select MBC_MEMN_GLBAC2 access control policy for block B
 *  0b011..select MBC_MEMN_GLBAC3 access control policy for block B
 *  0b100..select MBC_MEMN_GLBAC4 access control policy for block B
 *  0b101..select MBC_MEMN_GLBAC5 access control policy for block B
 *  0b110..select MBC_MEMN_GLBAC6 access control policy for block B
 *  0b111..select MBC_MEMN_GLBAC7 access control policy for block B
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W0_MBACSEL2(x) (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W0_MBACSEL2_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W0_MBACSEL2_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W0_NSE2_MASK   (0x800U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W0_NSE2_SHIFT  (11U)
/*! NSE2 - NonSecure Enable for block B
 *  0b0..Secure accesses to block B are based on corresponding MBACSEL field in this register
 *       (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]), nonsecure accesses to block B are not allowed.
 *  0b1..Secure accesses to block B are not allowed, nonsecure accesses to block B are based on corresponding
 *       MBACSEL field in this register (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]).
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W0_NSE2(x)     (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W0_NSE2_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W0_NSE2_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W0_MBACSEL3_MASK (0x7000U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W0_MBACSEL3_SHIFT (12U)
/*! MBACSEL3 - Memory Block Access Control Select for block B
 *  0b000..select MBC_MEMN_GLBAC0 access control policy for block B
 *  0b001..select MBC_MEMN_GLBAC1 access control policy for block B
 *  0b010..select MBC_MEMN_GLBAC2 access control policy for block B
 *  0b011..select MBC_MEMN_GLBAC3 access control policy for block B
 *  0b100..select MBC_MEMN_GLBAC4 access control policy for block B
 *  0b101..select MBC_MEMN_GLBAC5 access control policy for block B
 *  0b110..select MBC_MEMN_GLBAC6 access control policy for block B
 *  0b111..select MBC_MEMN_GLBAC7 access control policy for block B
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W0_MBACSEL3(x) (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W0_MBACSEL3_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W0_MBACSEL3_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W0_NSE3_MASK   (0x8000U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W0_NSE3_SHIFT  (15U)
/*! NSE3 - NonSecure Enable for block B
 *  0b0..Secure accesses to block B are based on corresponding MBACSEL field in this register
 *       (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]), nonsecure accesses to block B are not allowed.
 *  0b1..Secure accesses to block B are not allowed, nonsecure accesses to block B are based on corresponding
 *       MBACSEL field in this register (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]).
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W0_NSE3(x)     (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W0_NSE3_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W0_NSE3_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W0_MBACSEL4_MASK (0x70000U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W0_MBACSEL4_SHIFT (16U)
/*! MBACSEL4 - Memory Block Access Control Select for block B
 *  0b000..select MBC_MEMN_GLBAC0 access control policy for block B
 *  0b001..select MBC_MEMN_GLBAC1 access control policy for block B
 *  0b010..select MBC_MEMN_GLBAC2 access control policy for block B
 *  0b011..select MBC_MEMN_GLBAC3 access control policy for block B
 *  0b100..select MBC_MEMN_GLBAC4 access control policy for block B
 *  0b101..select MBC_MEMN_GLBAC5 access control policy for block B
 *  0b110..select MBC_MEMN_GLBAC6 access control policy for block B
 *  0b111..select MBC_MEMN_GLBAC7 access control policy for block B
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W0_MBACSEL4(x) (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W0_MBACSEL4_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W0_MBACSEL4_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W0_NSE4_MASK   (0x80000U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W0_NSE4_SHIFT  (19U)
/*! NSE4 - NonSecure Enable for block B
 *  0b0..Secure accesses to block B are based on corresponding MBACSEL field in this register
 *       (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]), nonsecure accesses to block B are not allowed.
 *  0b1..Secure accesses to block B are not allowed, nonsecure accesses to block B are based on corresponding
 *       MBACSEL field in this register (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]).
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W0_NSE4(x)     (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W0_NSE4_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W0_NSE4_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W0_MBACSEL5_MASK (0x700000U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W0_MBACSEL5_SHIFT (20U)
/*! MBACSEL5 - Memory Block Access Control Select for block B
 *  0b000..select MBC_MEMN_GLBAC0 access control policy for block B
 *  0b001..select MBC_MEMN_GLBAC1 access control policy for block B
 *  0b010..select MBC_MEMN_GLBAC2 access control policy for block B
 *  0b011..select MBC_MEMN_GLBAC3 access control policy for block B
 *  0b100..select MBC_MEMN_GLBAC4 access control policy for block B
 *  0b101..select MBC_MEMN_GLBAC5 access control policy for block B
 *  0b110..select MBC_MEMN_GLBAC6 access control policy for block B
 *  0b111..select MBC_MEMN_GLBAC7 access control policy for block B
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W0_MBACSEL5(x) (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W0_MBACSEL5_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W0_MBACSEL5_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W0_NSE5_MASK   (0x800000U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W0_NSE5_SHIFT  (23U)
/*! NSE5 - NonSecure Enable for block B
 *  0b0..Secure accesses to block B are based on corresponding MBACSEL field in this register
 *       (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]), nonsecure accesses to block B are not allowed.
 *  0b1..Secure accesses to block B are not allowed, nonsecure accesses to block B are based on corresponding
 *       MBACSEL field in this register (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]).
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W0_NSE5(x)     (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W0_NSE5_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W0_NSE5_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W0_MBACSEL6_MASK (0x7000000U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W0_MBACSEL6_SHIFT (24U)
/*! MBACSEL6 - Memory Block Access Control Select for block B
 *  0b000..select MBC_MEMN_GLBAC0 access control policy for block B
 *  0b001..select MBC_MEMN_GLBAC1 access control policy for block B
 *  0b010..select MBC_MEMN_GLBAC2 access control policy for block B
 *  0b011..select MBC_MEMN_GLBAC3 access control policy for block B
 *  0b100..select MBC_MEMN_GLBAC4 access control policy for block B
 *  0b101..select MBC_MEMN_GLBAC5 access control policy for block B
 *  0b110..select MBC_MEMN_GLBAC6 access control policy for block B
 *  0b111..select MBC_MEMN_GLBAC7 access control policy for block B
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W0_MBACSEL6(x) (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W0_MBACSEL6_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W0_MBACSEL6_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W0_NSE6_MASK   (0x8000000U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W0_NSE6_SHIFT  (27U)
/*! NSE6 - NonSecure Enable for block B
 *  0b0..Secure accesses to block B are based on corresponding MBACSEL field in this register
 *       (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]), nonsecure accesses to block B are not allowed.
 *  0b1..Secure accesses to block B are not allowed, nonsecure accesses to block B are based on corresponding
 *       MBACSEL field in this register (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]).
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W0_NSE6(x)     (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W0_NSE6_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W0_NSE6_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W0_MBACSEL7_MASK (0x70000000U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W0_MBACSEL7_SHIFT (28U)
/*! MBACSEL7 - Memory Block Access Control Select for block B
 *  0b000..select MBC_MEMN_GLBAC0 access control policy for block B
 *  0b001..select MBC_MEMN_GLBAC1 access control policy for block B
 *  0b010..select MBC_MEMN_GLBAC2 access control policy for block B
 *  0b011..select MBC_MEMN_GLBAC3 access control policy for block B
 *  0b100..select MBC_MEMN_GLBAC4 access control policy for block B
 *  0b101..select MBC_MEMN_GLBAC5 access control policy for block B
 *  0b110..select MBC_MEMN_GLBAC6 access control policy for block B
 *  0b111..select MBC_MEMN_GLBAC7 access control policy for block B
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W0_MBACSEL7(x) (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W0_MBACSEL7_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W0_MBACSEL7_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W0_NSE7_MASK   (0x80000000U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W0_NSE7_SHIFT  (31U)
/*! NSE7 - NonSecure Enable for block B
 *  0b0..Secure accesses to block B are based on corresponding MBACSEL field in this register
 *       (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]), nonsecure accesses to block B are not allowed.
 *  0b1..Secure accesses to block B are not allowed, nonsecure accesses to block B are based on corresponding
 *       MBACSEL field in this register (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]).
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W0_NSE7(x)     (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W0_NSE7_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W0_NSE7_MASK)
/*! @} */

/* The count of MBC_MBC0_DOM_MEM0_BLK_CFG_W0 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W0_COUNT       (1U)

/*! @name MBC0_DOM_MEM0_BLK_CFG_W1 - MBC Memory Block Configuration Word */
/*! @{ */

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W1_MBACSEL0_MASK (0x7U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W1_MBACSEL0_SHIFT (0U)
/*! MBACSEL0 - Memory Block Access Control Select for block B
 *  0b000..select MBC_MEMN_GLBAC0 access control policy for block B
 *  0b001..select MBC_MEMN_GLBAC1 access control policy for block B
 *  0b010..select MBC_MEMN_GLBAC2 access control policy for block B
 *  0b011..select MBC_MEMN_GLBAC3 access control policy for block B
 *  0b100..select MBC_MEMN_GLBAC4 access control policy for block B
 *  0b101..select MBC_MEMN_GLBAC5 access control policy for block B
 *  0b110..select MBC_MEMN_GLBAC6 access control policy for block B
 *  0b111..select MBC_MEMN_GLBAC7 access control policy for block B
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W1_MBACSEL0(x) (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W1_MBACSEL0_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W1_MBACSEL0_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W1_NSE0_MASK   (0x8U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W1_NSE0_SHIFT  (3U)
/*! NSE0 - NonSecure Enable for block B
 *  0b0..Secure accesses to block B are based on corresponding MBACSEL field in this register
 *       (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]), nonsecure accesses to block B are not allowed.
 *  0b1..Secure accesses to block B are not allowed, nonsecure accesses to block B are based on corresponding
 *       MBACSEL field in this register (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]).
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W1_NSE0(x)     (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W1_NSE0_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W1_NSE0_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W1_MBACSEL1_MASK (0x70U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W1_MBACSEL1_SHIFT (4U)
/*! MBACSEL1 - Memory Block Access Control Select for block B
 *  0b000..select MBC_MEMN_GLBAC0 access control policy for block B
 *  0b001..select MBC_MEMN_GLBAC1 access control policy for block B
 *  0b010..select MBC_MEMN_GLBAC2 access control policy for block B
 *  0b011..select MBC_MEMN_GLBAC3 access control policy for block B
 *  0b100..select MBC_MEMN_GLBAC4 access control policy for block B
 *  0b101..select MBC_MEMN_GLBAC5 access control policy for block B
 *  0b110..select MBC_MEMN_GLBAC6 access control policy for block B
 *  0b111..select MBC_MEMN_GLBAC7 access control policy for block B
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W1_MBACSEL1(x) (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W1_MBACSEL1_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W1_MBACSEL1_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W1_NSE1_MASK   (0x80U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W1_NSE1_SHIFT  (7U)
/*! NSE1 - NonSecure Enable for block B
 *  0b0..Secure accesses to block B are based on corresponding MBACSEL field in this register
 *       (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]), nonsecure accesses to block B are not allowed.
 *  0b1..Secure accesses to block B are not allowed, nonsecure accesses to block B are based on corresponding
 *       MBACSEL field in this register (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]).
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W1_NSE1(x)     (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W1_NSE1_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W1_NSE1_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W1_MBACSEL2_MASK (0x700U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W1_MBACSEL2_SHIFT (8U)
/*! MBACSEL2 - Memory Block Access Control Select for block B
 *  0b000..select MBC_MEMN_GLBAC0 access control policy for block B
 *  0b001..select MBC_MEMN_GLBAC1 access control policy for block B
 *  0b010..select MBC_MEMN_GLBAC2 access control policy for block B
 *  0b011..select MBC_MEMN_GLBAC3 access control policy for block B
 *  0b100..select MBC_MEMN_GLBAC4 access control policy for block B
 *  0b101..select MBC_MEMN_GLBAC5 access control policy for block B
 *  0b110..select MBC_MEMN_GLBAC6 access control policy for block B
 *  0b111..select MBC_MEMN_GLBAC7 access control policy for block B
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W1_MBACSEL2(x) (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W1_MBACSEL2_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W1_MBACSEL2_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W1_NSE2_MASK   (0x800U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W1_NSE2_SHIFT  (11U)
/*! NSE2 - NonSecure Enable for block B
 *  0b0..Secure accesses to block B are based on corresponding MBACSEL field in this register
 *       (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]), nonsecure accesses to block B are not allowed.
 *  0b1..Secure accesses to block B are not allowed, nonsecure accesses to block B are based on corresponding
 *       MBACSEL field in this register (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]).
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W1_NSE2(x)     (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W1_NSE2_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W1_NSE2_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W1_MBACSEL3_MASK (0x7000U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W1_MBACSEL3_SHIFT (12U)
/*! MBACSEL3 - Memory Block Access Control Select for block B
 *  0b000..select MBC_MEMN_GLBAC0 access control policy for block B
 *  0b001..select MBC_MEMN_GLBAC1 access control policy for block B
 *  0b010..select MBC_MEMN_GLBAC2 access control policy for block B
 *  0b011..select MBC_MEMN_GLBAC3 access control policy for block B
 *  0b100..select MBC_MEMN_GLBAC4 access control policy for block B
 *  0b101..select MBC_MEMN_GLBAC5 access control policy for block B
 *  0b110..select MBC_MEMN_GLBAC6 access control policy for block B
 *  0b111..select MBC_MEMN_GLBAC7 access control policy for block B
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W1_MBACSEL3(x) (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W1_MBACSEL3_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W1_MBACSEL3_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W1_NSE3_MASK   (0x8000U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W1_NSE3_SHIFT  (15U)
/*! NSE3 - NonSecure Enable for block B
 *  0b0..Secure accesses to block B are based on corresponding MBACSEL field in this register
 *       (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]), nonsecure accesses to block B are not allowed.
 *  0b1..Secure accesses to block B are not allowed, nonsecure accesses to block B are based on corresponding
 *       MBACSEL field in this register (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]).
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W1_NSE3(x)     (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W1_NSE3_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W1_NSE3_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W1_MBACSEL4_MASK (0x70000U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W1_MBACSEL4_SHIFT (16U)
/*! MBACSEL4 - Memory Block Access Control Select for block B
 *  0b000..select MBC_MEMN_GLBAC0 access control policy for block B
 *  0b001..select MBC_MEMN_GLBAC1 access control policy for block B
 *  0b010..select MBC_MEMN_GLBAC2 access control policy for block B
 *  0b011..select MBC_MEMN_GLBAC3 access control policy for block B
 *  0b100..select MBC_MEMN_GLBAC4 access control policy for block B
 *  0b101..select MBC_MEMN_GLBAC5 access control policy for block B
 *  0b110..select MBC_MEMN_GLBAC6 access control policy for block B
 *  0b111..select MBC_MEMN_GLBAC7 access control policy for block B
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W1_MBACSEL4(x) (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W1_MBACSEL4_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W1_MBACSEL4_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W1_NSE4_MASK   (0x80000U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W1_NSE4_SHIFT  (19U)
/*! NSE4 - NonSecure Enable for block B
 *  0b0..Secure accesses to block B are based on corresponding MBACSEL field in this register
 *       (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]), nonsecure accesses to block B are not allowed.
 *  0b1..Secure accesses to block B are not allowed, nonsecure accesses to block B are based on corresponding
 *       MBACSEL field in this register (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]).
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W1_NSE4(x)     (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W1_NSE4_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W1_NSE4_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W1_MBACSEL5_MASK (0x700000U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W1_MBACSEL5_SHIFT (20U)
/*! MBACSEL5 - Memory Block Access Control Select for block B
 *  0b000..select MBC_MEMN_GLBAC0 access control policy for block B
 *  0b001..select MBC_MEMN_GLBAC1 access control policy for block B
 *  0b010..select MBC_MEMN_GLBAC2 access control policy for block B
 *  0b011..select MBC_MEMN_GLBAC3 access control policy for block B
 *  0b100..select MBC_MEMN_GLBAC4 access control policy for block B
 *  0b101..select MBC_MEMN_GLBAC5 access control policy for block B
 *  0b110..select MBC_MEMN_GLBAC6 access control policy for block B
 *  0b111..select MBC_MEMN_GLBAC7 access control policy for block B
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W1_MBACSEL5(x) (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W1_MBACSEL5_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W1_MBACSEL5_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W1_NSE5_MASK   (0x800000U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W1_NSE5_SHIFT  (23U)
/*! NSE5 - NonSecure Enable for block B
 *  0b0..Secure accesses to block B are based on corresponding MBACSEL field in this register
 *       (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]), nonsecure accesses to block B are not allowed.
 *  0b1..Secure accesses to block B are not allowed, nonsecure accesses to block B are based on corresponding
 *       MBACSEL field in this register (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]).
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W1_NSE5(x)     (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W1_NSE5_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W1_NSE5_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W1_MBACSEL6_MASK (0x7000000U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W1_MBACSEL6_SHIFT (24U)
/*! MBACSEL6 - Memory Block Access Control Select for block B
 *  0b000..select MBC_MEMN_GLBAC0 access control policy for block B
 *  0b001..select MBC_MEMN_GLBAC1 access control policy for block B
 *  0b010..select MBC_MEMN_GLBAC2 access control policy for block B
 *  0b011..select MBC_MEMN_GLBAC3 access control policy for block B
 *  0b100..select MBC_MEMN_GLBAC4 access control policy for block B
 *  0b101..select MBC_MEMN_GLBAC5 access control policy for block B
 *  0b110..select MBC_MEMN_GLBAC6 access control policy for block B
 *  0b111..select MBC_MEMN_GLBAC7 access control policy for block B
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W1_MBACSEL6(x) (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W1_MBACSEL6_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W1_MBACSEL6_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W1_NSE6_MASK   (0x8000000U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W1_NSE6_SHIFT  (27U)
/*! NSE6 - NonSecure Enable for block B
 *  0b0..Secure accesses to block B are based on corresponding MBACSEL field in this register
 *       (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]), nonsecure accesses to block B are not allowed.
 *  0b1..Secure accesses to block B are not allowed, nonsecure accesses to block B are based on corresponding
 *       MBACSEL field in this register (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]).
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W1_NSE6(x)     (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W1_NSE6_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W1_NSE6_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W1_MBACSEL7_MASK (0x70000000U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W1_MBACSEL7_SHIFT (28U)
/*! MBACSEL7 - Memory Block Access Control Select for block B
 *  0b000..select MBC_MEMN_GLBAC0 access control policy for block B
 *  0b001..select MBC_MEMN_GLBAC1 access control policy for block B
 *  0b010..select MBC_MEMN_GLBAC2 access control policy for block B
 *  0b011..select MBC_MEMN_GLBAC3 access control policy for block B
 *  0b100..select MBC_MEMN_GLBAC4 access control policy for block B
 *  0b101..select MBC_MEMN_GLBAC5 access control policy for block B
 *  0b110..select MBC_MEMN_GLBAC6 access control policy for block B
 *  0b111..select MBC_MEMN_GLBAC7 access control policy for block B
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W1_MBACSEL7(x) (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W1_MBACSEL7_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W1_MBACSEL7_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W1_NSE7_MASK   (0x80000000U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W1_NSE7_SHIFT  (31U)
/*! NSE7 - NonSecure Enable for block B
 *  0b0..Secure accesses to block B are based on corresponding MBACSEL field in this register
 *       (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]), nonsecure accesses to block B are not allowed.
 *  0b1..Secure accesses to block B are not allowed, nonsecure accesses to block B are based on corresponding
 *       MBACSEL field in this register (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]).
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W1_NSE7(x)     (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W1_NSE7_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W1_NSE7_MASK)
/*! @} */

/* The count of MBC_MBC0_DOM_MEM0_BLK_CFG_W1 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W1_COUNT       (1U)

/*! @name MBC0_DOM_MEM0_BLK_CFG_W2 - MBC Memory Block Configuration Word */
/*! @{ */

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W2_MBACSEL0_MASK (0x7U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W2_MBACSEL0_SHIFT (0U)
/*! MBACSEL0 - Memory Block Access Control Select for block B
 *  0b000..select MBC_MEMN_GLBAC0 access control policy for block B
 *  0b001..select MBC_MEMN_GLBAC1 access control policy for block B
 *  0b010..select MBC_MEMN_GLBAC2 access control policy for block B
 *  0b011..select MBC_MEMN_GLBAC3 access control policy for block B
 *  0b100..select MBC_MEMN_GLBAC4 access control policy for block B
 *  0b101..select MBC_MEMN_GLBAC5 access control policy for block B
 *  0b110..select MBC_MEMN_GLBAC6 access control policy for block B
 *  0b111..select MBC_MEMN_GLBAC7 access control policy for block B
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W2_MBACSEL0(x) (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W2_MBACSEL0_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W2_MBACSEL0_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W2_NSE0_MASK   (0x8U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W2_NSE0_SHIFT  (3U)
/*! NSE0 - NonSecure Enable for block B
 *  0b0..Secure accesses to block B are based on corresponding MBACSEL field in this register
 *       (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]), nonsecure accesses to block B are not allowed.
 *  0b1..Secure accesses to block B are not allowed, nonsecure accesses to block B are based on corresponding
 *       MBACSEL field in this register (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]).
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W2_NSE0(x)     (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W2_NSE0_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W2_NSE0_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W2_MBACSEL1_MASK (0x70U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W2_MBACSEL1_SHIFT (4U)
/*! MBACSEL1 - Memory Block Access Control Select for block B
 *  0b000..select MBC_MEMN_GLBAC0 access control policy for block B
 *  0b001..select MBC_MEMN_GLBAC1 access control policy for block B
 *  0b010..select MBC_MEMN_GLBAC2 access control policy for block B
 *  0b011..select MBC_MEMN_GLBAC3 access control policy for block B
 *  0b100..select MBC_MEMN_GLBAC4 access control policy for block B
 *  0b101..select MBC_MEMN_GLBAC5 access control policy for block B
 *  0b110..select MBC_MEMN_GLBAC6 access control policy for block B
 *  0b111..select MBC_MEMN_GLBAC7 access control policy for block B
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W2_MBACSEL1(x) (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W2_MBACSEL1_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W2_MBACSEL1_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W2_NSE1_MASK   (0x80U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W2_NSE1_SHIFT  (7U)
/*! NSE1 - NonSecure Enable for block B
 *  0b0..Secure accesses to block B are based on corresponding MBACSEL field in this register
 *       (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]), nonsecure accesses to block B are not allowed.
 *  0b1..Secure accesses to block B are not allowed, nonsecure accesses to block B are based on corresponding
 *       MBACSEL field in this register (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]).
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W2_NSE1(x)     (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W2_NSE1_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W2_NSE1_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W2_MBACSEL2_MASK (0x700U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W2_MBACSEL2_SHIFT (8U)
/*! MBACSEL2 - Memory Block Access Control Select for block B
 *  0b000..select MBC_MEMN_GLBAC0 access control policy for block B
 *  0b001..select MBC_MEMN_GLBAC1 access control policy for block B
 *  0b010..select MBC_MEMN_GLBAC2 access control policy for block B
 *  0b011..select MBC_MEMN_GLBAC3 access control policy for block B
 *  0b100..select MBC_MEMN_GLBAC4 access control policy for block B
 *  0b101..select MBC_MEMN_GLBAC5 access control policy for block B
 *  0b110..select MBC_MEMN_GLBAC6 access control policy for block B
 *  0b111..select MBC_MEMN_GLBAC7 access control policy for block B
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W2_MBACSEL2(x) (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W2_MBACSEL2_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W2_MBACSEL2_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W2_NSE2_MASK   (0x800U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W2_NSE2_SHIFT  (11U)
/*! NSE2 - NonSecure Enable for block B
 *  0b0..Secure accesses to block B are based on corresponding MBACSEL field in this register
 *       (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]), nonsecure accesses to block B are not allowed.
 *  0b1..Secure accesses to block B are not allowed, nonsecure accesses to block B are based on corresponding
 *       MBACSEL field in this register (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]).
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W2_NSE2(x)     (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W2_NSE2_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W2_NSE2_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W2_MBACSEL3_MASK (0x7000U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W2_MBACSEL3_SHIFT (12U)
/*! MBACSEL3 - Memory Block Access Control Select for block B
 *  0b000..select MBC_MEMN_GLBAC0 access control policy for block B
 *  0b001..select MBC_MEMN_GLBAC1 access control policy for block B
 *  0b010..select MBC_MEMN_GLBAC2 access control policy for block B
 *  0b011..select MBC_MEMN_GLBAC3 access control policy for block B
 *  0b100..select MBC_MEMN_GLBAC4 access control policy for block B
 *  0b101..select MBC_MEMN_GLBAC5 access control policy for block B
 *  0b110..select MBC_MEMN_GLBAC6 access control policy for block B
 *  0b111..select MBC_MEMN_GLBAC7 access control policy for block B
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W2_MBACSEL3(x) (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W2_MBACSEL3_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W2_MBACSEL3_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W2_NSE3_MASK   (0x8000U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W2_NSE3_SHIFT  (15U)
/*! NSE3 - NonSecure Enable for block B
 *  0b0..Secure accesses to block B are based on corresponding MBACSEL field in this register
 *       (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]), nonsecure accesses to block B are not allowed.
 *  0b1..Secure accesses to block B are not allowed, nonsecure accesses to block B are based on corresponding
 *       MBACSEL field in this register (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]).
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W2_NSE3(x)     (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W2_NSE3_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W2_NSE3_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W2_MBACSEL4_MASK (0x70000U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W2_MBACSEL4_SHIFT (16U)
/*! MBACSEL4 - Memory Block Access Control Select for block B
 *  0b000..select MBC_MEMN_GLBAC0 access control policy for block B
 *  0b001..select MBC_MEMN_GLBAC1 access control policy for block B
 *  0b010..select MBC_MEMN_GLBAC2 access control policy for block B
 *  0b011..select MBC_MEMN_GLBAC3 access control policy for block B
 *  0b100..select MBC_MEMN_GLBAC4 access control policy for block B
 *  0b101..select MBC_MEMN_GLBAC5 access control policy for block B
 *  0b110..select MBC_MEMN_GLBAC6 access control policy for block B
 *  0b111..select MBC_MEMN_GLBAC7 access control policy for block B
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W2_MBACSEL4(x) (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W2_MBACSEL4_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W2_MBACSEL4_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W2_NSE4_MASK   (0x80000U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W2_NSE4_SHIFT  (19U)
/*! NSE4 - NonSecure Enable for block B
 *  0b0..Secure accesses to block B are based on corresponding MBACSEL field in this register
 *       (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]), nonsecure accesses to block B are not allowed.
 *  0b1..Secure accesses to block B are not allowed, nonsecure accesses to block B are based on corresponding
 *       MBACSEL field in this register (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]).
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W2_NSE4(x)     (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W2_NSE4_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W2_NSE4_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W2_MBACSEL5_MASK (0x700000U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W2_MBACSEL5_SHIFT (20U)
/*! MBACSEL5 - Memory Block Access Control Select for block B
 *  0b000..select MBC_MEMN_GLBAC0 access control policy for block B
 *  0b001..select MBC_MEMN_GLBAC1 access control policy for block B
 *  0b010..select MBC_MEMN_GLBAC2 access control policy for block B
 *  0b011..select MBC_MEMN_GLBAC3 access control policy for block B
 *  0b100..select MBC_MEMN_GLBAC4 access control policy for block B
 *  0b101..select MBC_MEMN_GLBAC5 access control policy for block B
 *  0b110..select MBC_MEMN_GLBAC6 access control policy for block B
 *  0b111..select MBC_MEMN_GLBAC7 access control policy for block B
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W2_MBACSEL5(x) (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W2_MBACSEL5_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W2_MBACSEL5_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W2_NSE5_MASK   (0x800000U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W2_NSE5_SHIFT  (23U)
/*! NSE5 - NonSecure Enable for block B
 *  0b0..Secure accesses to block B are based on corresponding MBACSEL field in this register
 *       (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]), nonsecure accesses to block B are not allowed.
 *  0b1..Secure accesses to block B are not allowed, nonsecure accesses to block B are based on corresponding
 *       MBACSEL field in this register (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]).
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W2_NSE5(x)     (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W2_NSE5_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W2_NSE5_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W2_MBACSEL6_MASK (0x7000000U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W2_MBACSEL6_SHIFT (24U)
/*! MBACSEL6 - Memory Block Access Control Select for block B
 *  0b000..select MBC_MEMN_GLBAC0 access control policy for block B
 *  0b001..select MBC_MEMN_GLBAC1 access control policy for block B
 *  0b010..select MBC_MEMN_GLBAC2 access control policy for block B
 *  0b011..select MBC_MEMN_GLBAC3 access control policy for block B
 *  0b100..select MBC_MEMN_GLBAC4 access control policy for block B
 *  0b101..select MBC_MEMN_GLBAC5 access control policy for block B
 *  0b110..select MBC_MEMN_GLBAC6 access control policy for block B
 *  0b111..select MBC_MEMN_GLBAC7 access control policy for block B
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W2_MBACSEL6(x) (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W2_MBACSEL6_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W2_MBACSEL6_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W2_NSE6_MASK   (0x8000000U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W2_NSE6_SHIFT  (27U)
/*! NSE6 - NonSecure Enable for block B
 *  0b0..Secure accesses to block B are based on corresponding MBACSEL field in this register
 *       (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]), nonsecure accesses to block B are not allowed.
 *  0b1..Secure accesses to block B are not allowed, nonsecure accesses to block B are based on corresponding
 *       MBACSEL field in this register (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]).
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W2_NSE6(x)     (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W2_NSE6_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W2_NSE6_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W2_MBACSEL7_MASK (0x70000000U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W2_MBACSEL7_SHIFT (28U)
/*! MBACSEL7 - Memory Block Access Control Select for block B
 *  0b000..select MBC_MEMN_GLBAC0 access control policy for block B
 *  0b001..select MBC_MEMN_GLBAC1 access control policy for block B
 *  0b010..select MBC_MEMN_GLBAC2 access control policy for block B
 *  0b011..select MBC_MEMN_GLBAC3 access control policy for block B
 *  0b100..select MBC_MEMN_GLBAC4 access control policy for block B
 *  0b101..select MBC_MEMN_GLBAC5 access control policy for block B
 *  0b110..select MBC_MEMN_GLBAC6 access control policy for block B
 *  0b111..select MBC_MEMN_GLBAC7 access control policy for block B
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W2_MBACSEL7(x) (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W2_MBACSEL7_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W2_MBACSEL7_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W2_NSE7_MASK   (0x80000000U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W2_NSE7_SHIFT  (31U)
/*! NSE7 - NonSecure Enable for block B
 *  0b0..Secure accesses to block B are based on corresponding MBACSEL field in this register
 *       (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]), nonsecure accesses to block B are not allowed.
 *  0b1..Secure accesses to block B are not allowed, nonsecure accesses to block B are based on corresponding
 *       MBACSEL field in this register (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]).
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W2_NSE7(x)     (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W2_NSE7_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W2_NSE7_MASK)
/*! @} */

/* The count of MBC_MBC0_DOM_MEM0_BLK_CFG_W2 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W2_COUNT       (1U)

/*! @name MBC0_DOM_MEM0_BLK_CFG_W3 - MBC Memory Block Configuration Word */
/*! @{ */

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W3_MBACSEL0_MASK (0x7U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W3_MBACSEL0_SHIFT (0U)
/*! MBACSEL0 - Memory Block Access Control Select for block B
 *  0b000..select MBC_MEMN_GLBAC0 access control policy for block B
 *  0b001..select MBC_MEMN_GLBAC1 access control policy for block B
 *  0b010..select MBC_MEMN_GLBAC2 access control policy for block B
 *  0b011..select MBC_MEMN_GLBAC3 access control policy for block B
 *  0b100..select MBC_MEMN_GLBAC4 access control policy for block B
 *  0b101..select MBC_MEMN_GLBAC5 access control policy for block B
 *  0b110..select MBC_MEMN_GLBAC6 access control policy for block B
 *  0b111..select MBC_MEMN_GLBAC7 access control policy for block B
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W3_MBACSEL0(x) (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W3_MBACSEL0_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W3_MBACSEL0_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W3_NSE0_MASK   (0x8U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W3_NSE0_SHIFT  (3U)
/*! NSE0 - NonSecure Enable for block B
 *  0b0..Secure accesses to block B are based on corresponding MBACSEL field in this register
 *       (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]), nonsecure accesses to block B are not allowed.
 *  0b1..Secure accesses to block B are not allowed, nonsecure accesses to block B are based on corresponding
 *       MBACSEL field in this register (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]).
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W3_NSE0(x)     (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W3_NSE0_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W3_NSE0_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W3_MBACSEL1_MASK (0x70U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W3_MBACSEL1_SHIFT (4U)
/*! MBACSEL1 - Memory Block Access Control Select for block B
 *  0b000..select MBC_MEMN_GLBAC0 access control policy for block B
 *  0b001..select MBC_MEMN_GLBAC1 access control policy for block B
 *  0b010..select MBC_MEMN_GLBAC2 access control policy for block B
 *  0b011..select MBC_MEMN_GLBAC3 access control policy for block B
 *  0b100..select MBC_MEMN_GLBAC4 access control policy for block B
 *  0b101..select MBC_MEMN_GLBAC5 access control policy for block B
 *  0b110..select MBC_MEMN_GLBAC6 access control policy for block B
 *  0b111..select MBC_MEMN_GLBAC7 access control policy for block B
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W3_MBACSEL1(x) (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W3_MBACSEL1_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W3_MBACSEL1_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W3_NSE1_MASK   (0x80U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W3_NSE1_SHIFT  (7U)
/*! NSE1 - NonSecure Enable for block B
 *  0b0..Secure accesses to block B are based on corresponding MBACSEL field in this register
 *       (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]), nonsecure accesses to block B are not allowed.
 *  0b1..Secure accesses to block B are not allowed, nonsecure accesses to block B are based on corresponding
 *       MBACSEL field in this register (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]).
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W3_NSE1(x)     (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W3_NSE1_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W3_NSE1_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W3_MBACSEL2_MASK (0x700U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W3_MBACSEL2_SHIFT (8U)
/*! MBACSEL2 - Memory Block Access Control Select for block B
 *  0b000..select MBC_MEMN_GLBAC0 access control policy for block B
 *  0b001..select MBC_MEMN_GLBAC1 access control policy for block B
 *  0b010..select MBC_MEMN_GLBAC2 access control policy for block B
 *  0b011..select MBC_MEMN_GLBAC3 access control policy for block B
 *  0b100..select MBC_MEMN_GLBAC4 access control policy for block B
 *  0b101..select MBC_MEMN_GLBAC5 access control policy for block B
 *  0b110..select MBC_MEMN_GLBAC6 access control policy for block B
 *  0b111..select MBC_MEMN_GLBAC7 access control policy for block B
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W3_MBACSEL2(x) (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W3_MBACSEL2_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W3_MBACSEL2_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W3_NSE2_MASK   (0x800U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W3_NSE2_SHIFT  (11U)
/*! NSE2 - NonSecure Enable for block B
 *  0b0..Secure accesses to block B are based on corresponding MBACSEL field in this register
 *       (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]), nonsecure accesses to block B are not allowed.
 *  0b1..Secure accesses to block B are not allowed, nonsecure accesses to block B are based on corresponding
 *       MBACSEL field in this register (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]).
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W3_NSE2(x)     (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W3_NSE2_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W3_NSE2_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W3_MBACSEL3_MASK (0x7000U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W3_MBACSEL3_SHIFT (12U)
/*! MBACSEL3 - Memory Block Access Control Select for block B
 *  0b000..select MBC_MEMN_GLBAC0 access control policy for block B
 *  0b001..select MBC_MEMN_GLBAC1 access control policy for block B
 *  0b010..select MBC_MEMN_GLBAC2 access control policy for block B
 *  0b011..select MBC_MEMN_GLBAC3 access control policy for block B
 *  0b100..select MBC_MEMN_GLBAC4 access control policy for block B
 *  0b101..select MBC_MEMN_GLBAC5 access control policy for block B
 *  0b110..select MBC_MEMN_GLBAC6 access control policy for block B
 *  0b111..select MBC_MEMN_GLBAC7 access control policy for block B
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W3_MBACSEL3(x) (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W3_MBACSEL3_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W3_MBACSEL3_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W3_NSE3_MASK   (0x8000U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W3_NSE3_SHIFT  (15U)
/*! NSE3 - NonSecure Enable for block B
 *  0b0..Secure accesses to block B are based on corresponding MBACSEL field in this register
 *       (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]), nonsecure accesses to block B are not allowed.
 *  0b1..Secure accesses to block B are not allowed, nonsecure accesses to block B are based on corresponding
 *       MBACSEL field in this register (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]).
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W3_NSE3(x)     (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W3_NSE3_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W3_NSE3_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W3_MBACSEL4_MASK (0x70000U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W3_MBACSEL4_SHIFT (16U)
/*! MBACSEL4 - Memory Block Access Control Select for block B
 *  0b000..select MBC_MEMN_GLBAC0 access control policy for block B
 *  0b001..select MBC_MEMN_GLBAC1 access control policy for block B
 *  0b010..select MBC_MEMN_GLBAC2 access control policy for block B
 *  0b011..select MBC_MEMN_GLBAC3 access control policy for block B
 *  0b100..select MBC_MEMN_GLBAC4 access control policy for block B
 *  0b101..select MBC_MEMN_GLBAC5 access control policy for block B
 *  0b110..select MBC_MEMN_GLBAC6 access control policy for block B
 *  0b111..select MBC_MEMN_GLBAC7 access control policy for block B
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W3_MBACSEL4(x) (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W3_MBACSEL4_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W3_MBACSEL4_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W3_NSE4_MASK   (0x80000U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W3_NSE4_SHIFT  (19U)
/*! NSE4 - NonSecure Enable for block B
 *  0b0..Secure accesses to block B are based on corresponding MBACSEL field in this register
 *       (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]), nonsecure accesses to block B are not allowed.
 *  0b1..Secure accesses to block B are not allowed, nonsecure accesses to block B are based on corresponding
 *       MBACSEL field in this register (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]).
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W3_NSE4(x)     (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W3_NSE4_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W3_NSE4_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W3_MBACSEL5_MASK (0x700000U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W3_MBACSEL5_SHIFT (20U)
/*! MBACSEL5 - Memory Block Access Control Select for block B
 *  0b000..select MBC_MEMN_GLBAC0 access control policy for block B
 *  0b001..select MBC_MEMN_GLBAC1 access control policy for block B
 *  0b010..select MBC_MEMN_GLBAC2 access control policy for block B
 *  0b011..select MBC_MEMN_GLBAC3 access control policy for block B
 *  0b100..select MBC_MEMN_GLBAC4 access control policy for block B
 *  0b101..select MBC_MEMN_GLBAC5 access control policy for block B
 *  0b110..select MBC_MEMN_GLBAC6 access control policy for block B
 *  0b111..select MBC_MEMN_GLBAC7 access control policy for block B
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W3_MBACSEL5(x) (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W3_MBACSEL5_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W3_MBACSEL5_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W3_NSE5_MASK   (0x800000U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W3_NSE5_SHIFT  (23U)
/*! NSE5 - NonSecure Enable for block B
 *  0b0..Secure accesses to block B are based on corresponding MBACSEL field in this register
 *       (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]), nonsecure accesses to block B are not allowed.
 *  0b1..Secure accesses to block B are not allowed, nonsecure accesses to block B are based on corresponding
 *       MBACSEL field in this register (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]).
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W3_NSE5(x)     (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W3_NSE5_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W3_NSE5_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W3_MBACSEL6_MASK (0x7000000U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W3_MBACSEL6_SHIFT (24U)
/*! MBACSEL6 - Memory Block Access Control Select for block B
 *  0b000..select MBC_MEMN_GLBAC0 access control policy for block B
 *  0b001..select MBC_MEMN_GLBAC1 access control policy for block B
 *  0b010..select MBC_MEMN_GLBAC2 access control policy for block B
 *  0b011..select MBC_MEMN_GLBAC3 access control policy for block B
 *  0b100..select MBC_MEMN_GLBAC4 access control policy for block B
 *  0b101..select MBC_MEMN_GLBAC5 access control policy for block B
 *  0b110..select MBC_MEMN_GLBAC6 access control policy for block B
 *  0b111..select MBC_MEMN_GLBAC7 access control policy for block B
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W3_MBACSEL6(x) (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W3_MBACSEL6_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W3_MBACSEL6_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W3_NSE6_MASK   (0x8000000U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W3_NSE6_SHIFT  (27U)
/*! NSE6 - NonSecure Enable for block B
 *  0b0..Secure accesses to block B are based on corresponding MBACSEL field in this register
 *       (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]), nonsecure accesses to block B are not allowed.
 *  0b1..Secure accesses to block B are not allowed, nonsecure accesses to block B are based on corresponding
 *       MBACSEL field in this register (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]).
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W3_NSE6(x)     (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W3_NSE6_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W3_NSE6_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W3_MBACSEL7_MASK (0x70000000U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W3_MBACSEL7_SHIFT (28U)
/*! MBACSEL7 - Memory Block Access Control Select for block B
 *  0b000..select MBC_MEMN_GLBAC0 access control policy for block B
 *  0b001..select MBC_MEMN_GLBAC1 access control policy for block B
 *  0b010..select MBC_MEMN_GLBAC2 access control policy for block B
 *  0b011..select MBC_MEMN_GLBAC3 access control policy for block B
 *  0b100..select MBC_MEMN_GLBAC4 access control policy for block B
 *  0b101..select MBC_MEMN_GLBAC5 access control policy for block B
 *  0b110..select MBC_MEMN_GLBAC6 access control policy for block B
 *  0b111..select MBC_MEMN_GLBAC7 access control policy for block B
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W3_MBACSEL7(x) (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W3_MBACSEL7_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W3_MBACSEL7_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W3_NSE7_MASK   (0x80000000U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W3_NSE7_SHIFT  (31U)
/*! NSE7 - NonSecure Enable for block B
 *  0b0..Secure accesses to block B are based on corresponding MBACSEL field in this register
 *       (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]), nonsecure accesses to block B are not allowed.
 *  0b1..Secure accesses to block B are not allowed, nonsecure accesses to block B are based on corresponding
 *       MBACSEL field in this register (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]).
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W3_NSE7(x)     (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W3_NSE7_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W3_NSE7_MASK)
/*! @} */

/* The count of MBC_MBC0_DOM_MEM0_BLK_CFG_W3 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W3_COUNT       (1U)

/*! @name MBC0_DOM_MEM0_BLK_CFG_W4 - MBC Memory Block Configuration Word */
/*! @{ */

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W4_MBACSEL0_MASK (0x7U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W4_MBACSEL0_SHIFT (0U)
/*! MBACSEL0 - Memory Block Access Control Select for block B
 *  0b000..select MBC_MEMN_GLBAC0 access control policy for block B
 *  0b001..select MBC_MEMN_GLBAC1 access control policy for block B
 *  0b010..select MBC_MEMN_GLBAC2 access control policy for block B
 *  0b011..select MBC_MEMN_GLBAC3 access control policy for block B
 *  0b100..select MBC_MEMN_GLBAC4 access control policy for block B
 *  0b101..select MBC_MEMN_GLBAC5 access control policy for block B
 *  0b110..select MBC_MEMN_GLBAC6 access control policy for block B
 *  0b111..select MBC_MEMN_GLBAC7 access control policy for block B
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W4_MBACSEL0(x) (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W4_MBACSEL0_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W4_MBACSEL0_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W4_NSE0_MASK   (0x8U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W4_NSE0_SHIFT  (3U)
/*! NSE0 - NonSecure Enable for block B
 *  0b0..Secure accesses to block B are based on corresponding MBACSEL field in this register
 *       (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]), nonsecure accesses to block B are not allowed.
 *  0b1..Secure accesses to block B are not allowed, nonsecure accesses to block B are based on corresponding
 *       MBACSEL field in this register (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]).
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W4_NSE0(x)     (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W4_NSE0_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W4_NSE0_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W4_MBACSEL1_MASK (0x70U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W4_MBACSEL1_SHIFT (4U)
/*! MBACSEL1 - Memory Block Access Control Select for block B
 *  0b000..select MBC_MEMN_GLBAC0 access control policy for block B
 *  0b001..select MBC_MEMN_GLBAC1 access control policy for block B
 *  0b010..select MBC_MEMN_GLBAC2 access control policy for block B
 *  0b011..select MBC_MEMN_GLBAC3 access control policy for block B
 *  0b100..select MBC_MEMN_GLBAC4 access control policy for block B
 *  0b101..select MBC_MEMN_GLBAC5 access control policy for block B
 *  0b110..select MBC_MEMN_GLBAC6 access control policy for block B
 *  0b111..select MBC_MEMN_GLBAC7 access control policy for block B
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W4_MBACSEL1(x) (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W4_MBACSEL1_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W4_MBACSEL1_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W4_NSE1_MASK   (0x80U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W4_NSE1_SHIFT  (7U)
/*! NSE1 - NonSecure Enable for block B
 *  0b0..Secure accesses to block B are based on corresponding MBACSEL field in this register
 *       (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]), nonsecure accesses to block B are not allowed.
 *  0b1..Secure accesses to block B are not allowed, nonsecure accesses to block B are based on corresponding
 *       MBACSEL field in this register (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]).
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W4_NSE1(x)     (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W4_NSE1_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W4_NSE1_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W4_MBACSEL2_MASK (0x700U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W4_MBACSEL2_SHIFT (8U)
/*! MBACSEL2 - Memory Block Access Control Select for block B
 *  0b000..select MBC_MEMN_GLBAC0 access control policy for block B
 *  0b001..select MBC_MEMN_GLBAC1 access control policy for block B
 *  0b010..select MBC_MEMN_GLBAC2 access control policy for block B
 *  0b011..select MBC_MEMN_GLBAC3 access control policy for block B
 *  0b100..select MBC_MEMN_GLBAC4 access control policy for block B
 *  0b101..select MBC_MEMN_GLBAC5 access control policy for block B
 *  0b110..select MBC_MEMN_GLBAC6 access control policy for block B
 *  0b111..select MBC_MEMN_GLBAC7 access control policy for block B
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W4_MBACSEL2(x) (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W4_MBACSEL2_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W4_MBACSEL2_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W4_NSE2_MASK   (0x800U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W4_NSE2_SHIFT  (11U)
/*! NSE2 - NonSecure Enable for block B
 *  0b0..Secure accesses to block B are based on corresponding MBACSEL field in this register
 *       (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]), nonsecure accesses to block B are not allowed.
 *  0b1..Secure accesses to block B are not allowed, nonsecure accesses to block B are based on corresponding
 *       MBACSEL field in this register (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]).
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W4_NSE2(x)     (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W4_NSE2_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W4_NSE2_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W4_MBACSEL3_MASK (0x7000U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W4_MBACSEL3_SHIFT (12U)
/*! MBACSEL3 - Memory Block Access Control Select for block B
 *  0b000..select MBC_MEMN_GLBAC0 access control policy for block B
 *  0b001..select MBC_MEMN_GLBAC1 access control policy for block B
 *  0b010..select MBC_MEMN_GLBAC2 access control policy for block B
 *  0b011..select MBC_MEMN_GLBAC3 access control policy for block B
 *  0b100..select MBC_MEMN_GLBAC4 access control policy for block B
 *  0b101..select MBC_MEMN_GLBAC5 access control policy for block B
 *  0b110..select MBC_MEMN_GLBAC6 access control policy for block B
 *  0b111..select MBC_MEMN_GLBAC7 access control policy for block B
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W4_MBACSEL3(x) (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W4_MBACSEL3_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W4_MBACSEL3_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W4_NSE3_MASK   (0x8000U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W4_NSE3_SHIFT  (15U)
/*! NSE3 - NonSecure Enable for block B
 *  0b0..Secure accesses to block B are based on corresponding MBACSEL field in this register
 *       (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]), nonsecure accesses to block B are not allowed.
 *  0b1..Secure accesses to block B are not allowed, nonsecure accesses to block B are based on corresponding
 *       MBACSEL field in this register (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]).
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W4_NSE3(x)     (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W4_NSE3_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W4_NSE3_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W4_MBACSEL4_MASK (0x70000U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W4_MBACSEL4_SHIFT (16U)
/*! MBACSEL4 - Memory Block Access Control Select for block B
 *  0b000..select MBC_MEMN_GLBAC0 access control policy for block B
 *  0b001..select MBC_MEMN_GLBAC1 access control policy for block B
 *  0b010..select MBC_MEMN_GLBAC2 access control policy for block B
 *  0b011..select MBC_MEMN_GLBAC3 access control policy for block B
 *  0b100..select MBC_MEMN_GLBAC4 access control policy for block B
 *  0b101..select MBC_MEMN_GLBAC5 access control policy for block B
 *  0b110..select MBC_MEMN_GLBAC6 access control policy for block B
 *  0b111..select MBC_MEMN_GLBAC7 access control policy for block B
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W4_MBACSEL4(x) (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W4_MBACSEL4_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W4_MBACSEL4_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W4_NSE4_MASK   (0x80000U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W4_NSE4_SHIFT  (19U)
/*! NSE4 - NonSecure Enable for block B
 *  0b0..Secure accesses to block B are based on corresponding MBACSEL field in this register
 *       (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]), nonsecure accesses to block B are not allowed.
 *  0b1..Secure accesses to block B are not allowed, nonsecure accesses to block B are based on corresponding
 *       MBACSEL field in this register (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]).
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W4_NSE4(x)     (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W4_NSE4_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W4_NSE4_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W4_MBACSEL5_MASK (0x700000U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W4_MBACSEL5_SHIFT (20U)
/*! MBACSEL5 - Memory Block Access Control Select for block B
 *  0b000..select MBC_MEMN_GLBAC0 access control policy for block B
 *  0b001..select MBC_MEMN_GLBAC1 access control policy for block B
 *  0b010..select MBC_MEMN_GLBAC2 access control policy for block B
 *  0b011..select MBC_MEMN_GLBAC3 access control policy for block B
 *  0b100..select MBC_MEMN_GLBAC4 access control policy for block B
 *  0b101..select MBC_MEMN_GLBAC5 access control policy for block B
 *  0b110..select MBC_MEMN_GLBAC6 access control policy for block B
 *  0b111..select MBC_MEMN_GLBAC7 access control policy for block B
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W4_MBACSEL5(x) (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W4_MBACSEL5_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W4_MBACSEL5_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W4_NSE5_MASK   (0x800000U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W4_NSE5_SHIFT  (23U)
/*! NSE5 - NonSecure Enable for block B
 *  0b0..Secure accesses to block B are based on corresponding MBACSEL field in this register
 *       (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]), nonsecure accesses to block B are not allowed.
 *  0b1..Secure accesses to block B are not allowed, nonsecure accesses to block B are based on corresponding
 *       MBACSEL field in this register (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]).
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W4_NSE5(x)     (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W4_NSE5_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W4_NSE5_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W4_MBACSEL6_MASK (0x7000000U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W4_MBACSEL6_SHIFT (24U)
/*! MBACSEL6 - Memory Block Access Control Select for block B
 *  0b000..select MBC_MEMN_GLBAC0 access control policy for block B
 *  0b001..select MBC_MEMN_GLBAC1 access control policy for block B
 *  0b010..select MBC_MEMN_GLBAC2 access control policy for block B
 *  0b011..select MBC_MEMN_GLBAC3 access control policy for block B
 *  0b100..select MBC_MEMN_GLBAC4 access control policy for block B
 *  0b101..select MBC_MEMN_GLBAC5 access control policy for block B
 *  0b110..select MBC_MEMN_GLBAC6 access control policy for block B
 *  0b111..select MBC_MEMN_GLBAC7 access control policy for block B
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W4_MBACSEL6(x) (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W4_MBACSEL6_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W4_MBACSEL6_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W4_NSE6_MASK   (0x8000000U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W4_NSE6_SHIFT  (27U)
/*! NSE6 - NonSecure Enable for block B
 *  0b0..Secure accesses to block B are based on corresponding MBACSEL field in this register
 *       (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]), nonsecure accesses to block B are not allowed.
 *  0b1..Secure accesses to block B are not allowed, nonsecure accesses to block B are based on corresponding
 *       MBACSEL field in this register (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]).
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W4_NSE6(x)     (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W4_NSE6_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W4_NSE6_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W4_MBACSEL7_MASK (0x70000000U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W4_MBACSEL7_SHIFT (28U)
/*! MBACSEL7 - Memory Block Access Control Select for block B
 *  0b000..select MBC_MEMN_GLBAC0 access control policy for block B
 *  0b001..select MBC_MEMN_GLBAC1 access control policy for block B
 *  0b010..select MBC_MEMN_GLBAC2 access control policy for block B
 *  0b011..select MBC_MEMN_GLBAC3 access control policy for block B
 *  0b100..select MBC_MEMN_GLBAC4 access control policy for block B
 *  0b101..select MBC_MEMN_GLBAC5 access control policy for block B
 *  0b110..select MBC_MEMN_GLBAC6 access control policy for block B
 *  0b111..select MBC_MEMN_GLBAC7 access control policy for block B
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W4_MBACSEL7(x) (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W4_MBACSEL7_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W4_MBACSEL7_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W4_NSE7_MASK   (0x80000000U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W4_NSE7_SHIFT  (31U)
/*! NSE7 - NonSecure Enable for block B
 *  0b0..Secure accesses to block B are based on corresponding MBACSEL field in this register
 *       (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]), nonsecure accesses to block B are not allowed.
 *  0b1..Secure accesses to block B are not allowed, nonsecure accesses to block B are based on corresponding
 *       MBACSEL field in this register (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]).
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W4_NSE7(x)     (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W4_NSE7_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W4_NSE7_MASK)
/*! @} */

/* The count of MBC_MBC0_DOM_MEM0_BLK_CFG_W4 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W4_COUNT       (1U)

/*! @name MBC0_DOM_MEM0_BLK_CFG_W5 - MBC Memory Block Configuration Word */
/*! @{ */

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W5_MBACSEL0_MASK (0x7U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W5_MBACSEL0_SHIFT (0U)
/*! MBACSEL0 - Memory Block Access Control Select for block B
 *  0b000..select MBC_MEMN_GLBAC0 access control policy for block B
 *  0b001..select MBC_MEMN_GLBAC1 access control policy for block B
 *  0b010..select MBC_MEMN_GLBAC2 access control policy for block B
 *  0b011..select MBC_MEMN_GLBAC3 access control policy for block B
 *  0b100..select MBC_MEMN_GLBAC4 access control policy for block B
 *  0b101..select MBC_MEMN_GLBAC5 access control policy for block B
 *  0b110..select MBC_MEMN_GLBAC6 access control policy for block B
 *  0b111..select MBC_MEMN_GLBAC7 access control policy for block B
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W5_MBACSEL0(x) (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W5_MBACSEL0_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W5_MBACSEL0_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W5_NSE0_MASK   (0x8U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W5_NSE0_SHIFT  (3U)
/*! NSE0 - NonSecure Enable for block B
 *  0b0..Secure accesses to block B are based on corresponding MBACSEL field in this register
 *       (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]), nonsecure accesses to block B are not allowed.
 *  0b1..Secure accesses to block B are not allowed, nonsecure accesses to block B are based on corresponding
 *       MBACSEL field in this register (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]).
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W5_NSE0(x)     (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W5_NSE0_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W5_NSE0_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W5_MBACSEL1_MASK (0x70U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W5_MBACSEL1_SHIFT (4U)
/*! MBACSEL1 - Memory Block Access Control Select for block B
 *  0b000..select MBC_MEMN_GLBAC0 access control policy for block B
 *  0b001..select MBC_MEMN_GLBAC1 access control policy for block B
 *  0b010..select MBC_MEMN_GLBAC2 access control policy for block B
 *  0b011..select MBC_MEMN_GLBAC3 access control policy for block B
 *  0b100..select MBC_MEMN_GLBAC4 access control policy for block B
 *  0b101..select MBC_MEMN_GLBAC5 access control policy for block B
 *  0b110..select MBC_MEMN_GLBAC6 access control policy for block B
 *  0b111..select MBC_MEMN_GLBAC7 access control policy for block B
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W5_MBACSEL1(x) (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W5_MBACSEL1_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W5_MBACSEL1_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W5_NSE1_MASK   (0x80U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W5_NSE1_SHIFT  (7U)
/*! NSE1 - NonSecure Enable for block B
 *  0b0..Secure accesses to block B are based on corresponding MBACSEL field in this register
 *       (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]), nonsecure accesses to block B are not allowed.
 *  0b1..Secure accesses to block B are not allowed, nonsecure accesses to block B are based on corresponding
 *       MBACSEL field in this register (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]).
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W5_NSE1(x)     (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W5_NSE1_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W5_NSE1_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W5_MBACSEL2_MASK (0x700U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W5_MBACSEL2_SHIFT (8U)
/*! MBACSEL2 - Memory Block Access Control Select for block B
 *  0b000..select MBC_MEMN_GLBAC0 access control policy for block B
 *  0b001..select MBC_MEMN_GLBAC1 access control policy for block B
 *  0b010..select MBC_MEMN_GLBAC2 access control policy for block B
 *  0b011..select MBC_MEMN_GLBAC3 access control policy for block B
 *  0b100..select MBC_MEMN_GLBAC4 access control policy for block B
 *  0b101..select MBC_MEMN_GLBAC5 access control policy for block B
 *  0b110..select MBC_MEMN_GLBAC6 access control policy for block B
 *  0b111..select MBC_MEMN_GLBAC7 access control policy for block B
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W5_MBACSEL2(x) (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W5_MBACSEL2_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W5_MBACSEL2_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W5_NSE2_MASK   (0x800U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W5_NSE2_SHIFT  (11U)
/*! NSE2 - NonSecure Enable for block B
 *  0b0..Secure accesses to block B are based on corresponding MBACSEL field in this register
 *       (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]), nonsecure accesses to block B are not allowed.
 *  0b1..Secure accesses to block B are not allowed, nonsecure accesses to block B are based on corresponding
 *       MBACSEL field in this register (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]).
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W5_NSE2(x)     (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W5_NSE2_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W5_NSE2_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W5_MBACSEL3_MASK (0x7000U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W5_MBACSEL3_SHIFT (12U)
/*! MBACSEL3 - Memory Block Access Control Select for block B
 *  0b000..select MBC_MEMN_GLBAC0 access control policy for block B
 *  0b001..select MBC_MEMN_GLBAC1 access control policy for block B
 *  0b010..select MBC_MEMN_GLBAC2 access control policy for block B
 *  0b011..select MBC_MEMN_GLBAC3 access control policy for block B
 *  0b100..select MBC_MEMN_GLBAC4 access control policy for block B
 *  0b101..select MBC_MEMN_GLBAC5 access control policy for block B
 *  0b110..select MBC_MEMN_GLBAC6 access control policy for block B
 *  0b111..select MBC_MEMN_GLBAC7 access control policy for block B
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W5_MBACSEL3(x) (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W5_MBACSEL3_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W5_MBACSEL3_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W5_NSE3_MASK   (0x8000U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W5_NSE3_SHIFT  (15U)
/*! NSE3 - NonSecure Enable for block B
 *  0b0..Secure accesses to block B are based on corresponding MBACSEL field in this register
 *       (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]), nonsecure accesses to block B are not allowed.
 *  0b1..Secure accesses to block B are not allowed, nonsecure accesses to block B are based on corresponding
 *       MBACSEL field in this register (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]).
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W5_NSE3(x)     (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W5_NSE3_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W5_NSE3_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W5_MBACSEL4_MASK (0x70000U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W5_MBACSEL4_SHIFT (16U)
/*! MBACSEL4 - Memory Block Access Control Select for block B
 *  0b000..select MBC_MEMN_GLBAC0 access control policy for block B
 *  0b001..select MBC_MEMN_GLBAC1 access control policy for block B
 *  0b010..select MBC_MEMN_GLBAC2 access control policy for block B
 *  0b011..select MBC_MEMN_GLBAC3 access control policy for block B
 *  0b100..select MBC_MEMN_GLBAC4 access control policy for block B
 *  0b101..select MBC_MEMN_GLBAC5 access control policy for block B
 *  0b110..select MBC_MEMN_GLBAC6 access control policy for block B
 *  0b111..select MBC_MEMN_GLBAC7 access control policy for block B
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W5_MBACSEL4(x) (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W5_MBACSEL4_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W5_MBACSEL4_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W5_NSE4_MASK   (0x80000U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W5_NSE4_SHIFT  (19U)
/*! NSE4 - NonSecure Enable for block B
 *  0b0..Secure accesses to block B are based on corresponding MBACSEL field in this register
 *       (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]), nonsecure accesses to block B are not allowed.
 *  0b1..Secure accesses to block B are not allowed, nonsecure accesses to block B are based on corresponding
 *       MBACSEL field in this register (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]).
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W5_NSE4(x)     (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W5_NSE4_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W5_NSE4_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W5_MBACSEL5_MASK (0x700000U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W5_MBACSEL5_SHIFT (20U)
/*! MBACSEL5 - Memory Block Access Control Select for block B
 *  0b000..select MBC_MEMN_GLBAC0 access control policy for block B
 *  0b001..select MBC_MEMN_GLBAC1 access control policy for block B
 *  0b010..select MBC_MEMN_GLBAC2 access control policy for block B
 *  0b011..select MBC_MEMN_GLBAC3 access control policy for block B
 *  0b100..select MBC_MEMN_GLBAC4 access control policy for block B
 *  0b101..select MBC_MEMN_GLBAC5 access control policy for block B
 *  0b110..select MBC_MEMN_GLBAC6 access control policy for block B
 *  0b111..select MBC_MEMN_GLBAC7 access control policy for block B
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W5_MBACSEL5(x) (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W5_MBACSEL5_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W5_MBACSEL5_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W5_NSE5_MASK   (0x800000U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W5_NSE5_SHIFT  (23U)
/*! NSE5 - NonSecure Enable for block B
 *  0b0..Secure accesses to block B are based on corresponding MBACSEL field in this register
 *       (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]), nonsecure accesses to block B are not allowed.
 *  0b1..Secure accesses to block B are not allowed, nonsecure accesses to block B are based on corresponding
 *       MBACSEL field in this register (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]).
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W5_NSE5(x)     (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W5_NSE5_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W5_NSE5_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W5_MBACSEL6_MASK (0x7000000U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W5_MBACSEL6_SHIFT (24U)
/*! MBACSEL6 - Memory Block Access Control Select for block B
 *  0b000..select MBC_MEMN_GLBAC0 access control policy for block B
 *  0b001..select MBC_MEMN_GLBAC1 access control policy for block B
 *  0b010..select MBC_MEMN_GLBAC2 access control policy for block B
 *  0b011..select MBC_MEMN_GLBAC3 access control policy for block B
 *  0b100..select MBC_MEMN_GLBAC4 access control policy for block B
 *  0b101..select MBC_MEMN_GLBAC5 access control policy for block B
 *  0b110..select MBC_MEMN_GLBAC6 access control policy for block B
 *  0b111..select MBC_MEMN_GLBAC7 access control policy for block B
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W5_MBACSEL6(x) (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W5_MBACSEL6_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W5_MBACSEL6_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W5_NSE6_MASK   (0x8000000U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W5_NSE6_SHIFT  (27U)
/*! NSE6 - NonSecure Enable for block B
 *  0b0..Secure accesses to block B are based on corresponding MBACSEL field in this register
 *       (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]), nonsecure accesses to block B are not allowed.
 *  0b1..Secure accesses to block B are not allowed, nonsecure accesses to block B are based on corresponding
 *       MBACSEL field in this register (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]).
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W5_NSE6(x)     (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W5_NSE6_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W5_NSE6_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W5_MBACSEL7_MASK (0x70000000U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W5_MBACSEL7_SHIFT (28U)
/*! MBACSEL7 - Memory Block Access Control Select for block B
 *  0b000..select MBC_MEMN_GLBAC0 access control policy for block B
 *  0b001..select MBC_MEMN_GLBAC1 access control policy for block B
 *  0b010..select MBC_MEMN_GLBAC2 access control policy for block B
 *  0b011..select MBC_MEMN_GLBAC3 access control policy for block B
 *  0b100..select MBC_MEMN_GLBAC4 access control policy for block B
 *  0b101..select MBC_MEMN_GLBAC5 access control policy for block B
 *  0b110..select MBC_MEMN_GLBAC6 access control policy for block B
 *  0b111..select MBC_MEMN_GLBAC7 access control policy for block B
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W5_MBACSEL7(x) (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W5_MBACSEL7_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W5_MBACSEL7_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W5_NSE7_MASK   (0x80000000U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W5_NSE7_SHIFT  (31U)
/*! NSE7 - NonSecure Enable for block B
 *  0b0..Secure accesses to block B are based on corresponding MBACSEL field in this register
 *       (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]), nonsecure accesses to block B are not allowed.
 *  0b1..Secure accesses to block B are not allowed, nonsecure accesses to block B are based on corresponding
 *       MBACSEL field in this register (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]).
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W5_NSE7(x)     (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W5_NSE7_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W5_NSE7_MASK)
/*! @} */

/* The count of MBC_MBC0_DOM_MEM0_BLK_CFG_W5 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W5_COUNT       (1U)

/*! @name MBC0_DOM_MEM0_BLK_CFG_W6 - MBC Memory Block Configuration Word */
/*! @{ */

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W6_MBACSEL0_MASK (0x7U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W6_MBACSEL0_SHIFT (0U)
/*! MBACSEL0 - Memory Block Access Control Select for block B
 *  0b000..select MBC_MEMN_GLBAC0 access control policy for block B
 *  0b001..select MBC_MEMN_GLBAC1 access control policy for block B
 *  0b010..select MBC_MEMN_GLBAC2 access control policy for block B
 *  0b011..select MBC_MEMN_GLBAC3 access control policy for block B
 *  0b100..select MBC_MEMN_GLBAC4 access control policy for block B
 *  0b101..select MBC_MEMN_GLBAC5 access control policy for block B
 *  0b110..select MBC_MEMN_GLBAC6 access control policy for block B
 *  0b111..select MBC_MEMN_GLBAC7 access control policy for block B
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W6_MBACSEL0(x) (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W6_MBACSEL0_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W6_MBACSEL0_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W6_NSE0_MASK   (0x8U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W6_NSE0_SHIFT  (3U)
/*! NSE0 - NonSecure Enable for block B
 *  0b0..Secure accesses to block B are based on corresponding MBACSEL field in this register
 *       (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]), nonsecure accesses to block B are not allowed.
 *  0b1..Secure accesses to block B are not allowed, nonsecure accesses to block B are based on corresponding
 *       MBACSEL field in this register (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]).
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W6_NSE0(x)     (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W6_NSE0_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W6_NSE0_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W6_MBACSEL1_MASK (0x70U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W6_MBACSEL1_SHIFT (4U)
/*! MBACSEL1 - Memory Block Access Control Select for block B
 *  0b000..select MBC_MEMN_GLBAC0 access control policy for block B
 *  0b001..select MBC_MEMN_GLBAC1 access control policy for block B
 *  0b010..select MBC_MEMN_GLBAC2 access control policy for block B
 *  0b011..select MBC_MEMN_GLBAC3 access control policy for block B
 *  0b100..select MBC_MEMN_GLBAC4 access control policy for block B
 *  0b101..select MBC_MEMN_GLBAC5 access control policy for block B
 *  0b110..select MBC_MEMN_GLBAC6 access control policy for block B
 *  0b111..select MBC_MEMN_GLBAC7 access control policy for block B
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W6_MBACSEL1(x) (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W6_MBACSEL1_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W6_MBACSEL1_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W6_NSE1_MASK   (0x80U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W6_NSE1_SHIFT  (7U)
/*! NSE1 - NonSecure Enable for block B
 *  0b0..Secure accesses to block B are based on corresponding MBACSEL field in this register
 *       (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]), nonsecure accesses to block B are not allowed.
 *  0b1..Secure accesses to block B are not allowed, nonsecure accesses to block B are based on corresponding
 *       MBACSEL field in this register (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]).
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W6_NSE1(x)     (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W6_NSE1_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W6_NSE1_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W6_MBACSEL2_MASK (0x700U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W6_MBACSEL2_SHIFT (8U)
/*! MBACSEL2 - Memory Block Access Control Select for block B
 *  0b000..select MBC_MEMN_GLBAC0 access control policy for block B
 *  0b001..select MBC_MEMN_GLBAC1 access control policy for block B
 *  0b010..select MBC_MEMN_GLBAC2 access control policy for block B
 *  0b011..select MBC_MEMN_GLBAC3 access control policy for block B
 *  0b100..select MBC_MEMN_GLBAC4 access control policy for block B
 *  0b101..select MBC_MEMN_GLBAC5 access control policy for block B
 *  0b110..select MBC_MEMN_GLBAC6 access control policy for block B
 *  0b111..select MBC_MEMN_GLBAC7 access control policy for block B
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W6_MBACSEL2(x) (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W6_MBACSEL2_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W6_MBACSEL2_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W6_NSE2_MASK   (0x800U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W6_NSE2_SHIFT  (11U)
/*! NSE2 - NonSecure Enable for block B
 *  0b0..Secure accesses to block B are based on corresponding MBACSEL field in this register
 *       (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]), nonsecure accesses to block B are not allowed.
 *  0b1..Secure accesses to block B are not allowed, nonsecure accesses to block B are based on corresponding
 *       MBACSEL field in this register (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]).
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W6_NSE2(x)     (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W6_NSE2_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W6_NSE2_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W6_MBACSEL3_MASK (0x7000U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W6_MBACSEL3_SHIFT (12U)
/*! MBACSEL3 - Memory Block Access Control Select for block B
 *  0b000..select MBC_MEMN_GLBAC0 access control policy for block B
 *  0b001..select MBC_MEMN_GLBAC1 access control policy for block B
 *  0b010..select MBC_MEMN_GLBAC2 access control policy for block B
 *  0b011..select MBC_MEMN_GLBAC3 access control policy for block B
 *  0b100..select MBC_MEMN_GLBAC4 access control policy for block B
 *  0b101..select MBC_MEMN_GLBAC5 access control policy for block B
 *  0b110..select MBC_MEMN_GLBAC6 access control policy for block B
 *  0b111..select MBC_MEMN_GLBAC7 access control policy for block B
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W6_MBACSEL3(x) (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W6_MBACSEL3_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W6_MBACSEL3_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W6_NSE3_MASK   (0x8000U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W6_NSE3_SHIFT  (15U)
/*! NSE3 - NonSecure Enable for block B
 *  0b0..Secure accesses to block B are based on corresponding MBACSEL field in this register
 *       (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]), nonsecure accesses to block B are not allowed.
 *  0b1..Secure accesses to block B are not allowed, nonsecure accesses to block B are based on corresponding
 *       MBACSEL field in this register (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]).
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W6_NSE3(x)     (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W6_NSE3_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W6_NSE3_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W6_MBACSEL4_MASK (0x70000U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W6_MBACSEL4_SHIFT (16U)
/*! MBACSEL4 - Memory Block Access Control Select for block B
 *  0b000..select MBC_MEMN_GLBAC0 access control policy for block B
 *  0b001..select MBC_MEMN_GLBAC1 access control policy for block B
 *  0b010..select MBC_MEMN_GLBAC2 access control policy for block B
 *  0b011..select MBC_MEMN_GLBAC3 access control policy for block B
 *  0b100..select MBC_MEMN_GLBAC4 access control policy for block B
 *  0b101..select MBC_MEMN_GLBAC5 access control policy for block B
 *  0b110..select MBC_MEMN_GLBAC6 access control policy for block B
 *  0b111..select MBC_MEMN_GLBAC7 access control policy for block B
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W6_MBACSEL4(x) (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W6_MBACSEL4_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W6_MBACSEL4_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W6_NSE4_MASK   (0x80000U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W6_NSE4_SHIFT  (19U)
/*! NSE4 - NonSecure Enable for block B
 *  0b0..Secure accesses to block B are based on corresponding MBACSEL field in this register
 *       (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]), nonsecure accesses to block B are not allowed.
 *  0b1..Secure accesses to block B are not allowed, nonsecure accesses to block B are based on corresponding
 *       MBACSEL field in this register (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]).
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W6_NSE4(x)     (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W6_NSE4_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W6_NSE4_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W6_MBACSEL5_MASK (0x700000U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W6_MBACSEL5_SHIFT (20U)
/*! MBACSEL5 - Memory Block Access Control Select for block B
 *  0b000..select MBC_MEMN_GLBAC0 access control policy for block B
 *  0b001..select MBC_MEMN_GLBAC1 access control policy for block B
 *  0b010..select MBC_MEMN_GLBAC2 access control policy for block B
 *  0b011..select MBC_MEMN_GLBAC3 access control policy for block B
 *  0b100..select MBC_MEMN_GLBAC4 access control policy for block B
 *  0b101..select MBC_MEMN_GLBAC5 access control policy for block B
 *  0b110..select MBC_MEMN_GLBAC6 access control policy for block B
 *  0b111..select MBC_MEMN_GLBAC7 access control policy for block B
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W6_MBACSEL5(x) (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W6_MBACSEL5_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W6_MBACSEL5_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W6_NSE5_MASK   (0x800000U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W6_NSE5_SHIFT  (23U)
/*! NSE5 - NonSecure Enable for block B
 *  0b0..Secure accesses to block B are based on corresponding MBACSEL field in this register
 *       (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]), nonsecure accesses to block B are not allowed.
 *  0b1..Secure accesses to block B are not allowed, nonsecure accesses to block B are based on corresponding
 *       MBACSEL field in this register (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]).
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W6_NSE5(x)     (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W6_NSE5_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W6_NSE5_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W6_MBACSEL6_MASK (0x7000000U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W6_MBACSEL6_SHIFT (24U)
/*! MBACSEL6 - Memory Block Access Control Select for block B
 *  0b000..select MBC_MEMN_GLBAC0 access control policy for block B
 *  0b001..select MBC_MEMN_GLBAC1 access control policy for block B
 *  0b010..select MBC_MEMN_GLBAC2 access control policy for block B
 *  0b011..select MBC_MEMN_GLBAC3 access control policy for block B
 *  0b100..select MBC_MEMN_GLBAC4 access control policy for block B
 *  0b101..select MBC_MEMN_GLBAC5 access control policy for block B
 *  0b110..select MBC_MEMN_GLBAC6 access control policy for block B
 *  0b111..select MBC_MEMN_GLBAC7 access control policy for block B
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W6_MBACSEL6(x) (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W6_MBACSEL6_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W6_MBACSEL6_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W6_NSE6_MASK   (0x8000000U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W6_NSE6_SHIFT  (27U)
/*! NSE6 - NonSecure Enable for block B
 *  0b0..Secure accesses to block B are based on corresponding MBACSEL field in this register
 *       (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]), nonsecure accesses to block B are not allowed.
 *  0b1..Secure accesses to block B are not allowed, nonsecure accesses to block B are based on corresponding
 *       MBACSEL field in this register (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]).
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W6_NSE6(x)     (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W6_NSE6_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W6_NSE6_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W6_MBACSEL7_MASK (0x70000000U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W6_MBACSEL7_SHIFT (28U)
/*! MBACSEL7 - Memory Block Access Control Select for block B
 *  0b000..select MBC_MEMN_GLBAC0 access control policy for block B
 *  0b001..select MBC_MEMN_GLBAC1 access control policy for block B
 *  0b010..select MBC_MEMN_GLBAC2 access control policy for block B
 *  0b011..select MBC_MEMN_GLBAC3 access control policy for block B
 *  0b100..select MBC_MEMN_GLBAC4 access control policy for block B
 *  0b101..select MBC_MEMN_GLBAC5 access control policy for block B
 *  0b110..select MBC_MEMN_GLBAC6 access control policy for block B
 *  0b111..select MBC_MEMN_GLBAC7 access control policy for block B
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W6_MBACSEL7(x) (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W6_MBACSEL7_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W6_MBACSEL7_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W6_NSE7_MASK   (0x80000000U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W6_NSE7_SHIFT  (31U)
/*! NSE7 - NonSecure Enable for block B
 *  0b0..Secure accesses to block B are based on corresponding MBACSEL field in this register
 *       (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]), nonsecure accesses to block B are not allowed.
 *  0b1..Secure accesses to block B are not allowed, nonsecure accesses to block B are based on corresponding
 *       MBACSEL field in this register (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]).
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W6_NSE7(x)     (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W6_NSE7_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W6_NSE7_MASK)
/*! @} */

/* The count of MBC_MBC0_DOM_MEM0_BLK_CFG_W6 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W6_COUNT       (1U)

/*! @name MBC0_DOM_MEM0_BLK_CFG_W7 - MBC Memory Block Configuration Word */
/*! @{ */

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W7_MBACSEL0_MASK (0x7U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W7_MBACSEL0_SHIFT (0U)
/*! MBACSEL0 - Memory Block Access Control Select for block B
 *  0b000..select MBC_MEMN_GLBAC0 access control policy for block B
 *  0b001..select MBC_MEMN_GLBAC1 access control policy for block B
 *  0b010..select MBC_MEMN_GLBAC2 access control policy for block B
 *  0b011..select MBC_MEMN_GLBAC3 access control policy for block B
 *  0b100..select MBC_MEMN_GLBAC4 access control policy for block B
 *  0b101..select MBC_MEMN_GLBAC5 access control policy for block B
 *  0b110..select MBC_MEMN_GLBAC6 access control policy for block B
 *  0b111..select MBC_MEMN_GLBAC7 access control policy for block B
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W7_MBACSEL0(x) (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W7_MBACSEL0_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W7_MBACSEL0_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W7_NSE0_MASK   (0x8U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W7_NSE0_SHIFT  (3U)
/*! NSE0 - NonSecure Enable for block B
 *  0b0..Secure accesses to block B are based on corresponding MBACSEL field in this register
 *       (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]), nonsecure accesses to block B are not allowed.
 *  0b1..Secure accesses to block B are not allowed, nonsecure accesses to block B are based on corresponding
 *       MBACSEL field in this register (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]).
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W7_NSE0(x)     (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W7_NSE0_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W7_NSE0_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W7_MBACSEL1_MASK (0x70U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W7_MBACSEL1_SHIFT (4U)
/*! MBACSEL1 - Memory Block Access Control Select for block B
 *  0b000..select MBC_MEMN_GLBAC0 access control policy for block B
 *  0b001..select MBC_MEMN_GLBAC1 access control policy for block B
 *  0b010..select MBC_MEMN_GLBAC2 access control policy for block B
 *  0b011..select MBC_MEMN_GLBAC3 access control policy for block B
 *  0b100..select MBC_MEMN_GLBAC4 access control policy for block B
 *  0b101..select MBC_MEMN_GLBAC5 access control policy for block B
 *  0b110..select MBC_MEMN_GLBAC6 access control policy for block B
 *  0b111..select MBC_MEMN_GLBAC7 access control policy for block B
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W7_MBACSEL1(x) (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W7_MBACSEL1_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W7_MBACSEL1_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W7_NSE1_MASK   (0x80U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W7_NSE1_SHIFT  (7U)
/*! NSE1 - NonSecure Enable for block B
 *  0b0..Secure accesses to block B are based on corresponding MBACSEL field in this register
 *       (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]), nonsecure accesses to block B are not allowed.
 *  0b1..Secure accesses to block B are not allowed, nonsecure accesses to block B are based on corresponding
 *       MBACSEL field in this register (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]).
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W7_NSE1(x)     (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W7_NSE1_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W7_NSE1_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W7_MBACSEL2_MASK (0x700U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W7_MBACSEL2_SHIFT (8U)
/*! MBACSEL2 - Memory Block Access Control Select for block B
 *  0b000..select MBC_MEMN_GLBAC0 access control policy for block B
 *  0b001..select MBC_MEMN_GLBAC1 access control policy for block B
 *  0b010..select MBC_MEMN_GLBAC2 access control policy for block B
 *  0b011..select MBC_MEMN_GLBAC3 access control policy for block B
 *  0b100..select MBC_MEMN_GLBAC4 access control policy for block B
 *  0b101..select MBC_MEMN_GLBAC5 access control policy for block B
 *  0b110..select MBC_MEMN_GLBAC6 access control policy for block B
 *  0b111..select MBC_MEMN_GLBAC7 access control policy for block B
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W7_MBACSEL2(x) (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W7_MBACSEL2_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W7_MBACSEL2_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W7_NSE2_MASK   (0x800U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W7_NSE2_SHIFT  (11U)
/*! NSE2 - NonSecure Enable for block B
 *  0b0..Secure accesses to block B are based on corresponding MBACSEL field in this register
 *       (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]), nonsecure accesses to block B are not allowed.
 *  0b1..Secure accesses to block B are not allowed, nonsecure accesses to block B are based on corresponding
 *       MBACSEL field in this register (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]).
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W7_NSE2(x)     (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W7_NSE2_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W7_NSE2_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W7_MBACSEL3_MASK (0x7000U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W7_MBACSEL3_SHIFT (12U)
/*! MBACSEL3 - Memory Block Access Control Select for block B
 *  0b000..select MBC_MEMN_GLBAC0 access control policy for block B
 *  0b001..select MBC_MEMN_GLBAC1 access control policy for block B
 *  0b010..select MBC_MEMN_GLBAC2 access control policy for block B
 *  0b011..select MBC_MEMN_GLBAC3 access control policy for block B
 *  0b100..select MBC_MEMN_GLBAC4 access control policy for block B
 *  0b101..select MBC_MEMN_GLBAC5 access control policy for block B
 *  0b110..select MBC_MEMN_GLBAC6 access control policy for block B
 *  0b111..select MBC_MEMN_GLBAC7 access control policy for block B
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W7_MBACSEL3(x) (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W7_MBACSEL3_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W7_MBACSEL3_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W7_NSE3_MASK   (0x8000U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W7_NSE3_SHIFT  (15U)
/*! NSE3 - NonSecure Enable for block B
 *  0b0..Secure accesses to block B are based on corresponding MBACSEL field in this register
 *       (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]), nonsecure accesses to block B are not allowed.
 *  0b1..Secure accesses to block B are not allowed, nonsecure accesses to block B are based on corresponding
 *       MBACSEL field in this register (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]).
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W7_NSE3(x)     (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W7_NSE3_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W7_NSE3_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W7_MBACSEL4_MASK (0x70000U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W7_MBACSEL4_SHIFT (16U)
/*! MBACSEL4 - Memory Block Access Control Select for block B
 *  0b000..select MBC_MEMN_GLBAC0 access control policy for block B
 *  0b001..select MBC_MEMN_GLBAC1 access control policy for block B
 *  0b010..select MBC_MEMN_GLBAC2 access control policy for block B
 *  0b011..select MBC_MEMN_GLBAC3 access control policy for block B
 *  0b100..select MBC_MEMN_GLBAC4 access control policy for block B
 *  0b101..select MBC_MEMN_GLBAC5 access control policy for block B
 *  0b110..select MBC_MEMN_GLBAC6 access control policy for block B
 *  0b111..select MBC_MEMN_GLBAC7 access control policy for block B
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W7_MBACSEL4(x) (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W7_MBACSEL4_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W7_MBACSEL4_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W7_NSE4_MASK   (0x80000U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W7_NSE4_SHIFT  (19U)
/*! NSE4 - NonSecure Enable for block B
 *  0b0..Secure accesses to block B are based on corresponding MBACSEL field in this register
 *       (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]), nonsecure accesses to block B are not allowed.
 *  0b1..Secure accesses to block B are not allowed, nonsecure accesses to block B are based on corresponding
 *       MBACSEL field in this register (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]).
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W7_NSE4(x)     (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W7_NSE4_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W7_NSE4_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W7_MBACSEL5_MASK (0x700000U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W7_MBACSEL5_SHIFT (20U)
/*! MBACSEL5 - Memory Block Access Control Select for block B
 *  0b000..select MBC_MEMN_GLBAC0 access control policy for block B
 *  0b001..select MBC_MEMN_GLBAC1 access control policy for block B
 *  0b010..select MBC_MEMN_GLBAC2 access control policy for block B
 *  0b011..select MBC_MEMN_GLBAC3 access control policy for block B
 *  0b100..select MBC_MEMN_GLBAC4 access control policy for block B
 *  0b101..select MBC_MEMN_GLBAC5 access control policy for block B
 *  0b110..select MBC_MEMN_GLBAC6 access control policy for block B
 *  0b111..select MBC_MEMN_GLBAC7 access control policy for block B
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W7_MBACSEL5(x) (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W7_MBACSEL5_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W7_MBACSEL5_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W7_NSE5_MASK   (0x800000U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W7_NSE5_SHIFT  (23U)
/*! NSE5 - NonSecure Enable for block B
 *  0b0..Secure accesses to block B are based on corresponding MBACSEL field in this register
 *       (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]), nonsecure accesses to block B are not allowed.
 *  0b1..Secure accesses to block B are not allowed, nonsecure accesses to block B are based on corresponding
 *       MBACSEL field in this register (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]).
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W7_NSE5(x)     (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W7_NSE5_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W7_NSE5_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W7_MBACSEL6_MASK (0x7000000U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W7_MBACSEL6_SHIFT (24U)
/*! MBACSEL6 - Memory Block Access Control Select for block B
 *  0b000..select MBC_MEMN_GLBAC0 access control policy for block B
 *  0b001..select MBC_MEMN_GLBAC1 access control policy for block B
 *  0b010..select MBC_MEMN_GLBAC2 access control policy for block B
 *  0b011..select MBC_MEMN_GLBAC3 access control policy for block B
 *  0b100..select MBC_MEMN_GLBAC4 access control policy for block B
 *  0b101..select MBC_MEMN_GLBAC5 access control policy for block B
 *  0b110..select MBC_MEMN_GLBAC6 access control policy for block B
 *  0b111..select MBC_MEMN_GLBAC7 access control policy for block B
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W7_MBACSEL6(x) (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W7_MBACSEL6_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W7_MBACSEL6_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W7_NSE6_MASK   (0x8000000U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W7_NSE6_SHIFT  (27U)
/*! NSE6 - NonSecure Enable for block B
 *  0b0..Secure accesses to block B are based on corresponding MBACSEL field in this register
 *       (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]), nonsecure accesses to block B are not allowed.
 *  0b1..Secure accesses to block B are not allowed, nonsecure accesses to block B are based on corresponding
 *       MBACSEL field in this register (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]).
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W7_NSE6(x)     (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W7_NSE6_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W7_NSE6_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W7_MBACSEL7_MASK (0x70000000U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W7_MBACSEL7_SHIFT (28U)
/*! MBACSEL7 - Memory Block Access Control Select for block B
 *  0b000..select MBC_MEMN_GLBAC0 access control policy for block B
 *  0b001..select MBC_MEMN_GLBAC1 access control policy for block B
 *  0b010..select MBC_MEMN_GLBAC2 access control policy for block B
 *  0b011..select MBC_MEMN_GLBAC3 access control policy for block B
 *  0b100..select MBC_MEMN_GLBAC4 access control policy for block B
 *  0b101..select MBC_MEMN_GLBAC5 access control policy for block B
 *  0b110..select MBC_MEMN_GLBAC6 access control policy for block B
 *  0b111..select MBC_MEMN_GLBAC7 access control policy for block B
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W7_MBACSEL7(x) (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W7_MBACSEL7_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W7_MBACSEL7_MASK)

#define MBC_MBC0_DOM_MEM0_BLK_CFG_W7_NSE7_MASK   (0x80000000U)
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W7_NSE7_SHIFT  (31U)
/*! NSE7 - NonSecure Enable for block B
 *  0b0..Secure accesses to block B are based on corresponding MBACSEL field in this register
 *       (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]), nonsecure accesses to block B are not allowed.
 *  0b1..Secure accesses to block B are not allowed, nonsecure accesses to block B are based on corresponding
 *       MBACSEL field in this register (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]).
 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W7_NSE7(x)     (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM0_BLK_CFG_W7_NSE7_SHIFT)) & MBC_MBC0_DOM_MEM0_BLK_CFG_W7_NSE7_MASK)
/*! @} */

/* The count of MBC_MBC0_DOM_MEM0_BLK_CFG_W7 */
#define MBC_MBC0_DOM_MEM0_BLK_CFG_W7_COUNT       (1U)

/*! @name MBC0_DOM_MEM1_BLK_CFG_W0 - MBC Memory Block Configuration Word */
/*! @{ */

#define MBC_MBC0_DOM_MEM1_BLK_CFG_W0_MBACSEL0_MASK (0x7U)
#define MBC_MBC0_DOM_MEM1_BLK_CFG_W0_MBACSEL0_SHIFT (0U)
/*! MBACSEL0 - Memory Block Access Control Select for block B
 *  0b000..select MBC_MEMN_GLBAC0 access control policy for block B
 *  0b001..select MBC_MEMN_GLBAC1 access control policy for block B
 *  0b010..select MBC_MEMN_GLBAC2 access control policy for block B
 *  0b011..select MBC_MEMN_GLBAC3 access control policy for block B
 *  0b100..select MBC_MEMN_GLBAC4 access control policy for block B
 *  0b101..select MBC_MEMN_GLBAC5 access control policy for block B
 *  0b110..select MBC_MEMN_GLBAC6 access control policy for block B
 *  0b111..select MBC_MEMN_GLBAC7 access control policy for block B
 */
#define MBC_MBC0_DOM_MEM1_BLK_CFG_W0_MBACSEL0(x) (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM1_BLK_CFG_W0_MBACSEL0_SHIFT)) & MBC_MBC0_DOM_MEM1_BLK_CFG_W0_MBACSEL0_MASK)

#define MBC_MBC0_DOM_MEM1_BLK_CFG_W0_NSE0_MASK   (0x8U)
#define MBC_MBC0_DOM_MEM1_BLK_CFG_W0_NSE0_SHIFT  (3U)
/*! NSE0 - NonSecure Enable for block B
 *  0b0..Secure accesses to block B are based on corresponding MBACSEL field in this register
 *       (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]), nonsecure accesses to block B are not allowed.
 *  0b1..Secure accesses to block B are not allowed, nonsecure accesses to block B are based on corresponding
 *       MBACSEL field in this register (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]).
 */
#define MBC_MBC0_DOM_MEM1_BLK_CFG_W0_NSE0(x)     (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM1_BLK_CFG_W0_NSE0_SHIFT)) & MBC_MBC0_DOM_MEM1_BLK_CFG_W0_NSE0_MASK)

#define MBC_MBC0_DOM_MEM1_BLK_CFG_W0_MBACSEL1_MASK (0x70U)
#define MBC_MBC0_DOM_MEM1_BLK_CFG_W0_MBACSEL1_SHIFT (4U)
/*! MBACSEL1 - Memory Block Access Control Select for block B
 *  0b000..select MBC_MEMN_GLBAC0 access control policy for block B
 *  0b001..select MBC_MEMN_GLBAC1 access control policy for block B
 *  0b010..select MBC_MEMN_GLBAC2 access control policy for block B
 *  0b011..select MBC_MEMN_GLBAC3 access control policy for block B
 *  0b100..select MBC_MEMN_GLBAC4 access control policy for block B
 *  0b101..select MBC_MEMN_GLBAC5 access control policy for block B
 *  0b110..select MBC_MEMN_GLBAC6 access control policy for block B
 *  0b111..select MBC_MEMN_GLBAC7 access control policy for block B
 */
#define MBC_MBC0_DOM_MEM1_BLK_CFG_W0_MBACSEL1(x) (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM1_BLK_CFG_W0_MBACSEL1_SHIFT)) & MBC_MBC0_DOM_MEM1_BLK_CFG_W0_MBACSEL1_MASK)

#define MBC_MBC0_DOM_MEM1_BLK_CFG_W0_NSE1_MASK   (0x80U)
#define MBC_MBC0_DOM_MEM1_BLK_CFG_W0_NSE1_SHIFT  (7U)
/*! NSE1 - NonSecure Enable for block B
 *  0b0..Secure accesses to block B are based on corresponding MBACSEL field in this register
 *       (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]), nonsecure accesses to block B are not allowed.
 *  0b1..Secure accesses to block B are not allowed, nonsecure accesses to block B are based on corresponding
 *       MBACSEL field in this register (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]).
 */
#define MBC_MBC0_DOM_MEM1_BLK_CFG_W0_NSE1(x)     (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM1_BLK_CFG_W0_NSE1_SHIFT)) & MBC_MBC0_DOM_MEM1_BLK_CFG_W0_NSE1_MASK)

#define MBC_MBC0_DOM_MEM1_BLK_CFG_W0_MBACSEL2_MASK (0x700U)
#define MBC_MBC0_DOM_MEM1_BLK_CFG_W0_MBACSEL2_SHIFT (8U)
/*! MBACSEL2 - Memory Block Access Control Select for block B
 *  0b000..select MBC_MEMN_GLBAC0 access control policy for block B
 *  0b001..select MBC_MEMN_GLBAC1 access control policy for block B
 *  0b010..select MBC_MEMN_GLBAC2 access control policy for block B
 *  0b011..select MBC_MEMN_GLBAC3 access control policy for block B
 *  0b100..select MBC_MEMN_GLBAC4 access control policy for block B
 *  0b101..select MBC_MEMN_GLBAC5 access control policy for block B
 *  0b110..select MBC_MEMN_GLBAC6 access control policy for block B
 *  0b111..select MBC_MEMN_GLBAC7 access control policy for block B
 */
#define MBC_MBC0_DOM_MEM1_BLK_CFG_W0_MBACSEL2(x) (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM1_BLK_CFG_W0_MBACSEL2_SHIFT)) & MBC_MBC0_DOM_MEM1_BLK_CFG_W0_MBACSEL2_MASK)

#define MBC_MBC0_DOM_MEM1_BLK_CFG_W0_NSE2_MASK   (0x800U)
#define MBC_MBC0_DOM_MEM1_BLK_CFG_W0_NSE2_SHIFT  (11U)
/*! NSE2 - NonSecure Enable for block B
 *  0b0..Secure accesses to block B are based on corresponding MBACSEL field in this register
 *       (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]), nonsecure accesses to block B are not allowed.
 *  0b1..Secure accesses to block B are not allowed, nonsecure accesses to block B are based on corresponding
 *       MBACSEL field in this register (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]).
 */
#define MBC_MBC0_DOM_MEM1_BLK_CFG_W0_NSE2(x)     (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM1_BLK_CFG_W0_NSE2_SHIFT)) & MBC_MBC0_DOM_MEM1_BLK_CFG_W0_NSE2_MASK)

#define MBC_MBC0_DOM_MEM1_BLK_CFG_W0_MBACSEL3_MASK (0x7000U)
#define MBC_MBC0_DOM_MEM1_BLK_CFG_W0_MBACSEL3_SHIFT (12U)
/*! MBACSEL3 - Memory Block Access Control Select for block B
 *  0b000..select MBC_MEMN_GLBAC0 access control policy for block B
 *  0b001..select MBC_MEMN_GLBAC1 access control policy for block B
 *  0b010..select MBC_MEMN_GLBAC2 access control policy for block B
 *  0b011..select MBC_MEMN_GLBAC3 access control policy for block B
 *  0b100..select MBC_MEMN_GLBAC4 access control policy for block B
 *  0b101..select MBC_MEMN_GLBAC5 access control policy for block B
 *  0b110..select MBC_MEMN_GLBAC6 access control policy for block B
 *  0b111..select MBC_MEMN_GLBAC7 access control policy for block B
 */
#define MBC_MBC0_DOM_MEM1_BLK_CFG_W0_MBACSEL3(x) (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM1_BLK_CFG_W0_MBACSEL3_SHIFT)) & MBC_MBC0_DOM_MEM1_BLK_CFG_W0_MBACSEL3_MASK)

#define MBC_MBC0_DOM_MEM1_BLK_CFG_W0_NSE3_MASK   (0x8000U)
#define MBC_MBC0_DOM_MEM1_BLK_CFG_W0_NSE3_SHIFT  (15U)
/*! NSE3 - NonSecure Enable for block B
 *  0b0..Secure accesses to block B are based on corresponding MBACSEL field in this register
 *       (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]), nonsecure accesses to block B are not allowed.
 *  0b1..Secure accesses to block B are not allowed, nonsecure accesses to block B are based on corresponding
 *       MBACSEL field in this register (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]).
 */
#define MBC_MBC0_DOM_MEM1_BLK_CFG_W0_NSE3(x)     (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM1_BLK_CFG_W0_NSE3_SHIFT)) & MBC_MBC0_DOM_MEM1_BLK_CFG_W0_NSE3_MASK)

#define MBC_MBC0_DOM_MEM1_BLK_CFG_W0_MBACSEL4_MASK (0x70000U)
#define MBC_MBC0_DOM_MEM1_BLK_CFG_W0_MBACSEL4_SHIFT (16U)
/*! MBACSEL4 - Memory Block Access Control Select for block B
 *  0b000..select MBC_MEMN_GLBAC0 access control policy for block B
 *  0b001..select MBC_MEMN_GLBAC1 access control policy for block B
 *  0b010..select MBC_MEMN_GLBAC2 access control policy for block B
 *  0b011..select MBC_MEMN_GLBAC3 access control policy for block B
 *  0b100..select MBC_MEMN_GLBAC4 access control policy for block B
 *  0b101..select MBC_MEMN_GLBAC5 access control policy for block B
 *  0b110..select MBC_MEMN_GLBAC6 access control policy for block B
 *  0b111..select MBC_MEMN_GLBAC7 access control policy for block B
 */
#define MBC_MBC0_DOM_MEM1_BLK_CFG_W0_MBACSEL4(x) (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM1_BLK_CFG_W0_MBACSEL4_SHIFT)) & MBC_MBC0_DOM_MEM1_BLK_CFG_W0_MBACSEL4_MASK)

#define MBC_MBC0_DOM_MEM1_BLK_CFG_W0_NSE4_MASK   (0x80000U)
#define MBC_MBC0_DOM_MEM1_BLK_CFG_W0_NSE4_SHIFT  (19U)
/*! NSE4 - NonSecure Enable for block B
 *  0b0..Secure accesses to block B are based on corresponding MBACSEL field in this register
 *       (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]), nonsecure accesses to block B are not allowed.
 *  0b1..Secure accesses to block B are not allowed, nonsecure accesses to block B are based on corresponding
 *       MBACSEL field in this register (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]).
 */
#define MBC_MBC0_DOM_MEM1_BLK_CFG_W0_NSE4(x)     (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM1_BLK_CFG_W0_NSE4_SHIFT)) & MBC_MBC0_DOM_MEM1_BLK_CFG_W0_NSE4_MASK)

#define MBC_MBC0_DOM_MEM1_BLK_CFG_W0_MBACSEL5_MASK (0x700000U)
#define MBC_MBC0_DOM_MEM1_BLK_CFG_W0_MBACSEL5_SHIFT (20U)
/*! MBACSEL5 - Memory Block Access Control Select for block B
 *  0b000..select MBC_MEMN_GLBAC0 access control policy for block B
 *  0b001..select MBC_MEMN_GLBAC1 access control policy for block B
 *  0b010..select MBC_MEMN_GLBAC2 access control policy for block B
 *  0b011..select MBC_MEMN_GLBAC3 access control policy for block B
 *  0b100..select MBC_MEMN_GLBAC4 access control policy for block B
 *  0b101..select MBC_MEMN_GLBAC5 access control policy for block B
 *  0b110..select MBC_MEMN_GLBAC6 access control policy for block B
 *  0b111..select MBC_MEMN_GLBAC7 access control policy for block B
 */
#define MBC_MBC0_DOM_MEM1_BLK_CFG_W0_MBACSEL5(x) (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM1_BLK_CFG_W0_MBACSEL5_SHIFT)) & MBC_MBC0_DOM_MEM1_BLK_CFG_W0_MBACSEL5_MASK)

#define MBC_MBC0_DOM_MEM1_BLK_CFG_W0_NSE5_MASK   (0x800000U)
#define MBC_MBC0_DOM_MEM1_BLK_CFG_W0_NSE5_SHIFT  (23U)
/*! NSE5 - NonSecure Enable for block B
 *  0b0..Secure accesses to block B are based on corresponding MBACSEL field in this register
 *       (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]), nonsecure accesses to block B are not allowed.
 *  0b1..Secure accesses to block B are not allowed, nonsecure accesses to block B are based on corresponding
 *       MBACSEL field in this register (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]).
 */
#define MBC_MBC0_DOM_MEM1_BLK_CFG_W0_NSE5(x)     (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM1_BLK_CFG_W0_NSE5_SHIFT)) & MBC_MBC0_DOM_MEM1_BLK_CFG_W0_NSE5_MASK)

#define MBC_MBC0_DOM_MEM1_BLK_CFG_W0_MBACSEL6_MASK (0x7000000U)
#define MBC_MBC0_DOM_MEM1_BLK_CFG_W0_MBACSEL6_SHIFT (24U)
/*! MBACSEL6 - Memory Block Access Control Select for block B
 *  0b000..select MBC_MEMN_GLBAC0 access control policy for block B
 *  0b001..select MBC_MEMN_GLBAC1 access control policy for block B
 *  0b010..select MBC_MEMN_GLBAC2 access control policy for block B
 *  0b011..select MBC_MEMN_GLBAC3 access control policy for block B
 *  0b100..select MBC_MEMN_GLBAC4 access control policy for block B
 *  0b101..select MBC_MEMN_GLBAC5 access control policy for block B
 *  0b110..select MBC_MEMN_GLBAC6 access control policy for block B
 *  0b111..select MBC_MEMN_GLBAC7 access control policy for block B
 */
#define MBC_MBC0_DOM_MEM1_BLK_CFG_W0_MBACSEL6(x) (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM1_BLK_CFG_W0_MBACSEL6_SHIFT)) & MBC_MBC0_DOM_MEM1_BLK_CFG_W0_MBACSEL6_MASK)

#define MBC_MBC0_DOM_MEM1_BLK_CFG_W0_NSE6_MASK   (0x8000000U)
#define MBC_MBC0_DOM_MEM1_BLK_CFG_W0_NSE6_SHIFT  (27U)
/*! NSE6 - NonSecure Enable for block B
 *  0b0..Secure accesses to block B are based on corresponding MBACSEL field in this register
 *       (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]), nonsecure accesses to block B are not allowed.
 *  0b1..Secure accesses to block B are not allowed, nonsecure accesses to block B are based on corresponding
 *       MBACSEL field in this register (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]).
 */
#define MBC_MBC0_DOM_MEM1_BLK_CFG_W0_NSE6(x)     (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM1_BLK_CFG_W0_NSE6_SHIFT)) & MBC_MBC0_DOM_MEM1_BLK_CFG_W0_NSE6_MASK)

#define MBC_MBC0_DOM_MEM1_BLK_CFG_W0_MBACSEL7_MASK (0x70000000U)
#define MBC_MBC0_DOM_MEM1_BLK_CFG_W0_MBACSEL7_SHIFT (28U)
/*! MBACSEL7 - Memory Block Access Control Select for block B
 *  0b000..select MBC_MEMN_GLBAC0 access control policy for block B
 *  0b001..select MBC_MEMN_GLBAC1 access control policy for block B
 *  0b010..select MBC_MEMN_GLBAC2 access control policy for block B
 *  0b011..select MBC_MEMN_GLBAC3 access control policy for block B
 *  0b100..select MBC_MEMN_GLBAC4 access control policy for block B
 *  0b101..select MBC_MEMN_GLBAC5 access control policy for block B
 *  0b110..select MBC_MEMN_GLBAC6 access control policy for block B
 *  0b111..select MBC_MEMN_GLBAC7 access control policy for block B
 */
#define MBC_MBC0_DOM_MEM1_BLK_CFG_W0_MBACSEL7(x) (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM1_BLK_CFG_W0_MBACSEL7_SHIFT)) & MBC_MBC0_DOM_MEM1_BLK_CFG_W0_MBACSEL7_MASK)

#define MBC_MBC0_DOM_MEM1_BLK_CFG_W0_NSE7_MASK   (0x80000000U)
#define MBC_MBC0_DOM_MEM1_BLK_CFG_W0_NSE7_SHIFT  (31U)
/*! NSE7 - NonSecure Enable for block B
 *  0b0..Secure accesses to block B are based on corresponding MBACSEL field in this register
 *       (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]), nonsecure accesses to block B are not allowed.
 *  0b1..Secure accesses to block B are not allowed, nonsecure accesses to block B are based on corresponding
 *       MBACSEL field in this register (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]).
 */
#define MBC_MBC0_DOM_MEM1_BLK_CFG_W0_NSE7(x)     (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM1_BLK_CFG_W0_NSE7_SHIFT)) & MBC_MBC0_DOM_MEM1_BLK_CFG_W0_NSE7_MASK)
/*! @} */

/* The count of MBC_MBC0_DOM_MEM1_BLK_CFG_W0 */
#define MBC_MBC0_DOM_MEM1_BLK_CFG_W0_COUNT       (1U)

/*! @name MBC0_DOM_MEM1_BLK_CFG_W1 - MBC Memory Block Configuration Word */
/*! @{ */

#define MBC_MBC0_DOM_MEM1_BLK_CFG_W1_MBACSEL0_MASK (0x7U)
#define MBC_MBC0_DOM_MEM1_BLK_CFG_W1_MBACSEL0_SHIFT (0U)
/*! MBACSEL0 - Memory Block Access Control Select for block B
 *  0b000..select MBC_MEMN_GLBAC0 access control policy for block B
 *  0b001..select MBC_MEMN_GLBAC1 access control policy for block B
 *  0b010..select MBC_MEMN_GLBAC2 access control policy for block B
 *  0b011..select MBC_MEMN_GLBAC3 access control policy for block B
 *  0b100..select MBC_MEMN_GLBAC4 access control policy for block B
 *  0b101..select MBC_MEMN_GLBAC5 access control policy for block B
 *  0b110..select MBC_MEMN_GLBAC6 access control policy for block B
 *  0b111..select MBC_MEMN_GLBAC7 access control policy for block B
 */
#define MBC_MBC0_DOM_MEM1_BLK_CFG_W1_MBACSEL0(x) (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM1_BLK_CFG_W1_MBACSEL0_SHIFT)) & MBC_MBC0_DOM_MEM1_BLK_CFG_W1_MBACSEL0_MASK)

#define MBC_MBC0_DOM_MEM1_BLK_CFG_W1_NSE0_MASK   (0x8U)
#define MBC_MBC0_DOM_MEM1_BLK_CFG_W1_NSE0_SHIFT  (3U)
/*! NSE0 - NonSecure Enable for block B
 *  0b0..Secure accesses to block B are based on corresponding MBACSEL field in this register
 *       (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]), nonsecure accesses to block B are not allowed.
 *  0b1..Secure accesses to block B are not allowed, nonsecure accesses to block B are based on corresponding
 *       MBACSEL field in this register (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]).
 */
#define MBC_MBC0_DOM_MEM1_BLK_CFG_W1_NSE0(x)     (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM1_BLK_CFG_W1_NSE0_SHIFT)) & MBC_MBC0_DOM_MEM1_BLK_CFG_W1_NSE0_MASK)

#define MBC_MBC0_DOM_MEM1_BLK_CFG_W1_MBACSEL1_MASK (0x70U)
#define MBC_MBC0_DOM_MEM1_BLK_CFG_W1_MBACSEL1_SHIFT (4U)
/*! MBACSEL1 - Memory Block Access Control Select for block B
 *  0b000..select MBC_MEMN_GLBAC0 access control policy for block B
 *  0b001..select MBC_MEMN_GLBAC1 access control policy for block B
 *  0b010..select MBC_MEMN_GLBAC2 access control policy for block B
 *  0b011..select MBC_MEMN_GLBAC3 access control policy for block B
 *  0b100..select MBC_MEMN_GLBAC4 access control policy for block B
 *  0b101..select MBC_MEMN_GLBAC5 access control policy for block B
 *  0b110..select MBC_MEMN_GLBAC6 access control policy for block B
 *  0b111..select MBC_MEMN_GLBAC7 access control policy for block B
 */
#define MBC_MBC0_DOM_MEM1_BLK_CFG_W1_MBACSEL1(x) (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM1_BLK_CFG_W1_MBACSEL1_SHIFT)) & MBC_MBC0_DOM_MEM1_BLK_CFG_W1_MBACSEL1_MASK)

#define MBC_MBC0_DOM_MEM1_BLK_CFG_W1_NSE1_MASK   (0x80U)
#define MBC_MBC0_DOM_MEM1_BLK_CFG_W1_NSE1_SHIFT  (7U)
/*! NSE1 - NonSecure Enable for block B
 *  0b0..Secure accesses to block B are based on corresponding MBACSEL field in this register
 *       (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]), nonsecure accesses to block B are not allowed.
 *  0b1..Secure accesses to block B are not allowed, nonsecure accesses to block B are based on corresponding
 *       MBACSEL field in this register (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]).
 */
#define MBC_MBC0_DOM_MEM1_BLK_CFG_W1_NSE1(x)     (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM1_BLK_CFG_W1_NSE1_SHIFT)) & MBC_MBC0_DOM_MEM1_BLK_CFG_W1_NSE1_MASK)

#define MBC_MBC0_DOM_MEM1_BLK_CFG_W1_MBACSEL2_MASK (0x700U)
#define MBC_MBC0_DOM_MEM1_BLK_CFG_W1_MBACSEL2_SHIFT (8U)
/*! MBACSEL2 - Memory Block Access Control Select for block B
 *  0b000..select MBC_MEMN_GLBAC0 access control policy for block B
 *  0b001..select MBC_MEMN_GLBAC1 access control policy for block B
 *  0b010..select MBC_MEMN_GLBAC2 access control policy for block B
 *  0b011..select MBC_MEMN_GLBAC3 access control policy for block B
 *  0b100..select MBC_MEMN_GLBAC4 access control policy for block B
 *  0b101..select MBC_MEMN_GLBAC5 access control policy for block B
 *  0b110..select MBC_MEMN_GLBAC6 access control policy for block B
 *  0b111..select MBC_MEMN_GLBAC7 access control policy for block B
 */
#define MBC_MBC0_DOM_MEM1_BLK_CFG_W1_MBACSEL2(x) (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM1_BLK_CFG_W1_MBACSEL2_SHIFT)) & MBC_MBC0_DOM_MEM1_BLK_CFG_W1_MBACSEL2_MASK)

#define MBC_MBC0_DOM_MEM1_BLK_CFG_W1_NSE2_MASK   (0x800U)
#define MBC_MBC0_DOM_MEM1_BLK_CFG_W1_NSE2_SHIFT  (11U)
/*! NSE2 - NonSecure Enable for block B
 *  0b0..Secure accesses to block B are based on corresponding MBACSEL field in this register
 *       (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]), nonsecure accesses to block B are not allowed.
 *  0b1..Secure accesses to block B are not allowed, nonsecure accesses to block B are based on corresponding
 *       MBACSEL field in this register (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]).
 */
#define MBC_MBC0_DOM_MEM1_BLK_CFG_W1_NSE2(x)     (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM1_BLK_CFG_W1_NSE2_SHIFT)) & MBC_MBC0_DOM_MEM1_BLK_CFG_W1_NSE2_MASK)

#define MBC_MBC0_DOM_MEM1_BLK_CFG_W1_MBACSEL3_MASK (0x7000U)
#define MBC_MBC0_DOM_MEM1_BLK_CFG_W1_MBACSEL3_SHIFT (12U)
/*! MBACSEL3 - Memory Block Access Control Select for block B
 *  0b000..select MBC_MEMN_GLBAC0 access control policy for block B
 *  0b001..select MBC_MEMN_GLBAC1 access control policy for block B
 *  0b010..select MBC_MEMN_GLBAC2 access control policy for block B
 *  0b011..select MBC_MEMN_GLBAC3 access control policy for block B
 *  0b100..select MBC_MEMN_GLBAC4 access control policy for block B
 *  0b101..select MBC_MEMN_GLBAC5 access control policy for block B
 *  0b110..select MBC_MEMN_GLBAC6 access control policy for block B
 *  0b111..select MBC_MEMN_GLBAC7 access control policy for block B
 */
#define MBC_MBC0_DOM_MEM1_BLK_CFG_W1_MBACSEL3(x) (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM1_BLK_CFG_W1_MBACSEL3_SHIFT)) & MBC_MBC0_DOM_MEM1_BLK_CFG_W1_MBACSEL3_MASK)

#define MBC_MBC0_DOM_MEM1_BLK_CFG_W1_NSE3_MASK   (0x8000U)
#define MBC_MBC0_DOM_MEM1_BLK_CFG_W1_NSE3_SHIFT  (15U)
/*! NSE3 - NonSecure Enable for block B
 *  0b0..Secure accesses to block B are based on corresponding MBACSEL field in this register
 *       (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]), nonsecure accesses to block B are not allowed.
 *  0b1..Secure accesses to block B are not allowed, nonsecure accesses to block B are based on corresponding
 *       MBACSEL field in this register (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]).
 */
#define MBC_MBC0_DOM_MEM1_BLK_CFG_W1_NSE3(x)     (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM1_BLK_CFG_W1_NSE3_SHIFT)) & MBC_MBC0_DOM_MEM1_BLK_CFG_W1_NSE3_MASK)

#define MBC_MBC0_DOM_MEM1_BLK_CFG_W1_MBACSEL4_MASK (0x70000U)
#define MBC_MBC0_DOM_MEM1_BLK_CFG_W1_MBACSEL4_SHIFT (16U)
/*! MBACSEL4 - Memory Block Access Control Select for block B
 *  0b000..select MBC_MEMN_GLBAC0 access control policy for block B
 *  0b001..select MBC_MEMN_GLBAC1 access control policy for block B
 *  0b010..select MBC_MEMN_GLBAC2 access control policy for block B
 *  0b011..select MBC_MEMN_GLBAC3 access control policy for block B
 *  0b100..select MBC_MEMN_GLBAC4 access control policy for block B
 *  0b101..select MBC_MEMN_GLBAC5 access control policy for block B
 *  0b110..select MBC_MEMN_GLBAC6 access control policy for block B
 *  0b111..select MBC_MEMN_GLBAC7 access control policy for block B
 */
#define MBC_MBC0_DOM_MEM1_BLK_CFG_W1_MBACSEL4(x) (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM1_BLK_CFG_W1_MBACSEL4_SHIFT)) & MBC_MBC0_DOM_MEM1_BLK_CFG_W1_MBACSEL4_MASK)

#define MBC_MBC0_DOM_MEM1_BLK_CFG_W1_NSE4_MASK   (0x80000U)
#define MBC_MBC0_DOM_MEM1_BLK_CFG_W1_NSE4_SHIFT  (19U)
/*! NSE4 - NonSecure Enable for block B
 *  0b0..Secure accesses to block B are based on corresponding MBACSEL field in this register
 *       (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]), nonsecure accesses to block B are not allowed.
 *  0b1..Secure accesses to block B are not allowed, nonsecure accesses to block B are based on corresponding
 *       MBACSEL field in this register (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]).
 */
#define MBC_MBC0_DOM_MEM1_BLK_CFG_W1_NSE4(x)     (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM1_BLK_CFG_W1_NSE4_SHIFT)) & MBC_MBC0_DOM_MEM1_BLK_CFG_W1_NSE4_MASK)

#define MBC_MBC0_DOM_MEM1_BLK_CFG_W1_MBACSEL5_MASK (0x700000U)
#define MBC_MBC0_DOM_MEM1_BLK_CFG_W1_MBACSEL5_SHIFT (20U)
/*! MBACSEL5 - Memory Block Access Control Select for block B
 *  0b000..select MBC_MEMN_GLBAC0 access control policy for block B
 *  0b001..select MBC_MEMN_GLBAC1 access control policy for block B
 *  0b010..select MBC_MEMN_GLBAC2 access control policy for block B
 *  0b011..select MBC_MEMN_GLBAC3 access control policy for block B
 *  0b100..select MBC_MEMN_GLBAC4 access control policy for block B
 *  0b101..select MBC_MEMN_GLBAC5 access control policy for block B
 *  0b110..select MBC_MEMN_GLBAC6 access control policy for block B
 *  0b111..select MBC_MEMN_GLBAC7 access control policy for block B
 */
#define MBC_MBC0_DOM_MEM1_BLK_CFG_W1_MBACSEL5(x) (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM1_BLK_CFG_W1_MBACSEL5_SHIFT)) & MBC_MBC0_DOM_MEM1_BLK_CFG_W1_MBACSEL5_MASK)

#define MBC_MBC0_DOM_MEM1_BLK_CFG_W1_NSE5_MASK   (0x800000U)
#define MBC_MBC0_DOM_MEM1_BLK_CFG_W1_NSE5_SHIFT  (23U)
/*! NSE5 - NonSecure Enable for block B
 *  0b0..Secure accesses to block B are based on corresponding MBACSEL field in this register
 *       (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]), nonsecure accesses to block B are not allowed.
 *  0b1..Secure accesses to block B are not allowed, nonsecure accesses to block B are based on corresponding
 *       MBACSEL field in this register (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]).
 */
#define MBC_MBC0_DOM_MEM1_BLK_CFG_W1_NSE5(x)     (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM1_BLK_CFG_W1_NSE5_SHIFT)) & MBC_MBC0_DOM_MEM1_BLK_CFG_W1_NSE5_MASK)

#define MBC_MBC0_DOM_MEM1_BLK_CFG_W1_MBACSEL6_MASK (0x7000000U)
#define MBC_MBC0_DOM_MEM1_BLK_CFG_W1_MBACSEL6_SHIFT (24U)
/*! MBACSEL6 - Memory Block Access Control Select for block B
 *  0b000..select MBC_MEMN_GLBAC0 access control policy for block B
 *  0b001..select MBC_MEMN_GLBAC1 access control policy for block B
 *  0b010..select MBC_MEMN_GLBAC2 access control policy for block B
 *  0b011..select MBC_MEMN_GLBAC3 access control policy for block B
 *  0b100..select MBC_MEMN_GLBAC4 access control policy for block B
 *  0b101..select MBC_MEMN_GLBAC5 access control policy for block B
 *  0b110..select MBC_MEMN_GLBAC6 access control policy for block B
 *  0b111..select MBC_MEMN_GLBAC7 access control policy for block B
 */
#define MBC_MBC0_DOM_MEM1_BLK_CFG_W1_MBACSEL6(x) (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM1_BLK_CFG_W1_MBACSEL6_SHIFT)) & MBC_MBC0_DOM_MEM1_BLK_CFG_W1_MBACSEL6_MASK)

#define MBC_MBC0_DOM_MEM1_BLK_CFG_W1_NSE6_MASK   (0x8000000U)
#define MBC_MBC0_DOM_MEM1_BLK_CFG_W1_NSE6_SHIFT  (27U)
/*! NSE6 - NonSecure Enable for block B
 *  0b0..Secure accesses to block B are based on corresponding MBACSEL field in this register
 *       (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]), nonsecure accesses to block B are not allowed.
 *  0b1..Secure accesses to block B are not allowed, nonsecure accesses to block B are based on corresponding
 *       MBACSEL field in this register (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]).
 */
#define MBC_MBC0_DOM_MEM1_BLK_CFG_W1_NSE6(x)     (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM1_BLK_CFG_W1_NSE6_SHIFT)) & MBC_MBC0_DOM_MEM1_BLK_CFG_W1_NSE6_MASK)

#define MBC_MBC0_DOM_MEM1_BLK_CFG_W1_MBACSEL7_MASK (0x70000000U)
#define MBC_MBC0_DOM_MEM1_BLK_CFG_W1_MBACSEL7_SHIFT (28U)
/*! MBACSEL7 - Memory Block Access Control Select for block B
 *  0b000..select MBC_MEMN_GLBAC0 access control policy for block B
 *  0b001..select MBC_MEMN_GLBAC1 access control policy for block B
 *  0b010..select MBC_MEMN_GLBAC2 access control policy for block B
 *  0b011..select MBC_MEMN_GLBAC3 access control policy for block B
 *  0b100..select MBC_MEMN_GLBAC4 access control policy for block B
 *  0b101..select MBC_MEMN_GLBAC5 access control policy for block B
 *  0b110..select MBC_MEMN_GLBAC6 access control policy for block B
 *  0b111..select MBC_MEMN_GLBAC7 access control policy for block B
 */
#define MBC_MBC0_DOM_MEM1_BLK_CFG_W1_MBACSEL7(x) (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM1_BLK_CFG_W1_MBACSEL7_SHIFT)) & MBC_MBC0_DOM_MEM1_BLK_CFG_W1_MBACSEL7_MASK)

#define MBC_MBC0_DOM_MEM1_BLK_CFG_W1_NSE7_MASK   (0x80000000U)
#define MBC_MBC0_DOM_MEM1_BLK_CFG_W1_NSE7_SHIFT  (31U)
/*! NSE7 - NonSecure Enable for block B
 *  0b0..Secure accesses to block B are based on corresponding MBACSEL field in this register
 *       (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]), nonsecure accesses to block B are not allowed.
 *  0b1..Secure accesses to block B are not allowed, nonsecure accesses to block B are based on corresponding
 *       MBACSEL field in this register (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]).
 */
#define MBC_MBC0_DOM_MEM1_BLK_CFG_W1_NSE7(x)     (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM1_BLK_CFG_W1_NSE7_SHIFT)) & MBC_MBC0_DOM_MEM1_BLK_CFG_W1_NSE7_MASK)
/*! @} */

/* The count of MBC_MBC0_DOM_MEM1_BLK_CFG_W1 */
#define MBC_MBC0_DOM_MEM1_BLK_CFG_W1_COUNT       (1U)

/*! @name MBC0_DOM_MEM2_BLK_CFG_W0 - MBC Memory Block Configuration Word */
/*! @{ */

#define MBC_MBC0_DOM_MEM2_BLK_CFG_W0_MBACSEL0_MASK (0x7U)
#define MBC_MBC0_DOM_MEM2_BLK_CFG_W0_MBACSEL0_SHIFT (0U)
/*! MBACSEL0 - Memory Block Access Control Select for block B
 *  0b000..select MBC_MEMN_GLBAC0 access control policy for block B
 *  0b001..select MBC_MEMN_GLBAC1 access control policy for block B
 *  0b010..select MBC_MEMN_GLBAC2 access control policy for block B
 *  0b011..select MBC_MEMN_GLBAC3 access control policy for block B
 *  0b100..select MBC_MEMN_GLBAC4 access control policy for block B
 *  0b101..select MBC_MEMN_GLBAC5 access control policy for block B
 *  0b110..select MBC_MEMN_GLBAC6 access control policy for block B
 *  0b111..select MBC_MEMN_GLBAC7 access control policy for block B
 */
#define MBC_MBC0_DOM_MEM2_BLK_CFG_W0_MBACSEL0(x) (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM2_BLK_CFG_W0_MBACSEL0_SHIFT)) & MBC_MBC0_DOM_MEM2_BLK_CFG_W0_MBACSEL0_MASK)

#define MBC_MBC0_DOM_MEM2_BLK_CFG_W0_NSE0_MASK   (0x8U)
#define MBC_MBC0_DOM_MEM2_BLK_CFG_W0_NSE0_SHIFT  (3U)
/*! NSE0 - NonSecure Enable for block B
 *  0b0..Secure accesses to block B are based on corresponding MBACSEL field in this register
 *       (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]), nonsecure accesses to block B are not allowed.
 *  0b1..Secure accesses to block B are not allowed, nonsecure accesses to block B are based on corresponding
 *       MBACSEL field in this register (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]).
 */
#define MBC_MBC0_DOM_MEM2_BLK_CFG_W0_NSE0(x)     (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM2_BLK_CFG_W0_NSE0_SHIFT)) & MBC_MBC0_DOM_MEM2_BLK_CFG_W0_NSE0_MASK)

#define MBC_MBC0_DOM_MEM2_BLK_CFG_W0_MBACSEL1_MASK (0x70U)
#define MBC_MBC0_DOM_MEM2_BLK_CFG_W0_MBACSEL1_SHIFT (4U)
/*! MBACSEL1 - Memory Block Access Control Select for block B
 *  0b000..select MBC_MEMN_GLBAC0 access control policy for block B
 *  0b001..select MBC_MEMN_GLBAC1 access control policy for block B
 *  0b010..select MBC_MEMN_GLBAC2 access control policy for block B
 *  0b011..select MBC_MEMN_GLBAC3 access control policy for block B
 *  0b100..select MBC_MEMN_GLBAC4 access control policy for block B
 *  0b101..select MBC_MEMN_GLBAC5 access control policy for block B
 *  0b110..select MBC_MEMN_GLBAC6 access control policy for block B
 *  0b111..select MBC_MEMN_GLBAC7 access control policy for block B
 */
#define MBC_MBC0_DOM_MEM2_BLK_CFG_W0_MBACSEL1(x) (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM2_BLK_CFG_W0_MBACSEL1_SHIFT)) & MBC_MBC0_DOM_MEM2_BLK_CFG_W0_MBACSEL1_MASK)

#define MBC_MBC0_DOM_MEM2_BLK_CFG_W0_NSE1_MASK   (0x80U)
#define MBC_MBC0_DOM_MEM2_BLK_CFG_W0_NSE1_SHIFT  (7U)
/*! NSE1 - NonSecure Enable for block B
 *  0b0..Secure accesses to block B are based on corresponding MBACSEL field in this register
 *       (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]), nonsecure accesses to block B are not allowed.
 *  0b1..Secure accesses to block B are not allowed, nonsecure accesses to block B are based on corresponding
 *       MBACSEL field in this register (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]).
 */
#define MBC_MBC0_DOM_MEM2_BLK_CFG_W0_NSE1(x)     (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM2_BLK_CFG_W0_NSE1_SHIFT)) & MBC_MBC0_DOM_MEM2_BLK_CFG_W0_NSE1_MASK)

#define MBC_MBC0_DOM_MEM2_BLK_CFG_W0_MBACSEL2_MASK (0x700U)
#define MBC_MBC0_DOM_MEM2_BLK_CFG_W0_MBACSEL2_SHIFT (8U)
/*! MBACSEL2 - Memory Block Access Control Select for block B
 *  0b000..select MBC_MEMN_GLBAC0 access control policy for block B
 *  0b001..select MBC_MEMN_GLBAC1 access control policy for block B
 *  0b010..select MBC_MEMN_GLBAC2 access control policy for block B
 *  0b011..select MBC_MEMN_GLBAC3 access control policy for block B
 *  0b100..select MBC_MEMN_GLBAC4 access control policy for block B
 *  0b101..select MBC_MEMN_GLBAC5 access control policy for block B
 *  0b110..select MBC_MEMN_GLBAC6 access control policy for block B
 *  0b111..select MBC_MEMN_GLBAC7 access control policy for block B
 */
#define MBC_MBC0_DOM_MEM2_BLK_CFG_W0_MBACSEL2(x) (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM2_BLK_CFG_W0_MBACSEL2_SHIFT)) & MBC_MBC0_DOM_MEM2_BLK_CFG_W0_MBACSEL2_MASK)

#define MBC_MBC0_DOM_MEM2_BLK_CFG_W0_NSE2_MASK   (0x800U)
#define MBC_MBC0_DOM_MEM2_BLK_CFG_W0_NSE2_SHIFT  (11U)
/*! NSE2 - NonSecure Enable for block B
 *  0b0..Secure accesses to block B are based on corresponding MBACSEL field in this register
 *       (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]), nonsecure accesses to block B are not allowed.
 *  0b1..Secure accesses to block B are not allowed, nonsecure accesses to block B are based on corresponding
 *       MBACSEL field in this register (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]).
 */
#define MBC_MBC0_DOM_MEM2_BLK_CFG_W0_NSE2(x)     (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM2_BLK_CFG_W0_NSE2_SHIFT)) & MBC_MBC0_DOM_MEM2_BLK_CFG_W0_NSE2_MASK)

#define MBC_MBC0_DOM_MEM2_BLK_CFG_W0_MBACSEL3_MASK (0x7000U)
#define MBC_MBC0_DOM_MEM2_BLK_CFG_W0_MBACSEL3_SHIFT (12U)
/*! MBACSEL3 - Memory Block Access Control Select for block B
 *  0b000..select MBC_MEMN_GLBAC0 access control policy for block B
 *  0b001..select MBC_MEMN_GLBAC1 access control policy for block B
 *  0b010..select MBC_MEMN_GLBAC2 access control policy for block B
 *  0b011..select MBC_MEMN_GLBAC3 access control policy for block B
 *  0b100..select MBC_MEMN_GLBAC4 access control policy for block B
 *  0b101..select MBC_MEMN_GLBAC5 access control policy for block B
 *  0b110..select MBC_MEMN_GLBAC6 access control policy for block B
 *  0b111..select MBC_MEMN_GLBAC7 access control policy for block B
 */
#define MBC_MBC0_DOM_MEM2_BLK_CFG_W0_MBACSEL3(x) (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM2_BLK_CFG_W0_MBACSEL3_SHIFT)) & MBC_MBC0_DOM_MEM2_BLK_CFG_W0_MBACSEL3_MASK)

#define MBC_MBC0_DOM_MEM2_BLK_CFG_W0_NSE3_MASK   (0x8000U)
#define MBC_MBC0_DOM_MEM2_BLK_CFG_W0_NSE3_SHIFT  (15U)
/*! NSE3 - NonSecure Enable for block B
 *  0b0..Secure accesses to block B are based on corresponding MBACSEL field in this register
 *       (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]), nonsecure accesses to block B are not allowed.
 *  0b1..Secure accesses to block B are not allowed, nonsecure accesses to block B are based on corresponding
 *       MBACSEL field in this register (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]).
 */
#define MBC_MBC0_DOM_MEM2_BLK_CFG_W0_NSE3(x)     (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM2_BLK_CFG_W0_NSE3_SHIFT)) & MBC_MBC0_DOM_MEM2_BLK_CFG_W0_NSE3_MASK)

#define MBC_MBC0_DOM_MEM2_BLK_CFG_W0_MBACSEL4_MASK (0x70000U)
#define MBC_MBC0_DOM_MEM2_BLK_CFG_W0_MBACSEL4_SHIFT (16U)
/*! MBACSEL4 - Memory Block Access Control Select for block B
 *  0b000..select MBC_MEMN_GLBAC0 access control policy for block B
 *  0b001..select MBC_MEMN_GLBAC1 access control policy for block B
 *  0b010..select MBC_MEMN_GLBAC2 access control policy for block B
 *  0b011..select MBC_MEMN_GLBAC3 access control policy for block B
 *  0b100..select MBC_MEMN_GLBAC4 access control policy for block B
 *  0b101..select MBC_MEMN_GLBAC5 access control policy for block B
 *  0b110..select MBC_MEMN_GLBAC6 access control policy for block B
 *  0b111..select MBC_MEMN_GLBAC7 access control policy for block B
 */
#define MBC_MBC0_DOM_MEM2_BLK_CFG_W0_MBACSEL4(x) (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM2_BLK_CFG_W0_MBACSEL4_SHIFT)) & MBC_MBC0_DOM_MEM2_BLK_CFG_W0_MBACSEL4_MASK)

#define MBC_MBC0_DOM_MEM2_BLK_CFG_W0_NSE4_MASK   (0x80000U)
#define MBC_MBC0_DOM_MEM2_BLK_CFG_W0_NSE4_SHIFT  (19U)
/*! NSE4 - NonSecure Enable for block B
 *  0b0..Secure accesses to block B are based on corresponding MBACSEL field in this register
 *       (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]), nonsecure accesses to block B are not allowed.
 *  0b1..Secure accesses to block B are not allowed, nonsecure accesses to block B are based on corresponding
 *       MBACSEL field in this register (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]).
 */
#define MBC_MBC0_DOM_MEM2_BLK_CFG_W0_NSE4(x)     (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM2_BLK_CFG_W0_NSE4_SHIFT)) & MBC_MBC0_DOM_MEM2_BLK_CFG_W0_NSE4_MASK)

#define MBC_MBC0_DOM_MEM2_BLK_CFG_W0_MBACSEL5_MASK (0x700000U)
#define MBC_MBC0_DOM_MEM2_BLK_CFG_W0_MBACSEL5_SHIFT (20U)
/*! MBACSEL5 - Memory Block Access Control Select for block B
 *  0b000..select MBC_MEMN_GLBAC0 access control policy for block B
 *  0b001..select MBC_MEMN_GLBAC1 access control policy for block B
 *  0b010..select MBC_MEMN_GLBAC2 access control policy for block B
 *  0b011..select MBC_MEMN_GLBAC3 access control policy for block B
 *  0b100..select MBC_MEMN_GLBAC4 access control policy for block B
 *  0b101..select MBC_MEMN_GLBAC5 access control policy for block B
 *  0b110..select MBC_MEMN_GLBAC6 access control policy for block B
 *  0b111..select MBC_MEMN_GLBAC7 access control policy for block B
 */
#define MBC_MBC0_DOM_MEM2_BLK_CFG_W0_MBACSEL5(x) (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM2_BLK_CFG_W0_MBACSEL5_SHIFT)) & MBC_MBC0_DOM_MEM2_BLK_CFG_W0_MBACSEL5_MASK)

#define MBC_MBC0_DOM_MEM2_BLK_CFG_W0_NSE5_MASK   (0x800000U)
#define MBC_MBC0_DOM_MEM2_BLK_CFG_W0_NSE5_SHIFT  (23U)
/*! NSE5 - NonSecure Enable for block B
 *  0b0..Secure accesses to block B are based on corresponding MBACSEL field in this register
 *       (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]), nonsecure accesses to block B are not allowed.
 *  0b1..Secure accesses to block B are not allowed, nonsecure accesses to block B are based on corresponding
 *       MBACSEL field in this register (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]).
 */
#define MBC_MBC0_DOM_MEM2_BLK_CFG_W0_NSE5(x)     (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM2_BLK_CFG_W0_NSE5_SHIFT)) & MBC_MBC0_DOM_MEM2_BLK_CFG_W0_NSE5_MASK)

#define MBC_MBC0_DOM_MEM2_BLK_CFG_W0_MBACSEL6_MASK (0x7000000U)
#define MBC_MBC0_DOM_MEM2_BLK_CFG_W0_MBACSEL6_SHIFT (24U)
/*! MBACSEL6 - Memory Block Access Control Select for block B
 *  0b000..select MBC_MEMN_GLBAC0 access control policy for block B
 *  0b001..select MBC_MEMN_GLBAC1 access control policy for block B
 *  0b010..select MBC_MEMN_GLBAC2 access control policy for block B
 *  0b011..select MBC_MEMN_GLBAC3 access control policy for block B
 *  0b100..select MBC_MEMN_GLBAC4 access control policy for block B
 *  0b101..select MBC_MEMN_GLBAC5 access control policy for block B
 *  0b110..select MBC_MEMN_GLBAC6 access control policy for block B
 *  0b111..select MBC_MEMN_GLBAC7 access control policy for block B
 */
#define MBC_MBC0_DOM_MEM2_BLK_CFG_W0_MBACSEL6(x) (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM2_BLK_CFG_W0_MBACSEL6_SHIFT)) & MBC_MBC0_DOM_MEM2_BLK_CFG_W0_MBACSEL6_MASK)

#define MBC_MBC0_DOM_MEM2_BLK_CFG_W0_NSE6_MASK   (0x8000000U)
#define MBC_MBC0_DOM_MEM2_BLK_CFG_W0_NSE6_SHIFT  (27U)
/*! NSE6 - NonSecure Enable for block B
 *  0b0..Secure accesses to block B are based on corresponding MBACSEL field in this register
 *       (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]), nonsecure accesses to block B are not allowed.
 *  0b1..Secure accesses to block B are not allowed, nonsecure accesses to block B are based on corresponding
 *       MBACSEL field in this register (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]).
 */
#define MBC_MBC0_DOM_MEM2_BLK_CFG_W0_NSE6(x)     (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM2_BLK_CFG_W0_NSE6_SHIFT)) & MBC_MBC0_DOM_MEM2_BLK_CFG_W0_NSE6_MASK)

#define MBC_MBC0_DOM_MEM2_BLK_CFG_W0_MBACSEL7_MASK (0x70000000U)
#define MBC_MBC0_DOM_MEM2_BLK_CFG_W0_MBACSEL7_SHIFT (28U)
/*! MBACSEL7 - Memory Block Access Control Select for block B
 *  0b000..select MBC_MEMN_GLBAC0 access control policy for block B
 *  0b001..select MBC_MEMN_GLBAC1 access control policy for block B
 *  0b010..select MBC_MEMN_GLBAC2 access control policy for block B
 *  0b011..select MBC_MEMN_GLBAC3 access control policy for block B
 *  0b100..select MBC_MEMN_GLBAC4 access control policy for block B
 *  0b101..select MBC_MEMN_GLBAC5 access control policy for block B
 *  0b110..select MBC_MEMN_GLBAC6 access control policy for block B
 *  0b111..select MBC_MEMN_GLBAC7 access control policy for block B
 */
#define MBC_MBC0_DOM_MEM2_BLK_CFG_W0_MBACSEL7(x) (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM2_BLK_CFG_W0_MBACSEL7_SHIFT)) & MBC_MBC0_DOM_MEM2_BLK_CFG_W0_MBACSEL7_MASK)

#define MBC_MBC0_DOM_MEM2_BLK_CFG_W0_NSE7_MASK   (0x80000000U)
#define MBC_MBC0_DOM_MEM2_BLK_CFG_W0_NSE7_SHIFT  (31U)
/*! NSE7 - NonSecure Enable for block B
 *  0b0..Secure accesses to block B are based on corresponding MBACSEL field in this register
 *       (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]), nonsecure accesses to block B are not allowed.
 *  0b1..Secure accesses to block B are not allowed, nonsecure accesses to block B are based on corresponding
 *       MBACSEL field in this register (MBCm_DOMd_MEMs_BLK_CFG_Ww[MBACSEL]).
 */
#define MBC_MBC0_DOM_MEM2_BLK_CFG_W0_NSE7(x)     (((uint32_t)(((uint32_t)(x)) << MBC_MBC0_DOM_MEM2_BLK_CFG_W0_NSE7_SHIFT)) & MBC_MBC0_DOM_MEM2_BLK_CFG_W0_NSE7_MASK)
/*! @} */

/* The count of MBC_MBC0_DOM_MEM2_BLK_CFG_W0 */
#define MBC_MBC0_DOM_MEM2_BLK_CFG_W0_COUNT       (1U)


/*!
 * @}
 */ /* end of group MBC_Register_Masks */


/*!
 * @}
 */ /* end of group MBC_Peripheral_Access_Layer */


/*
** End of section using anonymous unions
*/

#if defined(__ARMCC_VERSION)
  #if (__ARMCC_VERSION >= 6010050)
    #pragma clang diagnostic pop
  #else
    #pragma pop
  #endif
#elif defined(__GNUC__)
  /* leave anonymous unions enabled */
#elif defined(__IAR_SYSTEMS_ICC__)
  #pragma language=default
#else
  #error Not supported compiler type
#endif

/*!
 * @}
 */ /* end of group Peripheral_access_layer */


#endif  /* MBC_H_ */

