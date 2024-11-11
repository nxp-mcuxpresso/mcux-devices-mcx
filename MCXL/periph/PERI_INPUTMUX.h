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
**         CMSIS Peripheral Access Layer for INPUTMUX
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
 * @file INPUTMUX.h
 * @version 1.0
 * @date 2023-01-09
 * @brief CMSIS Peripheral Access Layer for INPUTMUX
 *
 * CMSIS Peripheral Access Layer for INPUTMUX
 */

#if !defined(INPUTMUX_H_)
#define INPUTMUX_H_                              /**< Symbol preventing repeated inclusion */

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
   -- INPUTMUX Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup INPUTMUX_Peripheral_Access_Layer INPUTMUX Peripheral Access Layer
 * @{
 */

/** INPUTMUX - Size of Registers Arrays */
#define INPUTMUX_CTIMERA_COUNT                    4u
#define INPUTMUX_CTIMERB_COUNT                    4u
#define INPUTMUX_CTIMERC_COUNT                    4u
#define INPUTMUX_ADC0_TRIGM_COUNT                 4u

/** INPUTMUX - Register Layout Typedef */
typedef struct {
       uint8_t RESERVED_0[32];
  __IO uint32_t CTIMER0CAP[INPUTMUX_CTIMERA_COUNT]; /**< Capture select register for CTIMER inputs, array offset: 0x20, array step: 0x4 */
  __IO uint32_t TIMER0TRIG;                        /**< Trigger register for TIMER0, offset: 0x30 */
       uint8_t RESERVED_1[12];
  __IO uint32_t CTIMER1CAP[INPUTMUX_CTIMERB_COUNT]; /**< Capture select register for CTIMER inputs, array offset: 0x40, array step: 0x4 */
  __IO uint32_t TIMER1TRIG;                        /**< Trigger register for TIMER1, offset: 0x50 */
       uint8_t RESERVED_2[12];
  __IO uint32_t CTIMER2CAP[INPUTMUX_CTIMERC_COUNT]; /**< Capture select register for CTIMER inputs, array offset: 0x60, array step: 0x4 */
  __IO uint32_t TIMER2TRIG;                        /**< Trigger register for TIMER2 inputs, offset: 0x70 */
       uint8_t RESERVED_3[268];
  __IO uint32_t FREQMEAS_REF;                      /**< Selection for frequency measurement reference clock, offset: 0x180 */
  __IO uint32_t FREQMEAS_TAR;                      /**< Selection for frequency measurement reference clock, offset: 0x184 */
       uint8_t RESERVED_4[216];
  __IO uint32_t CMP0_TRIG;                         /**< CMP0 input connections, offset: 0x260 */
       uint8_t RESERVED_5[28];
  __IO uint32_t ADC0_TRIG[INPUTMUX_ADC0_TRIGM_COUNT]; /**< ADC Trigger input connections, array offset: 0x280, array step: 0x4 */
       uint8_t RESERVED_6[208];
  __IO uint32_t QDC0_TRIG;                         /**< QDC0 Trigger Input Connections, offset: 0x360 */
  __IO uint32_t QDC0_HOME;                         /**< QDC0 Trigger Input Connections, offset: 0x364 */
  __IO uint32_t QDC0_INDEX;                        /**< QDC0 Trigger Input Connections, offset: 0x368 */
  __IO uint32_t QDC0_PHASEB;                       /**< QDC0 Trigger Input Connections, offset: 0x36C */
  __IO uint32_t QDC0_PHASEA;                       /**< QDC0 Trigger Input Connections, offset: 0x370 */
  __IO uint32_t QDC0_ICAP1;                        /**< QDC0 Trigger Input Connections, offset: 0x374 */
  __IO uint32_t QDC0_ICAP2;                        /**< QDC0 Trigger Input Connections, offset: 0x378 */
  __IO uint32_t QDC0_ICAP3;                        /**< QDC0 Trigger Input Connections, offset: 0x37C */
       uint8_t RESERVED_7[32];
  __IO uint32_t FLEXPWM0_SM0_EXTA;                 /**< PWM0 input trigger connections, offset: 0x3A0 */
  __IO uint32_t FLEXPWM0_SM0_EXTSYNC;              /**< PWM0 input trigger connections, offset: 0x3A4 */
  __IO uint32_t FLEXPWM0_SM1_EXTA;                 /**< PWM0 input trigger connections, offset: 0x3A8 */
  __IO uint32_t FLEXPWM0_SM1_EXTSYNC;              /**< PWM0 input trigger connections, offset: 0x3AC */
  __IO uint32_t FLEXPWM0_SM2_EXTA;                 /**< PWM0 input trigger connections, offset: 0x3B0 */
  __IO uint32_t FLEXPWM0_SM2_EXTSYNC;              /**< PWM0 input trigger connections, offset: 0x3B4 */
       uint8_t RESERVED_8[8];
  __IO uint32_t FLEXPWM0_FAULT0;                   /**< PWM0 input trigger connections, offset: 0x3C0 */
  __IO uint32_t FLEXPWM0_FAULT1;                   /**< PWM0 input trigger connections, offset: 0x3C4 */
  __IO uint32_t FLEXPWM0_FAULT2;                   /**< PWM0 input trigger connections, offset: 0x3C8 */
  __IO uint32_t FLEXPWM0_FAULT3;                   /**< PWM0 input trigger connections, offset: 0x3CC */
  __IO uint32_t FLEXPWM0_EXTFORCE;                 /**< PWM0 input trigger connections, offset: 0x3D0 */
       uint8_t RESERVED_9[76];
  __IO uint32_t PWM0_EXT_CLK;                      /**< PWM0 external clock trigger, offset: 0x420 */
       uint8_t RESERVED_10[28];
  __IO uint32_t AOI0_MUX0;                         /**< AOI0 trigger input connections 0, offset: 0x440 */
       uint8_t RESERVED_11[28];
  __IO uint32_t AOI0_MUX1;                         /**< AOI0 trigger input connections 0, offset: 0x460 */
       uint8_t RESERVED_12[92];
  __IO uint32_t EXT_TRIG0;                         /**< EXT trigger connections 0, offset: 0x4C0 */
       uint8_t RESERVED_13[28];
  __IO uint32_t CMP1_TRIG;                         /**< CMP1 input connections, offset: 0x4E0 */
       uint8_t RESERVED_14[188];
  __IO uint32_t LPI2C0_TRIG;                       /**< LPI2C0 trigger input connections, offset: 0x5A0 */
       uint8_t RESERVED_15[60];
  __IO uint32_t LPSPI0_TRIG;                       /**< LPSPI0 trigger input connections, offset: 0x5E0 */
       uint8_t RESERVED_16[28];
  __IO uint32_t LPSPI1_TRIG;                       /**< LPSPI1 trigger input connections, offset: 0x600 */
       uint8_t RESERVED_17[28];
  __IO uint32_t LPUART0r;                          /**< LPUART0 trigger input connections, offset: 0x620, 'r' suffix has been added to avoid a clash with peripheral base pointer macro 'LPUART0' */
       uint8_t RESERVED_18[28];
  __IO uint32_t LPUART1r;                          /**< LPUART1 trigger input connections, offset: 0x640, 'r' suffix has been added to avoid a clash with peripheral base pointer macro 'LPUART1' */
       uint8_t RESERVED_19[28];
  __IO uint32_t LPUART2r;                          /**< LPUART2 trigger input connections, offset: 0x660, 'r' suffix has been added to avoid a clash with peripheral base pointer macro 'LPUART2' */
} INPUTMUX_Type;

/* ----------------------------------------------------------------------------
   -- INPUTMUX Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup INPUTMUX_Register_Masks INPUTMUX Register Masks
 * @{
 */

/*! @name CTIMER0CAP - Capture select register for CTIMER inputs */
/*! @{ */

#define INPUTMUX_CTIMER0CAP_INP_MASK             (0x7FU)
#define INPUTMUX_CTIMER0CAP_INP_SHIFT            (0U)
/*! INP - Input number for CTIMER0
 *  0b0000000..Reserved
 *  0b0000001..CT_INP0 input is selected
 *  0b0000010..CT_INP1 input is selected
 *  0b0000011..CT_INP2 input is selected
 *  0b0000100..CT_INP3 input is selected
 *  0b0000101..Reserved
 *  0b0000110..CT_INP5 input is selected
 *  0b0000111..CT_INP6 input is selected
 *  0b0001000..CT_INP7 input is selected
 *  0b0001001..CT_INP8 input is selected
 *  0b0001010..CT_INP9 input is selected
 *  0b0001011..CT_INP10 input is selected
 *  0b0001100..CT_INP11 input is selected
 *  0b0001101..CT_INP12 input is selected
 *  0b0001110..CT_INP13 input is selected
 *  0b0001111..CT_INP14 input is selected
 *  0b0010000..CT_INP15 input is selected
 *  0b0010001..CT_INP16 input is selected
 *  0b0010010..CT_INP17 input is selected
 *  0b0010011..CT_INP18 input is selected
 *  0b0010100..CT_INP19 input is selected
 *  0b0010101..Reserved
 *  0b0010110..AOI0_OUT0 input is selected
 *  0b0010111..AOI0_OUT1 input is selected
 *  0b0011000..AOI0_OUT2 input is selected
 *  0b0011001..AOI0_OUT3 input is selected
 *  0b0011010..ADC0_tcomp[0]
 *  0b0011011..ADC0_tcomp[1]
 *  0b0011100..ADC0_tcomp[2]
 *  0b0011101..ADC0_tcomp[3] input is selected
 *  0b0011110..CMP0_OUT is selected
 *  0b0011111..CMP1_OUT is selected
 *  0b0100000..Reserved
 *  0b0100001..CTimer1_MAT1 input is selected
 *  0b0100010..CTimer1_MAT2 input is selected
 *  0b0100011..CTimer1_MAT3 input is selected
 *  0b0100100..CTimer2_MAT1 input is selected
 *  0b0100101..CTimer2_MAT2 input is selected
 *  0b0100110..CTimer2_MAT3 input is selected
 *  0b0100111..QDC0_CMP_FLAG0 is selected
 *  0b0101000..QDC0_CMP_FLAG1 input is selected
 *  0b0101001..QDC0_CMP_FLAG2 input is selected
 *  0b0101010..QDC0_CMP_FLAG3 input is selected
 *  0b0101011..QDC0_POS_MATCH0 input is selected
 *  0b0101100..PWM0_SM0_MUX_TRIG0 input is selected
 *  0b0101101..PWM0_SM1_MUX_TRIG0 input is selected
 *  0b0101110..PWM0_SM2_MUX_TRIG0 input is selected
 *  0b0101111..Reserved
 *  0b0110000..LPI2C0 Master End of Packet input is selected
 *  0b0110001..LPI2C0 Slave End of Packet input is selected
 *  0b0110010..Reserved
 *  0b0110011..Reserved
 *  0b0110100..LPSPI0 End of Frame input is selected
 *  0b0110101..LPSPI0 Received Data Word input is selected
 *  0b0110110..LPSPI1 End of Frame input is selected
 *  0b0110111..LPSPI1 Received Data Word input is selected
 *  0b0111000..LPUART0 Received Data Word input is selected
 *  0b0111001..LPUART0 Transmitted Data Word input is selected
 *  0b0111010..LPUART0 Receive Line Idle input is selected
 *  0b0111011..LPUART1 Received Data Word input is selected
 *  0b0111100..LPUART1 Transmitted Data Word input is selected
 *  0b0111101..LPUART1 Receive Line Idle input is selected
 *  0b0111110..LPUART2 Received Data Word input is selected
 *  0b0111111..LPUART2 Transmitted Data Word input is selected
 *  0b1000000..LPUART2 Receive Line Idle input is selected
 *  *..
 */
#define INPUTMUX_CTIMER0CAP_INP(x)               (((uint32_t)(((uint32_t)(x)) << INPUTMUX_CTIMER0CAP_INP_SHIFT)) & INPUTMUX_CTIMER0CAP_INP_MASK)
/*! @} */

/* The count of INPUTMUX_CTIMER0CAP */
#define INPUTMUX_CTIMER0CAP_COUNT                (4U)

/*! @name TIMER0TRIG - Trigger register for TIMER0 */
/*! @{ */

#define INPUTMUX_TIMER0TRIG_INP_MASK             (0x7FU)
#define INPUTMUX_TIMER0TRIG_INP_SHIFT            (0U)
/*! INP - Input number for CTIMER0
 *  0b0000000..Reserved
 *  0b0000001..CT_INP0 input is selected
 *  0b0000010..CT_INP1 input is selected
 *  0b0000011..CT_INP2 input is selected
 *  0b0000100..CT_INP3 input is selected
 *  0b0000101..Reserved
 *  0b0000110..CT_INP5 input is selected
 *  0b0000111..CT_INP6 input is selected
 *  0b0001000..CT_INP7 input is selected
 *  0b0001001..CT_INP8 input is selected
 *  0b0001010..CT_INP9 input is selected
 *  0b0001011..CT_INP10 input is selected
 *  0b0001100..CT_INP11 input is selected
 *  0b0001101..CT_INP12 input is selected
 *  0b0001110..CT_INP13 input is selected
 *  0b0001111..CT_INP14 input is selected
 *  0b0010000..CT_INP15 input is selected
 *  0b0010001..CT_INP16 input is selected
 *  0b0010010..CT_INP17 input is selected
 *  0b0010011..CT_INP18 input is selected
 *  0b0010100..CT_INP19 input is selected
 *  0b0010101..Reserved
 *  0b0010110..AOI0_OUT0 input is selected
 *  0b0010111..AOI0_OUT1 input is selected
 *  0b0011000..AOI0_OUT2 input is selected
 *  0b0011001..AOI0_OUT3 input is selected
 *  0b0011010..ADC0_tcomp[0]
 *  0b0011011..ADC0_tcomp[1]
 *  0b0011100..ADC0_tcomp[2]
 *  0b0011101..ADC0_tcomp[3] input is selected
 *  0b0011110..CMP0_OUT is selected
 *  0b0011111..CMP1_OUT is selected
 *  0b0100000..Reserved
 *  0b0100001..CTimer1_MAT1 input is selected
 *  0b0100010..CTimer1_MAT2 input is selected
 *  0b0100011..CTimer1_MAT3 input is selected
 *  0b0100100..CTimer2_MAT1 input is selected
 *  0b0100101..CTimer2_MAT2 input is selected
 *  0b0100110..CTimer2_MAT3 input is selected
 *  0b0100111..QDC0_CMP_FLAG0 is selected
 *  0b0101000..QDC0_CMP_FLAG1 input is selected
 *  0b0101001..QDC0_CMP_FLAG2 input is selected
 *  0b0101010..QDC0_CMP_FLAG3 input is selected
 *  0b0101011..QDC0_POS_MATCH0 input is selected
 *  0b0101100..PWM0_SM0_OUT_TRIG0 input is selected
 *  0b0101101..PWM0_SM1_OUT_TRIG0 input is selected
 *  0b0101110..PWM0_SM2_OUT_TRIG0 input is selected
 *  0b0101111..Reserved
 *  0b0110000..LPI2C0 Master End of Packet input is selected
 *  0b0110001..LPI2C0 Slave End of Packet input is selected
 *  0b0110010..Reserved
 *  0b0110011..Reserved
 *  0b0110100..LPSPI0 End of Frame input is selected
 *  0b0110101..LPSPI0 Received Data Word input is selected
 *  0b0110110..LPSPI1 End of Frame input is selected
 *  0b0110111..LPSPI1 Received Data Word input is selected
 *  0b0111000..LPUART0 Received Data Word input is selected
 *  0b0111001..LPUART0 Transmitted Data Word input is selected
 *  0b0111010..LPUART0 Receive Line Idle input is selected
 *  0b0111011..LPUART1 Received Data Word input is selected
 *  0b0111100..LPUART1 Transmitted Data Word input is selected
 *  0b0111101..LPUART1 Receive Line Idle input is selected
 *  0b0111110..LPUART2 Received Data Word input is selected
 *  0b0111111..LPUART2 Transmitted Data Word input is selected
 *  0b1000000..LPUART2 Receive Line Idle input is selected
 *  *..
 */
#define INPUTMUX_TIMER0TRIG_INP(x)               (((uint32_t)(((uint32_t)(x)) << INPUTMUX_TIMER0TRIG_INP_SHIFT)) & INPUTMUX_TIMER0TRIG_INP_MASK)
/*! @} */

/*! @name CTIMER1CAP - Capture select register for CTIMER inputs */
/*! @{ */

#define INPUTMUX_CTIMER1CAP_INP_MASK             (0x7FU)
#define INPUTMUX_CTIMER1CAP_INP_SHIFT            (0U)
/*! INP - Input number for CTIMER0
 *  0b0000000..Reserved
 *  0b0000001..CT_INP0 input is selected
 *  0b0000010..CT_INP1 input is selected
 *  0b0000011..CT_INP2 input is selected
 *  0b0000100..CT_INP3 input is selected
 *  0b0000101..Reserved
 *  0b0000110..CT_INP5 input is selected
 *  0b0000111..CT_INP6 input is selected
 *  0b0001000..CT_INP7 input is selected
 *  0b0001001..CT_INP8 input is selected
 *  0b0001010..CT_INP9 input is selected
 *  0b0001011..CT_INP10 input is selected
 *  0b0001100..CT_INP11 input is selected
 *  0b0001101..CT_INP12 input is selected
 *  0b0001110..CT_INP13 input is selected
 *  0b0001111..CT_INP14 input is selected
 *  0b0010000..CT_INP15 input is selected
 *  0b0010001..CT_INP16 input is selected
 *  0b0010010..CT_INP17 input is selected
 *  0b0010011..CT_INP18 input is selected
 *  0b0010100..CT_INP19 input is selected
 *  0b0010101..Reserved
 *  0b0010110..AOI0_OUT0 input is selected
 *  0b0010111..AOI0_OUT1 input is selected
 *  0b0011000..AOI0_OUT2 input is selected
 *  0b0011001..AOI0_OUT3 input is selected
 *  0b0011010..ADC0_tcomp[0]
 *  0b0011011..ADC0_tcomp[1]
 *  0b0011100..ADC0_tcomp[2]
 *  0b0011101..ADC0_tcomp[3] input is selected
 *  0b0011110..CMP0_OUT is selected
 *  0b0011111..CMP1_OUT is selected
 *  0b0100000..Reserved
 *  0b0100001..CTimer0_MAT1 input is selected
 *  0b0100010..CTimer0_MAT2 input is selected
 *  0b0100011..CTimer0_MAT3 input is selected
 *  0b0100100..CTimer2_MAT1 input is selected
 *  0b0100101..CTimer2_MAT2 input is selected
 *  0b0100110..CTimer2_MAT3 input is selected
 *  0b0100111..QDC0_CMP_FLAG0 is selected
 *  0b0101000..QDC0_CMP_FLAG1 input is selected
 *  0b0101001..QDC0_CMP_FLAG2 input is selected
 *  0b0101010..QDC0_CMP_FLAG3 input is selected
 *  0b0101011..QDC0_POS_MATCH0 input is selected
 *  0b0101100..PWM0_SM0_OUT_TRIG0 input is selected
 *  0b0101101..PWM0_SM1_OUT_TRIG0 input is selected
 *  0b0101110..PWM0_SM2_OUT_TRIG0 input is selected
 *  0b0101111..Reserved
 *  0b0110000..LPI2C0 Master End of Packet input is selected
 *  0b0110001..LPI2C0 Slave End of Packet input is selected
 *  0b0110010..Reserved
 *  0b0110011..Reserved
 *  0b0110100..LPSPI0 End of Frame input is selected
 *  0b0110101..LPSPI0 Received Data Word input is selected
 *  0b0110110..LPSPI1 End of Frame input is selected
 *  0b0110111..LPSPI1 Received Data Word input is selected
 *  0b0111000..LPUART0 Received Data Word input is selected
 *  0b0111001..LPUART0 Transmitted Data Word input is selected
 *  0b0111010..LPUART0 Receive Line Idle input is selected
 *  0b0111011..LPUART1 Received Data Word input is selected
 *  0b0111100..LPUART1 Transmitted Data Word input is selected
 *  0b0111101..LPUART1 Receive Line Idle input is selected
 *  0b0111110..LPUART2 Received Data Word input is selected
 *  0b0111111..LPUART2 Transmitted Data Word input is selected
 *  0b1000000..LPUART2 Receive Line Idle input is selected
 *  *..
 */
#define INPUTMUX_CTIMER1CAP_INP(x)               (((uint32_t)(((uint32_t)(x)) << INPUTMUX_CTIMER1CAP_INP_SHIFT)) & INPUTMUX_CTIMER1CAP_INP_MASK)
/*! @} */

/* The count of INPUTMUX_CTIMER1CAP */
#define INPUTMUX_CTIMER1CAP_COUNT                (4U)

/*! @name TIMER1TRIG - Trigger register for TIMER1 */
/*! @{ */

#define INPUTMUX_TIMER1TRIG_INP_MASK             (0x7FU)
#define INPUTMUX_TIMER1TRIG_INP_SHIFT            (0U)
/*! INP - Input number for CTIMER0
 *  0b0000000..Reserved
 *  0b0000001..CT_INP0 input is selected
 *  0b0000010..CT_INP1 input is selected
 *  0b0000011..CT_INP2 input is selected
 *  0b0000100..CT_INP3 input is selected
 *  0b0000101..Reserved
 *  0b0000110..CT_INP5 input is selected
 *  0b0000111..CT_INP6 input is selected
 *  0b0001000..CT_INP7 input is selected
 *  0b0001001..CT_INP8 input is selected
 *  0b0001010..CT_INP9 input is selected
 *  0b0001011..CT_INP10 input is selected
 *  0b0001100..CT_INP11 input is selected
 *  0b0001101..CT_INP12 input is selected
 *  0b0001110..CT_INP13 input is selected
 *  0b0001111..CT_INP14 input is selected
 *  0b0010000..CT_INP15 input is selected
 *  0b0010001..CT_INP16 input is selected
 *  0b0010010..CT_INP17 input is selected
 *  0b0010011..CT_INP18 input is selected
 *  0b0010100..CT_INP19 input is selected
 *  0b0010101..Reserved
 *  0b0010110..AOI0_OUT0 input is selected
 *  0b0010111..AOI0_OUT1 input is selected
 *  0b0011000..AOI0_OUT2 input is selected
 *  0b0011001..AOI0_OUT3 input is selected
 *  0b0011010..ADC0_tcomp[0]
 *  0b0011011..ADC0_tcomp[1]
 *  0b0011100..ADC0_tcomp[2]
 *  0b0011101..ADC0_tcomp[3] input is selected
 *  0b0011110..CMP0_OUT is selected
 *  0b0011111..CMP1_OUT is selected
 *  0b0100000..Reserved
 *  0b0100001..CTimer0_MAT1 input is selected
 *  0b0100010..CTimer0_MAT2 input is selected
 *  0b0100011..CTimer0_MAT3 input is selected
 *  0b0100100..CTimer2_MAT1 input is selected
 *  0b0100101..CTimer2_MAT2 input is selected
 *  0b0100110..CTimer2_MAT3 input is selected
 *  0b0100111..QDC0_CMP_FLAG0 is selected
 *  0b0101000..QDC0_CMP_FLAG1 input is selected
 *  0b0101001..QDC0_CMP_FLAG2 input is selected
 *  0b0101010..QDC0_CMP_FLAG3 input is selected
 *  0b0101011..QDC0_POS_MATCH0 input is selected
 *  0b0101100..PWM0_SM0_OUT_TRIG0 input is selected
 *  0b0101101..PWM0_SM1_OUT_TRIG0 input is selected
 *  0b0101110..PWM0_SM2_OUT_TRIG0 input is selected
 *  0b0101111..Reserved
 *  0b0110000..LPI2C0 Master End of Packet input is selected
 *  0b0110001..LPI2C0 Slave End of Packet input is selected
 *  0b0110010..Reserved
 *  0b0110011..Reserved
 *  0b0110100..LPSPI0 End of Frame input is selected
 *  0b0110101..LPSPI0 Received Data Word input is selected
 *  0b0110110..LPSPI1 End of Frame input is selected
 *  0b0110111..LPSPI1 Received Data Word input is selected
 *  0b0111000..LPUART0 Received Data Word input is selected
 *  0b0111001..LPUART0 Transmitted Data Word input is selected
 *  0b0111010..LPUART0 Receive Line Idle input is selected
 *  0b0111011..LPUART1 Received Data Word input is selected
 *  0b0111100..LPUART1 Transmitted Data Word input is selected
 *  0b0111101..LPUART1 Receive Line Idle input is selected
 *  0b0111110..LPUART2 Received Data Word input is selected
 *  0b0111111..LPUART2 Transmitted Data Word input is selected
 *  0b1000000..LPUART2 Receive Line Idle input is selected
 *  *..
 */
#define INPUTMUX_TIMER1TRIG_INP(x)               (((uint32_t)(((uint32_t)(x)) << INPUTMUX_TIMER1TRIG_INP_SHIFT)) & INPUTMUX_TIMER1TRIG_INP_MASK)
/*! @} */

/*! @name CTIMER2CAP - Capture select register for CTIMER inputs */
/*! @{ */

#define INPUTMUX_CTIMER2CAP_INP_MASK             (0x7FU)
#define INPUTMUX_CTIMER2CAP_INP_SHIFT            (0U)
/*! INP - Input number for CTIMER0
 *  0b0000000..Reserved
 *  0b0000001..CT_INP0 input is selected
 *  0b0000010..CT_INP1 input is selected
 *  0b0000011..CT_INP2 input is selected
 *  0b0000100..CT_INP3 input is selected
 *  0b0000101..Reserved
 *  0b0000110..CT_INP5 input is selected
 *  0b0000111..CT_INP6 input is selected
 *  0b0001000..CT_INP7 input is selected
 *  0b0001001..CT_INP8 input is selected
 *  0b0001010..CT_INP9 input is selected
 *  0b0001011..CT_INP10 input is selected
 *  0b0001100..CT_INP11 input is selected
 *  0b0001101..CT_INP12 input is selected
 *  0b0001110..CT_INP13 input is selected
 *  0b0001111..CT_INP14 input is selected
 *  0b0010000..CT_INP15 input is selected
 *  0b0010001..CT_INP16 input is selected
 *  0b0010010..CT_INP17 input is selected
 *  0b0010011..CT_INP18 input is selected
 *  0b0010100..CT_INP19 input is selected
 *  0b0010101..Reserved
 *  0b0010110..AOI0_OUT0 input is selected
 *  0b0010111..AOI0_OUT1 input is selected
 *  0b0011000..AOI0_OUT2 input is selected
 *  0b0011001..AOI0_OUT3 input is selected
 *  0b0011010..ADC0_tcomp[0]
 *  0b0011011..ADC0_tcomp[1]
 *  0b0011100..ADC0_tcomp[2]
 *  0b0011101..ADC0_tcomp[3] input is selected
 *  0b0011110..CMP0_OUT is selected
 *  0b0011111..CMP1_OUT is selected
 *  0b0100000..Reserved
 *  0b0100001..CTimer0_MAT1 input is selected
 *  0b0100010..CTimer0_MAT2 input is selected
 *  0b0100011..CTimer0_MAT3 input is selected
 *  0b0100100..CTimer1_MAT1 input is selected
 *  0b0100101..CTimer1_MAT2 input is selected
 *  0b0100110..CTimer1_MAT3 input is selected
 *  0b0100111..QDC0_CMP_FLAG0 is selected
 *  0b0101000..QDC0_CMP_FLAG1 input is selected
 *  0b0101001..QDC0_CMP_FLAG2 input is selected
 *  0b0101010..QDC0_CMP_FLAG3 input is selected
 *  0b0101011..QDC0_POS_MATCH0 input is selected
 *  0b0101100..PWM0_SM0_OUT_TRIG0 input is selected
 *  0b0101101..PWM0_SM1_OUT_TRIG0 input is selected
 *  0b0101110..PWM0_SM2_OUT_TRIG0 input is selected
 *  0b0101111..Reserved
 *  0b0110000..LPI2C0 Master End of Packet input is selected
 *  0b0110001..LPI2C0 Slave End of Packet input is selected
 *  0b0110010..Reserved
 *  0b0110011..Reserved
 *  0b0110100..LPSPI0 End of Frame input is selected
 *  0b0110101..LPSPI0 Received Data Word input is selected
 *  0b0110110..LPSPI1 End of Frame input is selected
 *  0b0110111..LPSPI1 Received Data Word input is selected
 *  0b0111000..LPUART0 Received Data Word input is selected
 *  0b0111001..LPUART0 Transmitted Data Word input is selected
 *  0b0111010..LPUART0 Receive Line Idle input is selected
 *  0b0111011..LPUART1 Received Data Word input is selected
 *  0b0111100..LPUART1 Transmitted Data Word input is selected
 *  0b0111101..LPUART1 Receive Line Idle input is selected
 *  0b0111110..LPUART2 Received Data Word input is selected
 *  0b0111111..LPUART2 Transmitted Data Word input is selected
 *  0b1000000..LPUART2 Receive Line Idle input is selected
 *  *..
 */
#define INPUTMUX_CTIMER2CAP_INP(x)               (((uint32_t)(((uint32_t)(x)) << INPUTMUX_CTIMER2CAP_INP_SHIFT)) & INPUTMUX_CTIMER2CAP_INP_MASK)
/*! @} */

/* The count of INPUTMUX_CTIMER2CAP */
#define INPUTMUX_CTIMER2CAP_COUNT                (4U)

/*! @name TIMER2TRIG - Trigger register for TIMER2 inputs */
/*! @{ */

#define INPUTMUX_TIMER2TRIG_INP_MASK             (0x7FU)
#define INPUTMUX_TIMER2TRIG_INP_SHIFT            (0U)
/*! INP - Input number for CTIMER0
 *  0b0000000..Reserved
 *  0b0000001..CT_INP0 input is selected
 *  0b0000010..CT_INP1 input is selected
 *  0b0000011..CT_INP2 input is selected
 *  0b0000100..CT_INP3 input is selected
 *  0b0000101..Reserved
 *  0b0000110..CT_INP5 input is selected
 *  0b0000111..CT_INP6 input is selected
 *  0b0001000..CT_INP7 input is selected
 *  0b0001001..CT_INP8 input is selected
 *  0b0001010..CT_INP9 input is selected
 *  0b0001011..CT_INP10 input is selected
 *  0b0001100..CT_INP11 input is selected
 *  0b0001101..CT_INP12 input is selected
 *  0b0001110..CT_INP13 input is selected
 *  0b0001111..CT_INP14 input is selected
 *  0b0010000..CT_INP15 input is selected
 *  0b0010001..CT_INP16 input is selected
 *  0b0010010..CT_INP17 input is selected
 *  0b0010011..CT_INP18 input is selected
 *  0b0010100..CT_INP19 input is selected
 *  0b0010101..Reserved
 *  0b0010110..AOI0_OUT0 input is selected
 *  0b0010111..AOI0_OUT1 input is selected
 *  0b0011000..AOI0_OUT2 input is selected
 *  0b0011001..AOI0_OUT3 input is selected
 *  0b0011010..ADC0_tcomp[0]
 *  0b0011011..ADC0_tcomp[1]
 *  0b0011100..ADC0_tcomp[2]
 *  0b0011101..ADC0_tcomp[3] input is selected
 *  0b0011110..CMP0_OUT is selected
 *  0b0011111..CMP1_OUT is selected
 *  0b0100000..Reserved
 *  0b0100001..CTimer0_MAT1 input is selected
 *  0b0100010..CTimer0_MAT2 input is selected
 *  0b0100011..CTimer0_MAT3 input is selected
 *  0b0100100..CTimer1_MAT1 input is selected
 *  0b0100101..CTimer1_MAT2 input is selected
 *  0b0100110..CTimer1_MAT3 input is selected
 *  0b0100111..QDC0_CMP_FLAG0 is selected
 *  0b0101000..QDC0_CMP_FLAG1 input is selected
 *  0b0101001..QDC0_CMP_FLAG2 input is selected
 *  0b0101010..QDC0_CMP_FLAG3 input is selected
 *  0b0101011..QDC0_POS_MATCH0 input is selected
 *  0b0101100..PWM0_SM0_OUT_TRIG0 input is selected
 *  0b0101101..PWM0_SM1_OUT_TRIG0 input is selected
 *  0b0101110..PWM0_SM2_OUT_TRIG0 input is selected
 *  0b0101111..Reserved
 *  0b0110000..LPI2C0 Master End of Packet input is selected
 *  0b0110001..LPI2C0 Slave End of Packet input is selected
 *  0b0110010..Reserved
 *  0b0110011..Reserved
 *  0b0110100..LPSPI0 End of Frame input is selected
 *  0b0110101..LPSPI0 Received Data Word input is selected
 *  0b0110110..LPSPI1 End of Frame input is selected
 *  0b0110111..LPSPI1 Received Data Word input is selected
 *  0b0111000..LPUART0 Received Data Word input is selected
 *  0b0111001..LPUART0 Transmitted Data Word input is selected
 *  0b0111010..LPUART0 Receive Line Idle input is selected
 *  0b0111011..LPUART1 Received Data Word input is selected
 *  0b0111100..LPUART1 Transmitted Data Word input is selected
 *  0b0111101..LPUART1 Receive Line Idle input is selected
 *  0b0111110..LPUART2 Received Data Word input is selected
 *  0b0111111..LPUART2 Transmitted Data Word input is selected
 *  0b1000000..LPUART2 Receive Line Idle input is selected
 *  *..
 */
#define INPUTMUX_TIMER2TRIG_INP(x)               (((uint32_t)(((uint32_t)(x)) << INPUTMUX_TIMER2TRIG_INP_SHIFT)) & INPUTMUX_TIMER2TRIG_INP_MASK)
/*! @} */

/*! @name FREQMEAS_REF - Selection for frequency measurement reference clock */
/*! @{ */

#define INPUTMUX_FREQMEAS_REF_INP_MASK           (0x1FU)
#define INPUTMUX_FREQMEAS_REF_INP_SHIFT          (0U)
/*! INP - Clock source number (binary value) for frequency measure function target clock.
 *  0b00000..Reserved
 *  0b00001..Reserved
 *  0b00010..FRO_OSC_12M input is selected
 *  0b00011..fro_hf_div input is selected
 *  0b00100..xtal32k[2] input is selected
 *  0b00101..clk_16k[0] input is selected
 *  0b00110..SLOW_CLK input is selected
 *  0b00111..FREQME_CLK_IN0 input is selected
 *  0b01000..FREQME_CLK_IN1 input is selected input is selected
 *  0b01001..AOI0_OUT0 input is selected
 *  0b01010..AOI0_OUT1
 *  0b01011..PWM0_SM0_MUX_TRIG0
 *  0b01100..PWM0_SM0_MUX_TRIG1
 *  0b01101..PWM0_SM1_MUX_TRIG0
 *  0b01110..PWM0_SM1_MUX_TRIG1
 *  0b01111..PWM0_SM2_MUX_TRIG0
 *  0b10000..PWM0_SM2_MUX_TRIG1
 *  *..
 */
#define INPUTMUX_FREQMEAS_REF_INP(x)             (((uint32_t)(((uint32_t)(x)) << INPUTMUX_FREQMEAS_REF_INP_SHIFT)) & INPUTMUX_FREQMEAS_REF_INP_MASK)
/*! @} */

/*! @name FREQMEAS_TAR - Selection for frequency measurement reference clock */
/*! @{ */

#define INPUTMUX_FREQMEAS_TAR_INP_MASK           (0x1FU)
#define INPUTMUX_FREQMEAS_TAR_INP_SHIFT          (0U)
/*! INP - Clock source number (binary value) for frequency measure function target clock.
 *  0b00000..Reserved
 *  0b00001..Reserved
 *  0b00010..FRO_OSC_12M input is selected
 *  0b00011..fro_hf_div input is selected
 *  0b00100..xtal32k[2] input is selected
 *  0b00101..clk_16k[0] input is selected
 *  0b00110..SLOW_CLK input is selected
 *  0b00111..FREQME_CLK_IN0 input is selected
 *  0b01000..FREQME_CLK_IN1 input is selected input is selected
 *  0b01001..AOI0_OUT0 input is selected
 *  0b01010..AOI0_OUT1
 *  0b01011..PWM0_SM0_MUX_TRIG0
 *  0b01100..PWM0_SM0_MUX_TRIG1
 *  0b01101..PWM0_SM1_MUX_TRIG0
 *  0b01110..PWM0_SM1_MUX_TRIG1
 *  0b01111..PWM0_SM2_MUX_TRIG0
 *  0b10000..PWM0_SM2_MUX_TRIG1
 *  *..
 */
#define INPUTMUX_FREQMEAS_TAR_INP(x)             (((uint32_t)(((uint32_t)(x)) << INPUTMUX_FREQMEAS_TAR_INP_SHIFT)) & INPUTMUX_FREQMEAS_TAR_INP_MASK)
/*! @} */

/*! @name CMP0_TRIG - CMP0 input connections */
/*! @{ */

#define INPUTMUX_CMP0_TRIG_TRIGIN_MASK           (0x3FU)
#define INPUTMUX_CMP0_TRIG_TRIGIN_SHIFT          (0U)
/*! TRIGIN - CMP0 input trigger
 *  0b000000..Reserved
 *  0b000001..ARM_TXEV input is selected
 *  0b000010..AOI0_OUT0 input is selected
 *  0b000011..AOI0_OUT1 input is selected
 *  0b000100..AOI0_OUT2 input is selected
 *  0b000101..AOI0_OUT3 input is selected
 *  0b000110..CMP1_OUT input is selected
 *  0b000111..Reserved
 *  0b001000..CTimer0_MAT0 input is selected
 *  0b001001..CTimer0_MAT2 input is selected
 *  0b001010..CTimer1_MAT0
 *  0b001011..CTimer1_MAT2 input is selected
 *  0b001100..CTimer2_MAT0 input is selected
 *  0b001101..CTimer2_MAT2 input is selected
 *  0b001110..LPTMR0 input is selected
 *  0b001111..Reserved
 *  0b010000..QDC0_POS_MATCH0
 *  0b010001..PWM0_SM0_MUX_TRIG0 input is selected
 *  0b010010..PWM0_SM0_MUX_TRIG1 input is selected
 *  0b010011..PWM0_SM1_MUX_TRIG0 input is selected
 *  0b010100..PWM0_SM1_MUX_TRIG1 input is selected
 *  0b010101..PWM0_SM2_MUX_TRIG0 input is selected
 *  0b010110..PWM0_SM2_MUX_TRIG1 input is selected
 *  0b010111..Reserved
 *  0b011000..Reserved
 *  0b011001..GPIO0 Pin Event Trig 0 input is selected
 *  0b011010..GPIO1 Pin Event Trig 0 input is selected
 *  0b011011..Reserved
 *  0b011100..Reserved
 *  0b011101..Reserved
 *  0b011110..WUU input is selected
 *  *..
 */
#define INPUTMUX_CMP0_TRIG_TRIGIN(x)             (((uint32_t)(((uint32_t)(x)) << INPUTMUX_CMP0_TRIG_TRIGIN_SHIFT)) & INPUTMUX_CMP0_TRIG_TRIGIN_MASK)
/*! @} */

/*! @name ADC0_TRIG - ADC Trigger input connections */
/*! @{ */

#define INPUTMUX_ADC0_TRIG_TRIGIN_MASK           (0x3FU)
#define INPUTMUX_ADC0_TRIG_TRIGIN_SHIFT          (0U)
/*! TRIGIN - ADC0 trigger inputs
 *  0b000000..Reserved
 *  0b000001..ARM_TXEV input is selected
 *  0b000010..AOI0_OUT0 input is selected
 *  0b000011..AOI0_OUT1 input is selected
 *  0b000100..AOI0_OUT2 input is selected
 *  0b000101..AOI0_OUT3 input is selected
 *  0b000110..CMP0_OUT input is selected
 *  0b000111..CMP1_OUT input is selected
 *  0b001000..Reserved
 *  0b001001..CTimer0_MAT0 input is selected
 *  0b001010..CTimer0_MAT1 input is selected
 *  0b001011..CTimer1_MAT0 input is selected
 *  0b001100..CTimer1_MAT1 input is selected
 *  0b001101..CTimer2_MAT0 input is selected
 *  0b001110..CTimer2_MAT1 input is selected
 *  0b001111..LPTMR0 input is selected
 *  0b010000..Reserved
 *  0b010001..QDC0_POS_MATCH0 input is selected
 *  0b010010..PWM0_SM0_MUX_TRIG0 input is selected
 *  0b010011..PWM0_SM0_MUX_TRIG1 input is selected
 *  0b010100..PWM0_SM1_MUX_TRIG0 input is selected
 *  0b010101..PWM0_SM1_MUX_TRIG1 input is selected
 *  0b010110..PWM0_SM2_MUX_TRIG0 input is selected
 *  0b010111..PWM0_SM2_MUX_TRIG1 input is selected
 *  0b011000..Reserved
 *  0b011001..Reserved
 *  0b011010..GPIO0 Pin Event Trig 0 input is selected
 *  0b011011..GPIO1 Pin Event Trig 0 input is selected
 *  0b011100..Reserved
 *  0b011101..Reserved
 *  0b011110..Reserved
 *  0b011111..WUU
 *  *..
 */
#define INPUTMUX_ADC0_TRIG_TRIGIN(x)             (((uint32_t)(((uint32_t)(x)) << INPUTMUX_ADC0_TRIG_TRIGIN_SHIFT)) & INPUTMUX_ADC0_TRIG_TRIGIN_MASK)
/*! @} */

/* The count of INPUTMUX_ADC0_TRIG */
#define INPUTMUX_ADC0_TRIG_COUNT                 (4U)

/*! @name QDC0_TRIG - QDC0 Trigger Input Connections */
/*! @{ */

#define INPUTMUX_QDC0_TRIG_INP_MASK              (0x3FU)
#define INPUTMUX_QDC0_TRIG_INP_SHIFT             (0U)
/*! INP - QDC0 input connections
 *  0b000000..Reserved
 *  0b000001..ARM_TXEV input is selected
 *  0b000010..AOI0_OUT0 input is selected
 *  0b000011..AOI0_OUT1 input is selected
 *  0b000100..AOI0_OUT2 input is selected
 *  0b000101..AOI0_OUT3 input is selected
 *  0b000110..CMP0_OUT input is selected
 *  0b000111..CMP1_OUT input is selected
 *  0b001000..Reserved
 *  0b001001..CTimer0_MAT2 input is selected
 *  0b001010..CTimer0_MAT3
 *  0b001011..CTimer1_MAT2 input is selected
 *  0b001100..CTimer1_MAT3 input is selected
 *  0b001101..CTimer2_MAT2 input is selected
 *  0b001110..CTimer2_MAT3 input is selected
 *  0b001111..QDC0_POS_MATCH0 input is selected
 *  0b010000..PWM0_SM0_MUX_TRIG0 input is selected
 *  0b010001..PWM0_SM0_MUX_TRIG1 input is selected
 *  0b010010..PWM0_SM1_MUX_TRIG0 input is selected
 *  0b010011..PWM0_SM1_MUX_TRIG1 input is selected
 *  0b010100..PWM0_SM2_MUX_TRIG0 input is selected
 *  0b010101..PWM0_SM2_MUX_TRIG1 input is selected
 *  0b010110..Reserved
 *  0b010111..Reserved
 *  0b011000..TRIG_IN0 input is selected
 *  0b011001..TRIG_IN1 input is selected
 *  0b011010..TRIG_IN2 input is selected
 *  0b011011..TRIG_IN3 input is selected
 *  0b011100..TRIG_IN4 input is selected
 *  0b011101..TRIG_IN5 input is selected
 *  0b011110..TRIG_IN6 input is selected
 *  0b011111..TRIG_IN7 input is selected
 *  0b100000..TRIG_IN8 input is selected
 *  0b100001..TRIG_IN9 input is selected
 *  0b100010..TRIG_IN10 input is selected
 *  0b100011..TRIG_IN11 input is selected
 *  0b100100..GPIO0 Pin Event Trig 0 is selected
 *  0b100101..GPIO1 Pin Event Trig 0 input is selected
 *  *..
 */
#define INPUTMUX_QDC0_TRIG_INP(x)                (((uint32_t)(((uint32_t)(x)) << INPUTMUX_QDC0_TRIG_INP_SHIFT)) & INPUTMUX_QDC0_TRIG_INP_MASK)
/*! @} */

/*! @name QDC0_HOME - QDC0 Trigger Input Connections */
/*! @{ */

#define INPUTMUX_QDC0_HOME_INP_MASK              (0x3FU)
#define INPUTMUX_QDC0_HOME_INP_SHIFT             (0U)
/*! INP - QDC0 input connections
 *  0b000000..Reserved
 *  0b000001..ARM_TXEV input is selected
 *  0b000010..AOI0_OUT0 input is selected
 *  0b000011..AOI0_OUT1 input is selected
 *  0b000100..AOI0_OUT2 input is selected
 *  0b000101..AOI0_OUT3 input is selected
 *  0b000110..CMP0_OUT input is selected
 *  0b000111..CMP1_OUT input is selected
 *  0b001000..Reserved
 *  0b001001..CTimer0_MAT2 input is selected
 *  0b001010..CTimer0_MAT3
 *  0b001011..CTimer1_MAT2 input is selected
 *  0b001100..CTimer1_MAT3 input is selected
 *  0b001101..CTimer2_MAT2 input is selected
 *  0b001110..CTimer2_MAT3 input is selected
 *  0b001111..QDC0_POS_MATCH0 input is selected
 *  0b010000..PWM0_SM0_MUX_TRIG0 input is selected
 *  0b010001..PWM0_SM0_MUX_TRIG1 input is selected
 *  0b010010..PWM0_SM1_MUX_TRIG0 input is selected
 *  0b010011..PWM0_SM1_MUX_TRIG1 input is selected
 *  0b010100..PWM0_SM2_MUX_TRIG0 input is selected
 *  0b010101..PWM0_SM2_MUX_TRIG1 input is selected
 *  0b010110..Reserved
 *  0b010111..Reserved
 *  0b011000..TRIG_IN0 input is selected
 *  0b011001..TRIG_IN1 input is selected
 *  0b011010..TRIG_IN2 input is selected
 *  0b011011..TRIG_IN3 input is selected
 *  0b011100..TRIG_IN4 input is selected
 *  0b011101..TRIG_IN5 input is selected
 *  0b011110..TRIG_IN6 input is selected
 *  0b011111..TRIG_IN7 input is selected
 *  0b100000..TRIG_IN8 input is selected
 *  0b100001..TRIG_IN9 input is selected
 *  0b100010..TRIG_IN10 input is selected
 *  0b100011..TRIG_IN11 input is selected
 *  0b100100..GPIO0 Pin Event Trig 0 is selected
 *  0b100101..GPIO1 Pin Event Trig 0 input is selected
 *  *..
 */
#define INPUTMUX_QDC0_HOME_INP(x)                (((uint32_t)(((uint32_t)(x)) << INPUTMUX_QDC0_HOME_INP_SHIFT)) & INPUTMUX_QDC0_HOME_INP_MASK)
/*! @} */

/*! @name QDC0_INDEX - QDC0 Trigger Input Connections */
/*! @{ */

#define INPUTMUX_QDC0_INDEX_INP_MASK             (0x3FU)
#define INPUTMUX_QDC0_INDEX_INP_SHIFT            (0U)
/*! INP - QDC0 input connections
 *  0b000000..Reserved
 *  0b000001..ARM_TXEV input is selected
 *  0b000010..AOI0_OUT0 input is selected
 *  0b000011..AOI0_OUT1 input is selected
 *  0b000100..AOI0_OUT2 input is selected
 *  0b000101..AOI0_OUT3 input is selected
 *  0b000110..CMP0_OUT input is selected
 *  0b000111..CMP1_OUT input is selected
 *  0b001000..Reserved
 *  0b001001..CTimer0_MAT2 input is selected
 *  0b001010..CTimer0_MAT3
 *  0b001011..CTimer1_MAT2 input is selected
 *  0b001100..CTimer1_MAT3 input is selected
 *  0b001101..CTimer2_MAT2 input is selected
 *  0b001110..CTimer2_MAT3 input is selected
 *  0b001111..QDC0_POS_MATCH0 input is selected
 *  0b010000..PWM0_SM0_MUX_TRIG0 input is selected
 *  0b010001..PWM0_SM0_MUX_TRIG1 input is selected
 *  0b010010..PWM0_SM1_MUX_TRIG0 input is selected
 *  0b010011..PWM0_SM1_MUX_TRIG1 input is selected
 *  0b010100..PWM0_SM2_MUX_TRIG0 input is selected
 *  0b010101..PWM0_SM2_MUX_TRIG1 input is selected
 *  0b010110..Reserved
 *  0b010111..Reserved
 *  0b011000..TRIG_IN0 input is selected
 *  0b011001..TRIG_IN1 input is selected
 *  0b011010..TRIG_IN2 input is selected
 *  0b011011..TRIG_IN3 input is selected
 *  0b011100..TRIG_IN4 input is selected
 *  0b011101..TRIG_IN5 input is selected
 *  0b011110..TRIG_IN6 input is selected
 *  0b011111..TRIG_IN7 input is selected
 *  0b100000..TRIG_IN8 input is selected
 *  0b100001..TRIG_IN9 input is selected
 *  0b100010..TRIG_IN10 input is selected
 *  0b100011..TRIG_IN11 input is selected
 *  0b100100..GPIO0 Pin Event Trig 0 is selected
 *  0b100101..GPIO1 Pin Event Trig 0 input is selected
 *  *..
 */
#define INPUTMUX_QDC0_INDEX_INP(x)               (((uint32_t)(((uint32_t)(x)) << INPUTMUX_QDC0_INDEX_INP_SHIFT)) & INPUTMUX_QDC0_INDEX_INP_MASK)
/*! @} */

/*! @name QDC0_PHASEB - QDC0 Trigger Input Connections */
/*! @{ */

#define INPUTMUX_QDC0_PHASEB_INP_MASK            (0x3FU)
#define INPUTMUX_QDC0_PHASEB_INP_SHIFT           (0U)
/*! INP - QDC0 input connections
 *  0b000000..Reserved
 *  0b000001..ARM_TXEV input is selected
 *  0b000010..AOI0_OUT0 input is selected
 *  0b000011..AOI0_OUT1 input is selected
 *  0b000100..AOI0_OUT2 input is selected
 *  0b000101..AOI0_OUT3 input is selected
 *  0b000110..CMP0_OUT input is selected
 *  0b000111..CMP1_OUT input is selected
 *  0b001000..Reserved
 *  0b001001..CTimer0_MAT2 input is selected
 *  0b001010..CTimer0_MAT3
 *  0b001011..CTimer1_MAT2 input is selected
 *  0b001100..CTimer1_MAT3 input is selected
 *  0b001101..CTimer2_MAT2 input is selected
 *  0b001110..CTimer2_MAT3 input is selected
 *  0b001111..QDC0_POS_MATCH0 input is selected
 *  0b010000..PWM0_SM0_MUX_TRIG0 input is selected
 *  0b010001..PWM0_SM0_MUX_TRIG1 input is selected
 *  0b010010..PWM0_SM1_MUX_TRIG0 input is selected
 *  0b010011..PWM0_SM1_MUX_TRIG1 input is selected
 *  0b010100..PWM0_SM2_MUX_TRIG0 input is selected
 *  0b010101..PWM0_SM2_MUX_TRIG1 input is selected
 *  0b010110..Reserved
 *  0b010111..Reserved
 *  0b011000..TRIG_IN0 input is selected
 *  0b011001..TRIG_IN1 input is selected
 *  0b011010..TRIG_IN2 input is selected
 *  0b011011..TRIG_IN3 input is selected
 *  0b011100..TRIG_IN4 input is selected
 *  0b011101..TRIG_IN5 input is selected
 *  0b011110..TRIG_IN6 input is selected
 *  0b011111..TRIG_IN7 input is selected
 *  0b100000..TRIG_IN8 input is selected
 *  0b100001..TRIG_IN9 input is selected
 *  0b100010..TRIG_IN10 input is selected
 *  0b100011..TRIG_IN11 input is selected
 *  0b100100..GPIO0 Pin Event Trig 0 is selected
 *  0b100101..GPIO1 Pin Event Trig 0 input is selected
 *  *..
 */
#define INPUTMUX_QDC0_PHASEB_INP(x)              (((uint32_t)(((uint32_t)(x)) << INPUTMUX_QDC0_PHASEB_INP_SHIFT)) & INPUTMUX_QDC0_PHASEB_INP_MASK)
/*! @} */

/*! @name QDC0_PHASEA - QDC0 Trigger Input Connections */
/*! @{ */

#define INPUTMUX_QDC0_PHASEA_INP_MASK            (0x3FU)
#define INPUTMUX_QDC0_PHASEA_INP_SHIFT           (0U)
/*! INP - QDC0 input connections
 *  0b000000..Reserved
 *  0b000001..ARM_TXEV input is selected
 *  0b000010..AOI0_OUT0 input is selected
 *  0b000011..AOI0_OUT1 input is selected
 *  0b000100..AOI0_OUT2 input is selected
 *  0b000101..AOI0_OUT3 input is selected
 *  0b000110..CMP0_OUT input is selected
 *  0b000111..CMP1_OUT input is selected
 *  0b001000..Reserved
 *  0b001001..CTimer0_MAT2 input is selected
 *  0b001010..CTimer0_MAT3
 *  0b001011..CTimer1_MAT2 input is selected
 *  0b001100..CTimer1_MAT3 input is selected
 *  0b001101..CTimer2_MAT2 input is selected
 *  0b001110..CTimer2_MAT3 input is selected
 *  0b001111..QDC0_POS_MATCH0 input is selected
 *  0b010000..PWM0_SM0_MUX_TRIG0 input is selected
 *  0b010001..PWM0_SM0_MUX_TRIG1 input is selected
 *  0b010010..PWM0_SM1_MUX_TRIG0 input is selected
 *  0b010011..PWM0_SM1_MUX_TRIG1 input is selected
 *  0b010100..PWM0_SM2_MUX_TRIG0 input is selected
 *  0b010101..PWM0_SM2_MUX_TRIG1 input is selected
 *  0b010110..Reserved
 *  0b010111..Reserved
 *  0b011000..TRIG_IN0 input is selected
 *  0b011001..TRIG_IN1 input is selected
 *  0b011010..TRIG_IN2 input is selected
 *  0b011011..TRIG_IN3 input is selected
 *  0b011100..TRIG_IN4 input is selected
 *  0b011101..TRIG_IN5 input is selected
 *  0b011110..TRIG_IN6 input is selected
 *  0b011111..TRIG_IN7 input is selected
 *  0b100000..TRIG_IN8 input is selected
 *  0b100001..TRIG_IN9 input is selected
 *  0b100010..TRIG_IN10 input is selected
 *  0b100011..TRIG_IN11 input is selected
 *  0b100100..GPIO0 Pin Event Trig 0 is selected
 *  0b100101..GPIO1 Pin Event Trig 0 input is selected
 *  *..
 */
#define INPUTMUX_QDC0_PHASEA_INP(x)              (((uint32_t)(((uint32_t)(x)) << INPUTMUX_QDC0_PHASEA_INP_SHIFT)) & INPUTMUX_QDC0_PHASEA_INP_MASK)
/*! @} */

/*! @name QDC0_ICAP1 - QDC0 Trigger Input Connections */
/*! @{ */

#define INPUTMUX_QDC0_ICAP1_INP_MASK             (0x3FU)
#define INPUTMUX_QDC0_ICAP1_INP_SHIFT            (0U)
/*! INP - QDC0 input connections
 *  0b000000..Reserved
 *  0b000001..ARM_TXEV input is selected
 *  0b000010..AOI0_OUT0 input is selected
 *  0b000011..AOI0_OUT1 input is selected
 *  0b000100..AOI0_OUT2 input is selected
 *  0b000101..AOI0_OUT3 input is selected
 *  0b000110..CMP0_OUT input is selected
 *  0b000111..CMP1_OUT input is selected
 *  0b001000..Reserved
 *  0b001001..CTimer0_MAT2 input is selected
 *  0b001010..CTimer0_MAT3
 *  0b001011..CTimer1_MAT2 input is selected
 *  0b001100..CTimer1_MAT3 input is selected
 *  0b001101..CTimer2_MAT2 input is selected
 *  0b001110..CTimer2_MAT3 input is selected
 *  0b001111..QDC0_POS_MATCH0 input is selected
 *  0b010000..PWM0_SM0_MUX_TRIG0 input is selected
 *  0b010001..PWM0_SM0_MUX_TRIG1 input is selected
 *  0b010010..PWM0_SM1_MUX_TRIG0 input is selected
 *  0b010011..PWM0_SM1_MUX_TRIG1 input is selected
 *  0b010100..PWM0_SM2_MUX_TRIG0 input is selected
 *  0b010101..PWM0_SM2_MUX_TRIG1 input is selected
 *  0b010110..Reserved
 *  0b010111..Reserved
 *  0b011000..TRIG_IN0 input is selected
 *  0b011001..TRIG_IN1 input is selected
 *  0b011010..TRIG_IN2 input is selected
 *  0b011011..TRIG_IN3 input is selected
 *  0b011100..TRIG_IN4 input is selected
 *  0b011101..TRIG_IN5 input is selected
 *  0b011110..TRIG_IN6 input is selected
 *  0b011111..TRIG_IN7 input is selected
 *  0b100000..TRIG_IN8 input is selected
 *  0b100001..TRIG_IN9 input is selected
 *  0b100010..TRIG_IN10 input is selected
 *  0b100011..TRIG_IN11 input is selected
 *  0b100100..GPIO0 Pin Event Trig 0 is selected
 *  0b100101..GPIO1 Pin Event Trig 0 input is selected
 *  *..
 */
#define INPUTMUX_QDC0_ICAP1_INP(x)               (((uint32_t)(((uint32_t)(x)) << INPUTMUX_QDC0_ICAP1_INP_SHIFT)) & INPUTMUX_QDC0_ICAP1_INP_MASK)
/*! @} */

/*! @name QDC0_ICAP2 - QDC0 Trigger Input Connections */
/*! @{ */

#define INPUTMUX_QDC0_ICAP2_INP_MASK             (0x3FU)
#define INPUTMUX_QDC0_ICAP2_INP_SHIFT            (0U)
/*! INP - QDC0 input connections
 *  0b000000..Reserved
 *  0b000001..ARM_TXEV input is selected
 *  0b000010..AOI0_OUT0 input is selected
 *  0b000011..AOI0_OUT1 input is selected
 *  0b000100..AOI0_OUT2 input is selected
 *  0b000101..AOI0_OUT3 input is selected
 *  0b000110..CMP0_OUT input is selected
 *  0b000111..CMP1_OUT input is selected
 *  0b001000..Reserved
 *  0b001001..CTimer0_MAT2 input is selected
 *  0b001010..CTimer0_MAT3
 *  0b001011..CTimer1_MAT2 input is selected
 *  0b001100..CTimer1_MAT3 input is selected
 *  0b001101..CTimer2_MAT2 input is selected
 *  0b001110..CTimer2_MAT3 input is selected
 *  0b001111..QDC0_POS_MATCH0 input is selected
 *  0b010000..PWM0_SM0_MUX_TRIG0 input is selected
 *  0b010001..PWM0_SM0_MUX_TRIG1 input is selected
 *  0b010010..PWM0_SM1_MUX_TRIG0 input is selected
 *  0b010011..PWM0_SM1_MUX_TRIG1 input is selected
 *  0b010100..PWM0_SM2_MUX_TRIG0 input is selected
 *  0b010101..PWM0_SM2_MUX_TRIG1 input is selected
 *  0b010110..Reserved
 *  0b010111..Reserved
 *  0b011000..TRIG_IN0 input is selected
 *  0b011001..TRIG_IN1 input is selected
 *  0b011010..TRIG_IN2 input is selected
 *  0b011011..TRIG_IN3 input is selected
 *  0b011100..TRIG_IN4 input is selected
 *  0b011101..TRIG_IN5 input is selected
 *  0b011110..TRIG_IN6 input is selected
 *  0b011111..TRIG_IN7 input is selected
 *  0b100000..TRIG_IN8 input is selected
 *  0b100001..TRIG_IN9 input is selected
 *  0b100010..TRIG_IN10 input is selected
 *  0b100011..TRIG_IN11 input is selected
 *  0b100100..GPIO0 Pin Event Trig 0 is selected
 *  0b100101..GPIO1 Pin Event Trig 0 input is selected
 *  *..
 */
#define INPUTMUX_QDC0_ICAP2_INP(x)               (((uint32_t)(((uint32_t)(x)) << INPUTMUX_QDC0_ICAP2_INP_SHIFT)) & INPUTMUX_QDC0_ICAP2_INP_MASK)
/*! @} */

/*! @name QDC0_ICAP3 - QDC0 Trigger Input Connections */
/*! @{ */

#define INPUTMUX_QDC0_ICAP3_INP_MASK             (0x3FU)
#define INPUTMUX_QDC0_ICAP3_INP_SHIFT            (0U)
/*! INP - QDC0 input connections
 *  0b000000..Reserved
 *  0b000001..ARM_TXEV input is selected
 *  0b000010..AOI0_OUT0 input is selected
 *  0b000011..AOI0_OUT1 input is selected
 *  0b000100..AOI0_OUT2 input is selected
 *  0b000101..AOI0_OUT3 input is selected
 *  0b000110..CMP0_OUT input is selected
 *  0b000111..CMP1_OUT input is selected
 *  0b001000..Reserved
 *  0b001001..CTimer0_MAT2 input is selected
 *  0b001010..CTimer0_MAT3
 *  0b001011..CTimer1_MAT2 input is selected
 *  0b001100..CTimer1_MAT3 input is selected
 *  0b001101..CTimer2_MAT2 input is selected
 *  0b001110..CTimer2_MAT3 input is selected
 *  0b001111..QDC0_POS_MATCH0 input is selected
 *  0b010000..PWM0_SM0_MUX_TRIG0 input is selected
 *  0b010001..PWM0_SM0_MUX_TRIG1 input is selected
 *  0b010010..PWM0_SM1_MUX_TRIG0 input is selected
 *  0b010011..PWM0_SM1_MUX_TRIG1 input is selected
 *  0b010100..PWM0_SM2_MUX_TRIG0 input is selected
 *  0b010101..PWM0_SM2_MUX_TRIG1 input is selected
 *  0b010110..Reserved
 *  0b010111..Reserved
 *  0b011000..TRIG_IN0 input is selected
 *  0b011001..TRIG_IN1 input is selected
 *  0b011010..TRIG_IN2 input is selected
 *  0b011011..TRIG_IN3 input is selected
 *  0b011100..TRIG_IN4 input is selected
 *  0b011101..TRIG_IN5 input is selected
 *  0b011110..TRIG_IN6 input is selected
 *  0b011111..TRIG_IN7 input is selected
 *  0b100000..TRIG_IN8 input is selected
 *  0b100001..TRIG_IN9 input is selected
 *  0b100010..TRIG_IN10 input is selected
 *  0b100011..TRIG_IN11 input is selected
 *  0b100100..GPIO0 Pin Event Trig 0 is selected
 *  0b100101..GPIO1 Pin Event Trig 0 input is selected
 *  *..
 */
#define INPUTMUX_QDC0_ICAP3_INP(x)               (((uint32_t)(((uint32_t)(x)) << INPUTMUX_QDC0_ICAP3_INP_SHIFT)) & INPUTMUX_QDC0_ICAP3_INP_MASK)
/*! @} */

/*! @name FLEXPWM0_SM0_EXTA - PWM0 input trigger connections */
/*! @{ */

#define INPUTMUX_FLEXPWM0_SM0_EXTA_TRIGIN_MASK   (0x3FU)
#define INPUTMUX_FLEXPWM0_SM0_EXTA_TRIGIN_SHIFT  (0U)
/*! TRIGIN - Trigger input connections for PWM0
 *  0b000000..Reserved
 *  0b000001..ARM_TXEV input is selected
 *  0b000010..AOI0_OUT0 input is selected
 *  0b000011..AOI0_OUT1 input is selected
 *  0b000100..AOI0_OUT2 input is selected
 *  0b000101..AOI0_OUT3 input is selected
 *  0b000110..CMP0_OUT input is selected
 *  0b000111..CMP1_OUT input is selected
 *  0b001000..Reserved
 *  0b001001..CTimer0_MAT2 input is selected
 *  0b001010..CTimer0_MAT3
 *  0b001011..CTimer1_MAT2 input is selected
 *  0b001100..CTimer1_MAT3 input is selected
 *  0b001101..CTimer2_MAT2 input is selected
 *  0b001110..CTimer2_MAT3 input is selected
 *  0b001111..QDC0_CMP_FLAG0 input is selected
 *  0b010000..QDC0_CMP_FLAG1 input is selected
 *  0b010001..QDC0_CMP_FLAG2 input is selected
 *  0b010010..QDC0_CMP_FLAG3 input is selected
 *  0b010011..QDC0_POS_MATCH0 input is selected
 *  0b010100..TRIG_IN0 input is selected
 *  0b010101..TRIG_IN1 input is selected
 *  0b010110..TRIG_IN2
 *  0b010111..TRIG_IN3
 *  0b011000..TRIG_IN4 input is selected
 *  0b011001..TRIG_IN5 input is selected
 *  0b011010..TRIG_IN6 input is selected
 *  0b011011..TRIG_IN7 input is selected
 *  0b011100..TRIG_IN8 input is selected
 *  0b011101..TRIG_IN9 input is selected
 *  0b011110..TRIG_IN10 input is selected
 *  0b011111..TRIG_IN11 input is selected
 *  0b100000..GPIO0 Pin Event Trig 0 input is selected
 *  0b100001..GPIO1 Pin Event Trig 0 input is selected
 *  *..
 */
#define INPUTMUX_FLEXPWM0_SM0_EXTA_TRIGIN(x)     (((uint32_t)(((uint32_t)(x)) << INPUTMUX_FLEXPWM0_SM0_EXTA_TRIGIN_SHIFT)) & INPUTMUX_FLEXPWM0_SM0_EXTA_TRIGIN_MASK)
/*! @} */

/*! @name FLEXPWM0_SM0_EXTSYNC - PWM0 input trigger connections */
/*! @{ */

#define INPUTMUX_FLEXPWM0_SM0_EXTSYNC_TRIGIN_MASK (0x3FU)
#define INPUTMUX_FLEXPWM0_SM0_EXTSYNC_TRIGIN_SHIFT (0U)
/*! TRIGIN - Trigger input connections for PWM0
 *  0b000000..Reserved
 *  0b000001..ARM_TXEV input is selected
 *  0b000010..AOI0_OUT0 input is selected
 *  0b000011..AOI0_OUT1 input is selected
 *  0b000100..AOI0_OUT2 input is selected
 *  0b000101..AOI0_OUT3 input is selected
 *  0b000110..CMP0_OUT input is selected
 *  0b000111..CMP1_OUT input is selected
 *  0b001000..Reserved
 *  0b001001..CTimer0_MAT2 input is selected
 *  0b001010..CTimer0_MAT3
 *  0b001011..CTimer1_MAT2 input is selected
 *  0b001100..CTimer1_MAT3 input is selected
 *  0b001101..CTimer2_MAT2 input is selected
 *  0b001110..CTimer2_MAT3 input is selected
 *  0b001111..QDC0_CMP_FLAG0 input is selected
 *  0b010000..QDC0_CMP_FLAG1 input is selected
 *  0b010001..QDC0_CMP_FLAG2 input is selected
 *  0b010010..QDC0_CMP_FLAG3 input is selected
 *  0b010011..QDC0_POS_MATCH0 input is selected
 *  0b010100..TRIG_IN0 input is selected
 *  0b010101..TRIG_IN1 input is selected
 *  0b010110..TRIG_IN2
 *  0b010111..TRIG_IN3
 *  0b011000..TRIG_IN4 input is selected
 *  0b011001..TRIG_IN5 input is selected
 *  0b011010..TRIG_IN6 input is selected
 *  0b011011..TRIG_IN7 input is selected
 *  0b011100..TRIG_IN8 input is selected
 *  0b011101..TRIG_IN9 input is selected
 *  0b011110..TRIG_IN10 input is selected
 *  0b011111..TRIG_IN11 input is selected
 *  0b100000..GPIO0 Pin Event Trig 0 input is selected
 *  0b100001..GPIO1 Pin Event Trig 0 input is selected
 *  *..
 */
#define INPUTMUX_FLEXPWM0_SM0_EXTSYNC_TRIGIN(x)  (((uint32_t)(((uint32_t)(x)) << INPUTMUX_FLEXPWM0_SM0_EXTSYNC_TRIGIN_SHIFT)) & INPUTMUX_FLEXPWM0_SM0_EXTSYNC_TRIGIN_MASK)
/*! @} */

/*! @name FLEXPWM0_SM1_EXTA - PWM0 input trigger connections */
/*! @{ */

#define INPUTMUX_FLEXPWM0_SM1_EXTA_TRIGIN_MASK   (0x3FU)
#define INPUTMUX_FLEXPWM0_SM1_EXTA_TRIGIN_SHIFT  (0U)
/*! TRIGIN - Trigger input connections for PWM0
 *  0b000000..Reserved
 *  0b000001..ARM_TXEV input is selected
 *  0b000010..AOI0_OUT0 input is selected
 *  0b000011..AOI0_OUT1 input is selected
 *  0b000100..AOI0_OUT2 input is selected
 *  0b000101..AOI0_OUT3 input is selected
 *  0b000110..CMP0_OUT input is selected
 *  0b000111..CMP1_OUT input is selected
 *  0b001000..Reserved
 *  0b001001..CTimer0_MAT2 input is selected
 *  0b001010..CTimer0_MAT3
 *  0b001011..CTimer1_MAT2 input is selected
 *  0b001100..CTimer1_MAT3 input is selected
 *  0b001101..CTimer2_MAT2 input is selected
 *  0b001110..CTimer2_MAT3 input is selected
 *  0b001111..QDC0_CMP_FLAG0 input is selected
 *  0b010000..QDC0_CMP_FLAG1 input is selected
 *  0b010001..QDC0_CMP_FLAG2 input is selected
 *  0b010010..QDC0_CMP_FLAG3 input is selected
 *  0b010011..QDC0_POS_MATCH0 input is selected
 *  0b010100..TRIG_IN0 input is selected
 *  0b010101..TRIG_IN1 input is selected
 *  0b010110..TRIG_IN2
 *  0b010111..TRIG_IN3
 *  0b011000..TRIG_IN4 input is selected
 *  0b011001..TRIG_IN5 input is selected
 *  0b011010..TRIG_IN6 input is selected
 *  0b011011..TRIG_IN7 input is selected
 *  0b011100..TRIG_IN8 input is selected
 *  0b011101..TRIG_IN9 input is selected
 *  0b011110..TRIG_IN10 input is selected
 *  0b011111..TRIG_IN11 input is selected
 *  0b100000..GPIO0 Pin Event Trig 0 input is selected
 *  0b100001..GPIO1 Pin Event Trig 0 input is selected
 *  *..
 */
#define INPUTMUX_FLEXPWM0_SM1_EXTA_TRIGIN(x)     (((uint32_t)(((uint32_t)(x)) << INPUTMUX_FLEXPWM0_SM1_EXTA_TRIGIN_SHIFT)) & INPUTMUX_FLEXPWM0_SM1_EXTA_TRIGIN_MASK)
/*! @} */

/*! @name FLEXPWM0_SM1_EXTSYNC - PWM0 input trigger connections */
/*! @{ */

#define INPUTMUX_FLEXPWM0_SM1_EXTSYNC_TRIGIN_MASK (0x3FU)
#define INPUTMUX_FLEXPWM0_SM1_EXTSYNC_TRIGIN_SHIFT (0U)
/*! TRIGIN - Trigger input connections for PWM0
 *  0b000000..Reserved
 *  0b000001..ARM_TXEV input is selected
 *  0b000010..AOI0_OUT0 input is selected
 *  0b000011..AOI0_OUT1 input is selected
 *  0b000100..AOI0_OUT2 input is selected
 *  0b000101..AOI0_OUT3 input is selected
 *  0b000110..CMP0_OUT input is selected
 *  0b000111..CMP1_OUT input is selected
 *  0b001000..Reserved
 *  0b001001..CTimer0_MAT2 input is selected
 *  0b001010..CTimer0_MAT3
 *  0b001011..CTimer1_MAT2 input is selected
 *  0b001100..CTimer1_MAT3 input is selected
 *  0b001101..CTimer2_MAT2 input is selected
 *  0b001110..CTimer2_MAT3 input is selected
 *  0b001111..QDC0_CMP_FLAG0 input is selected
 *  0b010000..QDC0_CMP_FLAG1 input is selected
 *  0b010001..QDC0_CMP_FLAG2 input is selected
 *  0b010010..QDC0_CMP_FLAG3 input is selected
 *  0b010011..QDC0_POS_MATCH0 input is selected
 *  0b010100..TRIG_IN0 input is selected
 *  0b010101..TRIG_IN1 input is selected
 *  0b010110..TRIG_IN2
 *  0b010111..TRIG_IN3
 *  0b011000..TRIG_IN4 input is selected
 *  0b011001..TRIG_IN5 input is selected
 *  0b011010..TRIG_IN6 input is selected
 *  0b011011..TRIG_IN7 input is selected
 *  0b011100..TRIG_IN8 input is selected
 *  0b011101..TRIG_IN9 input is selected
 *  0b011110..TRIG_IN10 input is selected
 *  0b011111..TRIG_IN11 input is selected
 *  0b100000..GPIO0 Pin Event Trig 0 input is selected
 *  0b100001..GPIO1 Pin Event Trig 0 input is selected
 *  *..
 */
#define INPUTMUX_FLEXPWM0_SM1_EXTSYNC_TRIGIN(x)  (((uint32_t)(((uint32_t)(x)) << INPUTMUX_FLEXPWM0_SM1_EXTSYNC_TRIGIN_SHIFT)) & INPUTMUX_FLEXPWM0_SM1_EXTSYNC_TRIGIN_MASK)
/*! @} */

/*! @name FLEXPWM0_SM2_EXTA - PWM0 input trigger connections */
/*! @{ */

#define INPUTMUX_FLEXPWM0_SM2_EXTA_TRIGIN_MASK   (0x3FU)
#define INPUTMUX_FLEXPWM0_SM2_EXTA_TRIGIN_SHIFT  (0U)
/*! TRIGIN - Trigger input connections for PWM0
 *  0b000000..Reserved
 *  0b000001..ARM_TXEV input is selected
 *  0b000010..AOI0_OUT0 input is selected
 *  0b000011..AOI0_OUT1 input is selected
 *  0b000100..AOI0_OUT2 input is selected
 *  0b000101..AOI0_OUT3 input is selected
 *  0b000110..CMP0_OUT input is selected
 *  0b000111..CMP1_OUT input is selected
 *  0b001000..Reserved
 *  0b001001..CTimer0_MAT2 input is selected
 *  0b001010..CTimer0_MAT3
 *  0b001011..CTimer1_MAT2 input is selected
 *  0b001100..CTimer1_MAT3 input is selected
 *  0b001101..CTimer2_MAT2 input is selected
 *  0b001110..CTimer2_MAT3 input is selected
 *  0b001111..QDC0_CMP_FLAG0 input is selected
 *  0b010000..QDC0_CMP_FLAG1 input is selected
 *  0b010001..QDC0_CMP_FLAG2 input is selected
 *  0b010010..QDC0_CMP_FLAG3 input is selected
 *  0b010011..QDC0_POS_MATCH0 input is selected
 *  0b010100..TRIG_IN0 input is selected
 *  0b010101..TRIG_IN1 input is selected
 *  0b010110..TRIG_IN2
 *  0b010111..TRIG_IN3
 *  0b011000..TRIG_IN4 input is selected
 *  0b011001..TRIG_IN5 input is selected
 *  0b011010..TRIG_IN6 input is selected
 *  0b011011..TRIG_IN7 input is selected
 *  0b011100..TRIG_IN8 input is selected
 *  0b011101..TRIG_IN9 input is selected
 *  0b011110..TRIG_IN10 input is selected
 *  0b011111..TRIG_IN11 input is selected
 *  0b100000..GPIO0 Pin Event Trig 0 input is selected
 *  0b100001..GPIO1 Pin Event Trig 0 input is selected
 *  *..
 */
#define INPUTMUX_FLEXPWM0_SM2_EXTA_TRIGIN(x)     (((uint32_t)(((uint32_t)(x)) << INPUTMUX_FLEXPWM0_SM2_EXTA_TRIGIN_SHIFT)) & INPUTMUX_FLEXPWM0_SM2_EXTA_TRIGIN_MASK)
/*! @} */

/*! @name FLEXPWM0_SM2_EXTSYNC - PWM0 input trigger connections */
/*! @{ */

#define INPUTMUX_FLEXPWM0_SM2_EXTSYNC_TRIGIN_MASK (0x3FU)
#define INPUTMUX_FLEXPWM0_SM2_EXTSYNC_TRIGIN_SHIFT (0U)
/*! TRIGIN - Trigger input connections for PWM0
 *  0b000000..Reserved
 *  0b000001..ARM_TXEV input is selected
 *  0b000010..AOI0_OUT0 input is selected
 *  0b000011..AOI0_OUT1 input is selected
 *  0b000100..AOI0_OUT2 input is selected
 *  0b000101..AOI0_OUT3 input is selected
 *  0b000110..CMP0_OUT input is selected
 *  0b000111..CMP1_OUT input is selected
 *  0b001000..Reserved
 *  0b001001..CTimer0_MAT2 input is selected
 *  0b001010..CTimer0_MAT3
 *  0b001011..CTimer1_MAT2 input is selected
 *  0b001100..CTimer1_MAT3 input is selected
 *  0b001101..CTimer2_MAT2 input is selected
 *  0b001110..CTimer2_MAT3 input is selected
 *  0b001111..QDC0_CMP_FLAG0 input is selected
 *  0b010000..QDC0_CMP_FLAG1 input is selected
 *  0b010001..QDC0_CMP_FLAG2 input is selected
 *  0b010010..QDC0_CMP_FLAG3 input is selected
 *  0b010011..QDC0_POS_MATCH0 input is selected
 *  0b010100..TRIG_IN0 input is selected
 *  0b010101..TRIG_IN1 input is selected
 *  0b010110..TRIG_IN2
 *  0b010111..TRIG_IN3
 *  0b011000..TRIG_IN4 input is selected
 *  0b011001..TRIG_IN5 input is selected
 *  0b011010..TRIG_IN6 input is selected
 *  0b011011..TRIG_IN7 input is selected
 *  0b011100..TRIG_IN8 input is selected
 *  0b011101..TRIG_IN9 input is selected
 *  0b011110..TRIG_IN10 input is selected
 *  0b011111..TRIG_IN11 input is selected
 *  0b100000..GPIO0 Pin Event Trig 0 input is selected
 *  0b100001..GPIO1 Pin Event Trig 0 input is selected
 *  *..
 */
#define INPUTMUX_FLEXPWM0_SM2_EXTSYNC_TRIGIN(x)  (((uint32_t)(((uint32_t)(x)) << INPUTMUX_FLEXPWM0_SM2_EXTSYNC_TRIGIN_SHIFT)) & INPUTMUX_FLEXPWM0_SM2_EXTSYNC_TRIGIN_MASK)
/*! @} */

/*! @name FLEXPWM0_FAULT0 - PWM0 input trigger connections */
/*! @{ */

#define INPUTMUX_FLEXPWM0_FAULT0_TRIGIN_MASK     (0x3FU)
#define INPUTMUX_FLEXPWM0_FAULT0_TRIGIN_SHIFT    (0U)
/*! TRIGIN - Trigger input connections for PWM0
 *  0b000000..Reserved
 *  0b000001..ARM_TXEV input is selected
 *  0b000010..AOI0_OUT0 input is selected
 *  0b000011..AOI0_OUT1 input is selected
 *  0b000100..AOI0_OUT2 input is selected
 *  0b000101..AOI0_OUT3 input is selected
 *  0b000110..CMP0_OUT input is selected
 *  0b000111..CMP1_OUT input is selected
 *  0b001000..Reserved
 *  0b001001..CTimer0_MAT2 input is selected
 *  0b001010..CTimer0_MAT3
 *  0b001011..CTimer1_MAT2 input is selected
 *  0b001100..CTimer1_MAT3 input is selected
 *  0b001101..CTimer2_MAT2 input is selected
 *  0b001110..CTimer2_MAT3 input is selected
 *  0b001111..QDC0_CMP_FLAG0 input is selected
 *  0b010000..QDC0_CMP_FLAG1 input is selected
 *  0b010001..QDC0_CMP_FLAG2 input is selected
 *  0b010010..QDC0_CMP_FLAG3 input is selected
 *  0b010011..QDC0_POS_MATCH0 input is selected
 *  0b010100..TRIG_IN0 input is selected
 *  0b010101..TRIG_IN1 input is selected
 *  0b010110..TRIG_IN2
 *  0b010111..TRIG_IN3
 *  0b011000..TRIG_IN4 input is selected
 *  0b011001..TRIG_IN5 input is selected
 *  0b011010..TRIG_IN6 input is selected
 *  0b011011..TRIG_IN7 input is selected
 *  0b011100..TRIG_IN8 input is selected
 *  0b011101..TRIG_IN9 input is selected
 *  0b011110..TRIG_IN10 input is selected
 *  0b011111..TRIG_IN11 input is selected
 *  0b100000..GPIO0 Pin Event Trig 0 input is selected
 *  0b100001..GPIO1 Pin Event Trig 0 input is selected
 *  *..
 */
#define INPUTMUX_FLEXPWM0_FAULT0_TRIGIN(x)       (((uint32_t)(((uint32_t)(x)) << INPUTMUX_FLEXPWM0_FAULT0_TRIGIN_SHIFT)) & INPUTMUX_FLEXPWM0_FAULT0_TRIGIN_MASK)
/*! @} */

/*! @name FLEXPWM0_FAULT1 - PWM0 input trigger connections */
/*! @{ */

#define INPUTMUX_FLEXPWM0_FAULT1_TRIGIN_MASK     (0x3FU)
#define INPUTMUX_FLEXPWM0_FAULT1_TRIGIN_SHIFT    (0U)
/*! TRIGIN - Trigger input connections for PWM0
 *  0b000000..Reserved
 *  0b000001..ARM_TXEV input is selected
 *  0b000010..AOI0_OUT0 input is selected
 *  0b000011..AOI0_OUT1 input is selected
 *  0b000100..AOI0_OUT2 input is selected
 *  0b000101..AOI0_OUT3 input is selected
 *  0b000110..CMP0_OUT input is selected
 *  0b000111..CMP1_OUT input is selected
 *  0b001000..Reserved
 *  0b001001..CTimer0_MAT2 input is selected
 *  0b001010..CTimer0_MAT3
 *  0b001011..CTimer1_MAT2 input is selected
 *  0b001100..CTimer1_MAT3 input is selected
 *  0b001101..CTimer2_MAT2 input is selected
 *  0b001110..CTimer2_MAT3 input is selected
 *  0b001111..QDC0_CMP_FLAG0 input is selected
 *  0b010000..QDC0_CMP_FLAG1 input is selected
 *  0b010001..QDC0_CMP_FLAG2 input is selected
 *  0b010010..QDC0_CMP_FLAG3 input is selected
 *  0b010011..QDC0_POS_MATCH0 input is selected
 *  0b010100..TRIG_IN0 input is selected
 *  0b010101..TRIG_IN1 input is selected
 *  0b010110..TRIG_IN2
 *  0b010111..TRIG_IN3
 *  0b011000..TRIG_IN4 input is selected
 *  0b011001..TRIG_IN5 input is selected
 *  0b011010..TRIG_IN6 input is selected
 *  0b011011..TRIG_IN7 input is selected
 *  0b011100..TRIG_IN8 input is selected
 *  0b011101..TRIG_IN9 input is selected
 *  0b011110..TRIG_IN10 input is selected
 *  0b011111..TRIG_IN11 input is selected
 *  0b100000..GPIO0 Pin Event Trig 0 input is selected
 *  0b100001..GPIO1 Pin Event Trig 0 input is selected
 *  *..
 */
#define INPUTMUX_FLEXPWM0_FAULT1_TRIGIN(x)       (((uint32_t)(((uint32_t)(x)) << INPUTMUX_FLEXPWM0_FAULT1_TRIGIN_SHIFT)) & INPUTMUX_FLEXPWM0_FAULT1_TRIGIN_MASK)
/*! @} */

/*! @name FLEXPWM0_FAULT2 - PWM0 input trigger connections */
/*! @{ */

#define INPUTMUX_FLEXPWM0_FAULT2_TRIGIN_MASK     (0x3FU)
#define INPUTMUX_FLEXPWM0_FAULT2_TRIGIN_SHIFT    (0U)
/*! TRIGIN - Trigger input connections for PWM0
 *  0b000000..Reserved
 *  0b000001..ARM_TXEV input is selected
 *  0b000010..AOI0_OUT0 input is selected
 *  0b000011..AOI0_OUT1 input is selected
 *  0b000100..AOI0_OUT2 input is selected
 *  0b000101..AOI0_OUT3 input is selected
 *  0b000110..CMP0_OUT input is selected
 *  0b000111..CMP1_OUT input is selected
 *  0b001000..Reserved
 *  0b001001..CTimer0_MAT2 input is selected
 *  0b001010..CTimer0_MAT3
 *  0b001011..CTimer1_MAT2 input is selected
 *  0b001100..CTimer1_MAT3 input is selected
 *  0b001101..CTimer2_MAT2 input is selected
 *  0b001110..CTimer2_MAT3 input is selected
 *  0b001111..QDC0_CMP_FLAG0 input is selected
 *  0b010000..QDC0_CMP_FLAG1 input is selected
 *  0b010001..QDC0_CMP_FLAG2 input is selected
 *  0b010010..QDC0_CMP_FLAG3 input is selected
 *  0b010011..QDC0_POS_MATCH0 input is selected
 *  0b010100..TRIG_IN0 input is selected
 *  0b010101..TRIG_IN1 input is selected
 *  0b010110..TRIG_IN2
 *  0b010111..TRIG_IN3
 *  0b011000..TRIG_IN4 input is selected
 *  0b011001..TRIG_IN5 input is selected
 *  0b011010..TRIG_IN6 input is selected
 *  0b011011..TRIG_IN7 input is selected
 *  0b011100..TRIG_IN8 input is selected
 *  0b011101..TRIG_IN9 input is selected
 *  0b011110..TRIG_IN10 input is selected
 *  0b011111..TRIG_IN11 input is selected
 *  0b100000..GPIO0 Pin Event Trig 0 input is selected
 *  0b100001..GPIO1 Pin Event Trig 0 input is selected
 *  *..
 */
#define INPUTMUX_FLEXPWM0_FAULT2_TRIGIN(x)       (((uint32_t)(((uint32_t)(x)) << INPUTMUX_FLEXPWM0_FAULT2_TRIGIN_SHIFT)) & INPUTMUX_FLEXPWM0_FAULT2_TRIGIN_MASK)
/*! @} */

/*! @name FLEXPWM0_FAULT3 - PWM0 input trigger connections */
/*! @{ */

#define INPUTMUX_FLEXPWM0_FAULT3_TRIGIN_MASK     (0x3FU)
#define INPUTMUX_FLEXPWM0_FAULT3_TRIGIN_SHIFT    (0U)
/*! TRIGIN - Trigger input connections for PWM0
 *  0b000000..Reserved
 *  0b000001..ARM_TXEV input is selected
 *  0b000010..AOI0_OUT0 input is selected
 *  0b000011..AOI0_OUT1 input is selected
 *  0b000100..AOI0_OUT2 input is selected
 *  0b000101..AOI0_OUT3 input is selected
 *  0b000110..CMP0_OUT input is selected
 *  0b000111..CMP1_OUT input is selected
 *  0b001000..Reserved
 *  0b001001..CTimer0_MAT2 input is selected
 *  0b001010..CTimer0_MAT3
 *  0b001011..CTimer1_MAT2 input is selected
 *  0b001100..CTimer1_MAT3 input is selected
 *  0b001101..CTimer2_MAT2 input is selected
 *  0b001110..CTimer2_MAT3 input is selected
 *  0b001111..QDC0_CMP_FLAG0 input is selected
 *  0b010000..QDC0_CMP_FLAG1 input is selected
 *  0b010001..QDC0_CMP_FLAG2 input is selected
 *  0b010010..QDC0_CMP_FLAG3 input is selected
 *  0b010011..QDC0_POS_MATCH0 input is selected
 *  0b010100..TRIG_IN0 input is selected
 *  0b010101..TRIG_IN1 input is selected
 *  0b010110..TRIG_IN2
 *  0b010111..TRIG_IN3
 *  0b011000..TRIG_IN4 input is selected
 *  0b011001..TRIG_IN5 input is selected
 *  0b011010..TRIG_IN6 input is selected
 *  0b011011..TRIG_IN7 input is selected
 *  0b011100..TRIG_IN8 input is selected
 *  0b011101..TRIG_IN9 input is selected
 *  0b011110..TRIG_IN10 input is selected
 *  0b011111..TRIG_IN11 input is selected
 *  0b100000..GPIO0 Pin Event Trig 0 input is selected
 *  0b100001..GPIO1 Pin Event Trig 0 input is selected
 *  *..
 */
#define INPUTMUX_FLEXPWM0_FAULT3_TRIGIN(x)       (((uint32_t)(((uint32_t)(x)) << INPUTMUX_FLEXPWM0_FAULT3_TRIGIN_SHIFT)) & INPUTMUX_FLEXPWM0_FAULT3_TRIGIN_MASK)
/*! @} */

/*! @name FLEXPWM0_EXTFORCE - PWM0 input trigger connections */
/*! @{ */

#define INPUTMUX_FLEXPWM0_EXTFORCE_TRIGIN_MASK   (0x3FU)
#define INPUTMUX_FLEXPWM0_EXTFORCE_TRIGIN_SHIFT  (0U)
/*! TRIGIN - Trigger input connections for PWM0
 *  0b000000..Reserved
 *  0b000001..ARM_TXEV input is selected
 *  0b000010..AOI0_OUT0 input is selected
 *  0b000011..AOI0_OUT1 input is selected
 *  0b000100..AOI0_OUT2 input is selected
 *  0b000101..AOI0_OUT3 input is selected
 *  0b000110..CMP0_OUT input is selected
 *  0b000111..CMP1_OUT input is selected
 *  0b001000..Reserved
 *  0b001001..CTimer0_MAT2 input is selected
 *  0b001010..CTimer0_MAT3
 *  0b001011..CTimer1_MAT2 input is selected
 *  0b001100..CTimer1_MAT3 input is selected
 *  0b001101..CTimer2_MAT2 input is selected
 *  0b001110..CTimer2_MAT3 input is selected
 *  0b001111..QDC0_CMP_FLAG0 input is selected
 *  0b010000..QDC0_CMP_FLAG1 input is selected
 *  0b010001..QDC0_CMP_FLAG2 input is selected
 *  0b010010..QDC0_CMP_FLAG3 input is selected
 *  0b010011..QDC0_POS_MATCH0 input is selected
 *  0b010100..TRIG_IN0 input is selected
 *  0b010101..TRIG_IN1 input is selected
 *  0b010110..TRIG_IN2
 *  0b010111..TRIG_IN3
 *  0b011000..TRIG_IN4 input is selected
 *  0b011001..TRIG_IN5 input is selected
 *  0b011010..TRIG_IN6 input is selected
 *  0b011011..TRIG_IN7 input is selected
 *  0b011100..TRIG_IN8 input is selected
 *  0b011101..TRIG_IN9 input is selected
 *  0b011110..TRIG_IN10 input is selected
 *  0b011111..TRIG_IN11 input is selected
 *  0b100000..GPIO0 Pin Event Trig 0 input is selected
 *  0b100001..GPIO1 Pin Event Trig 0 input is selected
 *  *..
 */
#define INPUTMUX_FLEXPWM0_EXTFORCE_TRIGIN(x)     (((uint32_t)(((uint32_t)(x)) << INPUTMUX_FLEXPWM0_EXTFORCE_TRIGIN_SHIFT)) & INPUTMUX_FLEXPWM0_EXTFORCE_TRIGIN_MASK)
/*! @} */

/*! @name PWM0_EXT_CLK - PWM0 external clock trigger */
/*! @{ */

#define INPUTMUX_PWM0_EXT_CLK_TRIGIN_MASK        (0x7U)
#define INPUTMUX_PWM0_EXT_CLK_TRIGIN_SHIFT       (0U)
/*! TRIGIN - Trigger input connections for PWM
 *  0b000..Reserved
 *  0b001..clk_16k[0] input is selected
 *  0b010..Reserved
 *  0b011..AOI0_OUT0 input is selected
 *  0b100..AOI0_OUT1 input is selected
 *  0b101..TRIG_IN0 input is selected
 *  0b110..TRIG_IN7 input is selected
 *  *..
 */
#define INPUTMUX_PWM0_EXT_CLK_TRIGIN(x)          (((uint32_t)(((uint32_t)(x)) << INPUTMUX_PWM0_EXT_CLK_TRIGIN_SHIFT)) & INPUTMUX_PWM0_EXT_CLK_TRIGIN_MASK)
/*! @} */

/*! @name AOI0_MUX0 - AOI0 trigger input connections 0 */
/*! @{ */

#define INPUTMUX_AOI0_MUX0_INP_MASK              (0x3FU)
#define INPUTMUX_AOI0_MUX0_INP_SHIFT             (0U)
/*! INP - AOI0 trigger input connections
 *  0b000000..Reserved
 *  0b000001..ADC0_tcomp[0] input is selected
 *  0b000010..ADC0_tcomp[1] input is selected
 *  0b000011..ADC0_tcomp[2] input is selected
 *  0b000100..ADC0_tcomp[3] input is selected
 *  0b000101..CMP0_OUT input is selected
 *  0b000110..CMP1_OUT input is selected
 *  0b000111..Reserved
 *  0b001000..CTimer0_MAT0 input is selected
 *  0b001001..CTimer0_MAT1 input is selected
 *  0b001010..CTimer0_MAT2 input is selected
 *  0b001011..CTimer0_MAT3 input is selected
 *  0b001100..CTimer1_MAT0
 *  0b001101..CTimer1_MAT1 input is selected
 *  0b001110..CTimer1_MAT2 input is selected
 *  0b001111..CTimer1_MAT3 input is selected
 *  0b010000..CTimer2_MAT0 input is selected
 *  0b010001..CTimer2_MAT1 input is selected
 *  0b010010..CTimer2_MAT2 input is selected
 *  0b010011..CTimer2_MAT3 input is selected
 *  0b010100..LPTMR0 input is selected
 *  0b010101..Reserved
 *  0b010110..QDC0_CMP_FLAG0 input is selected
 *  0b010111..QDC0_CMP_FLAG1 input is selected
 *  0b011000..QDC0_CMP_FLAG2 input is selected
 *  0b011001..QDC0_CMP_FLAG3 input is selected
 *  0b011010..QDC0_POS_MATCH input is selected
 *  0b011011..PWM0_SM0_MUX_TRIG0 0 input is selected
 *  0b011100..PWM0_SM0_MUX_TRIG1 input is selected
 *  0b011101..PWM0_SM1_MUX_TRIG0 input is selected
 *  0b011110..PWM0_SM1_MUX_TRIG1 input is selected
 *  0b011111..PWM0_SM2_MUX_TRIG0 input is selected
 *  0b100000..PWM0_SM2_MUX_TRIG1 input is selected
 *  0b100001..Reserved
 *  0b100010..Reserved
 *  0b100011..TRIG_IN0 input is selected
 *  0b100100..TRIG_IN1 input is selected
 *  0b100101..TRIG_IN2 input is selected
 *  0b100110..TRIG_IN3 input is selected
 *  0b100111..TRIG_IN4 input is selected
 *  0b101000..TRIG_IN5 input is selected
 *  0b101001..TRIG_IN6 input is selected
 *  0b101010..TRIG_IN7 input is selected
 *  0b101011..TRIG_IN8 input is selected
 *  0b101100..TRIG_IN9 input is selected
 *  0b101101..TRIG_IN10 input is selected
 *  0b101110..TRIG_IN11 input is selected
 *  0b101111..GPIO0 Pin Event Trig 0 input is selected
 *  0b110000..GPIO1 Pin Event Trig 0 input is selected
 *  *..
 */
#define INPUTMUX_AOI0_MUX0_INP(x)                (((uint32_t)(((uint32_t)(x)) << INPUTMUX_AOI0_MUX0_INP_SHIFT)) & INPUTMUX_AOI0_MUX0_INP_MASK)
/*! @} */

/*! @name AOI0_MUX1 - AOI0 trigger input connections 0 */
/*! @{ */

#define INPUTMUX_AOI0_MUX1_INP_MASK              (0x3FU)
#define INPUTMUX_AOI0_MUX1_INP_SHIFT             (0U)
/*! INP - AOI0 trigger input connections
 *  0b000000..Reserved
 *  0b000001..ADC0_tcomp[0] input is selected
 *  0b000010..ADC0_tcomp[1] input is selected
 *  0b000011..ADC0_tcomp[2] input is selected
 *  0b000100..ADC0_tcomp[3] input is selected
 *  0b000101..CMP0_OUT input is selected
 *  0b000110..CMP1_OUT input is selected
 *  0b000111..Reserved
 *  0b001000..CTimer0_MAT0 input is selected
 *  0b001001..CTimer0_MAT1 input is selected
 *  0b001010..CTimer0_MAT2 input is selected
 *  0b001011..CTimer0_MAT3 input is selected
 *  0b001100..CTimer1_MAT0
 *  0b001101..CTimer1_MAT1 input is selected
 *  0b001110..CTimer1_MAT2 input is selected
 *  0b001111..CTimer1_MAT3 input is selected
 *  0b010000..CTimer2_MAT0 input is selected
 *  0b010001..CTimer2_MAT1 input is selected
 *  0b010010..CTimer2_MAT2 input is selected
 *  0b010011..CTimer2_MAT3 input is selected
 *  0b010100..LPTMR0 input is selected
 *  0b010101..Reserved
 *  0b010110..QDC0_CMP_FLAG0 input is selected
 *  0b010111..QDC0_CMP_FLAG1 input is selected
 *  0b011000..QDC0_CMP_FLAG2 input is selected
 *  0b011001..QDC0_CMP_FLAG3 input is selected
 *  0b011010..QDC0_POS_MATCH input is selected
 *  0b011011..PWM0_SM0_OUT_TRIG0 0 input is selected
 *  0b011100..PWM0_SM0_OUT_TRIG1 input is selected
 *  0b011101..PWM0_SM1_OUT_TRIG0 input is selected
 *  0b011110..PWM0_SM1_OUT_TRIG1 input is selected
 *  0b011111..PWM0_SM2_OUT_TRIG0 input is selected
 *  0b100000..PWM0_SM2_OUT_TRIG1 input is selected
 *  0b100001..Reserved
 *  0b100010..Reserved
 *  0b100011..TRIG_IN0 input is selected
 *  0b100100..TRIG_IN1 input is selected
 *  0b100101..TRIG_IN2 input is selected
 *  0b100110..TRIG_IN3 input is selected
 *  0b100111..TRIG_IN4 input is selected
 *  0b101000..TRIG_IN5 input is selected
 *  0b101001..TRIG_IN6 input is selected
 *  0b101010..TRIG_IN7 input is selected
 *  0b101011..TRIG_IN8 input is selected
 *  0b101100..TRIG_IN9 input is selected
 *  0b101101..TRIG_IN10 input is selected
 *  0b101110..TRIG_IN11 input is selected
 *  0b101111..GPIO0 Pin Event Trig 0 input is selected
 *  0b110000..GPIO1 Pin Event Trig 0 input is selected
 *  0b110001..GPIO2 Pin Event Trig 0 input is selected
 *  0b110010..GPIO3 Pin Event Trig 0 input is selected
 *  *..
 */
#define INPUTMUX_AOI0_MUX1_INP(x)                (((uint32_t)(((uint32_t)(x)) << INPUTMUX_AOI0_MUX1_INP_SHIFT)) & INPUTMUX_AOI0_MUX1_INP_MASK)
/*! @} */

/*! @name EXT_TRIG0 - EXT trigger connections 0 */
/*! @{ */

#define INPUTMUX_EXT_TRIG0_INP_MASK              (0x1FU)
#define INPUTMUX_EXT_TRIG0_INP_SHIFT             (0U)
/*! INP - EXT trigger input connections
 *  0b00000..Reserved
 *  0b00001..ARM_TXEV input is selected
 *  0b00010..AOI0_OUT0 input is selected
 *  0b00011..AOI0_OUT1 input is selected
 *  0b00100..AOI0_OUT2 input is selected
 *  0b00101..AOI0_OUT3 input is selected
 *  0b00110..CMP0_OUT input is selected
 *  0b00111..CMP1_OUT input is selected
 *  0b01000..Reserved
 *  0b01001..LPUART0 input is selected
 *  0b01010..LPUART1 input is selected
 *  0b01011..LPUART2 input is selected
 *  *..
 */
#define INPUTMUX_EXT_TRIG0_INP(x)                (((uint32_t)(((uint32_t)(x)) << INPUTMUX_EXT_TRIG0_INP_SHIFT)) & INPUTMUX_EXT_TRIG0_INP_MASK)
/*! @} */

/*! @name CMP1_TRIG - CMP1 input connections */
/*! @{ */

#define INPUTMUX_CMP1_TRIG_TRIGIN_MASK           (0x3FU)
#define INPUTMUX_CMP1_TRIG_TRIGIN_SHIFT          (0U)
/*! TRIGIN - CMP0 input trigger
 *  0b000000..Reserved
 *  0b000001..ARM_TXEV input is selected
 *  0b000010..AOI0_OUT0 input is selected
 *  0b000011..AOI0_OUT1 input is selected
 *  0b000100..AOI0_OUT2 input is selected
 *  0b000101..AOI0_OUT3 input is selected
 *  0b000110..CMP0_OUT input is selected
 *  0b000111..Reserved
 *  0b001000..CTimer0_MAT0 input is selected
 *  0b001001..CTimer0_MAT2 input is selected
 *  0b001010..CTimer1_MAT0
 *  0b001011..CTimer1_MAT2 input is selected
 *  0b001100..CTimer2_MAT0 input is selected
 *  0b001101..CTimer2_MAT2 input is selected
 *  0b001110..LPTMR0 input is selected
 *  0b001111..Reserved
 *  0b010000..QDC0_POS_MATCH0
 *  0b010001..PWM0_SM0_MUX_TRIG0 input is selected
 *  0b010010..PWM0_SM0_MUX_TRIG1 input is selected
 *  0b010011..PWM0_SM1_OUT_TRIG0 input is selected
 *  0b010100..PWM0_SM1_MUX_TRIG1 input is selected
 *  0b010101..PWM0_SM2_MUX_TRIG0 input is selected
 *  0b010110..PWM0_SM2_MUX_TRIG1 input is selected
 *  0b010111..Reserved
 *  0b011000..Reserved
 *  0b011001..GPIO0 Pin Event Trig 0 input is selected
 *  0b011010..GPIO1 Pin Event Trig 0 input is selected
 *  0b011011..Reserved
 *  0b011100..Reserved
 *  0b011101..Reserved
 *  0b011110..WUU input is selected
 *  *..
 */
#define INPUTMUX_CMP1_TRIG_TRIGIN(x)             (((uint32_t)(((uint32_t)(x)) << INPUTMUX_CMP1_TRIG_TRIGIN_SHIFT)) & INPUTMUX_CMP1_TRIG_TRIGIN_MASK)
/*! @} */

/*! @name LPI2C0_TRIG - LPI2C0 trigger input connections */
/*! @{ */

#define INPUTMUX_LPI2C0_TRIG_INP_MASK            (0x3FU)
#define INPUTMUX_LPI2C0_TRIG_INP_SHIFT           (0U)
/*! INP - LPI2C0 trigger input connections
 *  0b000000..Reserved
 *  0b000001..ARM_TXEV
 *  0b000010..AOI0_OUT0 input is selected
 *  0b000011..AOI0_OUT1 input is selected
 *  0b000100..AOI0_OUT2 input is selected
 *  0b000101..AOI0_OUT3 input is selected
 *  0b000110..CMP0_OUT input is selected
 *  0b000111..CMP1_OUT input is selected
 *  0b001000..Reserved
 *  0b001001..CTimer0_MAT0 input is selected
 *  0b001010..CTimer0_MAT1 input is selected
 *  0b001011..CTimer1_MAT0 input is selected
 *  0b001100..CTimer1_MAT1 input is selected
 *  0b001101..CTimer2_MAT0 input is selected
 *  0b001110..CTimer2_MAT1 input is selected
 *  0b001111..LPTMR0 input is selected
 *  0b010000..Reserved
 *  0b010001..TRIG_IN0 input is selected
 *  0b010010..TRIG_IN1 input is selected
 *  0b010011..TRIG_IN2 input is selected
 *  0b010100..TRIG_IN3 input is selected
 *  0b010101..TRIG_IN4 input is selected
 *  0b010110..TRIG_IN5 input is selected
 *  0b010111..TRIG_IN6 input is selected
 *  0b011000..TRIG_IN7 input is selected
 *  0b011001..GPIO0 Pin Event Trig 0 input is selected
 *  0b011010..GPIO1 Pin Event Trig 0 input is selected
 *  0b011011..Reserved
 *  0b011100..Reserved
 *  0b011101..Reserved
 *  0b011110..WUU input is selected
 *  *..
 */
#define INPUTMUX_LPI2C0_TRIG_INP(x)              (((uint32_t)(((uint32_t)(x)) << INPUTMUX_LPI2C0_TRIG_INP_SHIFT)) & INPUTMUX_LPI2C0_TRIG_INP_MASK)
/*! @} */

/*! @name LPSPI0_TRIG - LPSPI0 trigger input connections */
/*! @{ */

#define INPUTMUX_LPSPI0_TRIG_INP_MASK            (0x3FU)
#define INPUTMUX_LPSPI0_TRIG_INP_SHIFT           (0U)
/*! INP - LPSPI0 trigger input connections
 *  0b000000..Reserved
 *  0b000001..ARM_TXEV
 *  0b000010..AOI0_OUT0 input is selected
 *  0b000011..AOI0_OUT1 input is selected
 *  0b000100..AOI0_OUT2 input is selected
 *  0b000101..AOI0_OUT3 input is selected
 *  0b000110..CMP0_OUT input is selected
 *  0b000111..CMP1_OUT input is selected
 *  0b001000..Reserved
 *  0b001001..CTimer0_MAT1 input is selected
 *  0b001010..CTimer0_MAT2 input is selected
 *  0b001011..CTimer1_MAT1 input is selected
 *  0b001100..CTimer1_MAT2 input is selected
 *  0b001101..CTimer2_MAT1 input is selected
 *  0b001110..CTimer2_MAT2 input is selected
 *  0b001111..LPTMR0 input is selected
 *  0b010000..Reserved
 *  0b010001..TRIG_IN0 input is selected
 *  0b010010..TRIG_IN1 input is selected
 *  0b010011..TRIG_IN2 input is selected
 *  0b010100..TRIG_IN3 input is selected
 *  0b010101..TRIG_IN4 input is selected
 *  0b010110..TRIG_IN5 input is selected
 *  0b010111..TRIG_IN6 input is selected
 *  0b011000..TRIG_IN7 input is selected
 *  0b011001..GPIO0 Pin Event Trig 0 input is selected
 *  0b011010..GPIO1 Pin Event Trig 0 input is selected
 *  0b011011..Reserved
 *  0b011100..Reserved
 *  0b011101..Reserved
 *  0b011110..WUU input is selected
 *  *..
 */
#define INPUTMUX_LPSPI0_TRIG_INP(x)              (((uint32_t)(((uint32_t)(x)) << INPUTMUX_LPSPI0_TRIG_INP_SHIFT)) & INPUTMUX_LPSPI0_TRIG_INP_MASK)
/*! @} */

/*! @name LPSPI1_TRIG - LPSPI1 trigger input connections */
/*! @{ */

#define INPUTMUX_LPSPI1_TRIG_INP_MASK            (0x3FU)
#define INPUTMUX_LPSPI1_TRIG_INP_SHIFT           (0U)
/*! INP - LPSPI1 trigger input connections
 *  0b000000..Reserved
 *  0b000001..ARM_TXEV
 *  0b000010..AOI0_OUT0 input is selected
 *  0b000011..AOI0_OUT1 input is selected
 *  0b000100..AOI0_OUT2 input is selected
 *  0b000101..AOI0_OUT3 input is selected
 *  0b000110..CMP0_OUT input is selected
 *  0b000111..CMP1_OUT input is selected
 *  0b001000..Reserved
 *  0b001001..CTimer0_MAT1 input is selected
 *  0b001010..CTimer0_MAT2 input is selected
 *  0b001011..CTimer1_MAT1 input is selected
 *  0b001100..CTimer1_MAT2 input is selected
 *  0b001101..CTimer2_MAT1 input is selected
 *  0b001110..CTimer2_MAT2 input is selected
 *  0b001111..LPTMR0 input is selected
 *  0b010000..Reserved
 *  0b010001..TRIG_IN0 input is selected
 *  0b010010..TRIG_IN1 input is selected
 *  0b010011..TRIG_IN2 input is selected
 *  0b010100..TRIG_IN3 input is selected
 *  0b010101..TRIG_IN4 input is selected
 *  0b010110..TRIG_IN5 input is selected
 *  0b010111..TRIG_IN6 input is selected
 *  0b011000..TRIG_IN7 input is selected
 *  0b011001..GPIO0 Pin Event Trig 0 input is selected
 *  0b011010..GPIO1 Pin Event Trig 0 input is selected
 *  0b011011..Reserved
 *  0b011100..Reserved
 *  0b011101..Reserved
 *  0b011110..WUU input is selected
 *  *..
 */
#define INPUTMUX_LPSPI1_TRIG_INP(x)              (((uint32_t)(((uint32_t)(x)) << INPUTMUX_LPSPI1_TRIG_INP_SHIFT)) & INPUTMUX_LPSPI1_TRIG_INP_MASK)
/*! @} */

/*! @name LPUART0 - LPUART0 trigger input connections */
/*! @{ */

#define INPUTMUX_LPUART0_INP_MASK                (0x3FU)
#define INPUTMUX_LPUART0_INP_SHIFT               (0U)
/*! INP - LPUART0 trigger input connections
 *  0b000000..Reserved
 *  0b000001..ARM_TXEV
 *  0b000010..AOI0_OUT0 input is selected
 *  0b000011..AOI0_OUT1 input is selected
 *  0b000100..AOI0_OUT2 input is selected
 *  0b000101..AOI0_OUT3 input is selected
 *  0b000110..CMP0_OUT input is selected
 *  0b000111..CMP1_OUT input is selected
 *  0b001000..Reserved
 *  0b001001..CTimer0_MAT2 input is selected
 *  0b001010..CTimer0_MAT3 input is selected
 *  0b001011..CTimer1_MAT2 input is selected
 *  0b001100..CTimer1_MAT3 input is selected
 *  0b001101..CTimer2_MAT2 input is selected
 *  0b001110..CTimer2_MAT3 input is selected
 *  0b001111..LPTMR0 input is selected
 *  0b010000..Reserved
 *  0b010001..TRIG_IN0 input is selected
 *  0b010010..TRIG_IN1 input is selected
 *  0b010011..TRIG_IN2 input is selected
 *  0b010100..TRIG_IN3 input is selected
 *  0b010101..TRIG_IN4 input is selected
 *  0b010110..TRIG_IN5 input is selected
 *  0b010111..TRIG_IN6 input is selected
 *  0b011000..TRIG_IN7 input is selected
 *  0b011001..TRIG_IN8 input is selected
 *  0b011010..TRIG_IN9 input is selected
 *  0b011011..TRIG_IN10 input is selected
 *  0b011100..TRIG_IN11 input is selected
 *  0b011101..GPIO0 Pin Event Trig 0 input is selected
 *  0b011110..GPIO1 Pin Event Trig 0 input is selected
 *  0b011111..Reserved
 *  0b100000..Reserved
 *  0b100001..Reserved
 *  0b100010..WUU selected
 *  *..
 */
#define INPUTMUX_LPUART0_INP(x)                  (((uint32_t)(((uint32_t)(x)) << INPUTMUX_LPUART0_INP_SHIFT)) & INPUTMUX_LPUART0_INP_MASK)
/*! @} */

/*! @name LPUART1 - LPUART1 trigger input connections */
/*! @{ */

#define INPUTMUX_LPUART1_INP_MASK                (0x3FU)
#define INPUTMUX_LPUART1_INP_SHIFT               (0U)
/*! INP - LPUART1 trigger input connections
 *  0b000000..Reserved
 *  0b000001..ARM_TXEV
 *  0b000010..AOI0_OUT0 input is selected
 *  0b000011..AOI0_OUT1 input is selected
 *  0b000100..AOI0_OUT2 input is selected
 *  0b000101..AOI0_OUT3 input is selected
 *  0b000110..CMP0_OUT input is selected
 *  0b000111..CMP1_OUT input is selected
 *  0b001000..Reserved
 *  0b001001..CTimer0_MAT2 input is selected
 *  0b001010..CTimer0_MAT3 input is selected
 *  0b001011..CTimer1_MAT2 input is selected
 *  0b001100..CTimer1_MAT3 input is selected
 *  0b001101..CTimer2_MAT2 input is selected
 *  0b001110..CTimer2_MAT3 input is selected
 *  0b001111..LPTMR0 input is selected
 *  0b010000..Reserved
 *  0b010001..TRIG_IN0 input is selected
 *  0b010010..TRIG_IN1 input is selected
 *  0b010011..TRIG_IN2 input is selected
 *  0b010100..TRIG_IN3 input is selected
 *  0b010101..TRIG_IN4 input is selected
 *  0b010110..TRIG_IN5 input is selected
 *  0b010111..TRIG_IN6 input is selected
 *  0b011000..TRIG_IN7 input is selected
 *  0b011001..TRIG_IN8 input is selected
 *  0b011010..TRIG_IN9 input is selected
 *  0b011011..TRIG_IN10 input is selected
 *  0b011100..TRIG_IN11 input is selected
 *  0b011101..GPIO0 Pin Event Trig 0 input is selected
 *  0b011110..GPIO1 Pin Event Trig 0 input is selected
 *  0b011111..Reserved
 *  0b100000..Reserved
 *  0b100001..Reserved
 *  0b100010..WUU selected
 *  *..
 */
#define INPUTMUX_LPUART1_INP(x)                  (((uint32_t)(((uint32_t)(x)) << INPUTMUX_LPUART1_INP_SHIFT)) & INPUTMUX_LPUART1_INP_MASK)
/*! @} */

/*! @name LPUART2 - LPUART2 trigger input connections */
/*! @{ */

#define INPUTMUX_LPUART2_INP_MASK                (0x3FU)
#define INPUTMUX_LPUART2_INP_SHIFT               (0U)
/*! INP - LPUART2 trigger input connections
 *  0b000000..Reserved
 *  0b000001..ARM_TXEV
 *  0b000010..AOI0_OUT0 input is selected
 *  0b000011..AOI0_OUT1 input is selected
 *  0b000100..AOI0_OUT2 input is selected
 *  0b000101..AOI0_OUT3 input is selected
 *  0b000110..CMP0_OUT input is selected
 *  0b000111..CMP1_OUT input is selected
 *  0b001000..Reserved
 *  0b001001..CTimer0_MAT2 input is selected
 *  0b001010..CTimer0_MAT3 input is selected
 *  0b001011..CTimer1_MAT2 input is selected
 *  0b001100..CTimer1_MAT3 input is selected
 *  0b001101..CTimer2_MAT2 input is selected
 *  0b001110..CTimer2_MAT3 input is selected
 *  0b001111..LPTMR0 input is selected
 *  0b010000..Reserved
 *  0b010001..TRIG_IN0 input is selected
 *  0b010010..TRIG_IN1 input is selected
 *  0b010011..TRIG_IN2 input is selected
 *  0b010100..TRIG_IN3 input is selected
 *  0b010101..TRIG_IN4 input is selected
 *  0b010110..TRIG_IN5 input is selected
 *  0b010111..TRIG_IN6 input is selected
 *  0b011000..TRIG_IN7 input is selected
 *  0b011001..TRIG_IN8 input is selected
 *  0b011010..TRIG_IN9 input is selected
 *  0b011011..TRIG_IN10 input is selected
 *  0b011100..TRIG_IN11 input is selected
 *  0b011101..GPIO0 Pin Event Trig 0 input is selected
 *  0b011110..GPIO1 Pin Event Trig 0 input is selected
 *  0b011111..Reserved
 *  0b100000..Reserved
 *  0b100001..Reserved
 *  0b100010..WUU selected
 *  *..
 */
#define INPUTMUX_LPUART2_INP(x)                  (((uint32_t)(((uint32_t)(x)) << INPUTMUX_LPUART2_INP_SHIFT)) & INPUTMUX_LPUART2_INP_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group INPUTMUX_Register_Masks */


/*!
 * @}
 */ /* end of group INPUTMUX_Peripheral_Access_Layer */


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


#endif  /* INPUTMUX_H_ */

