/*
** ###################################################################
**     Processors:          MCXA144VFT
**                          MCXA144VLH
**                          MCXA144VLL
**                          MCXA144VMP
**                          MCXA144VPJ
**                          MCXA145VFT
**                          MCXA145VLH
**                          MCXA145VLL
**                          MCXA145VMP
**                          MCXA145VPJ
**                          MCXA146VFT
**                          MCXA146VLH
**                          MCXA146VLL
**                          MCXA146VMP
**                          MCXA146VPJ
**                          MCXA154VFT
**                          MCXA154VLH
**                          MCXA154VLL
**                          MCXA154VMP
**                          MCXA154VPJ
**                          MCXA155VFT
**                          MCXA155VLH
**                          MCXA155VLL
**                          MCXA155VMP
**                          MCXA155VPJ
**                          MCXA156VFT
**                          MCXA156VLH
**                          MCXA156VLL
**                          MCXA156VMP
**                          MCXA156VPJ
**
**     Version:             rev. 2.0, 2024-10-29
**     Build:               b250521
**
**     Abstract:
**         CMSIS Peripheral Access Layer for GLIKEY
**
**     Copyright 1997-2016 Freescale Semiconductor, Inc.
**     Copyright 2016-2025 NXP
**     SPDX-License-Identifier: BSD-3-Clause
**
**     http:                 www.nxp.com
**     mail:                 support@nxp.com
**
**     Revisions:
**     - rev. 1.0 (2022-03-29)
**         Initial version based on v0.1UM
**     - rev. 2.0 (2024-10-29)
**         Change the device header file from single flat file to multiple files based on peripherals,
**         each peripheral with dedicated header file located in periphN folder.
**
** ###################################################################
*/

/*!
 * @file PERI_GLIKEY.h
 * @version 2.0
 * @date 2024-10-29
 * @brief CMSIS Peripheral Access Layer for GLIKEY
 *
 * CMSIS Peripheral Access Layer for GLIKEY
 */

#if !defined(PERI_GLIKEY_H_)
#define PERI_GLIKEY_H_                           /**< Symbol preventing repeated inclusion */

#if (defined(CPU_MCXA144VFT) || defined(CPU_MCXA144VLH) || defined(CPU_MCXA144VLL) || defined(CPU_MCXA144VMP) || defined(CPU_MCXA144VPJ))
#include "MCXA144_COMMON.h"
#elif (defined(CPU_MCXA145VFT) || defined(CPU_MCXA145VLH) || defined(CPU_MCXA145VLL) || defined(CPU_MCXA145VMP) || defined(CPU_MCXA145VPJ))
#include "MCXA145_COMMON.h"
#elif (defined(CPU_MCXA146VFT) || defined(CPU_MCXA146VLH) || defined(CPU_MCXA146VLL) || defined(CPU_MCXA146VMP) || defined(CPU_MCXA146VPJ))
#include "MCXA146_COMMON.h"
#elif (defined(CPU_MCXA154VFT) || defined(CPU_MCXA154VLH) || defined(CPU_MCXA154VLL) || defined(CPU_MCXA154VMP) || defined(CPU_MCXA154VPJ))
#include "MCXA154_COMMON.h"
#elif (defined(CPU_MCXA155VFT) || defined(CPU_MCXA155VLH) || defined(CPU_MCXA155VLL) || defined(CPU_MCXA155VMP) || defined(CPU_MCXA155VPJ))
#include "MCXA155_COMMON.h"
#elif (defined(CPU_MCXA156VFT) || defined(CPU_MCXA156VLH) || defined(CPU_MCXA156VLL) || defined(CPU_MCXA156VMP) || defined(CPU_MCXA156VPJ))
#include "MCXA156_COMMON.h"
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
   -- GLIKEY Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup GLIKEY_Peripheral_Access_Layer GLIKEY Peripheral Access Layer
 * @{
 */

/** GLIKEY - Register Layout Typedef */
typedef struct {
  __IO uint32_t CTRL_0;                            /**< Control Register 0 SFR, offset: 0x0 */
  __IO uint32_t CTRL_1;                            /**< Control Register 1 SFR, offset: 0x4 */
  __IO uint32_t INTR_CTRL;                         /**< Interrupt Control, offset: 0x8 */
  __I  uint32_t STATUS;                            /**< Status, offset: 0xC */
       uint8_t RESERVED_0[236];
  __I  uint32_t VERSION;                           /**< IP Version, offset: 0xFC */
} GLIKEY_Type;

/* ----------------------------------------------------------------------------
   -- GLIKEY Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup GLIKEY_Register_Masks GLIKEY Register Masks
 * @{
 */

/*! @name CTRL_0 - Control Register 0 SFR */
/*! @{ */

#define GLIKEY_CTRL_0_WRITE_INDEX_MASK           (0xFFU)
#define GLIKEY_CTRL_0_WRITE_INDEX_SHIFT          (0U)
/*! WRITE_INDEX - Write Index */
#define GLIKEY_CTRL_0_WRITE_INDEX(x)             (((uint32_t)(((uint32_t)(x)) << GLIKEY_CTRL_0_WRITE_INDEX_SHIFT)) & GLIKEY_CTRL_0_WRITE_INDEX_MASK)

#define GLIKEY_CTRL_0_RESERVED15_MASK            (0xFF00U)
#define GLIKEY_CTRL_0_RESERVED15_SHIFT           (8U)
/*! RESERVED15 - Reserved for Future Use */
#define GLIKEY_CTRL_0_RESERVED15(x)              (((uint32_t)(((uint32_t)(x)) << GLIKEY_CTRL_0_RESERVED15_SHIFT)) & GLIKEY_CTRL_0_RESERVED15_MASK)

#define GLIKEY_CTRL_0_WR_EN_0_MASK               (0x30000U)
#define GLIKEY_CTRL_0_WR_EN_0_SHIFT              (16U)
/*! WR_EN_0 - Write Enable 0 */
#define GLIKEY_CTRL_0_WR_EN_0(x)                 (((uint32_t)(((uint32_t)(x)) << GLIKEY_CTRL_0_WR_EN_0_SHIFT)) & GLIKEY_CTRL_0_WR_EN_0_MASK)

#define GLIKEY_CTRL_0_SFT_RST_MASK               (0x40000U)
#define GLIKEY_CTRL_0_SFT_RST_SHIFT              (18U)
/*! SFT_RST - Soft reset for the core reset (SFR configuration will be preseved).This register reads as 0
 *  0b0..No effect
 *  0b1..Triggers the soft reset
 */
#define GLIKEY_CTRL_0_SFT_RST(x)                 (((uint32_t)(((uint32_t)(x)) << GLIKEY_CTRL_0_SFT_RST_SHIFT)) & GLIKEY_CTRL_0_SFT_RST_MASK)

#define GLIKEY_CTRL_0_RESERVED31_MASK            (0xFFF80000U)
#define GLIKEY_CTRL_0_RESERVED31_SHIFT           (19U)
/*! RESERVED31 - Reserved for Future Use */
#define GLIKEY_CTRL_0_RESERVED31(x)              (((uint32_t)(((uint32_t)(x)) << GLIKEY_CTRL_0_RESERVED31_SHIFT)) & GLIKEY_CTRL_0_RESERVED31_MASK)
/*! @} */

/*! @name CTRL_1 - Control Register 1 SFR */
/*! @{ */

#define GLIKEY_CTRL_1_READ_INDEX_MASK            (0xFFU)
#define GLIKEY_CTRL_1_READ_INDEX_SHIFT           (0U)
/*! READ_INDEX - Index status, Writing an index value to this register will request the block to return the lock status of this index. */
#define GLIKEY_CTRL_1_READ_INDEX(x)              (((uint32_t)(((uint32_t)(x)) << GLIKEY_CTRL_1_READ_INDEX_SHIFT)) & GLIKEY_CTRL_1_READ_INDEX_MASK)

#define GLIKEY_CTRL_1_RESERVED15_MASK            (0xFF00U)
#define GLIKEY_CTRL_1_RESERVED15_SHIFT           (8U)
/*! RESERVED15 - Reserved for Future Use */
#define GLIKEY_CTRL_1_RESERVED15(x)              (((uint32_t)(((uint32_t)(x)) << GLIKEY_CTRL_1_RESERVED15_SHIFT)) & GLIKEY_CTRL_1_RESERVED15_MASK)

#define GLIKEY_CTRL_1_WR_EN_1_MASK               (0x30000U)
#define GLIKEY_CTRL_1_WR_EN_1_SHIFT              (16U)
/*! WR_EN_1 - Write Enable One */
#define GLIKEY_CTRL_1_WR_EN_1(x)                 (((uint32_t)(((uint32_t)(x)) << GLIKEY_CTRL_1_WR_EN_1_SHIFT)) & GLIKEY_CTRL_1_WR_EN_1_MASK)

#define GLIKEY_CTRL_1_SFR_LOCK_MASK              (0x3C0000U)
#define GLIKEY_CTRL_1_SFR_LOCK_SHIFT             (18U)
/*! SFR_LOCK - LOCK register for GLIKEY */
#define GLIKEY_CTRL_1_SFR_LOCK(x)                (((uint32_t)(((uint32_t)(x)) << GLIKEY_CTRL_1_SFR_LOCK_SHIFT)) & GLIKEY_CTRL_1_SFR_LOCK_MASK)

#define GLIKEY_CTRL_1_RESERVED31_MASK            (0xFFC00000U)
#define GLIKEY_CTRL_1_RESERVED31_SHIFT           (22U)
/*! RESERVED31 - Reserved for Future Use */
#define GLIKEY_CTRL_1_RESERVED31(x)              (((uint32_t)(((uint32_t)(x)) << GLIKEY_CTRL_1_RESERVED31_SHIFT)) & GLIKEY_CTRL_1_RESERVED31_MASK)
/*! @} */

/*! @name INTR_CTRL - Interrupt Control */
/*! @{ */

#define GLIKEY_INTR_CTRL_INT_EN_MASK             (0x1U)
#define GLIKEY_INTR_CTRL_INT_EN_SHIFT            (0U)
/*! INT_EN - Interrupt Enable. Writing a 1, Interrupt asserts on Interrupt output port */
#define GLIKEY_INTR_CTRL_INT_EN(x)               (((uint32_t)(((uint32_t)(x)) << GLIKEY_INTR_CTRL_INT_EN_SHIFT)) & GLIKEY_INTR_CTRL_INT_EN_MASK)

#define GLIKEY_INTR_CTRL_INT_CLR_MASK            (0x2U)
#define GLIKEY_INTR_CTRL_INT_CLR_SHIFT           (1U)
/*! INT_CLR - Interrupt Clear. Writing a 1 to this register creates a single interrupt clear pulse. This register reads as 0 */
#define GLIKEY_INTR_CTRL_INT_CLR(x)              (((uint32_t)(((uint32_t)(x)) << GLIKEY_INTR_CTRL_INT_CLR_SHIFT)) & GLIKEY_INTR_CTRL_INT_CLR_MASK)

#define GLIKEY_INTR_CTRL_INT_SET_MASK            (0x4U)
#define GLIKEY_INTR_CTRL_INT_SET_SHIFT           (2U)
/*! INT_SET - Interrupt Set. Writing a 1 to this register asserts the interrupt. This register reads as 0
 *  0b0..No effect
 *  0b1..Triggers interrupt
 */
#define GLIKEY_INTR_CTRL_INT_SET(x)              (((uint32_t)(((uint32_t)(x)) << GLIKEY_INTR_CTRL_INT_SET_SHIFT)) & GLIKEY_INTR_CTRL_INT_SET_MASK)

#define GLIKEY_INTR_CTRL_RESERVED31_MASK         (0xFFFFFFF8U)
#define GLIKEY_INTR_CTRL_RESERVED31_SHIFT        (3U)
/*! RESERVED31 - Reserved for Future Use */
#define GLIKEY_INTR_CTRL_RESERVED31(x)           (((uint32_t)(((uint32_t)(x)) << GLIKEY_INTR_CTRL_RESERVED31_SHIFT)) & GLIKEY_INTR_CTRL_RESERVED31_MASK)
/*! @} */

/*! @name STATUS - Status */
/*! @{ */

#define GLIKEY_STATUS_INT_STATUS_MASK            (0x1U)
#define GLIKEY_STATUS_INT_STATUS_SHIFT           (0U)
/*! INT_STATUS - Interrupt Status.
 *  0b0..No effect
 *  0b1..Triggers interrupt
 */
#define GLIKEY_STATUS_INT_STATUS(x)              (((uint32_t)(((uint32_t)(x)) << GLIKEY_STATUS_INT_STATUS_SHIFT)) & GLIKEY_STATUS_INT_STATUS_MASK)

#define GLIKEY_STATUS_LOCK_STATUS_MASK           (0x2U)
#define GLIKEY_STATUS_LOCK_STATUS_SHIFT          (1U)
/*! LOCK_STATUS - Provides the current lock status of indexes.
 *  0b0..Current read index is not locked
 *  0b1..Current read index is locked
 */
#define GLIKEY_STATUS_LOCK_STATUS(x)             (((uint32_t)(((uint32_t)(x)) << GLIKEY_STATUS_LOCK_STATUS_SHIFT)) & GLIKEY_STATUS_LOCK_STATUS_MASK)

#define GLIKEY_STATUS_ERROR_STATUS_MASK          (0x1CU)
#define GLIKEY_STATUS_ERROR_STATUS_SHIFT         (2U)
/*! ERROR_STATUS - Status of the Error
 *  0b000..No error
 *  0b001..FSM error has occurred
 *  0b010..Write index out of the bound (OOB) error
 *  0b011..Write index OOB and FSM error
 *  0b100..Read index OOB error
 *  0b110..Write index and read index OOB error
 *  0b111..Read index OOB, write index OOB, and FSM error
 */
#define GLIKEY_STATUS_ERROR_STATUS(x)            (((uint32_t)(((uint32_t)(x)) << GLIKEY_STATUS_ERROR_STATUS_SHIFT)) & GLIKEY_STATUS_ERROR_STATUS_MASK)

#define GLIKEY_STATUS_RESERVED18_MASK            (0x7FFE0U)
#define GLIKEY_STATUS_RESERVED18_SHIFT           (5U)
/*! RESERVED18 - Reserved for Future Use */
#define GLIKEY_STATUS_RESERVED18(x)              (((uint32_t)(((uint32_t)(x)) << GLIKEY_STATUS_RESERVED18_SHIFT)) & GLIKEY_STATUS_RESERVED18_MASK)

#define GLIKEY_STATUS_FSM_STATE_MASK             (0xFFF80000U)
#define GLIKEY_STATUS_FSM_STATE_SHIFT            (19U)
/*! FSM_STATE - Status of FSM */
#define GLIKEY_STATUS_FSM_STATE(x)               (((uint32_t)(((uint32_t)(x)) << GLIKEY_STATUS_FSM_STATE_SHIFT)) & GLIKEY_STATUS_FSM_STATE_MASK)
/*! @} */

/*! @name VERSION - IP Version */
/*! @{ */

#define GLIKEY_VERSION_RESERVED3_MASK            (0xFU)
#define GLIKEY_VERSION_RESERVED3_SHIFT           (0U)
/*! Reserved3 - Reserved */
#define GLIKEY_VERSION_RESERVED3(x)              (((uint32_t)(((uint32_t)(x)) << GLIKEY_VERSION_RESERVED3_SHIFT)) & GLIKEY_VERSION_RESERVED3_MASK)

#define GLIKEY_VERSION_RESERVED7_MASK            (0xF0U)
#define GLIKEY_VERSION_RESERVED7_SHIFT           (4U)
/*! Reserved7 - Reserved */
#define GLIKEY_VERSION_RESERVED7(x)              (((uint32_t)(((uint32_t)(x)) << GLIKEY_VERSION_RESERVED7_SHIFT)) & GLIKEY_VERSION_RESERVED7_MASK)

#define GLIKEY_VERSION_RESERVED11_MASK           (0xF00U)
#define GLIKEY_VERSION_RESERVED11_SHIFT          (8U)
/*! Reserved11 - Reserved */
#define GLIKEY_VERSION_RESERVED11(x)             (((uint32_t)(((uint32_t)(x)) << GLIKEY_VERSION_RESERVED11_SHIFT)) & GLIKEY_VERSION_RESERVED11_MASK)

#define GLIKEY_VERSION_RESERVED15_MASK           (0xF000U)
#define GLIKEY_VERSION_RESERVED15_SHIFT          (12U)
/*! Reserved15 - Reserved */
#define GLIKEY_VERSION_RESERVED15(x)             (((uint32_t)(((uint32_t)(x)) << GLIKEY_VERSION_RESERVED15_SHIFT)) & GLIKEY_VERSION_RESERVED15_MASK)

#define GLIKEY_VERSION_MILESTONE_MASK            (0x30000U)
#define GLIKEY_VERSION_MILESTONE_SHIFT           (16U)
/*! MILESTONE - Release milestone. 00-PREL, 01-BR, 10-SI, 11-GO. */
#define GLIKEY_VERSION_MILESTONE(x)              (((uint32_t)(((uint32_t)(x)) << GLIKEY_VERSION_MILESTONE_SHIFT)) & GLIKEY_VERSION_MILESTONE_MASK)

#define GLIKEY_VERSION_FSM_CONFIG_MASK           (0x40000U)
#define GLIKEY_VERSION_FSM_CONFIG_SHIFT          (18U)
/*! FSM_CONFIG - 0:4 step, 1:8 step */
#define GLIKEY_VERSION_FSM_CONFIG(x)             (((uint32_t)(((uint32_t)(x)) << GLIKEY_VERSION_FSM_CONFIG_SHIFT)) & GLIKEY_VERSION_FSM_CONFIG_MASK)

#define GLIKEY_VERSION_INDEX_CONFIG_MASK         (0x7F80000U)
#define GLIKEY_VERSION_INDEX_CONFIG_SHIFT        (19U)
/*! INDEX_CONFIG - Configured number of addressable indexes */
#define GLIKEY_VERSION_INDEX_CONFIG(x)           (((uint32_t)(((uint32_t)(x)) << GLIKEY_VERSION_INDEX_CONFIG_SHIFT)) & GLIKEY_VERSION_INDEX_CONFIG_MASK)

#define GLIKEY_VERSION_RESERVED31_MASK           (0xF8000000U)
#define GLIKEY_VERSION_RESERVED31_SHIFT          (27U)
/*! Reserved31 - Reserved for Future Use */
#define GLIKEY_VERSION_RESERVED31(x)             (((uint32_t)(((uint32_t)(x)) << GLIKEY_VERSION_RESERVED31_SHIFT)) & GLIKEY_VERSION_RESERVED31_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group GLIKEY_Register_Masks */


/*!
 * @}
 */ /* end of group GLIKEY_Peripheral_Access_Layer */


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


#endif  /* PERI_GLIKEY_H_ */

