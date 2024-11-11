/*
** ###################################################################
**     Processors:          MCXL142VLH
**                          MCXL142VLH_cm0plus
**                          MCXL142VPJ
**                          MCXL142VPJ_cm0plus
**                          MCXL143VLH
**                          MCXL143VLH_cm0plus
**                          MCXL143VPJ
**                          MCXL143VPJ_cm0plus
**                          MCXL144VLH
**                          MCXL144VLH_cm0plus
**                          MCXL144VPJ
**                          MCXL144VPJ_cm0plus
**
**     Version:             rev. 1.0, 2023-01-09
**     Build:               b240705
**
**     Abstract:
**         CMSIS Peripheral Access Layer for LPACMP
**
**     Copyright 1997-2016 Freescale Semiconductor, Inc.
**     Copyright 2016-2024 NXP
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
 * @file LPACMP.h
 * @version 1.0
 * @date 2023-01-09
 * @brief CMSIS Peripheral Access Layer for LPACMP
 *
 * CMSIS Peripheral Access Layer for LPACMP
 */

#if !defined(LPACMP_H_)
#define LPACMP_H_                                /**< Symbol preventing repeated inclusion */

#if (defined(CPU_MCXL142VLH) || defined(CPU_MCXL142VPJ))
#include "MCXL142_COMMON.h"
#include "MCXL142_cm0plus_COMMON.h"
#elif (defined(CPU_MCXL143VLH) || defined(CPU_MCXL143VPJ))
#include "MCXL143_COMMON.h"
#include "MCXL143_cm0plus_COMMON.h"
#elif (defined(CPU_MCXL144VLH) || defined(CPU_MCXL144VPJ))
#include "MCXL144_COMMON.h"
#include "MCXL144_cm0plus_COMMON.h"
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
   -- LPACMP Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup LPACMP_Peripheral_Access_Layer LPACMP Peripheral Access Layer
 * @{
 */

/** LPACMP - Register Layout Typedef */
typedef struct {
  __IO uint32_t CTRL;                              /**< Control, offset: 0x0 */
  __IO uint32_t SEL;                               /**< Select, offset: 0x4 */
  __IO uint32_t INTERVAL;                          /**< Interval, offset: 0x8 */
  __IO uint32_t DELAY;                             /**< Delay, offset: 0xC */
  __IO uint32_t STATUS;                            /**< Status, offset: 0x10 */
} LPACMP_Type;

/* ----------------------------------------------------------------------------
   -- LPACMP Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup LPACMP_Register_Masks LPACMP Register Masks
 * @{
 */

/*! @name CTRL - Control */
/*! @{ */

#define LPACMP_CTRL_BLOCK_EN_MASK                (0x1U)
#define LPACMP_CTRL_BLOCK_EN_SHIFT               (0U)
/*! BLOCK_EN - Comparator Block Enable
 *  0b0..Disable
 *  0b1..Enable
 */
#define LPACMP_CTRL_BLOCK_EN(x)                  (((uint32_t)(((uint32_t)(x)) << LPACMP_CTRL_BLOCK_EN_SHIFT)) & LPACMP_CTRL_BLOCK_EN_MASK)

#define LPACMP_CTRL_MODE_MASK                    (0x2U)
#define LPACMP_CTRL_MODE_SHIFT                   (1U)
/*! MODE - Comparator Mode
 *  0b0..Continuous (the analog comparator block is active all the time)
 *  0b1..Interval (the analog comparator block is not active the time)
 */
#define LPACMP_CTRL_MODE(x)                      (((uint32_t)(((uint32_t)(x)) << LPACMP_CTRL_MODE_SHIFT)) & LPACMP_CTRL_MODE_MASK)

#define LPACMP_CTRL_HIGHER_MASK                  (0x4U)
#define LPACMP_CTRL_HIGHER_SHIFT                 (2U)
/*! HIGHER - Comparator Voltage Compare
 *  0b0..When the value we are checking is lower than the reference value
 *  0b1..When the value we are checking is higher than the reference value
 */
#define LPACMP_CTRL_HIGHER(x)                    (((uint32_t)(((uint32_t)(x)) << LPACMP_CTRL_HIGHER_SHIFT)) & LPACMP_CTRL_HIGHER_MASK)
/*! @} */

/*! @name SEL - Select */
/*! @{ */

#define LPACMP_SEL_INP_SEL_MASK                  (0x7U)
#define LPACMP_SEL_INP_SEL_SHIFT                 (0U)
/*! INP_SEL - Compare Value Select
 *  0b000..comp_in4
 *  0b001..comp_in5
 *  0b010..comp_in0
 *  0b011..comp_in1
 *  0b100..comp_in2
 *  0b101..comp_in3
 *  0b110..Reserved
 *  0b111..Reserved
 */
#define LPACMP_SEL_INP_SEL(x)                    (((uint32_t)(((uint32_t)(x)) << LPACMP_SEL_INP_SEL_SHIFT)) & LPACMP_SEL_INP_SEL_MASK)

#define LPACMP_SEL_INN_SEL_MASK                  (0xF00U)
#define LPACMP_SEL_INN_SEL_SHIFT                 (8U)
/*! INN_SEL - Reference Value Select
 *  0b0000..Internal VREF value of - 1 x AVDD/15
 *  0b0001..Internal VREF value of - 2 x AVDD/15
 *  0b0010..Internal VREF value of - 3 x AVDD/15
 *  0b0011..Internal VREF value of - 4 x AVDD/15
 *  0b0100..Internal VREF value of - 5 x AVDD/15
 *  0b0101..Internal VREF value of - 6 x AVDD/15
 *  0b0110..Internal VREF value of - 7 x AVDD/15
 *  0b0111..Internal VREF value of - 8 x AVDD/15
 *  0b1000..Internal VREF value of - 9 x AVDD/15
 *  0b1001..Internal VREF value of - 10 x AVDD/15
 *  0b1010..Internal VREF value of - 11 x AVDD/15
 *  0b1011..Internal VREF value of - 12 x AVDD/15
 *  0b1100..Internal VREF value of - 13 x AVDD/15
 *  0b1101..Internal VREF value of - 14 x AVDD/15
 *  0b1110..External input connected to I/O pads comp_in4
 *  0b1111..External input connected to I/O pads comp_in5
 */
#define LPACMP_SEL_INN_SEL(x)                    (((uint32_t)(((uint32_t)(x)) << LPACMP_SEL_INN_SEL_SHIFT)) & LPACMP_SEL_INN_SEL_MASK)
/*! @} */

/*! @name INTERVAL - Interval */
/*! @{ */

#define LPACMP_INTERVAL_INVL_MASK                (0xFFFFU)
#define LPACMP_INTERVAL_INVL_SHIFT               (0U)
/*! INVL - Interval Value Select */
#define LPACMP_INTERVAL_INVL(x)                  (((uint32_t)(((uint32_t)(x)) << LPACMP_INTERVAL_INVL_SHIFT)) & LPACMP_INTERVAL_INVL_MASK)
/*! @} */

/*! @name DELAY - Delay */
/*! @{ */

#define LPACMP_DELAY_DEL_MASK                    (0x3FFU)
#define LPACMP_DELAY_DEL_SHIFT                   (0U)
/*! DEL - Delay Value Select */
#define LPACMP_DELAY_DEL(x)                      (((uint32_t)(((uint32_t)(x)) << LPACMP_DELAY_DEL_SHIFT)) & LPACMP_DELAY_DEL_MASK)
/*! @} */

/*! @name STATUS - Status */
/*! @{ */

#define LPACMP_STATUS_MATCH_IF_MASK              (0x1U)
#define LPACMP_STATUS_MATCH_IF_SHIFT             (0U)
/*! MATCH_IF - Comparator Value Comparison
 *  0b0..Comparison did not occur
 *  0b1..Comparison occurred
 *  0b0..No effect
 *  0b1..Clear the flag
 */
#define LPACMP_STATUS_MATCH_IF(x)                (((uint32_t)(((uint32_t)(x)) << LPACMP_STATUS_MATCH_IF_SHIFT)) & LPACMP_STATUS_MATCH_IF_MASK)

#define LPACMP_STATUS_MATCH_IE_MASK              (0x100U)
#define LPACMP_STATUS_MATCH_IE_SHIFT             (8U)
/*! MATCH_IE - Enable Comparator Value Match Interrupt
 *  0b0..Interrupt is not allowed
 *  0b1..Interrupt is allowed
 */
#define LPACMP_STATUS_MATCH_IE(x)                (((uint32_t)(((uint32_t)(x)) << LPACMP_STATUS_MATCH_IE_SHIFT)) & LPACMP_STATUS_MATCH_IE_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group LPACMP_Register_Masks */


/*!
 * @}
 */ /* end of group LPACMP_Peripheral_Access_Layer */


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


#endif  /* LPACMP_H_ */

