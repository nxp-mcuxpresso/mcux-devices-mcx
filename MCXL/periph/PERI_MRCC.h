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
**         CMSIS Peripheral Access Layer for MRCC
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
 * @file MRCC.h
 * @version 1.0
 * @date 2023-01-09
 * @brief CMSIS Peripheral Access Layer for MRCC
 *
 * CMSIS Peripheral Access Layer for MRCC
 */

#if !defined(MRCC_H_)
#define MRCC_H_                                  /**< Symbol preventing repeated inclusion */

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
   -- MRCC Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup MRCC_Peripheral_Access_Layer MRCC Peripheral Access Layer
 * @{
 */

/** MRCC - Register Layout Typedef */
typedef struct {
  __IO uint32_t MRCC_GLB_RST0;                     /**< Peripheral Reset Control 0, offset: 0x0 */
  __O  uint32_t MRCC_GLB_RSTSET0;                  /**< Peripheral Reset Control Set 0, offset: 0x4 */
  __O  uint32_t MRCC_GLB_RSTCLR0;                  /**< Peripheral Reset Control Clear 0, offset: 0x8 */
       uint8_t RESERVED_0[4];
  __IO uint32_t MRCC_GLB_RST1;                     /**< Peripheral Reset Control 1, offset: 0x10 */
  __O  uint32_t MRCC_GLB_RSTSET1;                  /**< Peripheral Reset Control Set 1, offset: 0x14 */
  __O  uint32_t MRCC_GLB_RSTCLR1;                  /**< Peripheral Reset Control Clear 1, offset: 0x18 */
       uint8_t RESERVED_1[36];
  __IO uint32_t MRCC_GLB_CC0;                      /**< AHB Clock Control 0, offset: 0x40 */
  __O  uint32_t MRCC_GLB_CCSET0;                   /**< AHB Clock Control Set 0, offset: 0x44 */
  __O  uint32_t MRCC_GLB_CCCLR0;                   /**< AHB Clock Control Clear 0, offset: 0x48 */
       uint8_t RESERVED_2[4];
  __IO uint32_t MRCC_GLB_CC1;                      /**< AHB Clock Control 1, offset: 0x50 */
  __O  uint32_t MRCC_GLB_CCSET1;                   /**< AHB Clock Control Set 1, offset: 0x54 */
  __O  uint32_t MRCC_GLB_CCCLR1;                   /**< AHB Clock Control Clear 1, offset: 0x58 */
       uint8_t RESERVED_3[36];
  __IO uint32_t MRCC_GLB_ACC0;                     /**< Control Automatic Clock Gating 0, offset: 0x80 */
  __IO uint32_t MRCC_GLB_ACC1;                     /**< Control Automatic Clock Gating 1, offset: 0x84 */
       uint8_t RESERVED_4[8];
  __IO uint32_t MRCC_GLB_PR0;                      /**< Peripheral Enable Configuration 0, offset: 0x90 */
  __IO uint32_t MRCC_GLB_PR1;                      /**< Peripheral Enable Configuration 1, offset: 0x94 */
       uint8_t RESERVED_5[8];
  __IO uint32_t MRCC_CTIMER0_CLKSEL;               /**< CTIMER0 clock selection control, offset: 0xA0 */
  __IO uint32_t MRCC_CTIMER0_CLKDIV;               /**< CTIMER0 clock divider control, offset: 0xA4 */
  __IO uint32_t MRCC_CTIMER1_CLKSEL;               /**< CTIMER1 clock selection control, offset: 0xA8 */
  __IO uint32_t MRCC_CTIMER1_CLKDIV;               /**< CTIMER1 clock divider control, offset: 0xAC */
  __IO uint32_t MRCC_UTICK0_CLKSEL;                /**< UTICK0 clock selection control, offset: 0xB0 */
       uint8_t RESERVED_6[8];
  __IO uint32_t MRCC_WWDT0_CLKDIV;                 /**< WWDT0 clock divider control, offset: 0xBC */
       uint8_t RESERVED_7[4];
  __IO uint32_t MRCC_LPTMR0_CLKDIV;                /**< LPTMR0 clock divider control, offset: 0xC4 */
  __IO uint32_t MRCC_OSTIMER0_CLKSEL;              /**< OSTIMER0 clock selection control, offset: 0xC8 */
       uint8_t RESERVED_8[4];
  __IO uint32_t MRCC_ADC0_CLKSEL;                  /**< ADC0 clock selection control, offset: 0xD0 */
  __IO uint32_t MRCC_ADC0_CLKDIV;                  /**< ADC0 clock divider control, offset: 0xD4 */
       uint8_t RESERVED_9[4];
  __IO uint32_t MRCC_CMP0_FUNC_CLKDIV;             /**< CMP0_FUNC clock divider control, offset: 0xDC */
  __IO uint32_t MRCC_CMP0_RR_CLKSEL;               /**< CMP clock selection control, offset: 0xE0 */
  __IO uint32_t MRCC_CMP0_RR_CLKDIV;               /**< CMP0_RR clock divider control, offset: 0xE4 */
       uint8_t RESERVED_10[4];
  __IO uint32_t MRCC_DBG_TRACE_CLKDIV;             /**< DBG_TRACE clock divider control, offset: 0xEC */
  __IO uint32_t MRCC_CLKOUT_CLKSEL;                /**< CLKOUT clock selection control, offset: 0xF0 */
  __IO uint32_t MRCC_CLKOUT_CLKDIV;                /**< CLKOUT clock divider control, offset: 0xF4 */
  __IO uint32_t MRCC_PERIPH_GROUP_0_CLKSEL;        /**< PERIPH_GROUP_0 clock selection control, offset: 0xF8 */
  __IO uint32_t MRCC_PERIPH_GROUP_0_CLKDIV;        /**< PERIPH_GROUP_0 clock divider control, offset: 0xFC */
  __IO uint32_t MRCC_PERIPH_GROUP_1_CLKSEL;        /**< PERIPH_GROUP_1 clock selection control, offset: 0x100 */
  __IO uint32_t MRCC_PERIPH_GROUP_1_CLKDIV;        /**< PERIPH_GROUP_1 clock divider control, offset: 0x104 */
  __IO uint32_t MRCC_SYSTICK_CLKSEL;               /**< SYSTICK clock selection control, offset: 0x108 */
  __IO uint32_t MRCC_SYSTICK_CLKDIV;               /**< SYSTICK clock divider control, offset: 0x10C */
       uint8_t RESERVED_11[4];
  __IO uint32_t MRCC_FRO_HF_DIV_CLKDIV;            /**< FRO_HF_DIV clock divider control, offset: 0x114 */
} MRCC_Type;

/* ----------------------------------------------------------------------------
   -- MRCC Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup MRCC_Register_Masks MRCC Register Masks
 * @{
 */

/*! @name MRCC_GLB_RST0 - Peripheral Reset Control 0 */
/*! @{ */

#define MRCC_MRCC_GLB_RST0_INPUTMUX0_MASK        (0x1U)
#define MRCC_MRCC_GLB_RST0_INPUTMUX0_SHIFT       (0U)
/*! INPUTMUX0 - Write to INPUTMUX0
 *  0b0..Peripheral is held in reset
 *  0b1..Peripheral is released from reset
 */
#define MRCC_MRCC_GLB_RST0_INPUTMUX0(x)          (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_RST0_INPUTMUX0_SHIFT)) & MRCC_MRCC_GLB_RST0_INPUTMUX0_MASK)

#define MRCC_MRCC_GLB_RST0_CTIMER0_MASK          (0x2U)
#define MRCC_MRCC_GLB_RST0_CTIMER0_SHIFT         (1U)
/*! CTIMER0 - Write to CTIMER0
 *  0b0..Peripheral is held in reset
 *  0b1..Peripheral is released from reset
 */
#define MRCC_MRCC_GLB_RST0_CTIMER0(x)            (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_RST0_CTIMER0_SHIFT)) & MRCC_MRCC_GLB_RST0_CTIMER0_MASK)

#define MRCC_MRCC_GLB_RST0_CTIMER1_MASK          (0x4U)
#define MRCC_MRCC_GLB_RST0_CTIMER1_SHIFT         (2U)
/*! CTIMER1 - Write to CTIMER1
 *  0b0..Peripheral is held in reset
 *  0b1..Peripheral is released from reset
 */
#define MRCC_MRCC_GLB_RST0_CTIMER1(x)            (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_RST0_CTIMER1_SHIFT)) & MRCC_MRCC_GLB_RST0_CTIMER1_MASK)

#define MRCC_MRCC_GLB_RST0_CTIMER2_MASK          (0x8U)
#define MRCC_MRCC_GLB_RST0_CTIMER2_SHIFT         (3U)
/*! CTIMER2 - Write to CTIMER2
 *  0b0..Peripheral is held in reset
 *  0b1..Peripheral is released from reset
 */
#define MRCC_MRCC_GLB_RST0_CTIMER2(x)            (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_RST0_CTIMER2_SHIFT)) & MRCC_MRCC_GLB_RST0_CTIMER2_MASK)

#define MRCC_MRCC_GLB_RST0_FREQME_MASK           (0x10U)
#define MRCC_MRCC_GLB_RST0_FREQME_SHIFT          (4U)
/*! FREQME - Write to FREQME
 *  0b0..Peripheral is held in reset
 *  0b1..Peripheral is released from reset
 */
#define MRCC_MRCC_GLB_RST0_FREQME(x)             (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_RST0_FREQME_SHIFT)) & MRCC_MRCC_GLB_RST0_FREQME_MASK)

#define MRCC_MRCC_GLB_RST0_UTICK0_MASK           (0x20U)
#define MRCC_MRCC_GLB_RST0_UTICK0_SHIFT          (5U)
/*! UTICK0 - Write to UTICK0
 *  0b0..Peripheral is held in reset
 *  0b1..Peripheral is released from reset
 */
#define MRCC_MRCC_GLB_RST0_UTICK0(x)             (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_RST0_UTICK0_SHIFT)) & MRCC_MRCC_GLB_RST0_UTICK0_MASK)

#define MRCC_MRCC_GLB_RST0_DMA_MASK              (0x80U)
#define MRCC_MRCC_GLB_RST0_DMA_SHIFT             (7U)
/*! DMA - Write to DMA
 *  0b0..Peripheral is held in reset
 *  0b1..Peripheral is released from reset
 */
#define MRCC_MRCC_GLB_RST0_DMA(x)                (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_RST0_DMA_SHIFT)) & MRCC_MRCC_GLB_RST0_DMA_MASK)

#define MRCC_MRCC_GLB_RST0_AOI0_MASK             (0x100U)
#define MRCC_MRCC_GLB_RST0_AOI0_SHIFT            (8U)
/*! AOI0 - Write to AOI0
 *  0b0..Peripheral is held in reset
 *  0b1..Peripheral is released from reset
 */
#define MRCC_MRCC_GLB_RST0_AOI0(x)               (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_RST0_AOI0_SHIFT)) & MRCC_MRCC_GLB_RST0_AOI0_MASK)

#define MRCC_MRCC_GLB_RST0_CRC_MASK              (0x200U)
#define MRCC_MRCC_GLB_RST0_CRC_SHIFT             (9U)
/*! CRC - Write to CRC
 *  0b0..Peripheral is held in reset
 *  0b1..Peripheral is released from reset
 */
#define MRCC_MRCC_GLB_RST0_CRC(x)                (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_RST0_CRC_SHIFT)) & MRCC_MRCC_GLB_RST0_CRC_MASK)

#define MRCC_MRCC_GLB_RST0_LPI2C0_MASK           (0x2000U)
#define MRCC_MRCC_GLB_RST0_LPI2C0_SHIFT          (13U)
/*! LPI2C0 - Write to LPI2C0
 *  0b0..Peripheral is held in reset
 *  0b1..Peripheral is released from reset
 */
#define MRCC_MRCC_GLB_RST0_LPI2C0(x)             (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_RST0_LPI2C0_SHIFT)) & MRCC_MRCC_GLB_RST0_LPI2C0_MASK)

#define MRCC_MRCC_GLB_RST0_LPSPI0_MASK           (0x4000U)
#define MRCC_MRCC_GLB_RST0_LPSPI0_SHIFT          (14U)
/*! LPSPI0 - Write to LPSPI0
 *  0b0..Peripheral is held in reset
 *  0b1..Peripheral is released from reset
 */
#define MRCC_MRCC_GLB_RST0_LPSPI0(x)             (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_RST0_LPSPI0_SHIFT)) & MRCC_MRCC_GLB_RST0_LPSPI0_MASK)

#define MRCC_MRCC_GLB_RST0_LPSPI1_MASK           (0x8000U)
#define MRCC_MRCC_GLB_RST0_LPSPI1_SHIFT          (15U)
/*! LPSPI1 - Write to LPSPI1
 *  0b0..Peripheral is held in reset
 *  0b1..Peripheral is released from reset
 */
#define MRCC_MRCC_GLB_RST0_LPSPI1(x)             (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_RST0_LPSPI1_SHIFT)) & MRCC_MRCC_GLB_RST0_LPSPI1_MASK)

#define MRCC_MRCC_GLB_RST0_LPUART0_MASK          (0x10000U)
#define MRCC_MRCC_GLB_RST0_LPUART0_SHIFT         (16U)
/*! LPUART0 - Write to LPUART0
 *  0b0..Peripheral is held in reset
 *  0b1..Peripheral is released from reset
 */
#define MRCC_MRCC_GLB_RST0_LPUART0(x)            (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_RST0_LPUART0_SHIFT)) & MRCC_MRCC_GLB_RST0_LPUART0_MASK)

#define MRCC_MRCC_GLB_RST0_LPUART1_MASK          (0x20000U)
#define MRCC_MRCC_GLB_RST0_LPUART1_SHIFT         (17U)
/*! LPUART1 - Write to LPUART1
 *  0b0..Peripheral is held in reset
 *  0b1..Peripheral is released from reset
 */
#define MRCC_MRCC_GLB_RST0_LPUART1(x)            (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_RST0_LPUART1_SHIFT)) & MRCC_MRCC_GLB_RST0_LPUART1_MASK)

#define MRCC_MRCC_GLB_RST0_LPUART2_MASK          (0x40000U)
#define MRCC_MRCC_GLB_RST0_LPUART2_SHIFT         (18U)
/*! LPUART2 - Write to LPUART2
 *  0b0..Peripheral is held in reset
 *  0b1..Peripheral is released from reset
 */
#define MRCC_MRCC_GLB_RST0_LPUART2(x)            (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_RST0_LPUART2_SHIFT)) & MRCC_MRCC_GLB_RST0_LPUART2_MASK)

#define MRCC_MRCC_GLB_RST0_QDC0_MASK             (0x80000U)
#define MRCC_MRCC_GLB_RST0_QDC0_SHIFT            (19U)
/*! QDC0 - Write to QDC0
 *  0b0..Peripheral is held in reset
 *  0b1..Peripheral is released from reset
 */
#define MRCC_MRCC_GLB_RST0_QDC0(x)               (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_RST0_QDC0_SHIFT)) & MRCC_MRCC_GLB_RST0_QDC0_MASK)

#define MRCC_MRCC_GLB_RST0_FLEXPWM0_MASK         (0x100000U)
#define MRCC_MRCC_GLB_RST0_FLEXPWM0_SHIFT        (20U)
/*! FLEXPWM0 - Write to FLEXPWM0
 *  0b0..Peripheral is held in reset
 *  0b1..Peripheral is released from reset
 */
#define MRCC_MRCC_GLB_RST0_FLEXPWM0(x)           (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_RST0_FLEXPWM0_SHIFT)) & MRCC_MRCC_GLB_RST0_FLEXPWM0_MASK)

#define MRCC_MRCC_GLB_RST0_OSTIMER0_MASK         (0x200000U)
#define MRCC_MRCC_GLB_RST0_OSTIMER0_SHIFT        (21U)
/*! OSTIMER0 - Write to OSTIMER0
 *  0b0..Peripheral is held in reset
 *  0b1..Peripheral is released from reset
 */
#define MRCC_MRCC_GLB_RST0_OSTIMER0(x)           (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_RST0_OSTIMER0_SHIFT)) & MRCC_MRCC_GLB_RST0_OSTIMER0_MASK)

#define MRCC_MRCC_GLB_RST0_ADC0_MASK             (0x400000U)
#define MRCC_MRCC_GLB_RST0_ADC0_SHIFT            (22U)
/*! ADC0 - Write to ADC0
 *  0b0..Peripheral is held in reset
 *  0b1..Peripheral is released from reset
 */
#define MRCC_MRCC_GLB_RST0_ADC0(x)               (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_RST0_ADC0_SHIFT)) & MRCC_MRCC_GLB_RST0_ADC0_MASK)

#define MRCC_MRCC_GLB_RST0_CMP1_MASK             (0x1000000U)
#define MRCC_MRCC_GLB_RST0_CMP1_SHIFT            (24U)
/*! CMP1 - Write to CMP1
 *  0b0..Peripheral is held in reset
 *  0b1..Peripheral is released from reset
 */
#define MRCC_MRCC_GLB_RST0_CMP1(x)               (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_RST0_CMP1_SHIFT)) & MRCC_MRCC_GLB_RST0_CMP1_MASK)

#define MRCC_MRCC_GLB_RST0_PORT0_MASK            (0x2000000U)
#define MRCC_MRCC_GLB_RST0_PORT0_SHIFT           (25U)
/*! PORT0 - Write to PORT0
 *  0b0..Peripheral is held in reset
 *  0b1..Peripheral is released from reset
 */
#define MRCC_MRCC_GLB_RST0_PORT0(x)              (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_RST0_PORT0_SHIFT)) & MRCC_MRCC_GLB_RST0_PORT0_MASK)

#define MRCC_MRCC_GLB_RST0_PORT1_MASK            (0x4000000U)
#define MRCC_MRCC_GLB_RST0_PORT1_SHIFT           (26U)
/*! PORT1 - Write to PORT1
 *  0b0..Peripheral is held in reset
 *  0b1..Peripheral is released from reset
 */
#define MRCC_MRCC_GLB_RST0_PORT1(x)              (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_RST0_PORT1_SHIFT)) & MRCC_MRCC_GLB_RST0_PORT1_MASK)

#define MRCC_MRCC_GLB_RST0_ATX0_MASK             (0x8000000U)
#define MRCC_MRCC_GLB_RST0_ATX0_SHIFT            (27U)
/*! ATX0 - Write to ATX0
 *  0b0..Peripheral is held in reset
 *  0b1..Peripheral is released from reset
 */
#define MRCC_MRCC_GLB_RST0_ATX0(x)               (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_RST0_ATX0_SHIFT)) & MRCC_MRCC_GLB_RST0_ATX0_MASK)

#define MRCC_MRCC_GLB_RST0_GPIO0_MASK            (0x80000000U)
#define MRCC_MRCC_GLB_RST0_GPIO0_SHIFT           (31U)
/*! GPIO0 - Write to GPIO0
 *  0b0..Peripheral is held in reset
 *  0b1..Peripheral is released from reset
 */
#define MRCC_MRCC_GLB_RST0_GPIO0(x)              (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_RST0_GPIO0_SHIFT)) & MRCC_MRCC_GLB_RST0_GPIO0_MASK)
/*! @} */

/*! @name MRCC_GLB_RSTSET0 - Peripheral Reset Control Set 0 */
/*! @{ */

#define MRCC_MRCC_GLB_RSTSET0_DATA_MASK          (0xFFFFFFFFU)
#define MRCC_MRCC_GLB_RSTSET0_DATA_SHIFT         (0U)
/*! DATA - Data array value, refer to corresponding position in MRCC_GLB_RSTn. */
#define MRCC_MRCC_GLB_RSTSET0_DATA(x)            (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_RSTSET0_DATA_SHIFT)) & MRCC_MRCC_GLB_RSTSET0_DATA_MASK)
/*! @} */

/*! @name MRCC_GLB_RSTCLR0 - Peripheral Reset Control Clear 0 */
/*! @{ */

#define MRCC_MRCC_GLB_RSTCLR0_DATA_MASK          (0xFFFFFFFFU)
#define MRCC_MRCC_GLB_RSTCLR0_DATA_SHIFT         (0U)
/*! DATA - Data array value, refer to corresponding position in MRCC_GLB_RSTn. */
#define MRCC_MRCC_GLB_RSTCLR0_DATA(x)            (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_RSTCLR0_DATA_SHIFT)) & MRCC_MRCC_GLB_RSTCLR0_DATA_MASK)
/*! @} */

/*! @name MRCC_GLB_RST1 - Peripheral Reset Control 1 */
/*! @{ */

#define MRCC_MRCC_GLB_RST1_GPIO1_MASK            (0x1U)
#define MRCC_MRCC_GLB_RST1_GPIO1_SHIFT           (0U)
/*! GPIO1 - Write to GPIO1
 *  0b0..Peripheral is held in reset
 *  0b1..Peripheral is released from reset
 */
#define MRCC_MRCC_GLB_RST1_GPIO1(x)              (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_RST1_GPIO1_SHIFT)) & MRCC_MRCC_GLB_RST1_GPIO1_MASK)
/*! @} */

/*! @name MRCC_GLB_RSTSET1 - Peripheral Reset Control Set 1 */
/*! @{ */

#define MRCC_MRCC_GLB_RSTSET1_DATA_MASK          (0xFFFFFFFFU)
#define MRCC_MRCC_GLB_RSTSET1_DATA_SHIFT         (0U)
/*! DATA - Data array value, refer to corresponding position in MRCC_GLB_RSTn. */
#define MRCC_MRCC_GLB_RSTSET1_DATA(x)            (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_RSTSET1_DATA_SHIFT)) & MRCC_MRCC_GLB_RSTSET1_DATA_MASK)
/*! @} */

/*! @name MRCC_GLB_RSTCLR1 - Peripheral Reset Control Clear 1 */
/*! @{ */

#define MRCC_MRCC_GLB_RSTCLR1_DATA_MASK          (0xFFFFFFFFU)
#define MRCC_MRCC_GLB_RSTCLR1_DATA_SHIFT         (0U)
/*! DATA - Data array value, refer to corresponding position in MRCC_GLB_RSTn. */
#define MRCC_MRCC_GLB_RSTCLR1_DATA(x)            (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_RSTCLR1_DATA_SHIFT)) & MRCC_MRCC_GLB_RSTCLR1_DATA_MASK)
/*! @} */

/*! @name MRCC_GLB_CC0 - AHB Clock Control 0 */
/*! @{ */

#define MRCC_MRCC_GLB_CC0_INPUTMUX0_MASK         (0x1U)
#define MRCC_MRCC_GLB_CC0_INPUTMUX0_SHIFT        (0U)
/*! INPUTMUX0 - Write to INPUTMUX0
 *  0b0..Peripheral clock is disabled
 *  0b1..Peripheral clock is enabled
 */
#define MRCC_MRCC_GLB_CC0_INPUTMUX0(x)           (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_CC0_INPUTMUX0_SHIFT)) & MRCC_MRCC_GLB_CC0_INPUTMUX0_MASK)

#define MRCC_MRCC_GLB_CC0_CTIMER0_MASK           (0x2U)
#define MRCC_MRCC_GLB_CC0_CTIMER0_SHIFT          (1U)
/*! CTIMER0 - Write to CTIMER0
 *  0b0..Peripheral clock is disabled
 *  0b1..Peripheral clock is enabled
 */
#define MRCC_MRCC_GLB_CC0_CTIMER0(x)             (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_CC0_CTIMER0_SHIFT)) & MRCC_MRCC_GLB_CC0_CTIMER0_MASK)

#define MRCC_MRCC_GLB_CC0_CTIMER1_MASK           (0x4U)
#define MRCC_MRCC_GLB_CC0_CTIMER1_SHIFT          (2U)
/*! CTIMER1 - Write to CTIMER1
 *  0b0..Peripheral clock is disabled
 *  0b1..Peripheral clock is enabled
 */
#define MRCC_MRCC_GLB_CC0_CTIMER1(x)             (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_CC0_CTIMER1_SHIFT)) & MRCC_MRCC_GLB_CC0_CTIMER1_MASK)

#define MRCC_MRCC_GLB_CC0_CTIMER2_MASK           (0x8U)
#define MRCC_MRCC_GLB_CC0_CTIMER2_SHIFT          (3U)
/*! CTIMER2 - Write to CTIMER2
 *  0b0..Peripheral clock is disabled
 *  0b1..Peripheral clock is enabled
 */
#define MRCC_MRCC_GLB_CC0_CTIMER2(x)             (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_CC0_CTIMER2_SHIFT)) & MRCC_MRCC_GLB_CC0_CTIMER2_MASK)

#define MRCC_MRCC_GLB_CC0_FREQME_MASK            (0x10U)
#define MRCC_MRCC_GLB_CC0_FREQME_SHIFT           (4U)
/*! FREQME - Write to FREQME
 *  0b0..Peripheral clock is disabled
 *  0b1..Peripheral clock is enabled
 */
#define MRCC_MRCC_GLB_CC0_FREQME(x)              (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_CC0_FREQME_SHIFT)) & MRCC_MRCC_GLB_CC0_FREQME_MASK)

#define MRCC_MRCC_GLB_CC0_UTICK0_MASK            (0x20U)
#define MRCC_MRCC_GLB_CC0_UTICK0_SHIFT           (5U)
/*! UTICK0 - Write to UTICK0
 *  0b0..Peripheral clock is disabled
 *  0b1..Peripheral clock is enabled
 */
#define MRCC_MRCC_GLB_CC0_UTICK0(x)              (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_CC0_UTICK0_SHIFT)) & MRCC_MRCC_GLB_CC0_UTICK0_MASK)

#define MRCC_MRCC_GLB_CC0_WWDT0_MASK             (0x40U)
#define MRCC_MRCC_GLB_CC0_WWDT0_SHIFT            (6U)
/*! WWDT0 - Write to WWDT0
 *  0b0..Peripheral clock is disabled
 *  0b1..Peripheral clock is enabled
 */
#define MRCC_MRCC_GLB_CC0_WWDT0(x)               (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_CC0_WWDT0_SHIFT)) & MRCC_MRCC_GLB_CC0_WWDT0_MASK)

#define MRCC_MRCC_GLB_CC0_DMA_MASK               (0x80U)
#define MRCC_MRCC_GLB_CC0_DMA_SHIFT              (7U)
/*! DMA - Write to DMA
 *  0b0..Peripheral clock is disabled
 *  0b1..Peripheral clock is enabled
 */
#define MRCC_MRCC_GLB_CC0_DMA(x)                 (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_CC0_DMA_SHIFT)) & MRCC_MRCC_GLB_CC0_DMA_MASK)

#define MRCC_MRCC_GLB_CC0_AOI0_MASK              (0x100U)
#define MRCC_MRCC_GLB_CC0_AOI0_SHIFT             (8U)
/*! AOI0 - Write to AOI0
 *  0b0..Peripheral clock is disabled
 *  0b1..Peripheral clock is enabled
 */
#define MRCC_MRCC_GLB_CC0_AOI0(x)                (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_CC0_AOI0_SHIFT)) & MRCC_MRCC_GLB_CC0_AOI0_MASK)

#define MRCC_MRCC_GLB_CC0_CRC_MASK               (0x200U)
#define MRCC_MRCC_GLB_CC0_CRC_SHIFT              (9U)
/*! CRC - Write to CRC
 *  0b0..Peripheral clock is disabled
 *  0b1..Peripheral clock is enabled
 */
#define MRCC_MRCC_GLB_CC0_CRC(x)                 (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_CC0_CRC_SHIFT)) & MRCC_MRCC_GLB_CC0_CRC_MASK)

#define MRCC_MRCC_GLB_CC0_LPI2C0_MASK            (0x2000U)
#define MRCC_MRCC_GLB_CC0_LPI2C0_SHIFT           (13U)
/*! LPI2C0 - Write to LPI2C0
 *  0b0..Peripheral clock is disabled
 *  0b1..Peripheral clock is enabled
 */
#define MRCC_MRCC_GLB_CC0_LPI2C0(x)              (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_CC0_LPI2C0_SHIFT)) & MRCC_MRCC_GLB_CC0_LPI2C0_MASK)

#define MRCC_MRCC_GLB_CC0_LPSPI0_MASK            (0x4000U)
#define MRCC_MRCC_GLB_CC0_LPSPI0_SHIFT           (14U)
/*! LPSPI0 - Write to LPSPI0
 *  0b0..Peripheral clock is disabled
 *  0b1..Peripheral clock is enabled
 */
#define MRCC_MRCC_GLB_CC0_LPSPI0(x)              (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_CC0_LPSPI0_SHIFT)) & MRCC_MRCC_GLB_CC0_LPSPI0_MASK)

#define MRCC_MRCC_GLB_CC0_LPSPI1_MASK            (0x8000U)
#define MRCC_MRCC_GLB_CC0_LPSPI1_SHIFT           (15U)
/*! LPSPI1 - Write to LPSPI1
 *  0b0..Peripheral clock is disabled
 *  0b1..Peripheral clock is enabled
 */
#define MRCC_MRCC_GLB_CC0_LPSPI1(x)              (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_CC0_LPSPI1_SHIFT)) & MRCC_MRCC_GLB_CC0_LPSPI1_MASK)

#define MRCC_MRCC_GLB_CC0_LPUART0_MASK           (0x10000U)
#define MRCC_MRCC_GLB_CC0_LPUART0_SHIFT          (16U)
/*! LPUART0 - Write to LPUART0
 *  0b0..Peripheral clock is disabled
 *  0b1..Peripheral clock is enabled
 */
#define MRCC_MRCC_GLB_CC0_LPUART0(x)             (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_CC0_LPUART0_SHIFT)) & MRCC_MRCC_GLB_CC0_LPUART0_MASK)

#define MRCC_MRCC_GLB_CC0_LPUART1_MASK           (0x20000U)
#define MRCC_MRCC_GLB_CC0_LPUART1_SHIFT          (17U)
/*! LPUART1 - Write to LPUART1
 *  0b0..Peripheral clock is disabled
 *  0b1..Peripheral clock is enabled
 */
#define MRCC_MRCC_GLB_CC0_LPUART1(x)             (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_CC0_LPUART1_SHIFT)) & MRCC_MRCC_GLB_CC0_LPUART1_MASK)

#define MRCC_MRCC_GLB_CC0_LPUART2_MASK           (0x40000U)
#define MRCC_MRCC_GLB_CC0_LPUART2_SHIFT          (18U)
/*! LPUART2 - Write to LPUART2
 *  0b0..Peripheral clock is disabled
 *  0b1..Peripheral clock is enabled
 */
#define MRCC_MRCC_GLB_CC0_LPUART2(x)             (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_CC0_LPUART2_SHIFT)) & MRCC_MRCC_GLB_CC0_LPUART2_MASK)

#define MRCC_MRCC_GLB_CC0_QDC0_MASK              (0x80000U)
#define MRCC_MRCC_GLB_CC0_QDC0_SHIFT             (19U)
/*! QDC0 - Write to QDC0
 *  0b0..Peripheral clock is disabled
 *  0b1..Peripheral clock is enabled
 */
#define MRCC_MRCC_GLB_CC0_QDC0(x)                (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_CC0_QDC0_SHIFT)) & MRCC_MRCC_GLB_CC0_QDC0_MASK)

#define MRCC_MRCC_GLB_CC0_FLEXPWM0_MASK          (0x100000U)
#define MRCC_MRCC_GLB_CC0_FLEXPWM0_SHIFT         (20U)
/*! FLEXPWM0 - Write to FLEXPWM0
 *  0b0..Peripheral clock is disabled
 *  0b1..Peripheral clock is enabled
 */
#define MRCC_MRCC_GLB_CC0_FLEXPWM0(x)            (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_CC0_FLEXPWM0_SHIFT)) & MRCC_MRCC_GLB_CC0_FLEXPWM0_MASK)

#define MRCC_MRCC_GLB_CC0_OSTIMER0_MASK          (0x200000U)
#define MRCC_MRCC_GLB_CC0_OSTIMER0_SHIFT         (21U)
/*! OSTIMER0 - Write to OSTIMER0
 *  0b0..Peripheral clock is disabled
 *  0b1..Peripheral clock is enabled
 */
#define MRCC_MRCC_GLB_CC0_OSTIMER0(x)            (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_CC0_OSTIMER0_SHIFT)) & MRCC_MRCC_GLB_CC0_OSTIMER0_MASK)

#define MRCC_MRCC_GLB_CC0_ADC0_MASK              (0x400000U)
#define MRCC_MRCC_GLB_CC0_ADC0_SHIFT             (22U)
/*! ADC0 - Write to ADC0
 *  0b0..Peripheral clock is disabled
 *  0b1..Peripheral clock is enabled
 */
#define MRCC_MRCC_GLB_CC0_ADC0(x)                (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_CC0_ADC0_SHIFT)) & MRCC_MRCC_GLB_CC0_ADC0_MASK)

#define MRCC_MRCC_GLB_CC0_CMP0_MASK              (0x800000U)
#define MRCC_MRCC_GLB_CC0_CMP0_SHIFT             (23U)
/*! CMP0 - Write to CMP0
 *  0b0..Peripheral clock is disabled
 *  0b1..Peripheral clock is enabled
 */
#define MRCC_MRCC_GLB_CC0_CMP0(x)                (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_CC0_CMP0_SHIFT)) & MRCC_MRCC_GLB_CC0_CMP0_MASK)

#define MRCC_MRCC_GLB_CC0_CMP1_MASK              (0x1000000U)
#define MRCC_MRCC_GLB_CC0_CMP1_SHIFT             (24U)
/*! CMP1 - Write to CMP1
 *  0b0..Peripheral clock is disabled
 *  0b1..Peripheral clock is enabled
 */
#define MRCC_MRCC_GLB_CC0_CMP1(x)                (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_CC0_CMP1_SHIFT)) & MRCC_MRCC_GLB_CC0_CMP1_MASK)

#define MRCC_MRCC_GLB_CC0_PORT0_MASK             (0x2000000U)
#define MRCC_MRCC_GLB_CC0_PORT0_SHIFT            (25U)
/*! PORT0 - Write to PORT0
 *  0b0..Peripheral clock is disabled
 *  0b1..Peripheral clock is enabled
 */
#define MRCC_MRCC_GLB_CC0_PORT0(x)               (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_CC0_PORT0_SHIFT)) & MRCC_MRCC_GLB_CC0_PORT0_MASK)

#define MRCC_MRCC_GLB_CC0_PORT1_MASK             (0x4000000U)
#define MRCC_MRCC_GLB_CC0_PORT1_SHIFT            (26U)
/*! PORT1 - Write to PORT1
 *  0b0..Peripheral clock is disabled
 *  0b1..Peripheral clock is enabled
 */
#define MRCC_MRCC_GLB_CC0_PORT1(x)               (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_CC0_PORT1_SHIFT)) & MRCC_MRCC_GLB_CC0_PORT1_MASK)

#define MRCC_MRCC_GLB_CC0_ATX0_MASK              (0x8000000U)
#define MRCC_MRCC_GLB_CC0_ATX0_SHIFT             (27U)
/*! ATX0 - Write to ATX0
 *  0b0..Peripheral clock is disabled
 *  0b1..Peripheral clock is enabled
 */
#define MRCC_MRCC_GLB_CC0_ATX0(x)                (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_CC0_ATX0_SHIFT)) & MRCC_MRCC_GLB_CC0_ATX0_MASK)

#define MRCC_MRCC_GLB_CC0_MTR_MASK               (0x10000000U)
#define MRCC_MRCC_GLB_CC0_MTR_SHIFT              (28U)
/*! MTR - Write to MTR
 *  0b0..Peripheral clock is disabled
 *  0b1..Peripheral clock is enabled
 */
#define MRCC_MRCC_GLB_CC0_MTR(x)                 (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_CC0_MTR_SHIFT)) & MRCC_MRCC_GLB_CC0_MTR_MASK)

#define MRCC_MRCC_GLB_CC0_TCU_MASK               (0x20000000U)
#define MRCC_MRCC_GLB_CC0_TCU_SHIFT              (29U)
/*! TCU - Write to TCU
 *  0b0..Peripheral clock is disabled
 *  0b1..Peripheral clock is enabled
 */
#define MRCC_MRCC_GLB_CC0_TCU(x)                 (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_CC0_TCU_SHIFT)) & MRCC_MRCC_GLB_CC0_TCU_MASK)

#define MRCC_MRCC_GLB_CC0_EZRAMC_RAMA_MASK       (0x40000000U)
#define MRCC_MRCC_GLB_CC0_EZRAMC_RAMA_SHIFT      (30U)
/*! EZRAMC_RAMA - Write to EZRAMC_RAMA
 *  0b0..Peripheral clock is disabled
 *  0b1..Peripheral clock is enabled
 */
#define MRCC_MRCC_GLB_CC0_EZRAMC_RAMA(x)         (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_CC0_EZRAMC_RAMA_SHIFT)) & MRCC_MRCC_GLB_CC0_EZRAMC_RAMA_MASK)

#define MRCC_MRCC_GLB_CC0_GPIO0_MASK             (0x80000000U)
#define MRCC_MRCC_GLB_CC0_GPIO0_SHIFT            (31U)
/*! GPIO0 - Write to GPIO0
 *  0b0..Peripheral clock is disabled
 *  0b1..Peripheral clock is enabled
 */
#define MRCC_MRCC_GLB_CC0_GPIO0(x)               (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_CC0_GPIO0_SHIFT)) & MRCC_MRCC_GLB_CC0_GPIO0_MASK)
/*! @} */

/*! @name MRCC_GLB_CCSET0 - AHB Clock Control Set 0 */
/*! @{ */

#define MRCC_MRCC_GLB_CCSET0_DATA_MASK           (0xFFFFFFFFU)
#define MRCC_MRCC_GLB_CCSET0_DATA_SHIFT          (0U)
/*! DATA - Data array value, refer to corresponding position in MRCC_GLB_CCn. */
#define MRCC_MRCC_GLB_CCSET0_DATA(x)             (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_CCSET0_DATA_SHIFT)) & MRCC_MRCC_GLB_CCSET0_DATA_MASK)
/*! @} */

/*! @name MRCC_GLB_CCCLR0 - AHB Clock Control Clear 0 */
/*! @{ */

#define MRCC_MRCC_GLB_CCCLR0_DATA_MASK           (0xFFFFFFFFU)
#define MRCC_MRCC_GLB_CCCLR0_DATA_SHIFT          (0U)
/*! DATA - Data array value, refer to corresponding position in MRCC_GLB_CCn. */
#define MRCC_MRCC_GLB_CCCLR0_DATA(x)             (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_CCCLR0_DATA_SHIFT)) & MRCC_MRCC_GLB_CCCLR0_DATA_MASK)
/*! @} */

/*! @name MRCC_GLB_CC1 - AHB Clock Control 1 */
/*! @{ */

#define MRCC_MRCC_GLB_CC1_GPIO1_MASK             (0x1U)
#define MRCC_MRCC_GLB_CC1_GPIO1_SHIFT            (0U)
/*! GPIO1 - Write to GPIO1
 *  0b0..Peripheral clock is disabled
 *  0b1..Peripheral clock is enabled
 */
#define MRCC_MRCC_GLB_CC1_GPIO1(x)               (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_CC1_GPIO1_SHIFT)) & MRCC_MRCC_GLB_CC1_GPIO1_MASK)

#define MRCC_MRCC_GLB_CC1_PERIPH_GROUP_0_MASK    (0x2U)
#define MRCC_MRCC_GLB_CC1_PERIPH_GROUP_0_SHIFT   (1U)
/*! PERIPH_GROUP_0 - Write to PERIPH_GROUP_0
 *  0b0..Peripheral clock is disabled
 *  0b1..Peripheral clock is enabled
 */
#define MRCC_MRCC_GLB_CC1_PERIPH_GROUP_0(x)      (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_CC1_PERIPH_GROUP_0_SHIFT)) & MRCC_MRCC_GLB_CC1_PERIPH_GROUP_0_MASK)

#define MRCC_MRCC_GLB_CC1_PERIPH_GROUP_1_MASK    (0x4U)
#define MRCC_MRCC_GLB_CC1_PERIPH_GROUP_1_SHIFT   (2U)
/*! PERIPH_GROUP_1 - Write to PERIPH_GROUP_1
 *  0b0..Peripheral clock is disabled
 *  0b1..Peripheral clock is enabled
 */
#define MRCC_MRCC_GLB_CC1_PERIPH_GROUP_1(x)      (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_CC1_PERIPH_GROUP_1_SHIFT)) & MRCC_MRCC_GLB_CC1_PERIPH_GROUP_1_MASK)

#define MRCC_MRCC_GLB_CC1_ROMCP_MASK             (0x8U)
#define MRCC_MRCC_GLB_CC1_ROMCP_SHIFT            (3U)
/*! ROMCP - Write to ROMCP
 *  0b0..Peripheral clock is disabled
 *  0b1..Peripheral clock is enabled
 */
#define MRCC_MRCC_GLB_CC1_ROMCP(x)               (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_CC1_ROMCP_SHIFT)) & MRCC_MRCC_GLB_CC1_ROMCP_MASK)
/*! @} */

/*! @name MRCC_GLB_CCSET1 - AHB Clock Control Set 1 */
/*! @{ */

#define MRCC_MRCC_GLB_CCSET1_DATA_MASK           (0xFFFFFFFFU)
#define MRCC_MRCC_GLB_CCSET1_DATA_SHIFT          (0U)
/*! DATA - Data array value, refer to corresponding position in MRCC_GLB_CCn. */
#define MRCC_MRCC_GLB_CCSET1_DATA(x)             (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_CCSET1_DATA_SHIFT)) & MRCC_MRCC_GLB_CCSET1_DATA_MASK)
/*! @} */

/*! @name MRCC_GLB_CCCLR1 - AHB Clock Control Clear 1 */
/*! @{ */

#define MRCC_MRCC_GLB_CCCLR1_DATA_MASK           (0xFFFFFFFFU)
#define MRCC_MRCC_GLB_CCCLR1_DATA_SHIFT          (0U)
/*! DATA - Data array value, refer to corresponding position in MRCC_GLB_CCn. */
#define MRCC_MRCC_GLB_CCCLR1_DATA(x)             (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_CCCLR1_DATA_SHIFT)) & MRCC_MRCC_GLB_CCCLR1_DATA_MASK)
/*! @} */

/*! @name MRCC_GLB_ACC0 - Control Automatic Clock Gating 0 */
/*! @{ */

#define MRCC_MRCC_GLB_ACC0_INPUTMUX0_MASK        (0x1U)
#define MRCC_MRCC_GLB_ACC0_INPUTMUX0_SHIFT       (0U)
/*! INPUTMUX0 - Write to INPUTMUX0
 *  0b0..Automatic clock gating is disabled
 *  0b1..Automatic clock gating is enabled
 */
#define MRCC_MRCC_GLB_ACC0_INPUTMUX0(x)          (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_ACC0_INPUTMUX0_SHIFT)) & MRCC_MRCC_GLB_ACC0_INPUTMUX0_MASK)

#define MRCC_MRCC_GLB_ACC0_CTIMER0_MASK          (0x2U)
#define MRCC_MRCC_GLB_ACC0_CTIMER0_SHIFT         (1U)
/*! CTIMER0 - Write to CTIMER0
 *  0b0..Automatic clock gating is disabled
 *  0b1..Automatic clock gating is enabled
 */
#define MRCC_MRCC_GLB_ACC0_CTIMER0(x)            (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_ACC0_CTIMER0_SHIFT)) & MRCC_MRCC_GLB_ACC0_CTIMER0_MASK)

#define MRCC_MRCC_GLB_ACC0_CTIMER1_MASK          (0x4U)
#define MRCC_MRCC_GLB_ACC0_CTIMER1_SHIFT         (2U)
/*! CTIMER1 - Write to CTIMER1
 *  0b0..Automatic clock gating is disabled
 *  0b1..Automatic clock gating is enabled
 */
#define MRCC_MRCC_GLB_ACC0_CTIMER1(x)            (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_ACC0_CTIMER1_SHIFT)) & MRCC_MRCC_GLB_ACC0_CTIMER1_MASK)

#define MRCC_MRCC_GLB_ACC0_CTIMER2_MASK          (0x8U)
#define MRCC_MRCC_GLB_ACC0_CTIMER2_SHIFT         (3U)
/*! CTIMER2 - Write to CTIMER2
 *  0b0..Automatic clock gating is disabled
 *  0b1..Automatic clock gating is enabled
 */
#define MRCC_MRCC_GLB_ACC0_CTIMER2(x)            (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_ACC0_CTIMER2_SHIFT)) & MRCC_MRCC_GLB_ACC0_CTIMER2_MASK)

#define MRCC_MRCC_GLB_ACC0_FREQME_MASK           (0x10U)
#define MRCC_MRCC_GLB_ACC0_FREQME_SHIFT          (4U)
/*! FREQME - Write to FREQME
 *  0b0..Automatic clock gating is disabled
 *  0b1..Automatic clock gating is enabled
 */
#define MRCC_MRCC_GLB_ACC0_FREQME(x)             (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_ACC0_FREQME_SHIFT)) & MRCC_MRCC_GLB_ACC0_FREQME_MASK)

#define MRCC_MRCC_GLB_ACC0_UTICK0_MASK           (0x20U)
#define MRCC_MRCC_GLB_ACC0_UTICK0_SHIFT          (5U)
/*! UTICK0 - Write to UTICK0
 *  0b0..Automatic clock gating is disabled
 *  0b1..Automatic clock gating is enabled
 */
#define MRCC_MRCC_GLB_ACC0_UTICK0(x)             (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_ACC0_UTICK0_SHIFT)) & MRCC_MRCC_GLB_ACC0_UTICK0_MASK)

#define MRCC_MRCC_GLB_ACC0_WWDT0_MASK            (0x40U)
#define MRCC_MRCC_GLB_ACC0_WWDT0_SHIFT           (6U)
/*! WWDT0 - Write to WWDT0
 *  0b0..Automatic clock gating is disabled
 *  0b1..Automatic clock gating is enabled
 */
#define MRCC_MRCC_GLB_ACC0_WWDT0(x)              (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_ACC0_WWDT0_SHIFT)) & MRCC_MRCC_GLB_ACC0_WWDT0_MASK)

#define MRCC_MRCC_GLB_ACC0_DMA_MASK              (0x80U)
#define MRCC_MRCC_GLB_ACC0_DMA_SHIFT             (7U)
/*! DMA - Write to DMA
 *  0b0..Automatic clock gating is disabled
 *  0b1..Automatic clock gating is enabled
 */
#define MRCC_MRCC_GLB_ACC0_DMA(x)                (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_ACC0_DMA_SHIFT)) & MRCC_MRCC_GLB_ACC0_DMA_MASK)

#define MRCC_MRCC_GLB_ACC0_AOI0_MASK             (0x100U)
#define MRCC_MRCC_GLB_ACC0_AOI0_SHIFT            (8U)
/*! AOI0 - Write to AOI0
 *  0b0..Automatic clock gating is disabled
 *  0b1..Automatic clock gating is enabled
 */
#define MRCC_MRCC_GLB_ACC0_AOI0(x)               (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_ACC0_AOI0_SHIFT)) & MRCC_MRCC_GLB_ACC0_AOI0_MASK)

#define MRCC_MRCC_GLB_ACC0_CRC_MASK              (0x200U)
#define MRCC_MRCC_GLB_ACC0_CRC_SHIFT             (9U)
/*! CRC - Write to CRC
 *  0b0..Automatic clock gating is disabled
 *  0b1..Automatic clock gating is enabled
 */
#define MRCC_MRCC_GLB_ACC0_CRC(x)                (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_ACC0_CRC_SHIFT)) & MRCC_MRCC_GLB_ACC0_CRC_MASK)

#define MRCC_MRCC_GLB_ACC0_NVM_MBC_MASK          (0x400U)
#define MRCC_MRCC_GLB_ACC0_NVM_MBC_SHIFT         (10U)
/*! NVM_MBC - Write to NVM_MBC
 *  0b0..Automatic clock gating is disabled
 *  0b1..Automatic clock gating is enabled
 */
#define MRCC_MRCC_GLB_ACC0_NVM_MBC(x)            (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_ACC0_NVM_MBC_SHIFT)) & MRCC_MRCC_GLB_ACC0_NVM_MBC_MASK)

#define MRCC_MRCC_GLB_ACC0_NVM_NPX_CTL_MASK      (0x800U)
#define MRCC_MRCC_GLB_ACC0_NVM_NPX_CTL_SHIFT     (11U)
/*! NVM_NPX_CTL - Write to NVM_NPX_CTL
 *  0b0..Automatic clock gating is disabled
 *  0b1..Automatic clock gating is enabled
 */
#define MRCC_MRCC_GLB_ACC0_NVM_NPX_CTL(x)        (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_ACC0_NVM_NPX_CTL_SHIFT)) & MRCC_MRCC_GLB_ACC0_NVM_NPX_CTL_MASK)

#define MRCC_MRCC_GLB_ACC0_FMU0_MASK             (0x1000U)
#define MRCC_MRCC_GLB_ACC0_FMU0_SHIFT            (12U)
/*! FMU0 - Write to FMU0
 *  0b0..Automatic clock gating is disabled
 *  0b1..Automatic clock gating is enabled
 */
#define MRCC_MRCC_GLB_ACC0_FMU0(x)               (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_ACC0_FMU0_SHIFT)) & MRCC_MRCC_GLB_ACC0_FMU0_MASK)

#define MRCC_MRCC_GLB_ACC0_LPI2C0_MASK           (0x2000U)
#define MRCC_MRCC_GLB_ACC0_LPI2C0_SHIFT          (13U)
/*! LPI2C0 - Write to LPI2C0
 *  0b0..Automatic clock gating is disabled
 *  0b1..Automatic clock gating is enabled
 */
#define MRCC_MRCC_GLB_ACC0_LPI2C0(x)             (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_ACC0_LPI2C0_SHIFT)) & MRCC_MRCC_GLB_ACC0_LPI2C0_MASK)

#define MRCC_MRCC_GLB_ACC0_LPSPI0_MASK           (0x4000U)
#define MRCC_MRCC_GLB_ACC0_LPSPI0_SHIFT          (14U)
/*! LPSPI0 - Write to LPSPI0
 *  0b0..Automatic clock gating is disabled
 *  0b1..Automatic clock gating is enabled
 */
#define MRCC_MRCC_GLB_ACC0_LPSPI0(x)             (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_ACC0_LPSPI0_SHIFT)) & MRCC_MRCC_GLB_ACC0_LPSPI0_MASK)

#define MRCC_MRCC_GLB_ACC0_LPSPI1_MASK           (0x8000U)
#define MRCC_MRCC_GLB_ACC0_LPSPI1_SHIFT          (15U)
/*! LPSPI1 - Write to LPSPI1
 *  0b0..Automatic clock gating is disabled
 *  0b1..Automatic clock gating is enabled
 */
#define MRCC_MRCC_GLB_ACC0_LPSPI1(x)             (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_ACC0_LPSPI1_SHIFT)) & MRCC_MRCC_GLB_ACC0_LPSPI1_MASK)

#define MRCC_MRCC_GLB_ACC0_LPUART0_MASK          (0x10000U)
#define MRCC_MRCC_GLB_ACC0_LPUART0_SHIFT         (16U)
/*! LPUART0 - Write to LPUART0
 *  0b0..Automatic clock gating is disabled
 *  0b1..Automatic clock gating is enabled
 */
#define MRCC_MRCC_GLB_ACC0_LPUART0(x)            (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_ACC0_LPUART0_SHIFT)) & MRCC_MRCC_GLB_ACC0_LPUART0_MASK)

#define MRCC_MRCC_GLB_ACC0_LPUART1_MASK          (0x20000U)
#define MRCC_MRCC_GLB_ACC0_LPUART1_SHIFT         (17U)
/*! LPUART1 - Write to LPUART1
 *  0b0..Automatic clock gating is disabled
 *  0b1..Automatic clock gating is enabled
 */
#define MRCC_MRCC_GLB_ACC0_LPUART1(x)            (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_ACC0_LPUART1_SHIFT)) & MRCC_MRCC_GLB_ACC0_LPUART1_MASK)

#define MRCC_MRCC_GLB_ACC0_LPUART2_MASK          (0x40000U)
#define MRCC_MRCC_GLB_ACC0_LPUART2_SHIFT         (18U)
/*! LPUART2 - Write to LPUART2
 *  0b0..Automatic clock gating is disabled
 *  0b1..Automatic clock gating is enabled
 */
#define MRCC_MRCC_GLB_ACC0_LPUART2(x)            (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_ACC0_LPUART2_SHIFT)) & MRCC_MRCC_GLB_ACC0_LPUART2_MASK)

#define MRCC_MRCC_GLB_ACC0_QDC0_MASK             (0x80000U)
#define MRCC_MRCC_GLB_ACC0_QDC0_SHIFT            (19U)
/*! QDC0 - Write to QDC0
 *  0b0..Automatic clock gating is disabled
 *  0b1..Automatic clock gating is enabled
 */
#define MRCC_MRCC_GLB_ACC0_QDC0(x)               (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_ACC0_QDC0_SHIFT)) & MRCC_MRCC_GLB_ACC0_QDC0_MASK)

#define MRCC_MRCC_GLB_ACC0_FLEXPWM0_MASK         (0x100000U)
#define MRCC_MRCC_GLB_ACC0_FLEXPWM0_SHIFT        (20U)
/*! FLEXPWM0 - Write to FLEXPWM0
 *  0b0..Automatic clock gating is disabled
 *  0b1..Automatic clock gating is enabled
 */
#define MRCC_MRCC_GLB_ACC0_FLEXPWM0(x)           (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_ACC0_FLEXPWM0_SHIFT)) & MRCC_MRCC_GLB_ACC0_FLEXPWM0_MASK)

#define MRCC_MRCC_GLB_ACC0_OSTIMER0_MASK         (0x200000U)
#define MRCC_MRCC_GLB_ACC0_OSTIMER0_SHIFT        (21U)
/*! OSTIMER0 - Write to OSTIMER0
 *  0b0..Automatic clock gating is disabled
 *  0b1..Automatic clock gating is enabled
 */
#define MRCC_MRCC_GLB_ACC0_OSTIMER0(x)           (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_ACC0_OSTIMER0_SHIFT)) & MRCC_MRCC_GLB_ACC0_OSTIMER0_MASK)

#define MRCC_MRCC_GLB_ACC0_ADC0_MASK             (0x400000U)
#define MRCC_MRCC_GLB_ACC0_ADC0_SHIFT            (22U)
/*! ADC0 - Write to ADC0
 *  0b0..Automatic clock gating is disabled
 *  0b1..Automatic clock gating is enabled
 */
#define MRCC_MRCC_GLB_ACC0_ADC0(x)               (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_ACC0_ADC0_SHIFT)) & MRCC_MRCC_GLB_ACC0_ADC0_MASK)

#define MRCC_MRCC_GLB_ACC0_CMP0_MASK             (0x800000U)
#define MRCC_MRCC_GLB_ACC0_CMP0_SHIFT            (23U)
/*! CMP0 - Write to CMP0
 *  0b0..Automatic clock gating is disabled
 *  0b1..Automatic clock gating is enabled
 */
#define MRCC_MRCC_GLB_ACC0_CMP0(x)               (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_ACC0_CMP0_SHIFT)) & MRCC_MRCC_GLB_ACC0_CMP0_MASK)

#define MRCC_MRCC_GLB_ACC0_CMP1_MASK             (0x1000000U)
#define MRCC_MRCC_GLB_ACC0_CMP1_SHIFT            (24U)
/*! CMP1 - Write to CMP1
 *  0b0..Automatic clock gating is disabled
 *  0b1..Automatic clock gating is enabled
 */
#define MRCC_MRCC_GLB_ACC0_CMP1(x)               (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_ACC0_CMP1_SHIFT)) & MRCC_MRCC_GLB_ACC0_CMP1_MASK)

#define MRCC_MRCC_GLB_ACC0_PORT0_MASK            (0x2000000U)
#define MRCC_MRCC_GLB_ACC0_PORT0_SHIFT           (25U)
/*! PORT0 - Write to PORT0
 *  0b0..Automatic clock gating is disabled
 *  0b1..Automatic clock gating is enabled
 */
#define MRCC_MRCC_GLB_ACC0_PORT0(x)              (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_ACC0_PORT0_SHIFT)) & MRCC_MRCC_GLB_ACC0_PORT0_MASK)

#define MRCC_MRCC_GLB_ACC0_PORT1_MASK            (0x4000000U)
#define MRCC_MRCC_GLB_ACC0_PORT1_SHIFT           (26U)
/*! PORT1 - Write to PORT1
 *  0b0..Automatic clock gating is disabled
 *  0b1..Automatic clock gating is enabled
 */
#define MRCC_MRCC_GLB_ACC0_PORT1(x)              (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_ACC0_PORT1_SHIFT)) & MRCC_MRCC_GLB_ACC0_PORT1_MASK)

#define MRCC_MRCC_GLB_ACC0_ATX0_MASK             (0x8000000U)
#define MRCC_MRCC_GLB_ACC0_ATX0_SHIFT            (27U)
/*! ATX0 - Write to ATX0
 *  0b0..Automatic clock gating is disabled
 *  0b1..Automatic clock gating is enabled
 */
#define MRCC_MRCC_GLB_ACC0_ATX0(x)               (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_ACC0_ATX0_SHIFT)) & MRCC_MRCC_GLB_ACC0_ATX0_MASK)

#define MRCC_MRCC_GLB_ACC0_EZRAMC_RAMA_MASK      (0x40000000U)
#define MRCC_MRCC_GLB_ACC0_EZRAMC_RAMA_SHIFT     (30U)
/*! EZRAMC_RAMA - Write to EZRAMC_RAMA
 *  0b0..Automatic clock gating is disabled
 *  0b1..Automatic clock gating is enabled
 */
#define MRCC_MRCC_GLB_ACC0_EZRAMC_RAMA(x)        (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_ACC0_EZRAMC_RAMA_SHIFT)) & MRCC_MRCC_GLB_ACC0_EZRAMC_RAMA_MASK)

#define MRCC_MRCC_GLB_ACC0_GPIO0_MASK            (0x80000000U)
#define MRCC_MRCC_GLB_ACC0_GPIO0_SHIFT           (31U)
/*! GPIO0 - Write to GPIO0
 *  0b0..Automatic clock gating is disabled
 *  0b1..Automatic clock gating is enabled
 */
#define MRCC_MRCC_GLB_ACC0_GPIO0(x)              (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_ACC0_GPIO0_SHIFT)) & MRCC_MRCC_GLB_ACC0_GPIO0_MASK)
/*! @} */

/*! @name MRCC_GLB_ACC1 - Control Automatic Clock Gating 1 */
/*! @{ */

#define MRCC_MRCC_GLB_ACC1_GPIO1_MASK            (0x1U)
#define MRCC_MRCC_GLB_ACC1_GPIO1_SHIFT           (0U)
/*! GPIO1 - Write to GPIO1
 *  0b0..Automatic clock gating is disabled
 *  0b1..Automatic clock gating is enabled
 */
#define MRCC_MRCC_GLB_ACC1_GPIO1(x)              (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_ACC1_GPIO1_SHIFT)) & MRCC_MRCC_GLB_ACC1_GPIO1_MASK)

#define MRCC_MRCC_GLB_ACC1_PERIPH_GROUP_0_MASK   (0x2U)
#define MRCC_MRCC_GLB_ACC1_PERIPH_GROUP_0_SHIFT  (1U)
/*! PERIPH_GROUP_0 - Write to PERIPH_GROUP_0
 *  0b0..Automatic clock gating is disabled
 *  0b1..Automatic clock gating is enabled
 */
#define MRCC_MRCC_GLB_ACC1_PERIPH_GROUP_0(x)     (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_ACC1_PERIPH_GROUP_0_SHIFT)) & MRCC_MRCC_GLB_ACC1_PERIPH_GROUP_0_MASK)

#define MRCC_MRCC_GLB_ACC1_PERIPH_GROUP_1_MASK   (0x4U)
#define MRCC_MRCC_GLB_ACC1_PERIPH_GROUP_1_SHIFT  (2U)
/*! PERIPH_GROUP_1 - Write to PERIPH_GROUP_1
 *  0b0..Automatic clock gating is disabled
 *  0b1..Automatic clock gating is enabled
 */
#define MRCC_MRCC_GLB_ACC1_PERIPH_GROUP_1(x)     (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_ACC1_PERIPH_GROUP_1_SHIFT)) & MRCC_MRCC_GLB_ACC1_PERIPH_GROUP_1_MASK)

#define MRCC_MRCC_GLB_ACC1_ROMCP_MASK            (0x8U)
#define MRCC_MRCC_GLB_ACC1_ROMCP_SHIFT           (3U)
/*! ROMCP - Write to ROMCP
 *  0b0..Automatic clock gating is disabled
 *  0b1..Automatic clock gating is enabled
 */
#define MRCC_MRCC_GLB_ACC1_ROMCP(x)              (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_ACC1_ROMCP_SHIFT)) & MRCC_MRCC_GLB_ACC1_ROMCP_MASK)
/*! @} */

/*! @name MRCC_GLB_PR0 - Peripheral Enable Configuration 0 */
/*! @{ */

#define MRCC_MRCC_GLB_PR0_CTIMER0_MASK           (0x2U)
#define MRCC_MRCC_GLB_PR0_CTIMER0_SHIFT          (1U)
/*! CTIMER0 - Write to CTIMER0
 *  0b0..Peripheral is disabled
 *  0b1..Peripheral is enabled
 */
#define MRCC_MRCC_GLB_PR0_CTIMER0(x)             (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_PR0_CTIMER0_SHIFT)) & MRCC_MRCC_GLB_PR0_CTIMER0_MASK)

#define MRCC_MRCC_GLB_PR0_CTIMER1_MASK           (0x4U)
#define MRCC_MRCC_GLB_PR0_CTIMER1_SHIFT          (2U)
/*! CTIMER1 - Write to CTIMER1
 *  0b0..Peripheral is disabled
 *  0b1..Peripheral is enabled
 */
#define MRCC_MRCC_GLB_PR0_CTIMER1(x)             (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_PR0_CTIMER1_SHIFT)) & MRCC_MRCC_GLB_PR0_CTIMER1_MASK)

#define MRCC_MRCC_GLB_PR0_CTIMER2_MASK           (0x8U)
#define MRCC_MRCC_GLB_PR0_CTIMER2_SHIFT          (3U)
/*! CTIMER2 - Write to CTIMER2
 *  0b0..Peripheral is disabled
 *  0b1..Peripheral is enabled
 */
#define MRCC_MRCC_GLB_PR0_CTIMER2(x)             (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_PR0_CTIMER2_SHIFT)) & MRCC_MRCC_GLB_PR0_CTIMER2_MASK)

#define MRCC_MRCC_GLB_PR0_FREQME_MASK            (0x10U)
#define MRCC_MRCC_GLB_PR0_FREQME_SHIFT           (4U)
/*! FREQME - Write to FREQME
 *  0b0..Peripheral is disabled
 *  0b1..Peripheral is enabled
 */
#define MRCC_MRCC_GLB_PR0_FREQME(x)              (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_PR0_FREQME_SHIFT)) & MRCC_MRCC_GLB_PR0_FREQME_MASK)

#define MRCC_MRCC_GLB_PR0_UTICK0_MASK            (0x20U)
#define MRCC_MRCC_GLB_PR0_UTICK0_SHIFT           (5U)
/*! UTICK0 - Write to UTICK0
 *  0b0..Peripheral is disabled
 *  0b1..Peripheral is enabled
 */
#define MRCC_MRCC_GLB_PR0_UTICK0(x)              (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_PR0_UTICK0_SHIFT)) & MRCC_MRCC_GLB_PR0_UTICK0_MASK)

#define MRCC_MRCC_GLB_PR0_DMA_MASK               (0x80U)
#define MRCC_MRCC_GLB_PR0_DMA_SHIFT              (7U)
/*! DMA - Write to DMA
 *  0b0..Peripheral is disabled
 *  0b1..Peripheral is enabled
 */
#define MRCC_MRCC_GLB_PR0_DMA(x)                 (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_PR0_DMA_SHIFT)) & MRCC_MRCC_GLB_PR0_DMA_MASK)

#define MRCC_MRCC_GLB_PR0_AOI0_MASK              (0x100U)
#define MRCC_MRCC_GLB_PR0_AOI0_SHIFT             (8U)
/*! AOI0 - Write to AOI0
 *  0b0..Peripheral is disabled
 *  0b1..Peripheral is enabled
 */
#define MRCC_MRCC_GLB_PR0_AOI0(x)                (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_PR0_AOI0_SHIFT)) & MRCC_MRCC_GLB_PR0_AOI0_MASK)

#define MRCC_MRCC_GLB_PR0_CRC_MASK               (0x200U)
#define MRCC_MRCC_GLB_PR0_CRC_SHIFT              (9U)
/*! CRC - Write to CRC
 *  0b0..Peripheral is disabled
 *  0b1..Peripheral is enabled
 */
#define MRCC_MRCC_GLB_PR0_CRC(x)                 (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_PR0_CRC_SHIFT)) & MRCC_MRCC_GLB_PR0_CRC_MASK)

#define MRCC_MRCC_GLB_PR0_LPI2C0_MASK            (0x2000U)
#define MRCC_MRCC_GLB_PR0_LPI2C0_SHIFT           (13U)
/*! LPI2C0 - Write to LPI2C0
 *  0b0..Peripheral is disabled
 *  0b1..Peripheral is enabled
 */
#define MRCC_MRCC_GLB_PR0_LPI2C0(x)              (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_PR0_LPI2C0_SHIFT)) & MRCC_MRCC_GLB_PR0_LPI2C0_MASK)

#define MRCC_MRCC_GLB_PR0_LPSPI0_MASK            (0x4000U)
#define MRCC_MRCC_GLB_PR0_LPSPI0_SHIFT           (14U)
/*! LPSPI0 - Write to LPSPI0
 *  0b0..Peripheral is disabled
 *  0b1..Peripheral is enabled
 */
#define MRCC_MRCC_GLB_PR0_LPSPI0(x)              (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_PR0_LPSPI0_SHIFT)) & MRCC_MRCC_GLB_PR0_LPSPI0_MASK)

#define MRCC_MRCC_GLB_PR0_LPSPI1_MASK            (0x8000U)
#define MRCC_MRCC_GLB_PR0_LPSPI1_SHIFT           (15U)
/*! LPSPI1 - Write to LPSPI1
 *  0b0..Peripheral is disabled
 *  0b1..Peripheral is enabled
 */
#define MRCC_MRCC_GLB_PR0_LPSPI1(x)              (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_PR0_LPSPI1_SHIFT)) & MRCC_MRCC_GLB_PR0_LPSPI1_MASK)

#define MRCC_MRCC_GLB_PR0_LPUART0_MASK           (0x10000U)
#define MRCC_MRCC_GLB_PR0_LPUART0_SHIFT          (16U)
/*! LPUART0 - Write to LPUART0
 *  0b0..Peripheral is disabled
 *  0b1..Peripheral is enabled
 */
#define MRCC_MRCC_GLB_PR0_LPUART0(x)             (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_PR0_LPUART0_SHIFT)) & MRCC_MRCC_GLB_PR0_LPUART0_MASK)

#define MRCC_MRCC_GLB_PR0_LPUART1_MASK           (0x20000U)
#define MRCC_MRCC_GLB_PR0_LPUART1_SHIFT          (17U)
/*! LPUART1 - Write to LPUART1
 *  0b0..Peripheral is disabled
 *  0b1..Peripheral is enabled
 */
#define MRCC_MRCC_GLB_PR0_LPUART1(x)             (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_PR0_LPUART1_SHIFT)) & MRCC_MRCC_GLB_PR0_LPUART1_MASK)

#define MRCC_MRCC_GLB_PR0_LPUART2_MASK           (0x40000U)
#define MRCC_MRCC_GLB_PR0_LPUART2_SHIFT          (18U)
/*! LPUART2 - Write to LPUART2
 *  0b0..Peripheral is disabled
 *  0b1..Peripheral is enabled
 */
#define MRCC_MRCC_GLB_PR0_LPUART2(x)             (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_PR0_LPUART2_SHIFT)) & MRCC_MRCC_GLB_PR0_LPUART2_MASK)

#define MRCC_MRCC_GLB_PR0_QDC0_MASK              (0x80000U)
#define MRCC_MRCC_GLB_PR0_QDC0_SHIFT             (19U)
/*! QDC0 - Write to QDC0
 *  0b0..Peripheral is disabled
 *  0b1..Peripheral is enabled
 */
#define MRCC_MRCC_GLB_PR0_QDC0(x)                (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_PR0_QDC0_SHIFT)) & MRCC_MRCC_GLB_PR0_QDC0_MASK)

#define MRCC_MRCC_GLB_PR0_FLEXPWM0_MASK          (0x100000U)
#define MRCC_MRCC_GLB_PR0_FLEXPWM0_SHIFT         (20U)
/*! FLEXPWM0 - Write to FLEXPWM0
 *  0b0..Peripheral is disabled
 *  0b1..Peripheral is enabled
 */
#define MRCC_MRCC_GLB_PR0_FLEXPWM0(x)            (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_PR0_FLEXPWM0_SHIFT)) & MRCC_MRCC_GLB_PR0_FLEXPWM0_MASK)

#define MRCC_MRCC_GLB_PR0_OSTIMER0_MASK          (0x200000U)
#define MRCC_MRCC_GLB_PR0_OSTIMER0_SHIFT         (21U)
/*! OSTIMER0 - Write to OSTIMER0
 *  0b0..Peripheral is disabled
 *  0b1..Peripheral is enabled
 */
#define MRCC_MRCC_GLB_PR0_OSTIMER0(x)            (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_PR0_OSTIMER0_SHIFT)) & MRCC_MRCC_GLB_PR0_OSTIMER0_MASK)

#define MRCC_MRCC_GLB_PR0_ADC0_MASK              (0x400000U)
#define MRCC_MRCC_GLB_PR0_ADC0_SHIFT             (22U)
/*! ADC0 - Write to ADC0
 *  0b0..Peripheral is disabled
 *  0b1..Peripheral is enabled
 */
#define MRCC_MRCC_GLB_PR0_ADC0(x)                (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_PR0_ADC0_SHIFT)) & MRCC_MRCC_GLB_PR0_ADC0_MASK)

#define MRCC_MRCC_GLB_PR0_CMP0_MASK              (0x800000U)
#define MRCC_MRCC_GLB_PR0_CMP0_SHIFT             (23U)
/*! CMP0 - Write to CMP0
 *  0b0..Peripheral is disabled
 *  0b1..Peripheral is enabled
 */
#define MRCC_MRCC_GLB_PR0_CMP0(x)                (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_PR0_CMP0_SHIFT)) & MRCC_MRCC_GLB_PR0_CMP0_MASK)

#define MRCC_MRCC_GLB_PR0_CMP1_MASK              (0x1000000U)
#define MRCC_MRCC_GLB_PR0_CMP1_SHIFT             (24U)
/*! CMP1 - Write to CMP1
 *  0b0..Peripheral is disabled
 *  0b1..Peripheral is enabled
 */
#define MRCC_MRCC_GLB_PR0_CMP1(x)                (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_PR0_CMP1_SHIFT)) & MRCC_MRCC_GLB_PR0_CMP1_MASK)

#define MRCC_MRCC_GLB_PR0_PORT0_MASK             (0x2000000U)
#define MRCC_MRCC_GLB_PR0_PORT0_SHIFT            (25U)
/*! PORT0 - Write to PORT0
 *  0b0..Peripheral is disabled
 *  0b1..Peripheral is enabled
 */
#define MRCC_MRCC_GLB_PR0_PORT0(x)               (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_PR0_PORT0_SHIFT)) & MRCC_MRCC_GLB_PR0_PORT0_MASK)

#define MRCC_MRCC_GLB_PR0_PORT1_MASK             (0x4000000U)
#define MRCC_MRCC_GLB_PR0_PORT1_SHIFT            (26U)
/*! PORT1 - Write to PORT1
 *  0b0..Peripheral is disabled
 *  0b1..Peripheral is enabled
 */
#define MRCC_MRCC_GLB_PR0_PORT1(x)               (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_PR0_PORT1_SHIFT)) & MRCC_MRCC_GLB_PR0_PORT1_MASK)

#define MRCC_MRCC_GLB_PR0_ATX0_MASK              (0x8000000U)
#define MRCC_MRCC_GLB_PR0_ATX0_SHIFT             (27U)
/*! ATX0 - Write to ATX0
 *  0b0..Peripheral is disabled
 *  0b1..Peripheral is enabled
 */
#define MRCC_MRCC_GLB_PR0_ATX0(x)                (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_PR0_ATX0_SHIFT)) & MRCC_MRCC_GLB_PR0_ATX0_MASK)

#define MRCC_MRCC_GLB_PR0_MTR_MASK               (0x10000000U)
#define MRCC_MRCC_GLB_PR0_MTR_SHIFT              (28U)
/*! MTR - Write to MTR
 *  0b0..Peripheral is disabled
 *  0b1..Peripheral is enabled
 */
#define MRCC_MRCC_GLB_PR0_MTR(x)                 (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_PR0_MTR_SHIFT)) & MRCC_MRCC_GLB_PR0_MTR_MASK)

#define MRCC_MRCC_GLB_PR0_TCU_MASK               (0x20000000U)
#define MRCC_MRCC_GLB_PR0_TCU_SHIFT              (29U)
/*! TCU - Write to TCU
 *  0b0..Peripheral is disabled
 *  0b1..Peripheral is enabled
 */
#define MRCC_MRCC_GLB_PR0_TCU(x)                 (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_PR0_TCU_SHIFT)) & MRCC_MRCC_GLB_PR0_TCU_MASK)

#define MRCC_MRCC_GLB_PR0_GPIO0_MASK             (0x80000000U)
#define MRCC_MRCC_GLB_PR0_GPIO0_SHIFT            (31U)
/*! GPIO0 - Write to GPIO0
 *  0b0..Peripheral is disabled
 *  0b1..Peripheral is enabled
 */
#define MRCC_MRCC_GLB_PR0_GPIO0(x)               (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_PR0_GPIO0_SHIFT)) & MRCC_MRCC_GLB_PR0_GPIO0_MASK)
/*! @} */

/*! @name MRCC_GLB_PR1 - Peripheral Enable Configuration 1 */
/*! @{ */

#define MRCC_MRCC_GLB_PR1_GPIO1_MASK             (0x1U)
#define MRCC_MRCC_GLB_PR1_GPIO1_SHIFT            (0U)
/*! GPIO1 - Write to GPIO1
 *  0b0..Peripheral is disabled
 *  0b1..Peripheral is enabled
 */
#define MRCC_MRCC_GLB_PR1_GPIO1(x)               (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_PR1_GPIO1_SHIFT)) & MRCC_MRCC_GLB_PR1_GPIO1_MASK)

#define MRCC_MRCC_GLB_PR1_PERIPH_GROUP_0_MASK    (0x2U)
#define MRCC_MRCC_GLB_PR1_PERIPH_GROUP_0_SHIFT   (1U)
/*! PERIPH_GROUP_0 - Write to PERIPH_GROUP_0
 *  0b0..Peripheral is disabled
 *  0b1..Peripheral is enabled
 */
#define MRCC_MRCC_GLB_PR1_PERIPH_GROUP_0(x)      (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_PR1_PERIPH_GROUP_0_SHIFT)) & MRCC_MRCC_GLB_PR1_PERIPH_GROUP_0_MASK)

#define MRCC_MRCC_GLB_PR1_PERIPH_GROUP_1_MASK    (0x4U)
#define MRCC_MRCC_GLB_PR1_PERIPH_GROUP_1_SHIFT   (2U)
/*! PERIPH_GROUP_1 - Write to PERIPH_GROUP_1
 *  0b0..Peripheral is disabled
 *  0b1..Peripheral is enabled
 */
#define MRCC_MRCC_GLB_PR1_PERIPH_GROUP_1(x)      (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_GLB_PR1_PERIPH_GROUP_1_SHIFT)) & MRCC_MRCC_GLB_PR1_PERIPH_GROUP_1_MASK)
/*! @} */

/*! @name MRCC_CTIMER0_CLKSEL - CTIMER0 clock selection control */
/*! @{ */

#define MRCC_MRCC_CTIMER0_CLKSEL_MUX_MASK        (0x3U)
#define MRCC_MRCC_CTIMER0_CLKSEL_MUX_SHIFT       (0U)
/*! MUX - Functional Clock Mux Select
 *  0b11..clkroot_firc_div
 *  0b10..clkroot_16k
 *  0b01..clkroot_firc_div
 *  0b00..FRO_12M
 */
#define MRCC_MRCC_CTIMER0_CLKSEL_MUX(x)          (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_CTIMER0_CLKSEL_MUX_SHIFT)) & MRCC_MRCC_CTIMER0_CLKSEL_MUX_MASK)
/*! @} */

/*! @name MRCC_CTIMER0_CLKDIV - CTIMER0 clock divider control */
/*! @{ */

#define MRCC_MRCC_CTIMER0_CLKDIV_DIV_MASK        (0xFU)
#define MRCC_MRCC_CTIMER0_CLKDIV_DIV_SHIFT       (0U)
/*! DIV - Functional Clock Divider */
#define MRCC_MRCC_CTIMER0_CLKDIV_DIV(x)          (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_CTIMER0_CLKDIV_DIV_SHIFT)) & MRCC_MRCC_CTIMER0_CLKDIV_DIV_MASK)

#define MRCC_MRCC_CTIMER0_CLKDIV_RESET_MASK      (0x20000000U)
#define MRCC_MRCC_CTIMER0_CLKDIV_RESET_SHIFT     (29U)
/*! RESET - Reset divider counter
 *  0b0..Divider isn't reset
 *  0b1..Divider is reset
 */
#define MRCC_MRCC_CTIMER0_CLKDIV_RESET(x)        (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_CTIMER0_CLKDIV_RESET_SHIFT)) & MRCC_MRCC_CTIMER0_CLKDIV_RESET_MASK)

#define MRCC_MRCC_CTIMER0_CLKDIV_HALT_MASK       (0x40000000U)
#define MRCC_MRCC_CTIMER0_CLKDIV_HALT_SHIFT      (30U)
/*! HALT - Halt divider counter
 *  0b0..Divider clock is running
 *  0b1..Divider clock is stopped
 */
#define MRCC_MRCC_CTIMER0_CLKDIV_HALT(x)         (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_CTIMER0_CLKDIV_HALT_SHIFT)) & MRCC_MRCC_CTIMER0_CLKDIV_HALT_MASK)

#define MRCC_MRCC_CTIMER0_CLKDIV_UNSTAB_MASK     (0x80000000U)
#define MRCC_MRCC_CTIMER0_CLKDIV_UNSTAB_SHIFT    (31U)
/*! UNSTAB - Divider status flag
 *  0b0..Divider clock is stable
 *  0b1..clock frequency isn't stable
 */
#define MRCC_MRCC_CTIMER0_CLKDIV_UNSTAB(x)       (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_CTIMER0_CLKDIV_UNSTAB_SHIFT)) & MRCC_MRCC_CTIMER0_CLKDIV_UNSTAB_MASK)
/*! @} */

/*! @name MRCC_CTIMER1_CLKSEL - CTIMER1 clock selection control */
/*! @{ */

#define MRCC_MRCC_CTIMER1_CLKSEL_MUX_MASK        (0x3U)
#define MRCC_MRCC_CTIMER1_CLKSEL_MUX_SHIFT       (0U)
/*! MUX - Functional Clock Mux Select
 *  0b11..clkgen_clkroot_1m_firc_muxed
 *  0b10..clkroot_16k
 *  0b01..clkroot_firc_div
 *  0b00..FRO_12M
 */
#define MRCC_MRCC_CTIMER1_CLKSEL_MUX(x)          (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_CTIMER1_CLKSEL_MUX_SHIFT)) & MRCC_MRCC_CTIMER1_CLKSEL_MUX_MASK)
/*! @} */

/*! @name MRCC_CTIMER1_CLKDIV - CTIMER1 clock divider control */
/*! @{ */

#define MRCC_MRCC_CTIMER1_CLKDIV_DIV_MASK        (0xFU)
#define MRCC_MRCC_CTIMER1_CLKDIV_DIV_SHIFT       (0U)
/*! DIV - Functional Clock Divider */
#define MRCC_MRCC_CTIMER1_CLKDIV_DIV(x)          (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_CTIMER1_CLKDIV_DIV_SHIFT)) & MRCC_MRCC_CTIMER1_CLKDIV_DIV_MASK)

#define MRCC_MRCC_CTIMER1_CLKDIV_RESET_MASK      (0x20000000U)
#define MRCC_MRCC_CTIMER1_CLKDIV_RESET_SHIFT     (29U)
/*! RESET - Reset divider counter
 *  0b0..Divider isn't reset
 *  0b1..Divider is reset
 */
#define MRCC_MRCC_CTIMER1_CLKDIV_RESET(x)        (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_CTIMER1_CLKDIV_RESET_SHIFT)) & MRCC_MRCC_CTIMER1_CLKDIV_RESET_MASK)

#define MRCC_MRCC_CTIMER1_CLKDIV_HALT_MASK       (0x40000000U)
#define MRCC_MRCC_CTIMER1_CLKDIV_HALT_SHIFT      (30U)
/*! HALT - Halt divider counter
 *  0b0..Divider clock is running
 *  0b1..Divider clock is stopped
 */
#define MRCC_MRCC_CTIMER1_CLKDIV_HALT(x)         (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_CTIMER1_CLKDIV_HALT_SHIFT)) & MRCC_MRCC_CTIMER1_CLKDIV_HALT_MASK)

#define MRCC_MRCC_CTIMER1_CLKDIV_UNSTAB_MASK     (0x80000000U)
#define MRCC_MRCC_CTIMER1_CLKDIV_UNSTAB_SHIFT    (31U)
/*! UNSTAB - Divider status flag
 *  0b0..Divider clock is stable
 *  0b1..clock frequency isn't stable
 */
#define MRCC_MRCC_CTIMER1_CLKDIV_UNSTAB(x)       (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_CTIMER1_CLKDIV_UNSTAB_SHIFT)) & MRCC_MRCC_CTIMER1_CLKDIV_UNSTAB_MASK)
/*! @} */

/*! @name MRCC_UTICK0_CLKSEL - UTICK0 clock selection control */
/*! @{ */

#define MRCC_MRCC_UTICK0_CLKSEL_MUX_MASK         (0x3U)
#define MRCC_MRCC_UTICK0_CLKSEL_MUX_SHIFT        (0U)
/*! MUX - Functional Clock Mux Select
 *  0b11..clkgen_clkroot_1m_12m_muxed
 *  0b10..clkroot_16k
 *  0b00..clkroot_12m_periph
 */
#define MRCC_MRCC_UTICK0_CLKSEL_MUX(x)           (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_UTICK0_CLKSEL_MUX_SHIFT)) & MRCC_MRCC_UTICK0_CLKSEL_MUX_MASK)
/*! @} */

/*! @name MRCC_WWDT0_CLKDIV - WWDT0 clock divider control */
/*! @{ */

#define MRCC_MRCC_WWDT0_CLKDIV_DIV_MASK          (0xFU)
#define MRCC_MRCC_WWDT0_CLKDIV_DIV_SHIFT         (0U)
/*! DIV - Functional Clock Divider */
#define MRCC_MRCC_WWDT0_CLKDIV_DIV(x)            (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_WWDT0_CLKDIV_DIV_SHIFT)) & MRCC_MRCC_WWDT0_CLKDIV_DIV_MASK)

#define MRCC_MRCC_WWDT0_CLKDIV_RESET_MASK        (0x20000000U)
#define MRCC_MRCC_WWDT0_CLKDIV_RESET_SHIFT       (29U)
/*! RESET - Reset divider counter
 *  0b0..Divider isn't reset
 *  0b1..Divider is reset
 */
#define MRCC_MRCC_WWDT0_CLKDIV_RESET(x)          (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_WWDT0_CLKDIV_RESET_SHIFT)) & MRCC_MRCC_WWDT0_CLKDIV_RESET_MASK)

#define MRCC_MRCC_WWDT0_CLKDIV_HALT_MASK         (0x40000000U)
#define MRCC_MRCC_WWDT0_CLKDIV_HALT_SHIFT        (30U)
/*! HALT - Halt divider counter
 *  0b0..Divider clock is running
 *  0b1..Divider clock is stopped
 */
#define MRCC_MRCC_WWDT0_CLKDIV_HALT(x)           (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_WWDT0_CLKDIV_HALT_SHIFT)) & MRCC_MRCC_WWDT0_CLKDIV_HALT_MASK)

#define MRCC_MRCC_WWDT0_CLKDIV_UNSTAB_MASK       (0x80000000U)
#define MRCC_MRCC_WWDT0_CLKDIV_UNSTAB_SHIFT      (31U)
/*! UNSTAB - Divider status flag
 *  0b0..Divider clock is stable
 *  0b1..clock frequency isn't stable
 */
#define MRCC_MRCC_WWDT0_CLKDIV_UNSTAB(x)         (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_WWDT0_CLKDIV_UNSTAB_SHIFT)) & MRCC_MRCC_WWDT0_CLKDIV_UNSTAB_MASK)
/*! @} */

/*! @name MRCC_LPTMR0_CLKDIV - LPTMR0 clock divider control */
/*! @{ */

#define MRCC_MRCC_LPTMR0_CLKDIV_DIV_MASK         (0xFU)
#define MRCC_MRCC_LPTMR0_CLKDIV_DIV_SHIFT        (0U)
/*! DIV - Functional Clock Divider */
#define MRCC_MRCC_LPTMR0_CLKDIV_DIV(x)           (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_LPTMR0_CLKDIV_DIV_SHIFT)) & MRCC_MRCC_LPTMR0_CLKDIV_DIV_MASK)

#define MRCC_MRCC_LPTMR0_CLKDIV_RESET_MASK       (0x20000000U)
#define MRCC_MRCC_LPTMR0_CLKDIV_RESET_SHIFT      (29U)
/*! RESET - Reset divider counter
 *  0b0..Divider isn't reset
 *  0b1..Divider is reset
 */
#define MRCC_MRCC_LPTMR0_CLKDIV_RESET(x)         (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_LPTMR0_CLKDIV_RESET_SHIFT)) & MRCC_MRCC_LPTMR0_CLKDIV_RESET_MASK)

#define MRCC_MRCC_LPTMR0_CLKDIV_HALT_MASK        (0x40000000U)
#define MRCC_MRCC_LPTMR0_CLKDIV_HALT_SHIFT       (30U)
/*! HALT - Halt divider counter
 *  0b0..Divider clock is running
 *  0b1..Divider clock is stopped
 */
#define MRCC_MRCC_LPTMR0_CLKDIV_HALT(x)          (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_LPTMR0_CLKDIV_HALT_SHIFT)) & MRCC_MRCC_LPTMR0_CLKDIV_HALT_MASK)

#define MRCC_MRCC_LPTMR0_CLKDIV_UNSTAB_MASK      (0x80000000U)
#define MRCC_MRCC_LPTMR0_CLKDIV_UNSTAB_SHIFT     (31U)
/*! UNSTAB - Divider status flag
 *  0b0..Divider clock is stable
 *  0b1..clock frequency isn't stable
 */
#define MRCC_MRCC_LPTMR0_CLKDIV_UNSTAB(x)        (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_LPTMR0_CLKDIV_UNSTAB_SHIFT)) & MRCC_MRCC_LPTMR0_CLKDIV_UNSTAB_MASK)
/*! @} */

/*! @name MRCC_OSTIMER0_CLKSEL - OSTIMER0 clock selection control */
/*! @{ */

#define MRCC_MRCC_OSTIMER0_CLKSEL_MUX_MASK       (0x3U)
#define MRCC_MRCC_OSTIMER0_CLKSEL_MUX_SHIFT      (0U)
/*! MUX - Functional Clock Mux Select
 *  0b11..clkroot_1m
 *  0b01..clkroot_1m
 *  0b00..clkroot_16k
 */
#define MRCC_MRCC_OSTIMER0_CLKSEL_MUX(x)         (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_OSTIMER0_CLKSEL_MUX_SHIFT)) & MRCC_MRCC_OSTIMER0_CLKSEL_MUX_MASK)
/*! @} */

/*! @name MRCC_ADC0_CLKSEL - ADC0 clock selection control */
/*! @{ */

#define MRCC_MRCC_ADC0_CLKSEL_MUX_MASK           (0x3U)
#define MRCC_MRCC_ADC0_CLKSEL_MUX_SHIFT          (0U)
/*! MUX - Functional Clock Mux Select
 *  0b11..clkgen_clkroot_xtal32k_firc_muxed
 *  0b01..clkroot_firc_div
 *  0b00..clkroot_12m_periph
 */
#define MRCC_MRCC_ADC0_CLKSEL_MUX(x)             (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_ADC0_CLKSEL_MUX_SHIFT)) & MRCC_MRCC_ADC0_CLKSEL_MUX_MASK)
/*! @} */

/*! @name MRCC_ADC0_CLKDIV - ADC0 clock divider control */
/*! @{ */

#define MRCC_MRCC_ADC0_CLKDIV_DIV_MASK           (0xFU)
#define MRCC_MRCC_ADC0_CLKDIV_DIV_SHIFT          (0U)
/*! DIV - Functional Clock Divider */
#define MRCC_MRCC_ADC0_CLKDIV_DIV(x)             (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_ADC0_CLKDIV_DIV_SHIFT)) & MRCC_MRCC_ADC0_CLKDIV_DIV_MASK)

#define MRCC_MRCC_ADC0_CLKDIV_RESET_MASK         (0x20000000U)
#define MRCC_MRCC_ADC0_CLKDIV_RESET_SHIFT        (29U)
/*! RESET - Reset divider counter
 *  0b0..Divider isn't reset
 *  0b1..Divider is reset
 */
#define MRCC_MRCC_ADC0_CLKDIV_RESET(x)           (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_ADC0_CLKDIV_RESET_SHIFT)) & MRCC_MRCC_ADC0_CLKDIV_RESET_MASK)

#define MRCC_MRCC_ADC0_CLKDIV_HALT_MASK          (0x40000000U)
#define MRCC_MRCC_ADC0_CLKDIV_HALT_SHIFT         (30U)
/*! HALT - Halt divider counter
 *  0b0..Divider clock is running
 *  0b1..Divider clock is stopped
 */
#define MRCC_MRCC_ADC0_CLKDIV_HALT(x)            (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_ADC0_CLKDIV_HALT_SHIFT)) & MRCC_MRCC_ADC0_CLKDIV_HALT_MASK)

#define MRCC_MRCC_ADC0_CLKDIV_UNSTAB_MASK        (0x80000000U)
#define MRCC_MRCC_ADC0_CLKDIV_UNSTAB_SHIFT       (31U)
/*! UNSTAB - Divider status flag
 *  0b0..Divider clock is stable
 *  0b1..clock frequency isn't stable
 */
#define MRCC_MRCC_ADC0_CLKDIV_UNSTAB(x)          (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_ADC0_CLKDIV_UNSTAB_SHIFT)) & MRCC_MRCC_ADC0_CLKDIV_UNSTAB_MASK)
/*! @} */

/*! @name MRCC_CMP0_FUNC_CLKDIV - CMP0_FUNC clock divider control */
/*! @{ */

#define MRCC_MRCC_CMP0_FUNC_CLKDIV_DIV_MASK      (0xFU)
#define MRCC_MRCC_CMP0_FUNC_CLKDIV_DIV_SHIFT     (0U)
/*! DIV - Functional Clock Divider */
#define MRCC_MRCC_CMP0_FUNC_CLKDIV_DIV(x)        (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_CMP0_FUNC_CLKDIV_DIV_SHIFT)) & MRCC_MRCC_CMP0_FUNC_CLKDIV_DIV_MASK)

#define MRCC_MRCC_CMP0_FUNC_CLKDIV_RESET_MASK    (0x20000000U)
#define MRCC_MRCC_CMP0_FUNC_CLKDIV_RESET_SHIFT   (29U)
/*! RESET - Reset divider counter
 *  0b0..Divider isn't reset
 *  0b1..Divider is reset
 */
#define MRCC_MRCC_CMP0_FUNC_CLKDIV_RESET(x)      (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_CMP0_FUNC_CLKDIV_RESET_SHIFT)) & MRCC_MRCC_CMP0_FUNC_CLKDIV_RESET_MASK)

#define MRCC_MRCC_CMP0_FUNC_CLKDIV_HALT_MASK     (0x40000000U)
#define MRCC_MRCC_CMP0_FUNC_CLKDIV_HALT_SHIFT    (30U)
/*! HALT - Halt divider counter
 *  0b0..Divider clock is running
 *  0b1..Divider clock is stopped
 */
#define MRCC_MRCC_CMP0_FUNC_CLKDIV_HALT(x)       (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_CMP0_FUNC_CLKDIV_HALT_SHIFT)) & MRCC_MRCC_CMP0_FUNC_CLKDIV_HALT_MASK)

#define MRCC_MRCC_CMP0_FUNC_CLKDIV_UNSTAB_MASK   (0x80000000U)
#define MRCC_MRCC_CMP0_FUNC_CLKDIV_UNSTAB_SHIFT  (31U)
/*! UNSTAB - Divider status flag
 *  0b0..Divider clock is stable
 *  0b1..clock frequency isn't stable
 */
#define MRCC_MRCC_CMP0_FUNC_CLKDIV_UNSTAB(x)     (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_CMP0_FUNC_CLKDIV_UNSTAB_SHIFT)) & MRCC_MRCC_CMP0_FUNC_CLKDIV_UNSTAB_MASK)
/*! @} */

/*! @name MRCC_CMP0_RR_CLKSEL - CMP clock selection control */
/*! @{ */

#define MRCC_MRCC_CMP0_RR_CLKSEL_MUX_MASK        (0x1U)
#define MRCC_MRCC_CMP0_RR_CLKSEL_MUX_SHIFT       (0U)
/*! MUX - Functional Clock Mux Select
 *  0b1..clkroot_firc_div
 *  0b0..FRO_12M
 */
#define MRCC_MRCC_CMP0_RR_CLKSEL_MUX(x)          (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_CMP0_RR_CLKSEL_MUX_SHIFT)) & MRCC_MRCC_CMP0_RR_CLKSEL_MUX_MASK)
/*! @} */

/*! @name MRCC_CMP0_RR_CLKDIV - CMP0_RR clock divider control */
/*! @{ */

#define MRCC_MRCC_CMP0_RR_CLKDIV_DIV_MASK        (0xFU)
#define MRCC_MRCC_CMP0_RR_CLKDIV_DIV_SHIFT       (0U)
/*! DIV - Functional Clock Divider */
#define MRCC_MRCC_CMP0_RR_CLKDIV_DIV(x)          (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_CMP0_RR_CLKDIV_DIV_SHIFT)) & MRCC_MRCC_CMP0_RR_CLKDIV_DIV_MASK)

#define MRCC_MRCC_CMP0_RR_CLKDIV_RESET_MASK      (0x20000000U)
#define MRCC_MRCC_CMP0_RR_CLKDIV_RESET_SHIFT     (29U)
/*! RESET - Reset divider counter
 *  0b0..Divider isn't reset
 *  0b1..Divider is reset
 */
#define MRCC_MRCC_CMP0_RR_CLKDIV_RESET(x)        (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_CMP0_RR_CLKDIV_RESET_SHIFT)) & MRCC_MRCC_CMP0_RR_CLKDIV_RESET_MASK)

#define MRCC_MRCC_CMP0_RR_CLKDIV_HALT_MASK       (0x40000000U)
#define MRCC_MRCC_CMP0_RR_CLKDIV_HALT_SHIFT      (30U)
/*! HALT - Halt divider counter
 *  0b0..Divider clock is running
 *  0b1..Divider clock is stopped
 */
#define MRCC_MRCC_CMP0_RR_CLKDIV_HALT(x)         (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_CMP0_RR_CLKDIV_HALT_SHIFT)) & MRCC_MRCC_CMP0_RR_CLKDIV_HALT_MASK)

#define MRCC_MRCC_CMP0_RR_CLKDIV_UNSTAB_MASK     (0x80000000U)
#define MRCC_MRCC_CMP0_RR_CLKDIV_UNSTAB_SHIFT    (31U)
/*! UNSTAB - Divider status flag
 *  0b0..Divider clock is stable
 *  0b1..clock frequency isn't stable
 */
#define MRCC_MRCC_CMP0_RR_CLKDIV_UNSTAB(x)       (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_CMP0_RR_CLKDIV_UNSTAB_SHIFT)) & MRCC_MRCC_CMP0_RR_CLKDIV_UNSTAB_MASK)
/*! @} */

/*! @name MRCC_DBG_TRACE_CLKDIV - DBG_TRACE clock divider control */
/*! @{ */

#define MRCC_MRCC_DBG_TRACE_CLKDIV_DIV_MASK      (0xFU)
#define MRCC_MRCC_DBG_TRACE_CLKDIV_DIV_SHIFT     (0U)
/*! DIV - Functional Clock Divider */
#define MRCC_MRCC_DBG_TRACE_CLKDIV_DIV(x)        (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_DBG_TRACE_CLKDIV_DIV_SHIFT)) & MRCC_MRCC_DBG_TRACE_CLKDIV_DIV_MASK)

#define MRCC_MRCC_DBG_TRACE_CLKDIV_RESET_MASK    (0x20000000U)
#define MRCC_MRCC_DBG_TRACE_CLKDIV_RESET_SHIFT   (29U)
/*! RESET - Reset divider counter
 *  0b0..Divider isn't reset
 *  0b1..Divider is reset
 */
#define MRCC_MRCC_DBG_TRACE_CLKDIV_RESET(x)      (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_DBG_TRACE_CLKDIV_RESET_SHIFT)) & MRCC_MRCC_DBG_TRACE_CLKDIV_RESET_MASK)

#define MRCC_MRCC_DBG_TRACE_CLKDIV_HALT_MASK     (0x40000000U)
#define MRCC_MRCC_DBG_TRACE_CLKDIV_HALT_SHIFT    (30U)
/*! HALT - Halt divider counter
 *  0b0..Divider clock is running
 *  0b1..Divider clock is stopped
 */
#define MRCC_MRCC_DBG_TRACE_CLKDIV_HALT(x)       (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_DBG_TRACE_CLKDIV_HALT_SHIFT)) & MRCC_MRCC_DBG_TRACE_CLKDIV_HALT_MASK)

#define MRCC_MRCC_DBG_TRACE_CLKDIV_UNSTAB_MASK   (0x80000000U)
#define MRCC_MRCC_DBG_TRACE_CLKDIV_UNSTAB_SHIFT  (31U)
/*! UNSTAB - Divider status flag
 *  0b0..Divider clock is stable
 *  0b1..clock frequency isn't stable
 */
#define MRCC_MRCC_DBG_TRACE_CLKDIV_UNSTAB(x)     (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_DBG_TRACE_CLKDIV_UNSTAB_SHIFT)) & MRCC_MRCC_DBG_TRACE_CLKDIV_UNSTAB_MASK)
/*! @} */

/*! @name MRCC_CLKOUT_CLKSEL - CLKOUT clock selection control */
/*! @{ */

#define MRCC_MRCC_CLKOUT_CLKSEL_MUX_MASK         (0x7U)
#define MRCC_MRCC_CLKOUT_CLKSEL_MUX_SHIFT        (0U)
/*! MUX - Functional Clock Mux Select
 *  0b111..clkroot_slow
 *  0b110..ipt_clk_div2
 *  0b010..clkroot_16k
 *  0b001..clkroot_firc_div
 *  0b000..clkroot_12m_periph
 */
#define MRCC_MRCC_CLKOUT_CLKSEL_MUX(x)           (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_CLKOUT_CLKSEL_MUX_SHIFT)) & MRCC_MRCC_CLKOUT_CLKSEL_MUX_MASK)
/*! @} */

/*! @name MRCC_CLKOUT_CLKDIV - CLKOUT clock divider control */
/*! @{ */

#define MRCC_MRCC_CLKOUT_CLKDIV_DIV_MASK         (0xFU)
#define MRCC_MRCC_CLKOUT_CLKDIV_DIV_SHIFT        (0U)
/*! DIV - Functional Clock Divider */
#define MRCC_MRCC_CLKOUT_CLKDIV_DIV(x)           (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_CLKOUT_CLKDIV_DIV_SHIFT)) & MRCC_MRCC_CLKOUT_CLKDIV_DIV_MASK)

#define MRCC_MRCC_CLKOUT_CLKDIV_RESET_MASK       (0x20000000U)
#define MRCC_MRCC_CLKOUT_CLKDIV_RESET_SHIFT      (29U)
/*! RESET - Reset divider counter
 *  0b0..Divider isn't reset
 *  0b1..Divider is reset
 */
#define MRCC_MRCC_CLKOUT_CLKDIV_RESET(x)         (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_CLKOUT_CLKDIV_RESET_SHIFT)) & MRCC_MRCC_CLKOUT_CLKDIV_RESET_MASK)

#define MRCC_MRCC_CLKOUT_CLKDIV_HALT_MASK        (0x40000000U)
#define MRCC_MRCC_CLKOUT_CLKDIV_HALT_SHIFT       (30U)
/*! HALT - Halt divider counter
 *  0b0..Divider clock is running
 *  0b1..Divider clock is stopped
 */
#define MRCC_MRCC_CLKOUT_CLKDIV_HALT(x)          (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_CLKOUT_CLKDIV_HALT_SHIFT)) & MRCC_MRCC_CLKOUT_CLKDIV_HALT_MASK)

#define MRCC_MRCC_CLKOUT_CLKDIV_UNSTAB_MASK      (0x80000000U)
#define MRCC_MRCC_CLKOUT_CLKDIV_UNSTAB_SHIFT     (31U)
/*! UNSTAB - Divider status flag
 *  0b0..Divider clock is stable
 *  0b1..clock frequency isn't stable
 */
#define MRCC_MRCC_CLKOUT_CLKDIV_UNSTAB(x)        (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_CLKOUT_CLKDIV_UNSTAB_SHIFT)) & MRCC_MRCC_CLKOUT_CLKDIV_UNSTAB_MASK)
/*! @} */

/*! @name MRCC_PERIPH_GROUP_0_CLKSEL - PERIPH_GROUP_0 clock selection control */
/*! @{ */

#define MRCC_MRCC_PERIPH_GROUP_0_CLKSEL_MUX_MASK (0x3U)
#define MRCC_MRCC_PERIPH_GROUP_0_CLKSEL_MUX_SHIFT (0U)
/*! MUX - Functional Clock Mux Select
 *  0b11..clkroot_firc_div
 *  0b10..clkgen_periph_ext_clk_out
 *  0b01..clkroot_firc_div
 *  0b00..clkroot_12m_periph
 */
#define MRCC_MRCC_PERIPH_GROUP_0_CLKSEL_MUX(x)   (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_PERIPH_GROUP_0_CLKSEL_MUX_SHIFT)) & MRCC_MRCC_PERIPH_GROUP_0_CLKSEL_MUX_MASK)
/*! @} */

/*! @name MRCC_PERIPH_GROUP_0_CLKDIV - PERIPH_GROUP_0 clock divider control */
/*! @{ */

#define MRCC_MRCC_PERIPH_GROUP_0_CLKDIV_DIV_MASK (0xFU)
#define MRCC_MRCC_PERIPH_GROUP_0_CLKDIV_DIV_SHIFT (0U)
/*! DIV - Functional Clock Divider */
#define MRCC_MRCC_PERIPH_GROUP_0_CLKDIV_DIV(x)   (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_PERIPH_GROUP_0_CLKDIV_DIV_SHIFT)) & MRCC_MRCC_PERIPH_GROUP_0_CLKDIV_DIV_MASK)

#define MRCC_MRCC_PERIPH_GROUP_0_CLKDIV_RESET_MASK (0x20000000U)
#define MRCC_MRCC_PERIPH_GROUP_0_CLKDIV_RESET_SHIFT (29U)
/*! RESET - Reset divider counter
 *  0b0..Divider isn't reset
 *  0b1..Divider is reset
 */
#define MRCC_MRCC_PERIPH_GROUP_0_CLKDIV_RESET(x) (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_PERIPH_GROUP_0_CLKDIV_RESET_SHIFT)) & MRCC_MRCC_PERIPH_GROUP_0_CLKDIV_RESET_MASK)

#define MRCC_MRCC_PERIPH_GROUP_0_CLKDIV_HALT_MASK (0x40000000U)
#define MRCC_MRCC_PERIPH_GROUP_0_CLKDIV_HALT_SHIFT (30U)
/*! HALT - Halt divider counter
 *  0b0..Divider clock is running
 *  0b1..Divider clock is stopped
 */
#define MRCC_MRCC_PERIPH_GROUP_0_CLKDIV_HALT(x)  (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_PERIPH_GROUP_0_CLKDIV_HALT_SHIFT)) & MRCC_MRCC_PERIPH_GROUP_0_CLKDIV_HALT_MASK)

#define MRCC_MRCC_PERIPH_GROUP_0_CLKDIV_UNSTAB_MASK (0x80000000U)
#define MRCC_MRCC_PERIPH_GROUP_0_CLKDIV_UNSTAB_SHIFT (31U)
/*! UNSTAB - Divider status flag
 *  0b0..Divider clock is stable
 *  0b1..clock frequency isn't stable
 */
#define MRCC_MRCC_PERIPH_GROUP_0_CLKDIV_UNSTAB(x) (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_PERIPH_GROUP_0_CLKDIV_UNSTAB_SHIFT)) & MRCC_MRCC_PERIPH_GROUP_0_CLKDIV_UNSTAB_MASK)
/*! @} */

/*! @name MRCC_PERIPH_GROUP_1_CLKSEL - PERIPH_GROUP_1 clock selection control */
/*! @{ */

#define MRCC_MRCC_PERIPH_GROUP_1_CLKSEL_MUX_MASK (0x3U)
#define MRCC_MRCC_PERIPH_GROUP_1_CLKSEL_MUX_SHIFT (0U)
/*! MUX - Functional Clock Mux Select
 *  0b11..clkroot_firc_div
 *  0b10..clkgen_periph_ext_clk_out
 *  0b01..clkroot_firc_div
 *  0b00..clkroot_12m_periph
 */
#define MRCC_MRCC_PERIPH_GROUP_1_CLKSEL_MUX(x)   (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_PERIPH_GROUP_1_CLKSEL_MUX_SHIFT)) & MRCC_MRCC_PERIPH_GROUP_1_CLKSEL_MUX_MASK)
/*! @} */

/*! @name MRCC_PERIPH_GROUP_1_CLKDIV - PERIPH_GROUP_1 clock divider control */
/*! @{ */

#define MRCC_MRCC_PERIPH_GROUP_1_CLKDIV_DIV_MASK (0xFU)
#define MRCC_MRCC_PERIPH_GROUP_1_CLKDIV_DIV_SHIFT (0U)
/*! DIV - Functional Clock Divider */
#define MRCC_MRCC_PERIPH_GROUP_1_CLKDIV_DIV(x)   (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_PERIPH_GROUP_1_CLKDIV_DIV_SHIFT)) & MRCC_MRCC_PERIPH_GROUP_1_CLKDIV_DIV_MASK)

#define MRCC_MRCC_PERIPH_GROUP_1_CLKDIV_RESET_MASK (0x20000000U)
#define MRCC_MRCC_PERIPH_GROUP_1_CLKDIV_RESET_SHIFT (29U)
/*! RESET - Reset divider counter
 *  0b0..Divider isn't reset
 *  0b1..Divider is reset
 */
#define MRCC_MRCC_PERIPH_GROUP_1_CLKDIV_RESET(x) (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_PERIPH_GROUP_1_CLKDIV_RESET_SHIFT)) & MRCC_MRCC_PERIPH_GROUP_1_CLKDIV_RESET_MASK)

#define MRCC_MRCC_PERIPH_GROUP_1_CLKDIV_HALT_MASK (0x40000000U)
#define MRCC_MRCC_PERIPH_GROUP_1_CLKDIV_HALT_SHIFT (30U)
/*! HALT - Halt divider counter
 *  0b0..Divider clock is running
 *  0b1..Divider clock is stopped
 */
#define MRCC_MRCC_PERIPH_GROUP_1_CLKDIV_HALT(x)  (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_PERIPH_GROUP_1_CLKDIV_HALT_SHIFT)) & MRCC_MRCC_PERIPH_GROUP_1_CLKDIV_HALT_MASK)

#define MRCC_MRCC_PERIPH_GROUP_1_CLKDIV_UNSTAB_MASK (0x80000000U)
#define MRCC_MRCC_PERIPH_GROUP_1_CLKDIV_UNSTAB_SHIFT (31U)
/*! UNSTAB - Divider status flag
 *  0b0..Divider clock is stable
 *  0b1..clock frequency isn't stable
 */
#define MRCC_MRCC_PERIPH_GROUP_1_CLKDIV_UNSTAB(x) (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_PERIPH_GROUP_1_CLKDIV_UNSTAB_SHIFT)) & MRCC_MRCC_PERIPH_GROUP_1_CLKDIV_UNSTAB_MASK)
/*! @} */

/*! @name MRCC_SYSTICK_CLKSEL - SYSTICK clock selection control */
/*! @{ */

#define MRCC_MRCC_SYSTICK_CLKSEL_MUX_MASK        (0x7U)
#define MRCC_MRCC_SYSTICK_CLKSEL_MUX_SHIFT       (0U)
/*! MUX - Functional Clock Mux Select
 *  0b111..clkroot_cpu
 *  0b011..clkroot_1m
 *  0b010..clkroot_16k
 *  0b000..clkroot_cpu
 */
#define MRCC_MRCC_SYSTICK_CLKSEL_MUX(x)          (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_SYSTICK_CLKSEL_MUX_SHIFT)) & MRCC_MRCC_SYSTICK_CLKSEL_MUX_MASK)
/*! @} */

/*! @name MRCC_SYSTICK_CLKDIV - SYSTICK clock divider control */
/*! @{ */

#define MRCC_MRCC_SYSTICK_CLKDIV_DIV_MASK        (0xFU)
#define MRCC_MRCC_SYSTICK_CLKDIV_DIV_SHIFT       (0U)
/*! DIV - Functional Clock Divider */
#define MRCC_MRCC_SYSTICK_CLKDIV_DIV(x)          (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_SYSTICK_CLKDIV_DIV_SHIFT)) & MRCC_MRCC_SYSTICK_CLKDIV_DIV_MASK)

#define MRCC_MRCC_SYSTICK_CLKDIV_RESET_MASK      (0x20000000U)
#define MRCC_MRCC_SYSTICK_CLKDIV_RESET_SHIFT     (29U)
/*! RESET - Reset divider counter
 *  0b0..Divider isn't reset
 *  0b1..Divider is reset
 */
#define MRCC_MRCC_SYSTICK_CLKDIV_RESET(x)        (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_SYSTICK_CLKDIV_RESET_SHIFT)) & MRCC_MRCC_SYSTICK_CLKDIV_RESET_MASK)

#define MRCC_MRCC_SYSTICK_CLKDIV_HALT_MASK       (0x40000000U)
#define MRCC_MRCC_SYSTICK_CLKDIV_HALT_SHIFT      (30U)
/*! HALT - Halt divider counter
 *  0b0..Divider clock is running
 *  0b1..Divider clock is stopped
 */
#define MRCC_MRCC_SYSTICK_CLKDIV_HALT(x)         (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_SYSTICK_CLKDIV_HALT_SHIFT)) & MRCC_MRCC_SYSTICK_CLKDIV_HALT_MASK)

#define MRCC_MRCC_SYSTICK_CLKDIV_UNSTAB_MASK     (0x80000000U)
#define MRCC_MRCC_SYSTICK_CLKDIV_UNSTAB_SHIFT    (31U)
/*! UNSTAB - Divider status flag
 *  0b0..Divider clock is stable
 *  0b1..clock frequency isn't stable
 */
#define MRCC_MRCC_SYSTICK_CLKDIV_UNSTAB(x)       (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_SYSTICK_CLKDIV_UNSTAB_SHIFT)) & MRCC_MRCC_SYSTICK_CLKDIV_UNSTAB_MASK)
/*! @} */

/*! @name MRCC_FRO_HF_DIV_CLKDIV - FRO_HF_DIV clock divider control */
/*! @{ */

#define MRCC_MRCC_FRO_HF_DIV_CLKDIV_DIV_MASK     (0xFU)
#define MRCC_MRCC_FRO_HF_DIV_CLKDIV_DIV_SHIFT    (0U)
/*! DIV - Functional Clock Divider */
#define MRCC_MRCC_FRO_HF_DIV_CLKDIV_DIV(x)       (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_FRO_HF_DIV_CLKDIV_DIV_SHIFT)) & MRCC_MRCC_FRO_HF_DIV_CLKDIV_DIV_MASK)

#define MRCC_MRCC_FRO_HF_DIV_CLKDIV_UNSTAB_MASK  (0x80000000U)
#define MRCC_MRCC_FRO_HF_DIV_CLKDIV_UNSTAB_SHIFT (31U)
/*! UNSTAB - Divider status flag
 *  0b0..Divider clock is stable
 *  0b1..clock frequency isn't stable
 */
#define MRCC_MRCC_FRO_HF_DIV_CLKDIV_UNSTAB(x)    (((uint32_t)(((uint32_t)(x)) << MRCC_MRCC_FRO_HF_DIV_CLKDIV_UNSTAB_SHIFT)) & MRCC_MRCC_FRO_HF_DIV_CLKDIV_UNSTAB_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group MRCC_Register_Masks */


/*!
 * @}
 */ /* end of group MRCC_Peripheral_Access_Layer */


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


#endif  /* MRCC_H_ */

