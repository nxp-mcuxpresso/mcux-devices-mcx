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
**         CMSIS Peripheral Access Layer for INLINE_DLL
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
 * @file INLINE_DLL.h
 * @version 1.0
 * @date 2023-01-09
 * @brief CMSIS Peripheral Access Layer for INLINE_DLL
 *
 * CMSIS Peripheral Access Layer for INLINE_DLL
 */

#if !defined(INLINE_DLL_H_)
#define INLINE_DLL_H_                            /**< Symbol preventing repeated inclusion */

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
   -- INLINE_DLL Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup INLINE_DLL_Peripheral_Access_Layer INLINE_DLL Peripheral Access Layer
 * @{
 */

/** INLINE_DLL - Register Layout Typedef */
typedef struct {
  __IO uint32_t CTRL;                              /**< Control Register, offset: 0x0 */
  __IO uint32_t STATUS;                            /**< STATUS Register, offset: 0x4 */
  __IO uint32_t FREQ_COMP_DEC;                     /**< Frequency measurement Register, offset: 0x8 */
  __IO uint32_t CODE_LOW;                          /**< Code Low Register, offset: 0xC */
  __IO uint32_t CODE_HIGH;                         /**< Code High Register, offset: 0x10 */
  __I  uint32_t PATH_FREQ_REG;                     /**< Path Frequency Register, offset: 0x14 */
  __I  uint32_t PATH_DLL_FREQ_REG;                 /**< Path Frequency Register, offset: 0x18 */
  __IO uint32_t CTRL2;                             /**< Control Register, offset: 0x1C */
  __IO uint32_t STATUS2;                           /**< STATUS2 Register, offset: 0x20 */
  __IO uint32_t CODE_LOW2;                         /**< Code Low Register, offset: 0x24 */
  __I  uint32_t PATH_FREQ2_REG;                    /**< Path Frequency Register, offset: 0x28 */
  __I  uint32_t PATH_DLL_FREQ2_REG;                /**< Path Frequency Register, offset: 0x2C */
  __IO uint32_t DELAY_CODECHANGE;                  /**< Delay between code changes, offset: 0x30 */
  __I  uint32_t TESTBUS_REG;                       /**< Testbus register, offset: 0x34 */
} INLINE_DLL_Type;

/* ----------------------------------------------------------------------------
   -- INLINE_DLL Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup INLINE_DLL_Register_Masks INLINE_DLL Register Masks
 * @{
 */

/*! @name CTRL - Control Register */
/*! @{ */

#define INLINE_DLL_CTRL_CTRL_EN_MASK             (0x1U)
#define INLINE_DLL_CTRL_CTRL_EN_SHIFT            (0U)
/*! CTRL_EN - Enables In-Line DLL block */
#define INLINE_DLL_CTRL_CTRL_EN(x)               (((uint32_t)(((uint32_t)(x)) << INLINE_DLL_CTRL_CTRL_EN_SHIFT)) & INLINE_DLL_CTRL_CTRL_EN_MASK)

#define INLINE_DLL_CTRL_CTRL_STRT1_MASK          (0x2U)
#define INLINE_DLL_CTRL_CTRL_STRT1_SHIFT         (1U)
/*! CTRL_STRT1 - Starts the the first In-Line DLL block */
#define INLINE_DLL_CTRL_CTRL_STRT1(x)            (((uint32_t)(((uint32_t)(x)) << INLINE_DLL_CTRL_CTRL_STRT1_SHIFT)) & INLINE_DLL_CTRL_CTRL_STRT1_MASK)

#define INLINE_DLL_CTRL_CTRL_STRT2_MASK          (0x4U)
#define INLINE_DLL_CTRL_CTRL_STRT2_SHIFT         (2U)
/*! CTRL_STRT2 - Starts the second In-Line DLL configuration procedure */
#define INLINE_DLL_CTRL_CTRL_STRT2(x)            (((uint32_t)(((uint32_t)(x)) << INLINE_DLL_CTRL_CTRL_STRT2_SHIFT)) & INLINE_DLL_CTRL_CTRL_STRT2_MASK)

#define INLINE_DLL_CTRL_SELCT1_MASK              (0x70U)
#define INLINE_DLL_CTRL_SELCT1_SHIFT             (4U)
/*! SELCT1 - Selects In-Line DLL block */
#define INLINE_DLL_CTRL_SELCT1(x)                (((uint32_t)(((uint32_t)(x)) << INLINE_DLL_CTRL_SELCT1_SHIFT)) & INLINE_DLL_CTRL_SELCT1_MASK)

#define INLINE_DLL_CTRL_DLL_HALF_MASK            (0x80U)
#define INLINE_DLL_CTRL_DLL_HALF_SHIFT           (7U)
/*! DLL_HALF - Selects running */
#define INLINE_DLL_CTRL_DLL_HALF(x)              (((uint32_t)(((uint32_t)(x)) << INLINE_DLL_CTRL_DLL_HALF_SHIFT)) & INLINE_DLL_CTRL_DLL_HALF_MASK)

#define INLINE_DLL_CTRL_CTRL_BITS_MASK           (0x300U)
#define INLINE_DLL_CTRL_CTRL_BITS_SHIFT          (8U)
/*! CTRL_BITS - Control bits of In-Line DLL block */
#define INLINE_DLL_CTRL_CTRL_BITS(x)             (((uint32_t)(((uint32_t)(x)) << INLINE_DLL_CTRL_CTRL_BITS_SHIFT)) & INLINE_DLL_CTRL_CTRL_BITS_MASK)

#define INLINE_DLL_CTRL_INVSN1_MASK              (0x400U)
#define INLINE_DLL_CTRL_INVSN1_SHIFT             (10U)
/*! INVSN1 - Inversion path of In-Line DLL block */
#define INLINE_DLL_CTRL_INVSN1(x)                (((uint32_t)(((uint32_t)(x)) << INLINE_DLL_CTRL_INVSN1_SHIFT)) & INLINE_DLL_CTRL_INVSN1_MASK)

#define INLINE_DLL_CTRL_DLL_DOUBLE_MASK          (0x800U)
#define INLINE_DLL_CTRL_DLL_DOUBLE_SHIFT         (11U)
/*! DLL_DOUBLE - Double path of In-Line DLL block */
#define INLINE_DLL_CTRL_DLL_DOUBLE(x)            (((uint32_t)(((uint32_t)(x)) << INLINE_DLL_CTRL_DLL_DOUBLE_SHIFT)) & INLINE_DLL_CTRL_DLL_DOUBLE_MASK)

#define INLINE_DLL_CTRL_BYPASS1_MASK             (0x1000U)
#define INLINE_DLL_CTRL_BYPASS1_SHIFT            (12U)
/*! BYPASS1 - Bypass In-Line DLL */
#define INLINE_DLL_CTRL_BYPASS1(x)               (((uint32_t)(((uint32_t)(x)) << INLINE_DLL_CTRL_BYPASS1_SHIFT)) & INLINE_DLL_CTRL_BYPASS1_MASK)

#define INLINE_DLL_CTRL_CNT_BYPASS_EN_MASK       (0x2000U)
#define INLINE_DLL_CTRL_CNT_BYPASS_EN_SHIFT      (13U)
/*! CNT_BYPASS_EN - Read In-Line DLL code. */
#define INLINE_DLL_CTRL_CNT_BYPASS_EN(x)         (((uint32_t)(((uint32_t)(x)) << INLINE_DLL_CTRL_CNT_BYPASS_EN_SHIFT)) & INLINE_DLL_CTRL_CNT_BYPASS_EN_MASK)

#define INLINE_DLL_CTRL_DIVIDE_MASK              (0xC000U)
#define INLINE_DLL_CTRL_DIVIDE_SHIFT             (14U)
/*! DIVIDE - Divide measurement
 *  0b00..No divide
 *  0b01..Divide by 2.
 *  0b10..Divide by 4.
 *  0b11..Divide by 8.
 */
#define INLINE_DLL_CTRL_DIVIDE(x)                (((uint32_t)(((uint32_t)(x)) << INLINE_DLL_CTRL_DIVIDE_SHIFT)) & INLINE_DLL_CTRL_DIVIDE_MASK)
/*! @} */

/*! @name STATUS - STATUS Register */
/*! @{ */

#define INLINE_DLL_STATUS_CTRL_BUSY_MASK         (0x1U)
#define INLINE_DLL_STATUS_CTRL_BUSY_SHIFT        (0U)
/*! CTRL_BUSY - Reads if In-Line DLL block is busy or idle.
 *  0b0..Idle
 *  0b1..Configuring an In-Line DLL block
 */
#define INLINE_DLL_STATUS_CTRL_BUSY(x)           (((uint32_t)(((uint32_t)(x)) << INLINE_DLL_STATUS_CTRL_BUSY_SHIFT)) & INLINE_DLL_STATUS_CTRL_BUSY_MASK)

#define INLINE_DLL_STATUS_CTRL_ERR_MASK          (0x6U)
#define INLINE_DLL_STATUS_CTRL_ERR_SHIFT         (1U)
/*! CTRL_ERR - In-Line DLL control error
 *  0b00..No error
 *  0b01..Path delay smaller than In-Line DLL minimum delay
 *  0b10..Path delay larger than In-Line DLL maximum delay
 */
#define INLINE_DLL_STATUS_CTRL_ERR(x)            (((uint32_t)(((uint32_t)(x)) << INLINE_DLL_STATUS_CTRL_ERR_SHIFT)) & INLINE_DLL_STATUS_CTRL_ERR_MASK)

#define INLINE_DLL_STATUS_ENABLE_MASK            (0x8U)
#define INLINE_DLL_STATUS_ENABLE_SHIFT           (3U)
/*! ENABLE - In-Line DLL enable */
#define INLINE_DLL_STATUS_ENABLE(x)              (((uint32_t)(((uint32_t)(x)) << INLINE_DLL_STATUS_ENABLE_SHIFT)) & INLINE_DLL_STATUS_ENABLE_MASK)

#define INLINE_DLL_STATUS_FULL_MTCH_MASK         (0x10U)
#define INLINE_DLL_STATUS_FULL_MTCH_SHIFT        (4U)
/*! FULL_MTCH - Full match */
#define INLINE_DLL_STATUS_FULL_MTCH(x)           (((uint32_t)(((uint32_t)(x)) << INLINE_DLL_STATUS_FULL_MTCH_SHIFT)) & INLINE_DLL_STATUS_FULL_MTCH_MASK)

#define INLINE_DLL_STATUS_PARTIAL_MTCH_MASK      (0x20U)
#define INLINE_DLL_STATUS_PARTIAL_MTCH_SHIFT     (5U)
/*! PARTIAL_MTCH - Partial match */
#define INLINE_DLL_STATUS_PARTIAL_MTCH(x)        (((uint32_t)(((uint32_t)(x)) << INLINE_DLL_STATUS_PARTIAL_MTCH_SHIFT)) & INLINE_DLL_STATUS_PARTIAL_MTCH_MASK)
/*! @} */

/*! @name FREQ_COMP_DEC - Frequency measurement Register */
/*! @{ */

#define INLINE_DLL_FREQ_COMP_DEC_FREQ_COMP_MASK  (0xFFFFU)
#define INLINE_DLL_FREQ_COMP_DEC_FREQ_COMP_SHIFT (0U)
/*! FREQ_COMP - Frequency measurement */
#define INLINE_DLL_FREQ_COMP_DEC_FREQ_COMP(x)    (((uint32_t)(((uint32_t)(x)) << INLINE_DLL_FREQ_COMP_DEC_FREQ_COMP_SHIFT)) & INLINE_DLL_FREQ_COMP_DEC_FREQ_COMP_MASK)
/*! @} */

/*! @name CODE_LOW - Code Low Register */
/*! @{ */

#define INLINE_DLL_CODE_LOW_CODE_LW_MASK         (0xFFFFU)
#define INLINE_DLL_CODE_LOW_CODE_LW_SHIFT        (0U)
/*! CODE_LW - Control bits [15:0] */
#define INLINE_DLL_CODE_LOW_CODE_LW(x)           (((uint32_t)(((uint32_t)(x)) << INLINE_DLL_CODE_LOW_CODE_LW_SHIFT)) & INLINE_DLL_CODE_LOW_CODE_LW_MASK)
/*! @} */

/*! @name CODE_HIGH - Code High Register */
/*! @{ */

#define INLINE_DLL_CODE_HIGH_CODE_HGH_MASK       (0xFFFFU)
#define INLINE_DLL_CODE_HIGH_CODE_HGH_SHIFT      (0U)
/*! CODE_HGH - Control bits [31:16] */
#define INLINE_DLL_CODE_HIGH_CODE_HGH(x)         (((uint32_t)(((uint32_t)(x)) << INLINE_DLL_CODE_HIGH_CODE_HGH_SHIFT)) & INLINE_DLL_CODE_HIGH_CODE_HGH_MASK)
/*! @} */

/*! @name PATH_FREQ_REG - Path Frequency Register */
/*! @{ */

#define INLINE_DLL_PATH_FREQ_REG_PATH_FREQ_MASK  (0xFFFFU)
#define INLINE_DLL_PATH_FREQ_REG_PATH_FREQ_SHIFT (0U)
/*! PATH_FREQ - Frequency path */
#define INLINE_DLL_PATH_FREQ_REG_PATH_FREQ(x)    (((uint32_t)(((uint32_t)(x)) << INLINE_DLL_PATH_FREQ_REG_PATH_FREQ_SHIFT)) & INLINE_DLL_PATH_FREQ_REG_PATH_FREQ_MASK)
/*! @} */

/*! @name PATH_DLL_FREQ_REG - Path Frequency Register */
/*! @{ */

#define INLINE_DLL_PATH_DLL_FREQ_REG_PATH_DLL_FREQ_MASK (0xFFFFU)
#define INLINE_DLL_PATH_DLL_FREQ_REG_PATH_DLL_FREQ_SHIFT (0U)
/*! PATH_DLL_FREQ - DLL Frequency path */
#define INLINE_DLL_PATH_DLL_FREQ_REG_PATH_DLL_FREQ(x) (((uint32_t)(((uint32_t)(x)) << INLINE_DLL_PATH_DLL_FREQ_REG_PATH_DLL_FREQ_SHIFT)) & INLINE_DLL_PATH_DLL_FREQ_REG_PATH_DLL_FREQ_MASK)
/*! @} */

/*! @name CTRL2 - Control Register */
/*! @{ */

#define INLINE_DLL_CTRL2_SELCT2_MASK             (0x7U)
#define INLINE_DLL_CTRL2_SELCT2_SHIFT            (0U)
/*! SELCT2 - Selects In-Line DLL block */
#define INLINE_DLL_CTRL2_SELCT2(x)               (((uint32_t)(((uint32_t)(x)) << INLINE_DLL_CTRL2_SELCT2_SHIFT)) & INLINE_DLL_CTRL2_SELCT2_MASK)

#define INLINE_DLL_CTRL2_CTRL_BITS2_MASK         (0x180U)
#define INLINE_DLL_CTRL2_CTRL_BITS2_SHIFT        (7U)
/*! CTRL_BITS2 - Control bits of In-Line DLL block */
#define INLINE_DLL_CTRL2_CTRL_BITS2(x)           (((uint32_t)(((uint32_t)(x)) << INLINE_DLL_CTRL2_CTRL_BITS2_SHIFT)) & INLINE_DLL_CTRL2_CTRL_BITS2_MASK)

#define INLINE_DLL_CTRL2_INVSN2_MASK             (0x200U)
#define INLINE_DLL_CTRL2_INVSN2_SHIFT            (9U)
/*! INVSN2 - Inversion path of In-Line DLL block */
#define INLINE_DLL_CTRL2_INVSN2(x)               (((uint32_t)(((uint32_t)(x)) << INLINE_DLL_CTRL2_INVSN2_SHIFT)) & INLINE_DLL_CTRL2_INVSN2_MASK)

#define INLINE_DLL_CTRL2_BYPASS2_MASK            (0x800U)
#define INLINE_DLL_CTRL2_BYPASS2_SHIFT           (11U)
/*! BYPASS2 - Bypass In-Line DLL */
#define INLINE_DLL_CTRL2_BYPASS2(x)              (((uint32_t)(((uint32_t)(x)) << INLINE_DLL_CTRL2_BYPASS2_SHIFT)) & INLINE_DLL_CTRL2_BYPASS2_MASK)

#define INLINE_DLL_CTRL2_CNT_BYPASS_EN2_MASK     (0x1000U)
#define INLINE_DLL_CTRL2_CNT_BYPASS_EN2_SHIFT    (12U)
/*! CNT_BYPASS_EN2 - Read In-Line DLL code. */
#define INLINE_DLL_CTRL2_CNT_BYPASS_EN2(x)       (((uint32_t)(((uint32_t)(x)) << INLINE_DLL_CTRL2_CNT_BYPASS_EN2_SHIFT)) & INLINE_DLL_CTRL2_CNT_BYPASS_EN2_MASK)

#define INLINE_DLL_CTRL2_HALF2_MASK              (0x2000U)
#define INLINE_DLL_CTRL2_HALF2_SHIFT             (13U)
/*! HALF2 - Run on half of the In-Line DLL code */
#define INLINE_DLL_CTRL2_HALF2(x)                (((uint32_t)(((uint32_t)(x)) << INLINE_DLL_CTRL2_HALF2_SHIFT)) & INLINE_DLL_CTRL2_HALF2_MASK)

#define INLINE_DLL_CTRL2_DIVIDE2_N_MASK          (0xC000U)
#define INLINE_DLL_CTRL2_DIVIDE2_N_SHIFT         (14U)
/*! DIVIDE2_N - Divide measurement
 *  0b00..No divide
 *  0b01..Divide by 2.
 *  0b10..Divide by 4.
 *  0b11..Divide by 8.
 */
#define INLINE_DLL_CTRL2_DIVIDE2_N(x)            (((uint32_t)(((uint32_t)(x)) << INLINE_DLL_CTRL2_DIVIDE2_N_SHIFT)) & INLINE_DLL_CTRL2_DIVIDE2_N_MASK)
/*! @} */

/*! @name STATUS2 - STATUS2 Register */
/*! @{ */

#define INLINE_DLL_STATUS2_CTRL_BUSY2_MASK       (0x1U)
#define INLINE_DLL_STATUS2_CTRL_BUSY2_SHIFT      (0U)
/*! CTRL_BUSY2 - Reads if In-Line DLL block is busy or idle.
 *  0b0..Idle
 *  0b1..Configuring an In-Line DLL block
 */
#define INLINE_DLL_STATUS2_CTRL_BUSY2(x)         (((uint32_t)(((uint32_t)(x)) << INLINE_DLL_STATUS2_CTRL_BUSY2_SHIFT)) & INLINE_DLL_STATUS2_CTRL_BUSY2_MASK)

#define INLINE_DLL_STATUS2_CTRL_ERR2_MASK        (0x6U)
#define INLINE_DLL_STATUS2_CTRL_ERR2_SHIFT       (1U)
/*! CTRL_ERR2 - In-Line DLL control error
 *  0b00..No error
 *  0b01..Path delay smaller than In-Line DLL minimum delay
 *  0b10..Path delay larger than In-Line DLL maximum delay
 */
#define INLINE_DLL_STATUS2_CTRL_ERR2(x)          (((uint32_t)(((uint32_t)(x)) << INLINE_DLL_STATUS2_CTRL_ERR2_SHIFT)) & INLINE_DLL_STATUS2_CTRL_ERR2_MASK)
/*! @} */

/*! @name CODE_LOW2 - Code Low Register */
/*! @{ */

#define INLINE_DLL_CODE_LOW2_CODE_LW2_MASK       (0xFFFFU)
#define INLINE_DLL_CODE_LOW2_CODE_LW2_SHIFT      (0U)
/*! CODE_LW2 - Control bits [15:0] */
#define INLINE_DLL_CODE_LOW2_CODE_LW2(x)         (((uint32_t)(((uint32_t)(x)) << INLINE_DLL_CODE_LOW2_CODE_LW2_SHIFT)) & INLINE_DLL_CODE_LOW2_CODE_LW2_MASK)
/*! @} */

/*! @name PATH_FREQ2_REG - Path Frequency Register */
/*! @{ */

#define INLINE_DLL_PATH_FREQ2_REG_PATH_FREQ2_MASK (0xFFFFU)
#define INLINE_DLL_PATH_FREQ2_REG_PATH_FREQ2_SHIFT (0U)
/*! PATH_FREQ2 - Frequency path */
#define INLINE_DLL_PATH_FREQ2_REG_PATH_FREQ2(x)  (((uint32_t)(((uint32_t)(x)) << INLINE_DLL_PATH_FREQ2_REG_PATH_FREQ2_SHIFT)) & INLINE_DLL_PATH_FREQ2_REG_PATH_FREQ2_MASK)
/*! @} */

/*! @name PATH_DLL_FREQ2_REG - Path Frequency Register */
/*! @{ */

#define INLINE_DLL_PATH_DLL_FREQ2_REG_PATH_DLL_FREQ2_MASK (0xFFFFU)
#define INLINE_DLL_PATH_DLL_FREQ2_REG_PATH_DLL_FREQ2_SHIFT (0U)
/*! PATH_DLL_FREQ2 - DLL Frequency path */
#define INLINE_DLL_PATH_DLL_FREQ2_REG_PATH_DLL_FREQ2(x) (((uint32_t)(((uint32_t)(x)) << INLINE_DLL_PATH_DLL_FREQ2_REG_PATH_DLL_FREQ2_SHIFT)) & INLINE_DLL_PATH_DLL_FREQ2_REG_PATH_DLL_FREQ2_MASK)
/*! @} */

/*! @name DELAY_CODECHANGE - Delay between code changes */
/*! @{ */

#define INLINE_DLL_DELAY_CODECHANGE_DELAY_VALUE_MASK (0x3FFU)
#define INLINE_DLL_DELAY_CODECHANGE_DELAY_VALUE_SHIFT (0U)
/*! DELAY_VALUE - Delay value */
#define INLINE_DLL_DELAY_CODECHANGE_DELAY_VALUE(x) (((uint32_t)(((uint32_t)(x)) << INLINE_DLL_DELAY_CODECHANGE_DELAY_VALUE_SHIFT)) & INLINE_DLL_DELAY_CODECHANGE_DELAY_VALUE_MASK)
/*! @} */

/*! @name TESTBUS_REG - Testbus register */
/*! @{ */

#define INLINE_DLL_TESTBUS_REG_TESTBUS_MASK      (0xFFFFU)
#define INLINE_DLL_TESTBUS_REG_TESTBUS_SHIFT     (0U)
/*! TESTBUS - Test bus */
#define INLINE_DLL_TESTBUS_REG_TESTBUS(x)        (((uint32_t)(((uint32_t)(x)) << INLINE_DLL_TESTBUS_REG_TESTBUS_SHIFT)) & INLINE_DLL_TESTBUS_REG_TESTBUS_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group INLINE_DLL_Register_Masks */


/*!
 * @}
 */ /* end of group INLINE_DLL_Peripheral_Access_Layer */


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


#endif  /* INLINE_DLL_H_ */

