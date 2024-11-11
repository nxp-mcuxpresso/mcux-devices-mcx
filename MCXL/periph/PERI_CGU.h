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
**         CMSIS Peripheral Access Layer for CGU
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
 * @file CGU.h
 * @version 1.0
 * @date 2023-01-09
 * @brief CMSIS Peripheral Access Layer for CGU
 *
 * CMSIS Peripheral Access Layer for CGU
 */

#if !defined(CGU_H_)
#define CGU_H_                                   /**< Symbol preventing repeated inclusion */

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
   -- CGU Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup CGU_Peripheral_Access_Layer CGU Peripheral Access Layer
 * @{
 */

/** CGU - Register Layout Typedef */
typedef struct {
  __IO uint32_t CLK_CONFIG;                        /**< AON Clock Configuration, offset: 0x0 */
  __IO uint32_t PER_CLK_EN;                        /**< Peripheral Clock Enable, offset: 0x4 */
       uint8_t RESERVED_0[8];
  __IO uint32_t RST_SUB_BLK;                       /**< Reset Subsystem Blocks, offset: 0x10 */
       uint8_t RESERVED_1[32];
  __IO uint32_t FRO_3P0M_LP_CONFIG;                /**< FRO_3P0M Low Power Configuration, offset: 0x34 */
  __IO uint32_t INT_EN;                            /**< Interrupt Enable, offset: 0x38 */
  __IO uint32_t INT_FLAG;                          /**< Interrupt Flag, offset: 0x3C */
  __I  uint32_t VERSION;                           /**< VERSION, offset: 0x40 */
} CGU_Type;

/* ----------------------------------------------------------------------------
   -- CGU Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup CGU_Register_Masks CGU Register Masks
 * @{
 */

/*! @name CLK_CONFIG - AON Clock Configuration */
/*! @{ */

#define CGU_CLK_CONFIG_FRO3M_EN_MASK             (0x1U)
#define CGU_CLK_CONFIG_FRO3M_EN_SHIFT            (0U)
/*! FRO3M_EN - FRO3M Low Power Clock Enable
 *  0b0..Disable
 *  0b1..Enable clock.
 */
#define CGU_CLK_CONFIG_FRO3M_EN(x)               (((uint32_t)(((uint32_t)(x)) << CGU_CLK_CONFIG_FRO3M_EN_SHIFT)) & CGU_CLK_CONFIG_FRO3M_EN_MASK)

#define CGU_CLK_CONFIG_FRO3M_DIV_EN_MASK         (0x2U)
#define CGU_CLK_CONFIG_FRO3M_DIV_EN_SHIFT        (1U)
/*! FRO3M_DIV_EN - FRO3M Low Power Divider Enable
 *  0b0..Disable
 *  0b1..Enable
 */
#define CGU_CLK_CONFIG_FRO3M_DIV_EN(x)           (((uint32_t)(((uint32_t)(x)) << CGU_CLK_CONFIG_FRO3M_DIV_EN_SHIFT)) & CGU_CLK_CONFIG_FRO3M_DIV_EN_MASK)

#define CGU_CLK_CONFIG_AON_CLK_MASK              (0xCU)
#define CGU_CLK_CONFIG_AON_CLK_SHIFT             (2U)
/*! AON_CLK - AON Clock Select
 *  0b00..3.0 MHz
 *  0b01..1.5 MHz
 *  0b10..0.75 MHz
 *  0b11..32 KHz
 */
#define CGU_CLK_CONFIG_AON_CLK(x)                (((uint32_t)(((uint32_t)(x)) << CGU_CLK_CONFIG_AON_CLK_SHIFT)) & CGU_CLK_CONFIG_AON_CLK_MASK)

#define CGU_CLK_CONFIG_AON_PER_I2C_MASK          (0x10U)
#define CGU_CLK_CONFIG_AON_PER_I2C_SHIFT         (4U)
/*! AON_PER_I2C - AON Peripheral I2C Clock Select
 *  0b0..3.0 MHz
 *  0b1..1.5 MHz
 */
#define CGU_CLK_CONFIG_AON_PER_I2C(x)            (((uint32_t)(((uint32_t)(x)) << CGU_CLK_CONFIG_AON_PER_I2C_SHIFT)) & CGU_CLK_CONFIG_AON_PER_I2C_MASK)

#define CGU_CLK_CONFIG_AON_PER_UART_MASK         (0x20U)
#define CGU_CLK_CONFIG_AON_PER_UART_SHIFT        (5U)
/*! AON_PER_UART - AON Peripheral UART Clock Select
 *  0b0..3.0 MHz
 *  0b1..1.5 MHz
 */
#define CGU_CLK_CONFIG_AON_PER_UART(x)           (((uint32_t)(((uint32_t)(x)) << CGU_CLK_CONFIG_AON_PER_UART_SHIFT)) & CGU_CLK_CONFIG_AON_PER_UART_MASK)

#define CGU_CLK_CONFIG_XTAL32_OUT_EN_MASK        (0x40U)
#define CGU_CLK_CONFIG_XTAL32_OUT_EN_SHIFT       (6U)
/*! XTAL32_OUT_EN - XTAL32 Output Enable
 *  0b0..Disable
 *  0b1..Enable
 */
#define CGU_CLK_CONFIG_XTAL32_OUT_EN(x)          (((uint32_t)(((uint32_t)(x)) << CGU_CLK_CONFIG_XTAL32_OUT_EN_SHIFT)) & CGU_CLK_CONFIG_XTAL32_OUT_EN_MASK)

#define CGU_CLK_CONFIG_SRAM_CG_OVERRIDE_MASK     (0x80U)
#define CGU_CLK_CONFIG_SRAM_CG_OVERRIDE_SHIFT    (7U)
/*! SRAM_CG_OVERRIDE - SRAM Clock Gating Override
 *  0b0..No override of the clock gating feature
 *  0b1..Clock gating feature is overridden; clock to sram always enabled
 */
#define CGU_CLK_CONFIG_SRAM_CG_OVERRIDE(x)       (((uint32_t)(((uint32_t)(x)) << CGU_CLK_CONFIG_SRAM_CG_OVERRIDE_SHIFT)) & CGU_CLK_CONFIG_SRAM_CG_OVERRIDE_MASK)

#define CGU_CLK_CONFIG_TRIM_CMP_MASK             (0x1800U)
#define CGU_CLK_CONFIG_TRIM_CMP_SHIFT            (11U)
#define CGU_CLK_CONFIG_TRIM_CMP(x)               (((uint32_t)(((uint32_t)(x)) << CGU_CLK_CONFIG_TRIM_CMP_SHIFT)) & CGU_CLK_CONFIG_TRIM_CMP_MASK)
/*! @} */

/*! @name PER_CLK_EN - Peripheral Clock Enable */
/*! @{ */

#define CGU_PER_CLK_EN_UART_CLK_MASK             (0x1U)
#define CGU_PER_CLK_EN_UART_CLK_SHIFT            (0U)
/*! UART_CLK - UART Clock Enable
 *  0b0..Disable
 *  0b1..Enable
 */
#define CGU_PER_CLK_EN_UART_CLK(x)               (((uint32_t)(((uint32_t)(x)) << CGU_PER_CLK_EN_UART_CLK_SHIFT)) & CGU_PER_CLK_EN_UART_CLK_MASK)

#define CGU_PER_CLK_EN_I2C_CLK_MASK              (0x2U)
#define CGU_PER_CLK_EN_I2C_CLK_SHIFT             (1U)
/*! I2C_CLK - I2C Clock Enable
 *  0b0..Disable
 *  0b1..Enable
 */
#define CGU_PER_CLK_EN_I2C_CLK(x)                (((uint32_t)(((uint32_t)(x)) << CGU_PER_CLK_EN_I2C_CLK_SHIFT)) & CGU_PER_CLK_EN_I2C_CLK_MASK)

#define CGU_PER_CLK_EN_APB_CLK_MASK              (0x4U)
#define CGU_PER_CLK_EN_APB_CLK_SHIFT             (2U)
/*! APB_CLK - APB Clock Enable
 *  0b0..Disable
 *  0b1..Enable
 */
#define CGU_PER_CLK_EN_APB_CLK(x)                (((uint32_t)(((uint32_t)(x)) << CGU_PER_CLK_EN_APB_CLK_SHIFT)) & CGU_PER_CLK_EN_APB_CLK_MASK)

#define CGU_PER_CLK_EN_STP_ALL_CLK_MASK          (0x8U)
#define CGU_PER_CLK_EN_STP_ALL_CLK_SHIFT         (3U)
/*! STP_ALL_CLK - Stop All Clocks
 *  0b0..Disable
 *  0b1..Enable
 */
#define CGU_PER_CLK_EN_STP_ALL_CLK(x)            (((uint32_t)(((uint32_t)(x)) << CGU_PER_CLK_EN_STP_ALL_CLK_SHIFT)) & CGU_PER_CLK_EN_STP_ALL_CLK_MASK)

#define CGU_PER_CLK_EN_SLEEP_OVRD_MASK           (0x10U)
#define CGU_PER_CLK_EN_SLEEP_OVRD_SHIFT          (4U)
/*! SLEEP_OVRD - Sleeping Override
 *  0b0..Disable
 *  0b1..Enable
 */
#define CGU_PER_CLK_EN_SLEEP_OVRD(x)             (((uint32_t)(((uint32_t)(x)) << CGU_PER_CLK_EN_SLEEP_OVRD_SHIFT)) & CGU_PER_CLK_EN_SLEEP_OVRD_MASK)

#define CGU_PER_CLK_EN_PORT_CLK_EN_MASK          (0x20U)
#define CGU_PER_CLK_EN_PORT_CLK_EN_SHIFT         (5U)
/*! PORT_CLK_EN - Port Clock Enable
 *  0b0..Disable
 *  0b1..Enable
 */
#define CGU_PER_CLK_EN_PORT_CLK_EN(x)            (((uint32_t)(((uint32_t)(x)) << CGU_PER_CLK_EN_PORT_CLK_EN_SHIFT)) & CGU_PER_CLK_EN_PORT_CLK_EN_MASK)

#define CGU_PER_CLK_EN_GPIO_CLK_EN_MASK          (0x40U)
#define CGU_PER_CLK_EN_GPIO_CLK_EN_SHIFT         (6U)
/*! GPIO_CLK_EN - GPIO Clock Enable
 *  0b0..Disable
 *  0b1..Enable
 */
#define CGU_PER_CLK_EN_GPIO_CLK_EN(x)            (((uint32_t)(((uint32_t)(x)) << CGU_PER_CLK_EN_GPIO_CLK_EN_SHIFT)) & CGU_PER_CLK_EN_GPIO_CLK_EN_MASK)

#define CGU_PER_CLK_EN_SNS_CLK_EN_MASK           (0x80U)
#define CGU_PER_CLK_EN_SNS_CLK_EN_SHIFT          (7U)
/*! SNS_CLK_EN - SNS Clock Enable
 *  0b0..Disable
 *  0b1..Enable
 */
#define CGU_PER_CLK_EN_SNS_CLK_EN(x)             (((uint32_t)(((uint32_t)(x)) << CGU_PER_CLK_EN_SNS_CLK_EN_SHIFT)) & CGU_PER_CLK_EN_SNS_CLK_EN_MASK)

#define CGU_PER_CLK_EN_COMP_CLK_EN_MASK          (0x100U)
#define CGU_PER_CLK_EN_COMP_CLK_EN_SHIFT         (8U)
/*! COMP_CLK_EN - Comparator Clock Enable
 *  0b0..Disable
 *  0b1..Enable
 */
#define CGU_PER_CLK_EN_COMP_CLK_EN(x)            (((uint32_t)(((uint32_t)(x)) << CGU_PER_CLK_EN_COMP_CLK_EN_SHIFT)) & CGU_PER_CLK_EN_COMP_CLK_EN_MASK)
/*! @} */

/*! @name RST_SUB_BLK - Reset Subsystem Blocks */
/*! @{ */

#define CGU_RST_SUB_BLK_UART_RST_N_MASK          (0x1U)
#define CGU_RST_SUB_BLK_UART_RST_N_SHIFT         (0U)
/*! UART_RST_N - UART Reset N */
#define CGU_RST_SUB_BLK_UART_RST_N(x)            (((uint32_t)(((uint32_t)(x)) << CGU_RST_SUB_BLK_UART_RST_N_SHIFT)) & CGU_RST_SUB_BLK_UART_RST_N_MASK)

#define CGU_RST_SUB_BLK_I2C_RST_N_MASK           (0x2U)
#define CGU_RST_SUB_BLK_I2C_RST_N_SHIFT          (1U)
/*! I2C_RST_N - I2C Software Reset N */
#define CGU_RST_SUB_BLK_I2C_RST_N(x)             (((uint32_t)(((uint32_t)(x)) << CGU_RST_SUB_BLK_I2C_RST_N_SHIFT)) & CGU_RST_SUB_BLK_I2C_RST_N_MASK)

#define CGU_RST_SUB_BLK_AON_CPU_RST_N_MASK       (0x8U)
#define CGU_RST_SUB_BLK_AON_CPU_RST_N_SHIFT      (3U)
/*! AON_CPU_RST_N - AON CPU Software Reset N */
#define CGU_RST_SUB_BLK_AON_CPU_RST_N(x)         (((uint32_t)(((uint32_t)(x)) << CGU_RST_SUB_BLK_AON_CPU_RST_N_SHIFT)) & CGU_RST_SUB_BLK_AON_CPU_RST_N_MASK)
/*! @} */

/*! @name FRO_3P0M_LP_CONFIG - FRO_3P0M Low Power Configuration */
/*! @{ */

#define CGU_FRO_3P0M_LP_CONFIG_FRO3M_CONFIG_MASK (0xFFU)
#define CGU_FRO_3P0M_LP_CONFIG_FRO3M_CONFIG_SHIFT (0U)
/*! FRO3M_CONFIG - FRO3M Configuration */
#define CGU_FRO_3P0M_LP_CONFIG_FRO3M_CONFIG(x)   (((uint32_t)(((uint32_t)(x)) << CGU_FRO_3P0M_LP_CONFIG_FRO3M_CONFIG_SHIFT)) & CGU_FRO_3P0M_LP_CONFIG_FRO3M_CONFIG_MASK)
/*! @} */

/*! @name INT_EN - Interrupt Enable */
/*! @{ */

#define CGU_INT_EN_AUTO_CAL_VAL_MASK             (0x1U)
#define CGU_INT_EN_AUTO_CAL_VAL_SHIFT            (0U)
/*! AUTO_CAL_VAL - Auto Calibration Valid Enable Interrupt */
#define CGU_INT_EN_AUTO_CAL_VAL(x)               (((uint32_t)(((uint32_t)(x)) << CGU_INT_EN_AUTO_CAL_VAL_SHIFT)) & CGU_INT_EN_AUTO_CAL_VAL_MASK)

#define CGU_INT_EN_AUTO_CAL_NOT_VAL_MASK         (0x2U)
#define CGU_INT_EN_AUTO_CAL_NOT_VAL_SHIFT        (1U)
/*! AUTO_CAL_NOT_VAL - Auto Calibration Not Valid Enable Interrupt */
#define CGU_INT_EN_AUTO_CAL_NOT_VAL(x)           (((uint32_t)(((uint32_t)(x)) << CGU_INT_EN_AUTO_CAL_NOT_VAL_SHIFT)) & CGU_INT_EN_AUTO_CAL_NOT_VAL_MASK)
/*! @} */

/*! @name INT_FLAG - Interrupt Flag */
/*! @{ */

#define CGU_INT_FLAG_AUTO_CAL_VAL_IF_MASK        (0x1U)
#define CGU_INT_FLAG_AUTO_CAL_VAL_IF_SHIFT       (0U)
/*! AUTO_CAL_VAL_IF - Auto Calibration Valid Interrupt Flag
 *  0b0..Read
 *  0b1..Writing 1 to clears this flag. Writing 0 does nothing
 */
#define CGU_INT_FLAG_AUTO_CAL_VAL_IF(x)          (((uint32_t)(((uint32_t)(x)) << CGU_INT_FLAG_AUTO_CAL_VAL_IF_SHIFT)) & CGU_INT_FLAG_AUTO_CAL_VAL_IF_MASK)

#define CGU_INT_FLAG_AUTO_CAL_NOT_VAL_IF_MASK    (0x2U)
#define CGU_INT_FLAG_AUTO_CAL_NOT_VAL_IF_SHIFT   (1U)
/*! AUTO_CAL_NOT_VAL_IF - Auto Calibration Not Valid Enable Interrupt Flag
 *  0b0..Read
 *  0b1..Writing 1 clears this flag. Writing 0 does nothing
 */
#define CGU_INT_FLAG_AUTO_CAL_NOT_VAL_IF(x)      (((uint32_t)(((uint32_t)(x)) << CGU_INT_FLAG_AUTO_CAL_NOT_VAL_IF_SHIFT)) & CGU_INT_FLAG_AUTO_CAL_NOT_VAL_IF_MASK)
/*! @} */

/*! @name VERSION - VERSION */
/*! @{ */

#define CGU_VERSION_STEP_NUM_MASK                (0xFFU)
#define CGU_VERSION_STEP_NUM_SHIFT               (0U)
/*! STEP_NUM - Step Number */
#define CGU_VERSION_STEP_NUM(x)                  (((uint32_t)(((uint32_t)(x)) << CGU_VERSION_STEP_NUM_SHIFT)) & CGU_VERSION_STEP_NUM_MASK)

#define CGU_VERSION_STEP_LETTER_MASK             (0xFF00U)
#define CGU_VERSION_STEP_LETTER_SHIFT            (8U)
/*! STEP_LETTER - Step Letter */
#define CGU_VERSION_STEP_LETTER(x)               (((uint32_t)(((uint32_t)(x)) << CGU_VERSION_STEP_LETTER_SHIFT)) & CGU_VERSION_STEP_LETTER_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group CGU_Register_Masks */


/*!
 * @}
 */ /* end of group CGU_Peripheral_Access_Layer */


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


#endif  /* CGU_H_ */

