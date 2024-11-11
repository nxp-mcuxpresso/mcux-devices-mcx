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
**         CMSIS Peripheral Access Layer for SNS
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
 * @file SNS.h
 * @version 1.0
 * @date 2023-01-09
 * @brief CMSIS Peripheral Access Layer for SNS
 *
 * CMSIS Peripheral Access Layer for SNS
 */

#if !defined(SNS_H_)
#define SNS_H_                                   /**< Symbol preventing repeated inclusion */

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
   -- SNS Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup SNS_Peripheral_Access_Layer SNS Peripheral Access Layer
 * @{
 */

/** SNS - Register Layout Typedef */
typedef struct {
  __IO uint16_t CONFIG;                            /**< Sensor Configuration Register, offset: 0x0 */
       uint8_t RESERVED_0[2];
  __IO uint16_t FFCONFIG;                          /**< First Fail Configuration Register, offset: 0x4 */
       uint8_t RESERVED_1[2];
  __IO uint16_t FFCTRL;                            /**< First Fail Control Register, offset: 0x8 */
       uint8_t RESERVED_2[2];
  __IO uint16_t FFDLL0;                            /**< First DLL Code Register, offset: 0xC */
       uint8_t RESERVED_3[2];
  __IO uint16_t FFDLL1;                            /**< Second DLL Code Register, offset: 0x10 */
       uint8_t RESERVED_4[2];
  __IO uint16_t AUTOCONFIG;                        /**< Auto Configuration Register, offset: 0x14 */
       uint8_t RESERVED_5[2];
  __IO uint16_t LDOSTPDLY;                         /**< LDO Step Delay Register, offset: 0x18 */
       uint8_t RESERVED_6[2];
  __IO uint16_t LDOSRTDLY;                         /**< LDO Start Delay Register, offset: 0x1C */
       uint8_t RESERVED_7[2];
  __IO uint16_t AUTORES;                           /**< Auto-sweep Result Register, offset: 0x20 */
       uint8_t RESERVED_8[2];
  __IO uint16_t DACV;                              /**< VNM DAC Voltage Register, offset: 0x24 */
       uint8_t RESERVED_9[2];
  __I  uint16_t FFCLKEN;                           /**< First Fail Clocks Enabled, offset: 0x28 */
       uint8_t RESERVED_10[2];
  __IO uint16_t LDODWDLY;                          /**< LDO Pull Down Delay Register, offset: 0x2C */
} SNS_Type;

/* ----------------------------------------------------------------------------
   -- SNS Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup SNS_Register_Masks SNS Register Masks
 * @{
 */

/*! @name CONFIG - Sensor Configuration Register */
/*! @{ */

#define SNS_CONFIG_SNS_EN_MASK                   (0xFU)
#define SNS_CONFIG_SNS_EN_SHIFT                  (0U)
/*! SNS_EN - SNS Enable */
#define SNS_CONFIG_SNS_EN(x)                     (((uint16_t)(((uint16_t)(x)) << SNS_CONFIG_SNS_EN_SHIFT)) & SNS_CONFIG_SNS_EN_MASK)

#define SNS_CONFIG_RINGO_SEL_MASK                (0x70U)
#define SNS_CONFIG_RINGO_SEL_SHIFT               (4U)
/*! RINGO_SEL - Ringo Select
 *  0b000..All ringos disabled
 *  0b001..MVT ringo
 *  0b010..SVT ringo
 *  0b011..HVT ringo
 *  0b100..EHVT ringo
 */
#define SNS_CONFIG_RINGO_SEL(x)                  (((uint16_t)(((uint16_t)(x)) << SNS_CONFIG_RINGO_SEL_SHIFT)) & SNS_CONFIG_RINGO_SEL_MASK)

#define SNS_CONFIG_RINGO_DIV_SEL_MASK            (0x380U)
#define SNS_CONFIG_RINGO_DIV_SEL_SHIFT           (7U)
/*! RINGO_DIV_SEL - Division ratio select */
#define SNS_CONFIG_RINGO_DIV_SEL(x)              (((uint16_t)(((uint16_t)(x)) << SNS_CONFIG_RINGO_DIV_SEL_SHIFT)) & SNS_CONFIG_RINGO_DIV_SEL_MASK)

#define SNS_CONFIG_RINGO_FULL_SEL_MASK           (0x400U)
#define SNS_CONFIG_RINGO_FULL_SEL_SHIFT          (10U)
/*! RINGO_FULL_SEL - RINGO Full Select */
#define SNS_CONFIG_RINGO_FULL_SEL(x)             (((uint16_t)(((uint16_t)(x)) << SNS_CONFIG_RINGO_FULL_SEL_SHIFT)) & SNS_CONFIG_RINGO_FULL_SEL_MASK)

#define SNS_CONFIG_SENSOR_SPARE_OUT_MASK         (0x800U)
#define SNS_CONFIG_SENSOR_SPARE_OUT_SHIFT        (11U)
/*! SENSOR_SPARE_OUT - Spare Pin */
#define SNS_CONFIG_SENSOR_SPARE_OUT(x)           (((uint16_t)(((uint16_t)(x)) << SNS_CONFIG_SENSOR_SPARE_OUT_SHIFT)) & SNS_CONFIG_SENSOR_SPARE_OUT_MASK)
/*! @} */

/*! @name FFCONFIG - First Fail Configuration Register */
/*! @{ */

#define SNS_FFCONFIG_FF_SEL_MASK                 (0xFU)
#define SNS_FFCONFIG_FF_SEL_SHIFT                (0U)
/*! FF_SEL - First Fail Logic Select */
#define SNS_FFCONFIG_FF_SEL(x)                   (((uint16_t)(((uint16_t)(x)) << SNS_FFCONFIG_FF_SEL_SHIFT)) & SNS_FFCONFIG_FF_SEL_MASK)

#define SNS_FFCONFIG_FF_EN_MASK                  (0x10U)
#define SNS_FFCONFIG_FF_EN_SHIFT                 (4U)
/*! FF_EN - First Fail Logic Enable */
#define SNS_FFCONFIG_FF_EN(x)                    (((uint16_t)(((uint16_t)(x)) << SNS_FFCONFIG_FF_EN_SHIFT)) & SNS_FFCONFIG_FF_EN_MASK)

#define SNS_FFCONFIG_FF_RESET_N_MASK             (0x20U)
#define SNS_FFCONFIG_FF_RESET_N_SHIFT            (5U)
/*! FF_RESET_N - First Fail Logic Reset */
#define SNS_FFCONFIG_FF_RESET_N(x)               (((uint16_t)(((uint16_t)(x)) << SNS_FFCONFIG_FF_RESET_N_SHIFT)) & SNS_FFCONFIG_FF_RESET_N_MASK)

#define SNS_FFCONFIG_VNW_REVERSE_MASK            (0x40U)
#define SNS_FFCONFIG_VNW_REVERSE_SHIFT           (6U)
/*! VNW_REVERSE - VNW Direction Indicator */
#define SNS_FFCONFIG_VNW_REVERSE(x)              (((uint16_t)(((uint16_t)(x)) << SNS_FFCONFIG_VNW_REVERSE_SHIFT)) & SNS_FFCONFIG_VNW_REVERSE_MASK)

#define SNS_FFCONFIG_VNM_ACTIVE_MASK             (0x80U)
#define SNS_FFCONFIG_VNM_ACTIVE_SHIFT            (7U)
/*! VNM_ACTIVE - Active VNW Indicator */
#define SNS_FFCONFIG_VNM_ACTIVE(x)               (((uint16_t)(((uint16_t)(x)) << SNS_FFCONFIG_VNM_ACTIVE_SHIFT)) & SNS_FFCONFIG_VNM_ACTIVE_MASK)

#define SNS_FFCONFIG_FF_RESULT_MASK              (0xF00U)
#define SNS_FFCONFIG_FF_RESULT_SHIFT             (8U)
/*! FF_RESULT - First Fail Logic Result
 *  0b0000..DLL too long
 *  0b0001..DLL is correct
 */
#define SNS_FFCONFIG_FF_RESULT(x)                (((uint16_t)(((uint16_t)(x)) << SNS_FFCONFIG_FF_RESULT_SHIFT)) & SNS_FFCONFIG_FF_RESULT_MASK)

#define SNS_FFCONFIG_FFAIL_FINISH_RUN_ALL_MASK   (0x1000U)
#define SNS_FFCONFIG_FFAIL_FINISH_RUN_ALL_SHIFT  (12U)
/*! FFAIL_FINISH_RUN_ALL - First Fail Finish */
#define SNS_FFCONFIG_FFAIL_FINISH_RUN_ALL(x)     (((uint16_t)(((uint16_t)(x)) << SNS_FFCONFIG_FFAIL_FINISH_RUN_ALL_SHIFT)) & SNS_FFCONFIG_FFAIL_FINISH_RUN_ALL_MASK)
/*! @} */

/*! @name FFCTRL - First Fail Control Register */
/*! @{ */

#define SNS_FFCTRL_FF_DLL_OSC_LOOP_OUT_MASK      (0x8U)
#define SNS_FFCTRL_FF_DLL_OSC_LOOP_OUT_SHIFT     (3U)
/*! FF_DLL_OSC_LOOP_OUT - Oscillation Output with First Fail Logic in Degradation */
#define SNS_FFCTRL_FF_DLL_OSC_LOOP_OUT(x)        (((uint16_t)(((uint16_t)(x)) << SNS_FFCTRL_FF_DLL_OSC_LOOP_OUT_SHIFT)) & SNS_FFCTRL_FF_DLL_OSC_LOOP_OUT_MASK)

#define SNS_FFCTRL_FF_HALF_CELLS_MASK            (0x20U)
#define SNS_FFCTRL_FF_HALF_CELLS_SHIFT           (5U)
/*! FF_HALF_CELLS - Half Cells for First Fail Logic */
#define SNS_FFCTRL_FF_HALF_CELLS(x)              (((uint16_t)(((uint16_t)(x)) << SNS_FFCTRL_FF_HALF_CELLS_SHIFT)) & SNS_FFCTRL_FF_HALF_CELLS_MASK)

#define SNS_FFCTRL_FF_DLL_SEL_MASK               (0x300U)
#define SNS_FFCTRL_FF_DLL_SEL_SHIFT              (8U)
/*! FF_DLL_SEL - First Fail Logic DLL Select
 *  0b00..Only the single DLL which uses SNS LDO is chosen
 *  0b01..One DLL which uses SNS LDO, and one DLL which uses VDD09 are chosen
 *  0b10..Two DLLs that use SNS LDO are chosen
 *  0b11..ffail sensor enters oscillation mode for cell degredation. The sensors that will oscillate are
 *        determined by FF_SEL[3:0] in FF_CONFIG register. If the first bit is active, the first sensor will oscillate. If
 *        the second bit is active, the second sensor will oscillate, etc. Multiple sensors can oscillate
 *        simultaneously, or none at all.
 */
#define SNS_FFCTRL_FF_DLL_SEL(x)                 (((uint16_t)(((uint16_t)(x)) << SNS_FFCTRL_FF_DLL_SEL_SHIFT)) & SNS_FFCTRL_FF_DLL_SEL_MASK)

#define SNS_FFCTRL_FF_LAUNCH_CLK_SEL_MASK        (0x400U)
#define SNS_FFCTRL_FF_LAUNCH_CLK_SEL_SHIFT       (10U)
/*! FF_LAUNCH_CLK_SEL - First Fail Launch Clock Select
 *  0b0..Doesn't affect launch clock
 *  0b1..Brings the launch clock forward half a cycle
 */
#define SNS_FFCTRL_FF_LAUNCH_CLK_SEL(x)          (((uint16_t)(((uint16_t)(x)) << SNS_FFCTRL_FF_LAUNCH_CLK_SEL_SHIFT)) & SNS_FFCTRL_FF_LAUNCH_CLK_SEL_MASK)

#define SNS_FFCTRL_FF_CAPTURE_CLK_SEL_MASK       (0x800U)
#define SNS_FFCTRL_FF_CAPTURE_CLK_SEL_SHIFT      (11U)
/*! FF_CAPTURE_CLK_SEL - First Fail Logic Capture Clock Select
 *  0b0..Doesn't affect capture clock
 *  0b1..Brings the capture clock back half a cycle
 */
#define SNS_FFCTRL_FF_CAPTURE_CLK_SEL(x)         (((uint16_t)(((uint16_t)(x)) << SNS_FFCTRL_FF_CAPTURE_CLK_SEL_SHIFT)) & SNS_FFCTRL_FF_CAPTURE_CLK_SEL_MASK)

#define SNS_FFCTRL_FF_DELAY_SEL_MASK             (0x3000U)
#define SNS_FFCTRL_FF_DELAY_SEL_SHIFT            (12U)
/*! FF_DELAY_SEL - First Fail Logic Delay Select
 *  0b00..no delay between launch and capture clock
 *  0b01..One clock cycle delay between launch and capture clock
 *  0b10..Two clock cycle delays between launch and capture clock
 */
#define SNS_FFCTRL_FF_DELAY_SEL(x)               (((uint16_t)(((uint16_t)(x)) << SNS_FFCTRL_FF_DELAY_SEL_SHIFT)) & SNS_FFCTRL_FF_DELAY_SEL_MASK)
/*! @} */

/*! @name FFDLL0 - First DLL Code Register */
/*! @{ */

#define SNS_FFDLL0_FF_DLL0_CODE_MASK             (0xFFFFU)
#define SNS_FFDLL0_FF_DLL0_CODE_SHIFT            (0U)
/*! FF_DLL0_CODE - First DLL Code */
#define SNS_FFDLL0_FF_DLL0_CODE(x)               (((uint16_t)(((uint16_t)(x)) << SNS_FFDLL0_FF_DLL0_CODE_SHIFT)) & SNS_FFDLL0_FF_DLL0_CODE_MASK)
/*! @} */

/*! @name FFDLL1 - Second DLL Code Register */
/*! @{ */

#define SNS_FFDLL1_FF_DLL1_CODE_MASK             (0xFFFFU)
#define SNS_FFDLL1_FF_DLL1_CODE_SHIFT            (0U)
/*! FF_DLL1_CODE - Second DLL Code */
#define SNS_FFDLL1_FF_DLL1_CODE(x)               (((uint16_t)(((uint16_t)(x)) << SNS_FFDLL1_FF_DLL1_CODE_SHIFT)) & SNS_FFDLL1_FF_DLL1_CODE_MASK)
/*! @} */

/*! @name AUTOCONFIG - Auto Configuration Register */
/*! @{ */

#define SNS_AUTOCONFIG_VDDSNS_LDO_START_MASK     (0x3FU)
#define SNS_AUTOCONFIG_VDDSNS_LDO_START_SHIFT    (0U)
/*! VDDSNS_LDO_START - Start Output Voltage for VDD Sweep
 *  0b000000..1.156V
 *  0b000001..1.144V
 *  0b000010..1.132V
 *  0b111111..0.4V
 */
#define SNS_AUTOCONFIG_VDDSNS_LDO_START(x)       (((uint16_t)(((uint16_t)(x)) << SNS_AUTOCONFIG_VDDSNS_LDO_START_SHIFT)) & SNS_AUTOCONFIG_VDDSNS_LDO_START_MASK)

#define SNS_AUTOCONFIG_VDDSNS_LDO_END_MASK       (0xFC0U)
#define SNS_AUTOCONFIG_VDDSNS_LDO_END_SHIFT      (6U)
/*! VDDSNS_LDO_END - End Output Voltage for VDD Sweep
 *  0b000000..1.156V
 *  0b000001..1.144V
 *  0b000010..1.132V
 *  0b111111..0.4V
 */
#define SNS_AUTOCONFIG_VDDSNS_LDO_END(x)         (((uint16_t)(((uint16_t)(x)) << SNS_AUTOCONFIG_VDDSNS_LDO_END_SHIFT)) & SNS_AUTOCONFIG_VDDSNS_LDO_END_MASK)

#define SNS_AUTOCONFIG_SNS_SWEEP_START_MASK      (0x1000U)
#define SNS_AUTOCONFIG_SNS_SWEEP_START_SHIFT     (12U)
/*! SNS_SWEEP_START - Sweep Start */
#define SNS_AUTOCONFIG_SNS_SWEEP_START(x)        (((uint16_t)(((uint16_t)(x)) << SNS_AUTOCONFIG_SNS_SWEEP_START_SHIFT)) & SNS_AUTOCONFIG_SNS_SWEEP_START_MASK)

#define SNS_AUTOCONFIG_SNS_SWEEP_DONE_IE_MASK    (0x2000U)
#define SNS_AUTOCONFIG_SNS_SWEEP_DONE_IE_SHIFT   (13U)
/*! SNS_SWEEP_DONE_IE - Interrupt Enable */
#define SNS_AUTOCONFIG_SNS_SWEEP_DONE_IE(x)      (((uint16_t)(((uint16_t)(x)) << SNS_AUTOCONFIG_SNS_SWEEP_DONE_IE_SHIFT)) & SNS_AUTOCONFIG_SNS_SWEEP_DONE_IE_MASK)

#define SNS_AUTOCONFIG_SNS_SWEEP_RESET_MASK      (0x4000U)
#define SNS_AUTOCONFIG_SNS_SWEEP_RESET_SHIFT     (14U)
/*! SNS_SWEEP_RESET - Sweep Reset */
#define SNS_AUTOCONFIG_SNS_SWEEP_RESET(x)        (((uint16_t)(((uint16_t)(x)) << SNS_AUTOCONFIG_SNS_SWEEP_RESET_SHIFT)) & SNS_AUTOCONFIG_SNS_SWEEP_RESET_MASK)
/*! @} */

/*! @name LDOSTPDLY - LDO Step Delay Register */
/*! @{ */

#define SNS_LDOSTPDLY_LDO_STEP_DELAY0_MASK       (0x1U)
#define SNS_LDOSTPDLY_LDO_STEP_DELAY0_SHIFT      (0U)
#define SNS_LDOSTPDLY_LDO_STEP_DELAY0(x)         (((uint16_t)(((uint16_t)(x)) << SNS_LDOSTPDLY_LDO_STEP_DELAY0_SHIFT)) & SNS_LDOSTPDLY_LDO_STEP_DELAY0_MASK)

#define SNS_LDOSTPDLY_LDO_STEP_DELAY1_MASK       (0x2U)
#define SNS_LDOSTPDLY_LDO_STEP_DELAY1_SHIFT      (1U)
#define SNS_LDOSTPDLY_LDO_STEP_DELAY1(x)         (((uint16_t)(((uint16_t)(x)) << SNS_LDOSTPDLY_LDO_STEP_DELAY1_SHIFT)) & SNS_LDOSTPDLY_LDO_STEP_DELAY1_MASK)

#define SNS_LDOSTPDLY_LDO_STEP_DELAY2_MASK       (0x4U)
#define SNS_LDOSTPDLY_LDO_STEP_DELAY2_SHIFT      (2U)
#define SNS_LDOSTPDLY_LDO_STEP_DELAY2(x)         (((uint16_t)(((uint16_t)(x)) << SNS_LDOSTPDLY_LDO_STEP_DELAY2_SHIFT)) & SNS_LDOSTPDLY_LDO_STEP_DELAY2_MASK)

#define SNS_LDOSTPDLY_LDO_STEP_DELAY3_MASK       (0x8U)
#define SNS_LDOSTPDLY_LDO_STEP_DELAY3_SHIFT      (3U)
#define SNS_LDOSTPDLY_LDO_STEP_DELAY3(x)         (((uint16_t)(((uint16_t)(x)) << SNS_LDOSTPDLY_LDO_STEP_DELAY3_SHIFT)) & SNS_LDOSTPDLY_LDO_STEP_DELAY3_MASK)

#define SNS_LDOSTPDLY_LDO_STEP_DELAY4_MASK       (0x10U)
#define SNS_LDOSTPDLY_LDO_STEP_DELAY4_SHIFT      (4U)
#define SNS_LDOSTPDLY_LDO_STEP_DELAY4(x)         (((uint16_t)(((uint16_t)(x)) << SNS_LDOSTPDLY_LDO_STEP_DELAY4_SHIFT)) & SNS_LDOSTPDLY_LDO_STEP_DELAY4_MASK)

#define SNS_LDOSTPDLY_LDO_STEP_DELAY5_MASK       (0x20U)
#define SNS_LDOSTPDLY_LDO_STEP_DELAY5_SHIFT      (5U)
#define SNS_LDOSTPDLY_LDO_STEP_DELAY5(x)         (((uint16_t)(((uint16_t)(x)) << SNS_LDOSTPDLY_LDO_STEP_DELAY5_SHIFT)) & SNS_LDOSTPDLY_LDO_STEP_DELAY5_MASK)

#define SNS_LDOSTPDLY_LDO_STEP_DELAY6_MASK       (0x40U)
#define SNS_LDOSTPDLY_LDO_STEP_DELAY6_SHIFT      (6U)
#define SNS_LDOSTPDLY_LDO_STEP_DELAY6(x)         (((uint16_t)(((uint16_t)(x)) << SNS_LDOSTPDLY_LDO_STEP_DELAY6_SHIFT)) & SNS_LDOSTPDLY_LDO_STEP_DELAY6_MASK)

#define SNS_LDOSTPDLY_LDO_STEP_DELAY7_MASK       (0x80U)
#define SNS_LDOSTPDLY_LDO_STEP_DELAY7_SHIFT      (7U)
#define SNS_LDOSTPDLY_LDO_STEP_DELAY7(x)         (((uint16_t)(((uint16_t)(x)) << SNS_LDOSTPDLY_LDO_STEP_DELAY7_SHIFT)) & SNS_LDOSTPDLY_LDO_STEP_DELAY7_MASK)

#define SNS_LDOSTPDLY_LDO_STEP_DELAY8_MASK       (0x100U)
#define SNS_LDOSTPDLY_LDO_STEP_DELAY8_SHIFT      (8U)
#define SNS_LDOSTPDLY_LDO_STEP_DELAY8(x)         (((uint16_t)(((uint16_t)(x)) << SNS_LDOSTPDLY_LDO_STEP_DELAY8_SHIFT)) & SNS_LDOSTPDLY_LDO_STEP_DELAY8_MASK)

#define SNS_LDOSTPDLY_LDO_STEP_DELAY9_MASK       (0x200U)
#define SNS_LDOSTPDLY_LDO_STEP_DELAY9_SHIFT      (9U)
#define SNS_LDOSTPDLY_LDO_STEP_DELAY9(x)         (((uint16_t)(((uint16_t)(x)) << SNS_LDOSTPDLY_LDO_STEP_DELAY9_SHIFT)) & SNS_LDOSTPDLY_LDO_STEP_DELAY9_MASK)

#define SNS_LDOSTPDLY_LDO_STEP_DELAY10_MASK      (0x400U)
#define SNS_LDOSTPDLY_LDO_STEP_DELAY10_SHIFT     (10U)
#define SNS_LDOSTPDLY_LDO_STEP_DELAY10(x)        (((uint16_t)(((uint16_t)(x)) << SNS_LDOSTPDLY_LDO_STEP_DELAY10_SHIFT)) & SNS_LDOSTPDLY_LDO_STEP_DELAY10_MASK)

#define SNS_LDOSTPDLY_LDO_STEP_DELAY11_MASK      (0x800U)
#define SNS_LDOSTPDLY_LDO_STEP_DELAY11_SHIFT     (11U)
#define SNS_LDOSTPDLY_LDO_STEP_DELAY11(x)        (((uint16_t)(((uint16_t)(x)) << SNS_LDOSTPDLY_LDO_STEP_DELAY11_SHIFT)) & SNS_LDOSTPDLY_LDO_STEP_DELAY11_MASK)

#define SNS_LDOSTPDLY_LDO_STEP_DELAY12_MASK      (0x1000U)
#define SNS_LDOSTPDLY_LDO_STEP_DELAY12_SHIFT     (12U)
#define SNS_LDOSTPDLY_LDO_STEP_DELAY12(x)        (((uint16_t)(((uint16_t)(x)) << SNS_LDOSTPDLY_LDO_STEP_DELAY12_SHIFT)) & SNS_LDOSTPDLY_LDO_STEP_DELAY12_MASK)

#define SNS_LDOSTPDLY_LDO_STEP_DELAY13_MASK      (0x2000U)
#define SNS_LDOSTPDLY_LDO_STEP_DELAY13_SHIFT     (13U)
#define SNS_LDOSTPDLY_LDO_STEP_DELAY13(x)        (((uint16_t)(((uint16_t)(x)) << SNS_LDOSTPDLY_LDO_STEP_DELAY13_SHIFT)) & SNS_LDOSTPDLY_LDO_STEP_DELAY13_MASK)

#define SNS_LDOSTPDLY_LDO_STEP_DELAY14_MASK      (0x4000U)
#define SNS_LDOSTPDLY_LDO_STEP_DELAY14_SHIFT     (14U)
#define SNS_LDOSTPDLY_LDO_STEP_DELAY14(x)        (((uint16_t)(((uint16_t)(x)) << SNS_LDOSTPDLY_LDO_STEP_DELAY14_SHIFT)) & SNS_LDOSTPDLY_LDO_STEP_DELAY14_MASK)

#define SNS_LDOSTPDLY_LDO_STEP_DELAY15_MASK      (0x8000U)
#define SNS_LDOSTPDLY_LDO_STEP_DELAY15_SHIFT     (15U)
#define SNS_LDOSTPDLY_LDO_STEP_DELAY15(x)        (((uint16_t)(((uint16_t)(x)) << SNS_LDOSTPDLY_LDO_STEP_DELAY15_SHIFT)) & SNS_LDOSTPDLY_LDO_STEP_DELAY15_MASK)
/*! @} */

/*! @name LDOSRTDLY - LDO Start Delay Register */
/*! @{ */

#define SNS_LDOSRTDLY_LFO_START_DELAY0_MASK      (0x1U)
#define SNS_LDOSRTDLY_LFO_START_DELAY0_SHIFT     (0U)
#define SNS_LDOSRTDLY_LFO_START_DELAY0(x)        (((uint16_t)(((uint16_t)(x)) << SNS_LDOSRTDLY_LFO_START_DELAY0_SHIFT)) & SNS_LDOSRTDLY_LFO_START_DELAY0_MASK)

#define SNS_LDOSRTDLY_LFO_START_DELAY1_MASK      (0x2U)
#define SNS_LDOSRTDLY_LFO_START_DELAY1_SHIFT     (1U)
#define SNS_LDOSRTDLY_LFO_START_DELAY1(x)        (((uint16_t)(((uint16_t)(x)) << SNS_LDOSRTDLY_LFO_START_DELAY1_SHIFT)) & SNS_LDOSRTDLY_LFO_START_DELAY1_MASK)

#define SNS_LDOSRTDLY_LFO_START_DELAY2_MASK      (0x4U)
#define SNS_LDOSRTDLY_LFO_START_DELAY2_SHIFT     (2U)
#define SNS_LDOSRTDLY_LFO_START_DELAY2(x)        (((uint16_t)(((uint16_t)(x)) << SNS_LDOSRTDLY_LFO_START_DELAY2_SHIFT)) & SNS_LDOSRTDLY_LFO_START_DELAY2_MASK)

#define SNS_LDOSRTDLY_LFO_START_DELAY3_MASK      (0x8U)
#define SNS_LDOSRTDLY_LFO_START_DELAY3_SHIFT     (3U)
#define SNS_LDOSRTDLY_LFO_START_DELAY3(x)        (((uint16_t)(((uint16_t)(x)) << SNS_LDOSRTDLY_LFO_START_DELAY3_SHIFT)) & SNS_LDOSRTDLY_LFO_START_DELAY3_MASK)

#define SNS_LDOSRTDLY_LFO_START_DELAY4_MASK      (0x10U)
#define SNS_LDOSRTDLY_LFO_START_DELAY4_SHIFT     (4U)
#define SNS_LDOSRTDLY_LFO_START_DELAY4(x)        (((uint16_t)(((uint16_t)(x)) << SNS_LDOSRTDLY_LFO_START_DELAY4_SHIFT)) & SNS_LDOSRTDLY_LFO_START_DELAY4_MASK)

#define SNS_LDOSRTDLY_LFO_START_DELAY5_MASK      (0x20U)
#define SNS_LDOSRTDLY_LFO_START_DELAY5_SHIFT     (5U)
#define SNS_LDOSRTDLY_LFO_START_DELAY5(x)        (((uint16_t)(((uint16_t)(x)) << SNS_LDOSRTDLY_LFO_START_DELAY5_SHIFT)) & SNS_LDOSRTDLY_LFO_START_DELAY5_MASK)

#define SNS_LDOSRTDLY_LFO_START_DELAY6_MASK      (0x40U)
#define SNS_LDOSRTDLY_LFO_START_DELAY6_SHIFT     (6U)
#define SNS_LDOSRTDLY_LFO_START_DELAY6(x)        (((uint16_t)(((uint16_t)(x)) << SNS_LDOSRTDLY_LFO_START_DELAY6_SHIFT)) & SNS_LDOSRTDLY_LFO_START_DELAY6_MASK)

#define SNS_LDOSRTDLY_LFO_START_DELAY7_MASK      (0x80U)
#define SNS_LDOSRTDLY_LFO_START_DELAY7_SHIFT     (7U)
#define SNS_LDOSRTDLY_LFO_START_DELAY7(x)        (((uint16_t)(((uint16_t)(x)) << SNS_LDOSRTDLY_LFO_START_DELAY7_SHIFT)) & SNS_LDOSRTDLY_LFO_START_DELAY7_MASK)

#define SNS_LDOSRTDLY_LFO_START_DELAY8_MASK      (0x100U)
#define SNS_LDOSRTDLY_LFO_START_DELAY8_SHIFT     (8U)
#define SNS_LDOSRTDLY_LFO_START_DELAY8(x)        (((uint16_t)(((uint16_t)(x)) << SNS_LDOSRTDLY_LFO_START_DELAY8_SHIFT)) & SNS_LDOSRTDLY_LFO_START_DELAY8_MASK)

#define SNS_LDOSRTDLY_LFO_START_DELAY9_MASK      (0x200U)
#define SNS_LDOSRTDLY_LFO_START_DELAY9_SHIFT     (9U)
#define SNS_LDOSRTDLY_LFO_START_DELAY9(x)        (((uint16_t)(((uint16_t)(x)) << SNS_LDOSRTDLY_LFO_START_DELAY9_SHIFT)) & SNS_LDOSRTDLY_LFO_START_DELAY9_MASK)

#define SNS_LDOSRTDLY_LFO_START_DELAY10_MASK     (0x400U)
#define SNS_LDOSRTDLY_LFO_START_DELAY10_SHIFT    (10U)
#define SNS_LDOSRTDLY_LFO_START_DELAY10(x)       (((uint16_t)(((uint16_t)(x)) << SNS_LDOSRTDLY_LFO_START_DELAY10_SHIFT)) & SNS_LDOSRTDLY_LFO_START_DELAY10_MASK)

#define SNS_LDOSRTDLY_LFO_START_DELAY11_MASK     (0x800U)
#define SNS_LDOSRTDLY_LFO_START_DELAY11_SHIFT    (11U)
#define SNS_LDOSRTDLY_LFO_START_DELAY11(x)       (((uint16_t)(((uint16_t)(x)) << SNS_LDOSRTDLY_LFO_START_DELAY11_SHIFT)) & SNS_LDOSRTDLY_LFO_START_DELAY11_MASK)

#define SNS_LDOSRTDLY_LFO_START_DELAY12_MASK     (0x1000U)
#define SNS_LDOSRTDLY_LFO_START_DELAY12_SHIFT    (12U)
#define SNS_LDOSRTDLY_LFO_START_DELAY12(x)       (((uint16_t)(((uint16_t)(x)) << SNS_LDOSRTDLY_LFO_START_DELAY12_SHIFT)) & SNS_LDOSRTDLY_LFO_START_DELAY12_MASK)

#define SNS_LDOSRTDLY_LFO_START_DELAY13_MASK     (0x2000U)
#define SNS_LDOSRTDLY_LFO_START_DELAY13_SHIFT    (13U)
#define SNS_LDOSRTDLY_LFO_START_DELAY13(x)       (((uint16_t)(((uint16_t)(x)) << SNS_LDOSRTDLY_LFO_START_DELAY13_SHIFT)) & SNS_LDOSRTDLY_LFO_START_DELAY13_MASK)

#define SNS_LDOSRTDLY_LFO_START_DELAY14_MASK     (0x4000U)
#define SNS_LDOSRTDLY_LFO_START_DELAY14_SHIFT    (14U)
#define SNS_LDOSRTDLY_LFO_START_DELAY14(x)       (((uint16_t)(((uint16_t)(x)) << SNS_LDOSRTDLY_LFO_START_DELAY14_SHIFT)) & SNS_LDOSRTDLY_LFO_START_DELAY14_MASK)

#define SNS_LDOSRTDLY_LFO_START_DELAY15_MASK     (0x8000U)
#define SNS_LDOSRTDLY_LFO_START_DELAY15_SHIFT    (15U)
#define SNS_LDOSRTDLY_LFO_START_DELAY15(x)       (((uint16_t)(((uint16_t)(x)) << SNS_LDOSRTDLY_LFO_START_DELAY15_SHIFT)) & SNS_LDOSRTDLY_LFO_START_DELAY15_MASK)
/*! @} */

/*! @name AUTORES - Auto-sweep Result Register */
/*! @{ */

#define SNS_AUTORES_FF_VDDSNS_RES_MASK           (0x3FU)
#define SNS_AUTORES_FF_VDDSNS_RES_SHIFT          (0U)
/*! FF_VDDSNS_RES - First Fail Volatge
 *  0b000000..1.156V
 *  0b000001..1.144V
 *  0b000010..1.132V
 *  0b111111..0.4V
 */
#define SNS_AUTORES_FF_VDDSNS_RES(x)             (((uint16_t)(((uint16_t)(x)) << SNS_AUTORES_FF_VDDSNS_RES_SHIFT)) & SNS_AUTORES_FF_VDDSNS_RES_MASK)

#define SNS_AUTORES_SNS_AUTO_STATE_MASK          (0x1C0U)
#define SNS_AUTORES_SNS_AUTO_STATE_SHIFT         (6U)
/*! SNS_AUTO_STATE - Sweep State */
#define SNS_AUTORES_SNS_AUTO_STATE(x)            (((uint16_t)(((uint16_t)(x)) << SNS_AUTORES_SNS_AUTO_STATE_SHIFT)) & SNS_AUTORES_SNS_AUTO_STATE_MASK)

#define SNS_AUTORES_SNS_AUTO_SWAP_FINISH_MASK    (0x200U)
#define SNS_AUTORES_SNS_AUTO_SWAP_FINISH_SHIFT   (9U)
/*! SNS_AUTO_SWAP_FINISH - Sweep Finish */
#define SNS_AUTORES_SNS_AUTO_SWAP_FINISH(x)      (((uint16_t)(((uint16_t)(x)) << SNS_AUTORES_SNS_AUTO_SWAP_FINISH_SHIFT)) & SNS_AUTORES_SNS_AUTO_SWAP_FINISH_MASK)
/*! @} */

/*! @name DACV - VNM DAC Voltage Register */
/*! @{ */

#define SNS_DACV_VNW_DAC_CODE_MASK               (0x1FU)
#define SNS_DACV_VNW_DAC_CODE_SHIFT              (0U)
/*! VNW_DAC_CODE - Value of VNW DAC */
#define SNS_DACV_VNW_DAC_CODE(x)                 (((uint16_t)(((uint16_t)(x)) << SNS_DACV_VNW_DAC_CODE_SHIFT)) & SNS_DACV_VNW_DAC_CODE_MASK)

#define SNS_DACV_LDO_MIN_CODE_FOR_VNW_SUPPORT_MASK (0x7E0U)
#define SNS_DACV_LDO_MIN_CODE_FOR_VNW_SUPPORT_SHIFT (5U)
/*! LDO_MIN_CODE_FOR_VNW_SUPPORT - Minimum LDO Code */
#define SNS_DACV_LDO_MIN_CODE_FOR_VNW_SUPPORT(x) (((uint16_t)(((uint16_t)(x)) << SNS_DACV_LDO_MIN_CODE_FOR_VNW_SUPPORT_SHIFT)) & SNS_DACV_LDO_MIN_CODE_FOR_VNW_SUPPORT_MASK)
/*! @} */

/*! @name FFCLKEN - First Fail Clocks Enabled */
/*! @{ */

#define SNS_FFCLKEN_FF_CLK_ENABLED_MASK          (0xFFFFU)
#define SNS_FFCLKEN_FF_CLK_ENABLED_SHIFT         (0U)
/*! FF_CLK_ENABLED - First Fail Clocks Enabled */
#define SNS_FFCLKEN_FF_CLK_ENABLED(x)            (((uint16_t)(((uint16_t)(x)) << SNS_FFCLKEN_FF_CLK_ENABLED_SHIFT)) & SNS_FFCLKEN_FF_CLK_ENABLED_MASK)
/*! @} */

/*! @name LDODWDLY - LDO Pull Down Delay Register */
/*! @{ */

#define SNS_LDODWDLY_SNS_LDO_PULL_DOWN_DLY_MASK  (0xFFFFU)
#define SNS_LDODWDLY_SNS_LDO_PULL_DOWN_DLY_SHIFT (0U)
/*! SNS_LDO_PULL_DOWN_DLY - SNS LDO Pull Down Delay */
#define SNS_LDODWDLY_SNS_LDO_PULL_DOWN_DLY(x)    (((uint16_t)(((uint16_t)(x)) << SNS_LDODWDLY_SNS_LDO_PULL_DOWN_DLY_SHIFT)) & SNS_LDODWDLY_SNS_LDO_PULL_DOWN_DLY_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group SNS_Register_Masks */


/*!
 * @}
 */ /* end of group SNS_Peripheral_Access_Layer */


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


#endif  /* SNS_H_ */

