/*
** ###################################################################
**     Processors:          MCXN236VDF
**                          MCXN236VKL
**                          MCXN236VNL
**                          MCXN236VPB
**
**     Compilers:           GNU C Compiler
**                          IAR ANSI C/C++ Compiler for ARM
**                          Keil ARM C/C++ Compiler
**                          MCUXpresso Compiler
**
**     Reference manual:    MCXN23XRM
**     Version:             rev. 2.0, 2024-10-29
**     Build:               b250623
**
**     Abstract:
**         CMSIS Peripheral Access Layer for MCXN236
**
**     Copyright 1997-2016 Freescale Semiconductor, Inc.
**     Copyright 2016-2025 NXP
**     SPDX-License-Identifier: BSD-3-Clause
**
**     http:                 www.nxp.com
**     mail:                 support@nxp.com
**
**     Revisions:
**     - rev. 1.0 (2023-10-01)
**         Initial version based on RM 1.2
**     - rev. 2.0 (2024-10-29)
**         Change the device header file from single flat file to multiple files based on peripherals,
**         each peripheral with dedicated header file located in periphN folder.
**
** ###################################################################
*/

/*!
 * @file MCXN236_COMMON.h
 * @version 2.0
 * @date 2024-10-29
 * @brief CMSIS Peripheral Access Layer for MCXN236
 *
 * CMSIS Peripheral Access Layer for MCXN236
 */

#if !defined(MCXN236_COMMON_H_)
#define MCXN236_COMMON_H_                        /**< Symbol preventing repeated inclusion */

/** Memory map major version (memory maps with equal major version number are
 * compatible) */
#define MCU_MEM_MAP_VERSION 0x0200U
/** Memory map minor version */
#define MCU_MEM_MAP_VERSION_MINOR 0x0000U


/* ----------------------------------------------------------------------------
   -- Interrupt vector numbers
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup Interrupt_vector_numbers Interrupt vector numbers
 * @{
 */

/** Interrupt Number Definitions */
#define NUMBER_OF_INT_VECTORS 172                /**< Number of interrupts in the Vector table */

typedef enum IRQn {
  /* Auxiliary constants */
  NotAvail_IRQn                = -128,             /**< Not available device specific interrupt */

  /* Core interrupts */
  NonMaskableInt_IRQn          = -14,              /**< Non Maskable Interrupt */
  HardFault_IRQn               = -13,              /**< Cortex-M33 SV Hard Fault Interrupt */
  MemoryManagement_IRQn        = -12,              /**< Cortex-M33 Memory Management Interrupt */
  BusFault_IRQn                = -11,              /**< Cortex-M33 Bus Fault Interrupt */
  UsageFault_IRQn              = -10,              /**< Cortex-M33 Usage Fault Interrupt */
  SecureFault_IRQn             = -9,               /**< Cortex-M33 Secure Fault Interrupt */
  SVCall_IRQn                  = -5,               /**< Cortex-M33 SV Call Interrupt */
  DebugMonitor_IRQn            = -4,               /**< Cortex-M33 Debug Monitor Interrupt */
  PendSV_IRQn                  = -2,               /**< Cortex-M33 Pend SV Interrupt */
  SysTick_IRQn                 = -1,               /**< Cortex-M33 System Tick Interrupt */

  /* Device specific interrupts */
  OR_IRQn                      = 0,                /**< OR IRQ */
  EDMA_0_CH0_IRQn              = 1,                /**< eDMA_0_CH0 error or transfer complete */
  EDMA_0_CH1_IRQn              = 2,                /**< eDMA_0_CH1 error or transfer complete */
  EDMA_0_CH2_IRQn              = 3,                /**< eDMA_0_CH2 error or transfer complete */
  EDMA_0_CH3_IRQn              = 4,                /**< eDMA_0_CH3 error or transfer complete */
  EDMA_0_CH4_IRQn              = 5,                /**< eDMA_0_CH4 error or transfer complete */
  EDMA_0_CH5_IRQn              = 6,                /**< eDMA_0_CH5 error or transfer complete */
  EDMA_0_CH6_IRQn              = 7,                /**< eDMA_0_CH6 error or transfer complete */
  EDMA_0_CH7_IRQn              = 8,                /**< eDMA_0_CH7 error or transfer complete */
  EDMA_0_CH8_IRQn              = 9,                /**< eDMA_0_CH8 error or transfer complete */
  EDMA_0_CH9_IRQn              = 10,               /**< eDMA_0_CH9 error or transfer complete */
  EDMA_0_CH10_IRQn             = 11,               /**< eDMA_0_CH10 error or transfer complete */
  EDMA_0_CH11_IRQn             = 12,               /**< eDMA_0_CH11 error or transfer complete */
  EDMA_0_CH12_IRQn             = 13,               /**< eDMA_0_CH12 error or transfer complete */
  EDMA_0_CH13_IRQn             = 14,               /**< eDMA_0_CH13 error or transfer complete */
  EDMA_0_CH14_IRQn             = 15,               /**< eDMA_0_CH14 error or transfer complete */
  EDMA_0_CH15_IRQn             = 16,               /**< eDMA_0_CH15 error or transfer complete */
  GPIO00_IRQn                  = 17,               /**< GPIO0 interrupt 0 */
  GPIO01_IRQn                  = 18,               /**< GPIO0 interrupt 1 */
  GPIO10_IRQn                  = 19,               /**< GPIO1 interrupt 0 */
  GPIO11_IRQn                  = 20,               /**< GPIO1 interrupt 1 */
  GPIO20_IRQn                  = 21,               /**< GPIO2 interrupt 0 */
  GPIO21_IRQn                  = 22,               /**< GPIO2 interrupt 1 */
  GPIO30_IRQn                  = 23,               /**< GPIO3 interrupt 0 */
  GPIO31_IRQn                  = 24,               /**< GPIO3 interrupt 1 */
  GPIO40_IRQn                  = 25,               /**< GPIO4 interrupt 0 */
  GPIO41_IRQn                  = 26,               /**< GPIO4 interrupt 1 */
  GPIO50_IRQn                  = 27,               /**< GPIO5 interrupt 0 */
  GPIO51_IRQn                  = 28,               /**< GPIO5 interrupt 1 */
  UTICK0_IRQn                  = 29,               /**< Micro-Tick Timer interrupt */
  MRT0_IRQn                    = 30,               /**< Multi-Rate Timer interrupt */
  CTIMER0_IRQn                 = 31,               /**< Standard counter/timer 0 interrupt */
  CTIMER1_IRQn                 = 32,               /**< Standard counter/timer 1 interrupt */
  Reserved49_IRQn              = 33,               /**< Reserved interrupt */
  CTIMER2_IRQn                 = 34,               /**< Standard counter/timer 2 interrupt */
  LP_FLEXCOMM0_IRQn            = 35,               /**< LP_FLEXCOMM0 (LPSPI interrupt or LPI2C interrupt or LPUART Receive/Transmit interrupt) */
  LP_FLEXCOMM1_IRQn            = 36,               /**< LP_FLEXCOMM1 (LPSPI interrupt or LPI2C interrupt or LPUART Receive/Transmit interrupt) */
  LP_FLEXCOMM2_IRQn            = 37,               /**< LP_FLEXCOMM2 (LPSPI interrupt or LPI2C interrupt or LPUART Receive/Transmit interrupt) */
  LP_FLEXCOMM3_IRQn            = 38,               /**< LP_FLEXCOMM3 (LPSPI interrupt or LPI2C interrupt or LPUART Receive/Transmit interrupt) */
  LP_FLEXCOMM4_IRQn            = 39,               /**< LP_FLEXCOMM4 (LPSPI interrupt or LPI2C interrupt or LPUART Receive/Transmit interrupt) */
  LP_FLEXCOMM5_IRQn            = 40,               /**< LP_FLEXCOMM5 (LPSPI interrupt or LPI2C interrupt or LPUART Receive/Transmit interrupt) */
  LP_FLEXCOMM6_IRQn            = 41,               /**< LP_FLEXCOMM6 (LPSPI interrupt or LPI2C interrupt or LPUART Receive/Transmit interrupt) */
  LP_FLEXCOMM7_IRQn            = 42,               /**< LP_FLEXCOMM7 (LPSPI interrupt or LPI2C interrupt or LPUART Receive/Transmit interrupt) */
  Reserved59_IRQn              = 43,               /**< Reserved interrupt */
  Reserved60_IRQn              = 44,               /**< Reserved interrupt */
  ADC0_IRQn                    = 45,               /**< Analog-to-Digital Converter 0 - General Purpose interrupt */
  ADC1_IRQn                    = 46,               /**< Analog-to-Digital Converter 1 - General Purpose interrupt */
  PINT0_IRQn                   = 47,               /**< Pin Interrupt Pattern Match Interrupt */
  PDM_EVENT_IRQn               = 48,               /**< Microphone Interface interrupt  */
  Reserved65_IRQn              = 49,               /**< Reserved interrupt */
  Reserved66_IRQn              = 50,               /**< Reserved interrupt */
  USB0_DCD_IRQn                = 51,               /**< Universal Serial Bus - Device Charge Detect interrupt */
  RTC_IRQn                     = 52,               /**< RTC Subsystem interrupt (RTC interrupt or Wake timer interrupt) */
  SMARTDMA_IRQn                = 53,               /**< SmartDMA_IRQ */
  Reserved70_IRQn              = 54,               /**< Reserved interrupt */
  CTIMER3_IRQn                 = 55,               /**< Standard counter/timer 3 interrupt */
  CTIMER4_IRQn                 = 56,               /**< Standard counter/timer 4 interrupt */
  OS_EVENT_IRQn                = 57,               /**< OS event timer interrupt */
  Reserved74_IRQn              = 58,               /**< Reserved interrupt */
  SAI0_IRQn                    = 59,               /**< Serial Audio Interface 0 interrupt */
  SAI1_IRQn                    = 60,               /**< Serial Audio Interface 1 interrupt */
  Reserved77_IRQn              = 61,               /**< Reserved interrupt */
  CAN0_IRQn                    = 62,               /**< Controller Area Network 0 interrupt */
  CAN1_IRQn                    = 63,               /**< Controller Area Network 1 interrupt */
  Reserved80_IRQn              = 64,               /**< Reserved interrupt */
  Reserved81_IRQn              = 65,               /**< Reserved interrupt */
  USB1_HS_PHY_IRQn             = 66,               /**< USBHS DCD or USBHS Phy interrupt */
  USB1_HS_IRQn                 = 67,               /**< USB High Speed OTG Controller interrupt  */
  SEC_HYPERVISOR_CALL_IRQn     = 68,               /**< AHB Secure Controller hypervisor call interrupt */
  Reserved85_IRQn              = 69,               /**< Reserved interrupt */
  Reserved86_IRQn              = 70,               /**< Reserved interrupt */
  Freqme_IRQn                  = 71,               /**< Frequency Measurement interrupt */
  SEC_VIO_IRQn                 = 72,               /**< Secure violation interrupt (Memory Block Checker interrupt or secure AHB matrix violation interrupt) */
  ELS_IRQn                     = 73,               /**< ELS interrupt */
  PKC_IRQn                     = 74,               /**< PKC interrupt */
  PUF_IRQn                     = 75,               /**< Physical Unclonable Function interrupt */
  Reserved92_IRQn              = 76,               /**< Reserved interrupt */
  EDMA_1_CH0_IRQn              = 77,               /**< eDMA_1_CH0 error or transfer complete */
  EDMA_1_CH1_IRQn              = 78,               /**< eDMA_1_CH1 error or transfer complete */
  EDMA_1_CH2_IRQn              = 79,               /**< eDMA_1_CH2 error or transfer complete */
  EDMA_1_CH3_IRQn              = 80,               /**< eDMA_1_CH3 error or transfer complete */
  EDMA_1_CH4_IRQn              = 81,               /**< eDMA_1_CH4 error or transfer complete */
  EDMA_1_CH5_IRQn              = 82,               /**< eDMA_1_CH5 error or transfer complete */
  EDMA_1_CH6_IRQn              = 83,               /**< eDMA_1_CH6 error or transfer complete */
  EDMA_1_CH7_IRQn              = 84,               /**< eDMA_1_CH7 error or transfer complete */
  Reserved101_IRQn             = 85,               /**< Reserved interrupt */
  Reserved102_IRQn             = 86,               /**< Reserved interrupt */
  Reserved103_IRQn             = 87,               /**< Reserved interrupt */
  Reserved104_IRQn             = 88,               /**< Reserved interrupt */
  Reserved105_IRQn             = 89,               /**< Reserved interrupt */
  Reserved106_IRQn             = 90,               /**< Reserved interrupt */
  Reserved107_IRQn             = 91,               /**< Reserved interrupt */
  Reserved108_IRQn             = 92,               /**< Reserved interrupt */
  CDOG0_IRQn                   = 93,               /**< Code Watchdog Timer 0 interrupt */
  CDOG1_IRQn                   = 94,               /**< Code Watchdog Timer 1 interrupt */
  I3C0_IRQn                    = 95,               /**< Improved Inter Integrated Circuit interrupt 0 */
  I3C1_IRQn                    = 96,               /**< Improved Inter Integrated Circuit interrupt 1 */
  Reserved113_IRQn             = 97,               /**< Reserved interrupt */
  GDET_IRQn                    = 98,               /**< Digital Glitch Detect 0 interrupt  or Digital Glitch Detect 1 interrupt */
  VBAT0_IRQn                   = 99,               /**< VBAT interrupt( VBAT interrupt or digital tamper interrupt) */
  EWM0_IRQn                    = 100,              /**< External Watchdog Monitor interrupt */
  Reserved117_IRQn             = 101,              /**< Reserved interrupt */
  Reserved118_IRQn             = 102,              /**< Reserved interrupt */
  Reserved119_IRQn             = 103,              /**< Reserved interrupt */
  Reserved120_IRQn             = 104,              /**< Reserved interrupt */
  FLEXIO_IRQn                  = 105,              /**< Flexible Input/Output interrupt */
  Reserved122_IRQn             = 106,              /**< Reserved interrupt */
  Reserved123_IRQn             = 107,              /**< Reserved interrupt */
  Reserved124_IRQn             = 108,              /**< Reserved interrupt */
  HSCMP0_IRQn                  = 109,              /**< High-Speed comparator0 interrupt */
  HSCMP1_IRQn                  = 110,              /**< High-Speed comparator1 interrupt */
  Reserved127_IRQn             = 111,              /**< Reserved interrupt */
  FLEXPWM0_RELOAD_ERROR_IRQn   = 112,              /**< FlexPWM0_reload_error interrupt */
  FLEXPWM0_FAULT_IRQn          = 113,              /**< FlexPWM0_fault interrupt */
  FLEXPWM0_SUBMODULE0_IRQn     = 114,              /**< FlexPWM0 Submodule 0 capture/compare/reload interrupt */
  FLEXPWM0_SUBMODULE1_IRQn     = 115,              /**< FlexPWM0 Submodule 1 capture/compare/reload interrupt */
  FLEXPWM0_SUBMODULE2_IRQn     = 116,              /**< FlexPWM0 Submodule 2 capture/compare/reload interrupt */
  FLEXPWM0_SUBMODULE3_IRQn     = 117,              /**< FlexPWM0 Submodule 3 capture/compare/reload interrupt */
  FLEXPWM1_RELOAD_ERROR_IRQn   = 118,              /**< FlexPWM1_reload_error interrupt */
  FLEXPWM1_FAULT_IRQn          = 119,              /**< FlexPWM1_fault interrupt */
  FLEXPWM1_SUBMODULE0_IRQn     = 120,              /**< FlexPWM1 Submodule 0 capture/compare/reload interrupt */
  FLEXPWM1_SUBMODULE1_IRQn     = 121,              /**< FlexPWM1 Submodule 1 capture/compare/reload interrupt */
  FLEXPWM1_SUBMODULE2_IRQn     = 122,              /**< FlexPWM1 Submodule 2 capture/compare/reload interrupt */
  FLEXPWM1_SUBMODULE3_IRQn     = 123,              /**< FlexPWM1 Submodule 3 capture/compare/reload interrupt */
  QDC0_COMPARE_IRQn            = 124,              /**< QDC0_Compare interrupt */
  QDC0_HOME_IRQn               = 125,              /**< QDC0_Home interrupt */
  QDC0_WDG_SAB_IRQn            = 126,              /**< QDC0_WDG_IRQ/SAB interrupt */
  QDC0_IDX_IRQn                = 127,              /**< QDC0_IDX interrupt */
  QDC1_COMPARE_IRQn            = 128,              /**< QDC1_Compare interrupt */
  QDC1_HOME_IRQn               = 129,              /**< QDC1_Home interrupt */
  QDC1_WDG_SAB_IRQn            = 130,              /**< QDC1_WDG_IRQ/SAB interrupt */
  QDC1_IDX_IRQn                = 131,              /**< QDC1_IDX interrupt */
  ITRC0_IRQn                   = 132,              /**< Intrusion and Tamper Response Controller interrupt */
  Reserved149_IRQn             = 133,              /**< Reserved interrupt */
  ELS_ERR_IRQn                 = 134,              /**< ELS error interrupt */
  PKC_ERR_IRQn                 = 135,              /**< PKC error interrupt */
  ERM_SINGLE_BIT_ERROR_IRQn    = 136,              /**< ERM Single Bit error interrupt */
  ERM_MULTI_BIT_ERROR_IRQn     = 137,              /**< ERM Multi Bit error interrupt */
  FMU0_IRQn                    = 138,              /**< Flash Management Unit interrupt */
  Reserved155_IRQn             = 139,              /**< Reserved interrupt */
  Reserved156_IRQn             = 140,              /**< Reserved interrupt */
  Reserved157_IRQn             = 141,              /**< Reserved interrupt */
  Reserved158_IRQn             = 142,              /**< Reserved interrupt */
  LPTMR0_IRQn                  = 143,              /**< Low Power Timer 0 interrupt */
  LPTMR1_IRQn                  = 144,              /**< Low Power Timer 1 interrupt */
  SCG_IRQn                     = 145,              /**< System Clock Generator interrupt */
  SPC_IRQn                     = 146,              /**< System Power Controller interrupt */
  WUU_IRQn                     = 147,              /**< Wake Up Unit interrupt */
  PORT_EFT_IRQn                = 148,              /**< PORT0~5 EFT interrupt */
  Reserved165_IRQn             = 149,              /**< Reserved interrupt */
  Reserved166_IRQn             = 150,              /**< Reserved interrupt */
  Reserved167_IRQn             = 151,              /**< Reserved interrupt */
  WWDT0_IRQn                   = 152,              /**< Windowed Watchdog Timer 0 interrupt */
  WWDT1_IRQn                   = 153,              /**< Windowed Watchdog Timer 1 interrupt */
  CMC0_IRQn                    = 154,              /**< Core Mode Controller interrupt */
  Reserved171_IRQn             = 155               /**< Reserved interrupt */
} IRQn_Type;

/*!
 * @}
 */ /* end of group Interrupt_vector_numbers */


/* ----------------------------------------------------------------------------
   -- Cortex M33 Core Configuration
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup Cortex_Core_Configuration Cortex M33 Core Configuration
 * @{
 */

#define __MPU_PRESENT                  1         /**< Defines if an MPU is present or not */
#define __NVIC_PRIO_BITS               3         /**< Number of priority bits implemented in the NVIC */
#define __Vendor_SysTickConfig         0         /**< Vendor specific implementation of SysTickConfig is defined */
#define __FPU_PRESENT                  1         /**< Defines if an FPU is present or not */
#define __DSP_PRESENT                  1         /**< Defines if Armv8-M Mainline core supports DSP instructions */
#define __SAUREGION_PRESENT            1         /**< Defines if an SAU is present or not */

#include "core_cm33.h"                 /* Core Peripheral Access Layer */
#include "system_MCXN236.h"            /* Device specific configuration file */

/*!
 * @}
 */ /* end of group Cortex_Core_Configuration */


#ifndef MCXN236_SERIES
#define MCXN236_SERIES
#endif
/* CPU specific feature definitions */
#include "MCXN236_features.h"

/* ADC - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral ADC0 base address */
  #define ADC0_BASE                                (0x5010D000u)
  /** Peripheral ADC0 base address */
  #define ADC0_BASE_NS                             (0x4010D000u)
  /** Peripheral ADC0 base pointer */
  #define ADC0                                     ((ADC_Type *)ADC0_BASE)
  /** Peripheral ADC0 base pointer */
  #define ADC0_NS                                  ((ADC_Type *)ADC0_BASE_NS)
  /** Peripheral ADC1 base address */
  #define ADC1_BASE                                (0x5010E000u)
  /** Peripheral ADC1 base address */
  #define ADC1_BASE_NS                             (0x4010E000u)
  /** Peripheral ADC1 base pointer */
  #define ADC1                                     ((ADC_Type *)ADC1_BASE)
  /** Peripheral ADC1 base pointer */
  #define ADC1_NS                                  ((ADC_Type *)ADC1_BASE_NS)
  /** Array initializer of ADC peripheral base addresses */
  #define ADC_BASE_ADDRS                           { ADC0_BASE, ADC1_BASE }
  /** Array initializer of ADC peripheral base pointers */
  #define ADC_BASE_PTRS                            { ADC0, ADC1 }
  /** Array initializer of ADC peripheral base addresses */
  #define ADC_BASE_ADDRS_NS                        { ADC0_BASE_NS, ADC1_BASE_NS }
  /** Array initializer of ADC peripheral base pointers */
  #define ADC_BASE_PTRS_NS                         { ADC0_NS, ADC1_NS }
#else
  /** Peripheral ADC0 base address */
  #define ADC0_BASE                                (0x4010D000u)
  /** Peripheral ADC0 base pointer */
  #define ADC0                                     ((ADC_Type *)ADC0_BASE)
  /** Peripheral ADC1 base address */
  #define ADC1_BASE                                (0x4010E000u)
  /** Peripheral ADC1 base pointer */
  #define ADC1                                     ((ADC_Type *)ADC1_BASE)
  /** Array initializer of ADC peripheral base addresses */
  #define ADC_BASE_ADDRS                           { ADC0_BASE, ADC1_BASE }
  /** Array initializer of ADC peripheral base pointers */
  #define ADC_BASE_PTRS                            { ADC0, ADC1 }
#endif
/** Interrupt vectors for the ADC peripheral type */
#define ADC_IRQS                                 { ADC0_IRQn, ADC1_IRQn }

/* AHBSC - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral AHBSC base address */
  #define AHBSC_BASE                               (0x50120000u)
  /** Peripheral AHBSC base address */
  #define AHBSC_BASE_NS                            (0x40120000u)
  /** Peripheral AHBSC base pointer */
  #define AHBSC                                    ((AHBSC_Type *)AHBSC_BASE)
  /** Peripheral AHBSC base pointer */
  #define AHBSC_NS                                 ((AHBSC_Type *)AHBSC_BASE_NS)
  /** Peripheral AHBSC_ALIAS1 base address */
  #define AHBSC_ALIAS1_BASE                        (0x50121000u)
  /** Peripheral AHBSC_ALIAS1 base address */
  #define AHBSC_ALIAS1_BASE_NS                     (0x40121000u)
  /** Peripheral AHBSC_ALIAS1 base pointer */
  #define AHBSC_ALIAS1                             ((AHBSC_Type *)AHBSC_ALIAS1_BASE)
  /** Peripheral AHBSC_ALIAS1 base pointer */
  #define AHBSC_ALIAS1_NS                          ((AHBSC_Type *)AHBSC_ALIAS1_BASE_NS)
  /** Peripheral AHBSC_ALIAS2 base address */
  #define AHBSC_ALIAS2_BASE                        (0x50122000u)
  /** Peripheral AHBSC_ALIAS2 base address */
  #define AHBSC_ALIAS2_BASE_NS                     (0x40122000u)
  /** Peripheral AHBSC_ALIAS2 base pointer */
  #define AHBSC_ALIAS2                             ((AHBSC_Type *)AHBSC_ALIAS2_BASE)
  /** Peripheral AHBSC_ALIAS2 base pointer */
  #define AHBSC_ALIAS2_NS                          ((AHBSC_Type *)AHBSC_ALIAS2_BASE_NS)
  /** Peripheral AHBSC_ALIAS3 base address */
  #define AHBSC_ALIAS3_BASE                        (0x50123000u)
  /** Peripheral AHBSC_ALIAS3 base address */
  #define AHBSC_ALIAS3_BASE_NS                     (0x40123000u)
  /** Peripheral AHBSC_ALIAS3 base pointer */
  #define AHBSC_ALIAS3                             ((AHBSC_Type *)AHBSC_ALIAS3_BASE)
  /** Peripheral AHBSC_ALIAS3 base pointer */
  #define AHBSC_ALIAS3_NS                          ((AHBSC_Type *)AHBSC_ALIAS3_BASE_NS)
  /** Array initializer of AHBSC peripheral base addresses */
  #define AHBSC_BASE_ADDRS                         { AHBSC_BASE, AHBSC_ALIAS1_BASE, AHBSC_ALIAS2_BASE, AHBSC_ALIAS3_BASE }
  /** Array initializer of AHBSC peripheral base pointers */
  #define AHBSC_BASE_PTRS                          { AHBSC, AHBSC_ALIAS1, AHBSC_ALIAS2, AHBSC_ALIAS3 }
  /** Array initializer of AHBSC peripheral base addresses */
  #define AHBSC_BASE_ADDRS_NS                      { AHBSC_BASE_NS, AHBSC_ALIAS1_BASE_NS, AHBSC_ALIAS2_BASE_NS, AHBSC_ALIAS3_BASE_NS }
  /** Array initializer of AHBSC peripheral base pointers */
  #define AHBSC_BASE_PTRS_NS                       { AHBSC_NS, AHBSC_ALIAS1_NS, AHBSC_ALIAS2_NS, AHBSC_ALIAS3_NS }
#else
  /** Peripheral AHBSC base address */
  #define AHBSC_BASE                               (0x40120000u)
  /** Peripheral AHBSC base pointer */
  #define AHBSC                                    ((AHBSC_Type *)AHBSC_BASE)
  /** Peripheral AHBSC_ALIAS1 base address */
  #define AHBSC_ALIAS1_BASE                        (0x40121000u)
  /** Peripheral AHBSC_ALIAS1 base pointer */
  #define AHBSC_ALIAS1                             ((AHBSC_Type *)AHBSC_ALIAS1_BASE)
  /** Peripheral AHBSC_ALIAS2 base address */
  #define AHBSC_ALIAS2_BASE                        (0x40122000u)
  /** Peripheral AHBSC_ALIAS2 base pointer */
  #define AHBSC_ALIAS2                             ((AHBSC_Type *)AHBSC_ALIAS2_BASE)
  /** Peripheral AHBSC_ALIAS3 base address */
  #define AHBSC_ALIAS3_BASE                        (0x40123000u)
  /** Peripheral AHBSC_ALIAS3 base pointer */
  #define AHBSC_ALIAS3                             ((AHBSC_Type *)AHBSC_ALIAS3_BASE)
  /** Array initializer of AHBSC peripheral base addresses */
  #define AHBSC_BASE_ADDRS                         { AHBSC_BASE, AHBSC_ALIAS1_BASE, AHBSC_ALIAS2_BASE, AHBSC_ALIAS3_BASE }
  /** Array initializer of AHBSC peripheral base pointers */
  #define AHBSC_BASE_PTRS                          { AHBSC, AHBSC_ALIAS1, AHBSC_ALIAS2, AHBSC_ALIAS3 }
#endif

/* CAN - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral CAN0 base address */
  #define CAN0_BASE                                (0x500D4000u)
  /** Peripheral CAN0 base address */
  #define CAN0_BASE_NS                             (0x400D4000u)
  /** Peripheral CAN0 base pointer */
  #define CAN0                                     ((CAN_Type *)CAN0_BASE)
  /** Peripheral CAN0 base pointer */
  #define CAN0_NS                                  ((CAN_Type *)CAN0_BASE_NS)
  /** Peripheral CAN1 base address */
  #define CAN1_BASE                                (0x500D8000u)
  /** Peripheral CAN1 base address */
  #define CAN1_BASE_NS                             (0x400D8000u)
  /** Peripheral CAN1 base pointer */
  #define CAN1                                     ((CAN_Type *)CAN1_BASE)
  /** Peripheral CAN1 base pointer */
  #define CAN1_NS                                  ((CAN_Type *)CAN1_BASE_NS)
  /** Array initializer of CAN peripheral base addresses */
  #define CAN_BASE_ADDRS                           { CAN0_BASE, CAN1_BASE }
  /** Array initializer of CAN peripheral base pointers */
  #define CAN_BASE_PTRS                            { CAN0, CAN1 }
  /** Array initializer of CAN peripheral base addresses */
  #define CAN_BASE_ADDRS_NS                        { CAN0_BASE_NS, CAN1_BASE_NS }
  /** Array initializer of CAN peripheral base pointers */
  #define CAN_BASE_PTRS_NS                         { CAN0_NS, CAN1_NS }
#else
  /** Peripheral CAN0 base address */
  #define CAN0_BASE                                (0x400D4000u)
  /** Peripheral CAN0 base pointer */
  #define CAN0                                     ((CAN_Type *)CAN0_BASE)
  /** Peripheral CAN1 base address */
  #define CAN1_BASE                                (0x400D8000u)
  /** Peripheral CAN1 base pointer */
  #define CAN1                                     ((CAN_Type *)CAN1_BASE)
  /** Array initializer of CAN peripheral base addresses */
  #define CAN_BASE_ADDRS                           { CAN0_BASE, CAN1_BASE }
  /** Array initializer of CAN peripheral base pointers */
  #define CAN_BASE_PTRS                            { CAN0, CAN1 }
#endif
/** Interrupt vectors for the CAN peripheral type */
#define CAN_Rx_Warning_IRQS                      { CAN0_IRQn, CAN1_IRQn }
#define CAN_Tx_Warning_IRQS                      { CAN0_IRQn, CAN1_IRQn }
#define CAN_Wake_Up_IRQS                         { CAN0_IRQn, CAN1_IRQn }
#define CAN_Error_IRQS                           { CAN0_IRQn, CAN1_IRQn }
#define CAN_Bus_Off_IRQS                         { CAN0_IRQn, CAN1_IRQn }
#define CAN_ORed_Message_buffer_IRQS             { CAN0_IRQn, CAN1_IRQn }

/* CDOG - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral CDOG0 base address */
  #define CDOG0_BASE                               (0x500BB000u)
  /** Peripheral CDOG0 base address */
  #define CDOG0_BASE_NS                            (0x400BB000u)
  /** Peripheral CDOG0 base pointer */
  #define CDOG0                                    ((CDOG_Type *)CDOG0_BASE)
  /** Peripheral CDOG0 base pointer */
  #define CDOG0_NS                                 ((CDOG_Type *)CDOG0_BASE_NS)
  /** Peripheral CDOG1 base address */
  #define CDOG1_BASE                               (0x500BC000u)
  /** Peripheral CDOG1 base address */
  #define CDOG1_BASE_NS                            (0x400BC000u)
  /** Peripheral CDOG1 base pointer */
  #define CDOG1                                    ((CDOG_Type *)CDOG1_BASE)
  /** Peripheral CDOG1 base pointer */
  #define CDOG1_NS                                 ((CDOG_Type *)CDOG1_BASE_NS)
  /** Array initializer of CDOG peripheral base addresses */
  #define CDOG_BASE_ADDRS                          { CDOG0_BASE, CDOG1_BASE }
  /** Array initializer of CDOG peripheral base pointers */
  #define CDOG_BASE_PTRS                           { CDOG0, CDOG1 }
  /** Array initializer of CDOG peripheral base addresses */
  #define CDOG_BASE_ADDRS_NS                       { CDOG0_BASE_NS, CDOG1_BASE_NS }
  /** Array initializer of CDOG peripheral base pointers */
  #define CDOG_BASE_PTRS_NS                        { CDOG0_NS, CDOG1_NS }
#else
  /** Peripheral CDOG0 base address */
  #define CDOG0_BASE                               (0x400BB000u)
  /** Peripheral CDOG0 base pointer */
  #define CDOG0                                    ((CDOG_Type *)CDOG0_BASE)
  /** Peripheral CDOG1 base address */
  #define CDOG1_BASE                               (0x400BC000u)
  /** Peripheral CDOG1 base pointer */
  #define CDOG1                                    ((CDOG_Type *)CDOG1_BASE)
  /** Array initializer of CDOG peripheral base addresses */
  #define CDOG_BASE_ADDRS                          { CDOG0_BASE, CDOG1_BASE }
  /** Array initializer of CDOG peripheral base pointers */
  #define CDOG_BASE_PTRS                           { CDOG0, CDOG1 }
#endif
/** Interrupt vectors for the CDOG peripheral type */
#define CDOG_IRQS                                { CDOG0_IRQn, CDOG1_IRQn }

/* CMC - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral CMC0 base address */
  #define CMC0_BASE                                (0x50048000u)
  /** Peripheral CMC0 base address */
  #define CMC0_BASE_NS                             (0x40048000u)
  /** Peripheral CMC0 base pointer */
  #define CMC0                                     ((CMC_Type *)CMC0_BASE)
  /** Peripheral CMC0 base pointer */
  #define CMC0_NS                                  ((CMC_Type *)CMC0_BASE_NS)
  /** Array initializer of CMC peripheral base addresses */
  #define CMC_BASE_ADDRS                           { CMC0_BASE }
  /** Array initializer of CMC peripheral base pointers */
  #define CMC_BASE_PTRS                            { CMC0 }
  /** Array initializer of CMC peripheral base addresses */
  #define CMC_BASE_ADDRS_NS                        { CMC0_BASE_NS }
  /** Array initializer of CMC peripheral base pointers */
  #define CMC_BASE_PTRS_NS                         { CMC0_NS }
#else
  /** Peripheral CMC0 base address */
  #define CMC0_BASE                                (0x40048000u)
  /** Peripheral CMC0 base pointer */
  #define CMC0                                     ((CMC_Type *)CMC0_BASE)
  /** Array initializer of CMC peripheral base addresses */
  #define CMC_BASE_ADDRS                           { CMC0_BASE }
  /** Array initializer of CMC peripheral base pointers */
  #define CMC_BASE_PTRS                            { CMC0 }
#endif

/* CRC - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral CRC0 base address */
  #define CRC0_BASE                                (0x500CB000u)
  /** Peripheral CRC0 base address */
  #define CRC0_BASE_NS                             (0x400CB000u)
  /** Peripheral CRC0 base pointer */
  #define CRC0                                     ((CRC_Type *)CRC0_BASE)
  /** Peripheral CRC0 base pointer */
  #define CRC0_NS                                  ((CRC_Type *)CRC0_BASE_NS)
  /** Array initializer of CRC peripheral base addresses */
  #define CRC_BASE_ADDRS                           { CRC0_BASE }
  /** Array initializer of CRC peripheral base pointers */
  #define CRC_BASE_PTRS                            { CRC0 }
  /** Array initializer of CRC peripheral base addresses */
  #define CRC_BASE_ADDRS_NS                        { CRC0_BASE_NS }
  /** Array initializer of CRC peripheral base pointers */
  #define CRC_BASE_PTRS_NS                         { CRC0_NS }
#else
  /** Peripheral CRC0 base address */
  #define CRC0_BASE                                (0x400CB000u)
  /** Peripheral CRC0 base pointer */
  #define CRC0                                     ((CRC_Type *)CRC0_BASE)
  /** Array initializer of CRC peripheral base addresses */
  #define CRC_BASE_ADDRS                           { CRC0_BASE }
  /** Array initializer of CRC peripheral base pointers */
  #define CRC_BASE_PTRS                            { CRC0 }
#endif

/* CTIMER - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral CTIMER0 base address */
  #define CTIMER0_BASE                             (0x5000C000u)
  /** Peripheral CTIMER0 base address */
  #define CTIMER0_BASE_NS                          (0x4000C000u)
  /** Peripheral CTIMER0 base pointer */
  #define CTIMER0                                  ((CTIMER_Type *)CTIMER0_BASE)
  /** Peripheral CTIMER0 base pointer */
  #define CTIMER0_NS                               ((CTIMER_Type *)CTIMER0_BASE_NS)
  /** Peripheral CTIMER1 base address */
  #define CTIMER1_BASE                             (0x5000D000u)
  /** Peripheral CTIMER1 base address */
  #define CTIMER1_BASE_NS                          (0x4000D000u)
  /** Peripheral CTIMER1 base pointer */
  #define CTIMER1                                  ((CTIMER_Type *)CTIMER1_BASE)
  /** Peripheral CTIMER1 base pointer */
  #define CTIMER1_NS                               ((CTIMER_Type *)CTIMER1_BASE_NS)
  /** Peripheral CTIMER2 base address */
  #define CTIMER2_BASE                             (0x5000E000u)
  /** Peripheral CTIMER2 base address */
  #define CTIMER2_BASE_NS                          (0x4000E000u)
  /** Peripheral CTIMER2 base pointer */
  #define CTIMER2                                  ((CTIMER_Type *)CTIMER2_BASE)
  /** Peripheral CTIMER2 base pointer */
  #define CTIMER2_NS                               ((CTIMER_Type *)CTIMER2_BASE_NS)
  /** Peripheral CTIMER3 base address */
  #define CTIMER3_BASE                             (0x5000F000u)
  /** Peripheral CTIMER3 base address */
  #define CTIMER3_BASE_NS                          (0x4000F000u)
  /** Peripheral CTIMER3 base pointer */
  #define CTIMER3                                  ((CTIMER_Type *)CTIMER3_BASE)
  /** Peripheral CTIMER3 base pointer */
  #define CTIMER3_NS                               ((CTIMER_Type *)CTIMER3_BASE_NS)
  /** Peripheral CTIMER4 base address */
  #define CTIMER4_BASE                             (0x50010000u)
  /** Peripheral CTIMER4 base address */
  #define CTIMER4_BASE_NS                          (0x40010000u)
  /** Peripheral CTIMER4 base pointer */
  #define CTIMER4                                  ((CTIMER_Type *)CTIMER4_BASE)
  /** Peripheral CTIMER4 base pointer */
  #define CTIMER4_NS                               ((CTIMER_Type *)CTIMER4_BASE_NS)
  /** Array initializer of CTIMER peripheral base addresses */
  #define CTIMER_BASE_ADDRS                        { CTIMER0_BASE, CTIMER1_BASE, CTIMER2_BASE, CTIMER3_BASE, CTIMER4_BASE }
  /** Array initializer of CTIMER peripheral base pointers */
  #define CTIMER_BASE_PTRS                         { CTIMER0, CTIMER1, CTIMER2, CTIMER3, CTIMER4 }
  /** Array initializer of CTIMER peripheral base addresses */
  #define CTIMER_BASE_ADDRS_NS                     { CTIMER0_BASE_NS, CTIMER1_BASE_NS, CTIMER2_BASE_NS, CTIMER3_BASE_NS, CTIMER4_BASE_NS }
  /** Array initializer of CTIMER peripheral base pointers */
  #define CTIMER_BASE_PTRS_NS                      { CTIMER0_NS, CTIMER1_NS, CTIMER2_NS, CTIMER3_NS, CTIMER4_NS }
#else
  /** Peripheral CTIMER0 base address */
  #define CTIMER0_BASE                             (0x4000C000u)
  /** Peripheral CTIMER0 base pointer */
  #define CTIMER0                                  ((CTIMER_Type *)CTIMER0_BASE)
  /** Peripheral CTIMER1 base address */
  #define CTIMER1_BASE                             (0x4000D000u)
  /** Peripheral CTIMER1 base pointer */
  #define CTIMER1                                  ((CTIMER_Type *)CTIMER1_BASE)
  /** Peripheral CTIMER2 base address */
  #define CTIMER2_BASE                             (0x4000E000u)
  /** Peripheral CTIMER2 base pointer */
  #define CTIMER2                                  ((CTIMER_Type *)CTIMER2_BASE)
  /** Peripheral CTIMER3 base address */
  #define CTIMER3_BASE                             (0x4000F000u)
  /** Peripheral CTIMER3 base pointer */
  #define CTIMER3                                  ((CTIMER_Type *)CTIMER3_BASE)
  /** Peripheral CTIMER4 base address */
  #define CTIMER4_BASE                             (0x40010000u)
  /** Peripheral CTIMER4 base pointer */
  #define CTIMER4                                  ((CTIMER_Type *)CTIMER4_BASE)
  /** Array initializer of CTIMER peripheral base addresses */
  #define CTIMER_BASE_ADDRS                        { CTIMER0_BASE, CTIMER1_BASE, CTIMER2_BASE, CTIMER3_BASE, CTIMER4_BASE }
  /** Array initializer of CTIMER peripheral base pointers */
  #define CTIMER_BASE_PTRS                         { CTIMER0, CTIMER1, CTIMER2, CTIMER3, CTIMER4 }
#endif
/** Interrupt vectors for the CTIMER peripheral type */
#define CTIMER_IRQS                              { CTIMER0_IRQn, CTIMER1_IRQn, CTIMER2_IRQn, CTIMER3_IRQn, CTIMER4_IRQn }

/* DIGTMP - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral TDET0 base address */
  #define TDET0_BASE                               (0x50058000u)
  /** Peripheral TDET0 base address */
  #define TDET0_BASE_NS                            (0x40058000u)
  /** Peripheral TDET0 base pointer */
  #define TDET0                                    ((DIGTMP_Type *)TDET0_BASE)
  /** Peripheral TDET0 base pointer */
  #define TDET0_NS                                 ((DIGTMP_Type *)TDET0_BASE_NS)
  /** Array initializer of DIGTMP peripheral base addresses */
  #define DIGTMP_BASE_ADDRS                        { TDET0_BASE }
  /** Array initializer of DIGTMP peripheral base pointers */
  #define DIGTMP_BASE_PTRS                         { TDET0 }
  /** Array initializer of DIGTMP peripheral base addresses */
  #define DIGTMP_BASE_ADDRS_NS                     { TDET0_BASE_NS }
  /** Array initializer of DIGTMP peripheral base pointers */
  #define DIGTMP_BASE_PTRS_NS                      { TDET0_NS }
#else
  /** Peripheral TDET0 base address */
  #define TDET0_BASE                               (0x40058000u)
  /** Peripheral TDET0 base pointer */
  #define TDET0                                    ((DIGTMP_Type *)TDET0_BASE)
  /** Array initializer of DIGTMP peripheral base addresses */
  #define DIGTMP_BASE_ADDRS                        { TDET0_BASE }
  /** Array initializer of DIGTMP peripheral base pointers */
  #define DIGTMP_BASE_PTRS                         { TDET0 }
#endif

/* DM - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral DM0 base address */
  #define DM0_BASE                                 (0x500BD000u)
  /** Peripheral DM0 base address */
  #define DM0_BASE_NS                              (0x400BD000u)
  /** Peripheral DM0 base pointer */
  #define DM0                                      ((DM_Type *)DM0_BASE)
  /** Peripheral DM0 base pointer */
  #define DM0_NS                                   ((DM_Type *)DM0_BASE_NS)
  /** Array initializer of DM peripheral base addresses */
  #define DM_BASE_ADDRS                            { DM0_BASE }
  /** Array initializer of DM peripheral base pointers */
  #define DM_BASE_PTRS                             { DM0 }
  /** Array initializer of DM peripheral base addresses */
  #define DM_BASE_ADDRS_NS                         { DM0_BASE_NS }
  /** Array initializer of DM peripheral base pointers */
  #define DM_BASE_PTRS_NS                          { DM0_NS }
#else
  /** Peripheral DM0 base address */
  #define DM0_BASE                                 (0x400BD000u)
  /** Peripheral DM0 base pointer */
  #define DM0                                      ((DM_Type *)DM0_BASE)
  /** Array initializer of DM peripheral base addresses */
  #define DM_BASE_ADDRS                            { DM0_BASE }
  /** Array initializer of DM peripheral base pointers */
  #define DM_BASE_PTRS                             { DM0 }
#endif

/* DMA - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral DMA0 base address */
  #define DMA0_BASE                                (0x50080000u)
  /** Peripheral DMA0 base address */
  #define DMA0_BASE_NS                             (0x40080000u)
  /** Peripheral DMA0 base pointer */
  #define DMA0                                     ((DMA_Type *)DMA0_BASE)
  /** Peripheral DMA0 base pointer */
  #define DMA0_NS                                  ((DMA_Type *)DMA0_BASE_NS)
  /** Peripheral DMA1 base address */
  #define DMA1_BASE                                (0x500A0000u)
  /** Peripheral DMA1 base address */
  #define DMA1_BASE_NS                             (0x400A0000u)
  /** Peripheral DMA1 base pointer */
  #define DMA1                                     ((DMA_Type *)DMA1_BASE)
  /** Peripheral DMA1 base pointer */
  #define DMA1_NS                                  ((DMA_Type *)DMA1_BASE_NS)
  /** Array initializer of DMA peripheral base addresses */
  #define DMA_BASE_ADDRS                           { DMA0_BASE, DMA1_BASE }
  /** Array initializer of DMA peripheral base pointers */
  #define DMA_BASE_PTRS                            { DMA0, DMA1 }
  /** Array initializer of DMA peripheral base addresses */
  #define DMA_BASE_ADDRS_NS                        { DMA0_BASE_NS, DMA1_BASE_NS }
  /** Array initializer of DMA peripheral base pointers */
  #define DMA_BASE_PTRS_NS                         { DMA0_NS, DMA1_NS }
#else
  /** Peripheral DMA0 base address */
  #define DMA0_BASE                                (0x40080000u)
  /** Peripheral DMA0 base pointer */
  #define DMA0                                     ((DMA_Type *)DMA0_BASE)
  /** Peripheral DMA1 base address */
  #define DMA1_BASE                                (0x400A0000u)
  /** Peripheral DMA1 base pointer */
  #define DMA1                                     ((DMA_Type *)DMA1_BASE)
  /** Array initializer of DMA peripheral base addresses */
  #define DMA_BASE_ADDRS                           { DMA0_BASE, DMA1_BASE }
  /** Array initializer of DMA peripheral base pointers */
  #define DMA_BASE_PTRS                            { DMA0, DMA1 }
#endif
/** Interrupt vectors for the DMA peripheral type */
#define DMA_IRQS                                 { { EDMA_0_CH0_IRQn, EDMA_0_CH1_IRQn, EDMA_0_CH2_IRQn, EDMA_0_CH3_IRQn, EDMA_0_CH4_IRQn, EDMA_0_CH5_IRQn, EDMA_0_CH6_IRQn, EDMA_0_CH7_IRQn, EDMA_0_CH8_IRQn, EDMA_0_CH9_IRQn, EDMA_0_CH10_IRQn, EDMA_0_CH11_IRQn, EDMA_0_CH12_IRQn, EDMA_0_CH13_IRQn, EDMA_0_CH14_IRQn, EDMA_0_CH15_IRQn }, \
                                                   { EDMA_1_CH0_IRQn, EDMA_1_CH1_IRQn, EDMA_1_CH2_IRQn, EDMA_1_CH3_IRQn, EDMA_1_CH4_IRQn, EDMA_1_CH5_IRQn, EDMA_1_CH6_IRQn, EDMA_1_CH7_IRQn, NotAvail_IRQn, NotAvail_IRQn, NotAvail_IRQn, NotAvail_IRQn, NotAvail_IRQn, NotAvail_IRQn, NotAvail_IRQn, NotAvail_IRQn } }

/* EIM - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral EIM0 base address */
  #define EIM0_BASE                                (0x5005B000u)
  /** Peripheral EIM0 base address */
  #define EIM0_BASE_NS                             (0x4005B000u)
  /** Peripheral EIM0 base pointer */
  #define EIM0                                     ((EIM_Type *)EIM0_BASE)
  /** Peripheral EIM0 base pointer */
  #define EIM0_NS                                  ((EIM_Type *)EIM0_BASE_NS)
  /** Array initializer of EIM peripheral base addresses */
  #define EIM_BASE_ADDRS                           { EIM0_BASE }
  /** Array initializer of EIM peripheral base pointers */
  #define EIM_BASE_PTRS                            { EIM0 }
  /** Array initializer of EIM peripheral base addresses */
  #define EIM_BASE_ADDRS_NS                        { EIM0_BASE_NS }
  /** Array initializer of EIM peripheral base pointers */
  #define EIM_BASE_PTRS_NS                         { EIM0_NS }
#else
  /** Peripheral EIM0 base address */
  #define EIM0_BASE                                (0x4005B000u)
  /** Peripheral EIM0 base pointer */
  #define EIM0                                     ((EIM_Type *)EIM0_BASE)
  /** Array initializer of EIM peripheral base addresses */
  #define EIM_BASE_ADDRS                           { EIM0_BASE }
  /** Array initializer of EIM peripheral base pointers */
  #define EIM_BASE_PTRS                            { EIM0 }
#endif

/* ERM - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral ERM0 base address */
  #define ERM0_BASE                                (0x5005C000u)
  /** Peripheral ERM0 base address */
  #define ERM0_BASE_NS                             (0x4005C000u)
  /** Peripheral ERM0 base pointer */
  #define ERM0                                     ((ERM_Type *)ERM0_BASE)
  /** Peripheral ERM0 base pointer */
  #define ERM0_NS                                  ((ERM_Type *)ERM0_BASE_NS)
  /** Array initializer of ERM peripheral base addresses */
  #define ERM_BASE_ADDRS                           { ERM0_BASE }
  /** Array initializer of ERM peripheral base pointers */
  #define ERM_BASE_PTRS                            { ERM0 }
  /** Array initializer of ERM peripheral base addresses */
  #define ERM_BASE_ADDRS_NS                        { ERM0_BASE_NS }
  /** Array initializer of ERM peripheral base pointers */
  #define ERM_BASE_PTRS_NS                         { ERM0_NS }
#else
  /** Peripheral ERM0 base address */
  #define ERM0_BASE                                (0x4005C000u)
  /** Peripheral ERM0 base pointer */
  #define ERM0                                     ((ERM_Type *)ERM0_BASE)
  /** Array initializer of ERM peripheral base addresses */
  #define ERM_BASE_ADDRS                           { ERM0_BASE }
  /** Array initializer of ERM peripheral base pointers */
  #define ERM_BASE_PTRS                            { ERM0 }
#endif

/* EVTG - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral EVTG0 base address */
  #define EVTG0_BASE                               (0x500D2000u)
  /** Peripheral EVTG0 base address */
  #define EVTG0_BASE_NS                            (0x400D2000u)
  /** Peripheral EVTG0 base pointer */
  #define EVTG0                                    ((EVTG_Type *)EVTG0_BASE)
  /** Peripheral EVTG0 base pointer */
  #define EVTG0_NS                                 ((EVTG_Type *)EVTG0_BASE_NS)
  /** Array initializer of EVTG peripheral base addresses */
  #define EVTG_BASE_ADDRS                          { EVTG0_BASE }
  /** Array initializer of EVTG peripheral base pointers */
  #define EVTG_BASE_PTRS                           { EVTG0 }
  /** Array initializer of EVTG peripheral base addresses */
  #define EVTG_BASE_ADDRS_NS                       { EVTG0_BASE_NS }
  /** Array initializer of EVTG peripheral base pointers */
  #define EVTG_BASE_PTRS_NS                        { EVTG0_NS }
#else
  /** Peripheral EVTG0 base address */
  #define EVTG0_BASE                               (0x400D2000u)
  /** Peripheral EVTG0 base pointer */
  #define EVTG0                                    ((EVTG_Type *)EVTG0_BASE)
  /** Array initializer of EVTG peripheral base addresses */
  #define EVTG_BASE_ADDRS                          { EVTG0_BASE }
  /** Array initializer of EVTG peripheral base pointers */
  #define EVTG_BASE_PTRS                           { EVTG0 }
#endif

/* EWM - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral EWM0 base address */
  #define EWM0_BASE                                (0x500C0000u)
  /** Peripheral EWM0 base address */
  #define EWM0_BASE_NS                             (0x400C0000u)
  /** Peripheral EWM0 base pointer */
  #define EWM0                                     ((EWM_Type *)EWM0_BASE)
  /** Peripheral EWM0 base pointer */
  #define EWM0_NS                                  ((EWM_Type *)EWM0_BASE_NS)
  /** Array initializer of EWM peripheral base addresses */
  #define EWM_BASE_ADDRS                           { EWM0_BASE }
  /** Array initializer of EWM peripheral base pointers */
  #define EWM_BASE_PTRS                            { EWM0 }
  /** Array initializer of EWM peripheral base addresses */
  #define EWM_BASE_ADDRS_NS                        { EWM0_BASE_NS }
  /** Array initializer of EWM peripheral base pointers */
  #define EWM_BASE_PTRS_NS                         { EWM0_NS }
#else
  /** Peripheral EWM0 base address */
  #define EWM0_BASE                                (0x400C0000u)
  /** Peripheral EWM0 base pointer */
  #define EWM0                                     ((EWM_Type *)EWM0_BASE)
  /** Array initializer of EWM peripheral base addresses */
  #define EWM_BASE_ADDRS                           { EWM0_BASE }
  /** Array initializer of EWM peripheral base pointers */
  #define EWM_BASE_PTRS                            { EWM0 }
#endif
/** Interrupt vectors for the EWM peripheral type */
#define EWM_IRQS                                 { EWM0_IRQn }

/* FLEXIO - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral FLEXIO0 base address */
  #define FLEXIO0_BASE                             (0x50105000u)
  /** Peripheral FLEXIO0 base address */
  #define FLEXIO0_BASE_NS                          (0x40105000u)
  /** Peripheral FLEXIO0 base pointer */
  #define FLEXIO0                                  ((FLEXIO_Type *)FLEXIO0_BASE)
  /** Peripheral FLEXIO0 base pointer */
  #define FLEXIO0_NS                               ((FLEXIO_Type *)FLEXIO0_BASE_NS)
  /** Array initializer of FLEXIO peripheral base addresses */
  #define FLEXIO_BASE_ADDRS                        { FLEXIO0_BASE }
  /** Array initializer of FLEXIO peripheral base pointers */
  #define FLEXIO_BASE_PTRS                         { FLEXIO0 }
  /** Array initializer of FLEXIO peripheral base addresses */
  #define FLEXIO_BASE_ADDRS_NS                     { FLEXIO0_BASE_NS }
  /** Array initializer of FLEXIO peripheral base pointers */
  #define FLEXIO_BASE_PTRS_NS                      { FLEXIO0_NS }
#else
  /** Peripheral FLEXIO0 base address */
  #define FLEXIO0_BASE                             (0x40105000u)
  /** Peripheral FLEXIO0 base pointer */
  #define FLEXIO0                                  ((FLEXIO_Type *)FLEXIO0_BASE)
  /** Array initializer of FLEXIO peripheral base addresses */
  #define FLEXIO_BASE_ADDRS                        { FLEXIO0_BASE }
  /** Array initializer of FLEXIO peripheral base pointers */
  #define FLEXIO_BASE_PTRS                         { FLEXIO0 }
#endif
/** Interrupt vectors for the FLEXIO peripheral type */
#define FLEXIO_IRQS                              { FLEXIO_IRQn }

/* FMU - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral FMU0 base address */
  #define FMU0_BASE                                (0x50043000u)
  /** Peripheral FMU0 base address */
  #define FMU0_BASE_NS                             (0x40043000u)
  /** Peripheral FMU0 base pointer */
  #define FMU0                                     ((FMU_Type *)FMU0_BASE)
  /** Peripheral FMU0 base pointer */
  #define FMU0_NS                                  ((FMU_Type *)FMU0_BASE_NS)
  /** Array initializer of FMU peripheral base addresses */
  #define FMU_BASE_ADDRS                           { FMU0_BASE }
  /** Array initializer of FMU peripheral base pointers */
  #define FMU_BASE_PTRS                            { FMU0 }
  /** Array initializer of FMU peripheral base addresses */
  #define FMU_BASE_ADDRS_NS                        { FMU0_BASE_NS }
  /** Array initializer of FMU peripheral base pointers */
  #define FMU_BASE_PTRS_NS                         { FMU0_NS }
#else
  /** Peripheral FMU0 base address */
  #define FMU0_BASE                                (0x40043000u)
  /** Peripheral FMU0 base pointer */
  #define FMU0                                     ((FMU_Type *)FMU0_BASE)
  /** Array initializer of FMU peripheral base addresses */
  #define FMU_BASE_ADDRS                           { FMU0_BASE }
  /** Array initializer of FMU peripheral base pointers */
  #define FMU_BASE_PTRS                            { FMU0 }
#endif

/* FMUTEST - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral FMU0TEST base address */
  #define FMU0TEST_BASE                            (0x50043000u)
  /** Peripheral FMU0TEST base address */
  #define FMU0TEST_BASE_NS                         (0x40043000u)
  /** Peripheral FMU0TEST base pointer */
  #define FMU0TEST                                 ((FMUTEST_Type *)FMU0TEST_BASE)
  /** Peripheral FMU0TEST base pointer */
  #define FMU0TEST_NS                              ((FMUTEST_Type *)FMU0TEST_BASE_NS)
  /** Array initializer of FMUTEST peripheral base addresses */
  #define FMUTEST_BASE_ADDRS                       { FMU0TEST_BASE }
  /** Array initializer of FMUTEST peripheral base pointers */
  #define FMUTEST_BASE_PTRS                        { FMU0TEST }
  /** Array initializer of FMUTEST peripheral base addresses */
  #define FMUTEST_BASE_ADDRS_NS                    { FMU0TEST_BASE_NS }
  /** Array initializer of FMUTEST peripheral base pointers */
  #define FMUTEST_BASE_PTRS_NS                     { FMU0TEST_NS }
#else
  /** Peripheral FMU0TEST base address */
  #define FMU0TEST_BASE                            (0x40043000u)
  /** Peripheral FMU0TEST base pointer */
  #define FMU0TEST                                 ((FMUTEST_Type *)FMU0TEST_BASE)
  /** Array initializer of FMUTEST peripheral base addresses */
  #define FMUTEST_BASE_ADDRS                       { FMU0TEST_BASE }
  /** Array initializer of FMUTEST peripheral base pointers */
  #define FMUTEST_BASE_PTRS                        { FMU0TEST }
#endif

/* FREQME - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral FREQME0 base address */
  #define FREQME0_BASE                             (0x50011000u)
  /** Peripheral FREQME0 base address */
  #define FREQME0_BASE_NS                          (0x40011000u)
  /** Peripheral FREQME0 base pointer */
  #define FREQME0                                  ((FREQME_Type *)FREQME0_BASE)
  /** Peripheral FREQME0 base pointer */
  #define FREQME0_NS                               ((FREQME_Type *)FREQME0_BASE_NS)
  /** Array initializer of FREQME peripheral base addresses */
  #define FREQME_BASE_ADDRS                        { FREQME0_BASE }
  /** Array initializer of FREQME peripheral base pointers */
  #define FREQME_BASE_PTRS                         { FREQME0 }
  /** Array initializer of FREQME peripheral base addresses */
  #define FREQME_BASE_ADDRS_NS                     { FREQME0_BASE_NS }
  /** Array initializer of FREQME peripheral base pointers */
  #define FREQME_BASE_PTRS_NS                      { FREQME0_NS }
#else
  /** Peripheral FREQME0 base address */
  #define FREQME0_BASE                             (0x40011000u)
  /** Peripheral FREQME0 base pointer */
  #define FREQME0                                  ((FREQME_Type *)FREQME0_BASE)
  /** Array initializer of FREQME peripheral base addresses */
  #define FREQME_BASE_ADDRS                        { FREQME0_BASE }
  /** Array initializer of FREQME peripheral base pointers */
  #define FREQME_BASE_PTRS                         { FREQME0 }
#endif
/** Interrupt vectors for the FREQME peripheral type */
#define FREQME_IRQS                              { Freqme_IRQn }

/* GDET - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral GDET0 base address */
  #define GDET0_BASE                               (0x50024000u)
  /** Peripheral GDET0 base address */
  #define GDET0_BASE_NS                            (0x40024000u)
  /** Peripheral GDET0 base pointer */
  #define GDET0                                    ((GDET_Type *)GDET0_BASE)
  /** Peripheral GDET0 base pointer */
  #define GDET0_NS                                 ((GDET_Type *)GDET0_BASE_NS)
  /** Peripheral GDET1 base address */
  #define GDET1_BASE                               (0x50025000u)
  /** Peripheral GDET1 base address */
  #define GDET1_BASE_NS                            (0x40025000u)
  /** Peripheral GDET1 base pointer */
  #define GDET1                                    ((GDET_Type *)GDET1_BASE)
  /** Peripheral GDET1 base pointer */
  #define GDET1_NS                                 ((GDET_Type *)GDET1_BASE_NS)
  /** Array initializer of GDET peripheral base addresses */
  #define GDET_BASE_ADDRS                          { GDET0_BASE, GDET1_BASE }
  /** Array initializer of GDET peripheral base pointers */
  #define GDET_BASE_PTRS                           { GDET0, GDET1 }
  /** Array initializer of GDET peripheral base addresses */
  #define GDET_BASE_ADDRS_NS                       { GDET0_BASE_NS, GDET1_BASE_NS }
  /** Array initializer of GDET peripheral base pointers */
  #define GDET_BASE_PTRS_NS                        { GDET0_NS, GDET1_NS }
#else
  /** Peripheral GDET0 base address */
  #define GDET0_BASE                               (0x40024000u)
  /** Peripheral GDET0 base pointer */
  #define GDET0                                    ((GDET_Type *)GDET0_BASE)
  /** Peripheral GDET1 base address */
  #define GDET1_BASE                               (0x40025000u)
  /** Peripheral GDET1 base pointer */
  #define GDET1                                    ((GDET_Type *)GDET1_BASE)
  /** Array initializer of GDET peripheral base addresses */
  #define GDET_BASE_ADDRS                          { GDET0_BASE, GDET1_BASE }
  /** Array initializer of GDET peripheral base pointers */
  #define GDET_BASE_PTRS                           { GDET0, GDET1 }
#endif
/** Interrupt vectors for the GDET peripheral type */
#define GDET_IRQS                                { GDET_IRQn, GDET_IRQn }

/* GPIO - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral GPIO0 base address */
  #define GPIO0_BASE                               (0x50096000u)
  /** Peripheral GPIO0 base address */
  #define GPIO0_BASE_NS                            (0x40096000u)
  /** Peripheral GPIO0 base pointer */
  #define GPIO0                                    ((GPIO_Type *)GPIO0_BASE)
  /** Peripheral GPIO0 base pointer */
  #define GPIO0_NS                                 ((GPIO_Type *)GPIO0_BASE_NS)
  /** Peripheral GPIO1 base address */
  #define GPIO1_BASE                               (0x50098000u)
  /** Peripheral GPIO1 base address */
  #define GPIO1_BASE_NS                            (0x40098000u)
  /** Peripheral GPIO1 base pointer */
  #define GPIO1                                    ((GPIO_Type *)GPIO1_BASE)
  /** Peripheral GPIO1 base pointer */
  #define GPIO1_NS                                 ((GPIO_Type *)GPIO1_BASE_NS)
  /** Peripheral GPIO2 base address */
  #define GPIO2_BASE                               (0x5009A000u)
  /** Peripheral GPIO2 base address */
  #define GPIO2_BASE_NS                            (0x4009A000u)
  /** Peripheral GPIO2 base pointer */
  #define GPIO2                                    ((GPIO_Type *)GPIO2_BASE)
  /** Peripheral GPIO2 base pointer */
  #define GPIO2_NS                                 ((GPIO_Type *)GPIO2_BASE_NS)
  /** Peripheral GPIO3 base address */
  #define GPIO3_BASE                               (0x5009C000u)
  /** Peripheral GPIO3 base address */
  #define GPIO3_BASE_NS                            (0x4009C000u)
  /** Peripheral GPIO3 base pointer */
  #define GPIO3                                    ((GPIO_Type *)GPIO3_BASE)
  /** Peripheral GPIO3 base pointer */
  #define GPIO3_NS                                 ((GPIO_Type *)GPIO3_BASE_NS)
  /** Peripheral GPIO4 base address */
  #define GPIO4_BASE                               (0x5009E000u)
  /** Peripheral GPIO4 base address */
  #define GPIO4_BASE_NS                            (0x4009E000u)
  /** Peripheral GPIO4 base pointer */
  #define GPIO4                                    ((GPIO_Type *)GPIO4_BASE)
  /** Peripheral GPIO4 base pointer */
  #define GPIO4_NS                                 ((GPIO_Type *)GPIO4_BASE_NS)
  /** Peripheral GPIO5 base address */
  #define GPIO5_BASE                               (0x50040000u)
  /** Peripheral GPIO5 base address */
  #define GPIO5_BASE_NS                            (0x40040000u)
  /** Peripheral GPIO5 base pointer */
  #define GPIO5                                    ((GPIO_Type *)GPIO5_BASE)
  /** Peripheral GPIO5 base pointer */
  #define GPIO5_NS                                 ((GPIO_Type *)GPIO5_BASE_NS)
  /** Peripheral GPIO0_ALIAS1 base address */
  #define GPIO0_ALIAS1_BASE                        (0x50097000u)
  /** Peripheral GPIO0_ALIAS1 base address */
  #define GPIO0_ALIAS1_BASE_NS                     (0x40097000u)
  /** Peripheral GPIO0_ALIAS1 base pointer */
  #define GPIO0_ALIAS1                             ((GPIO_Type *)GPIO0_ALIAS1_BASE)
  /** Peripheral GPIO0_ALIAS1 base pointer */
  #define GPIO0_ALIAS1_NS                          ((GPIO_Type *)GPIO0_ALIAS1_BASE_NS)
  /** Peripheral GPIO1_ALIAS1 base address */
  #define GPIO1_ALIAS1_BASE                        (0x50099000u)
  /** Peripheral GPIO1_ALIAS1 base address */
  #define GPIO1_ALIAS1_BASE_NS                     (0x40099000u)
  /** Peripheral GPIO1_ALIAS1 base pointer */
  #define GPIO1_ALIAS1                             ((GPIO_Type *)GPIO1_ALIAS1_BASE)
  /** Peripheral GPIO1_ALIAS1 base pointer */
  #define GPIO1_ALIAS1_NS                          ((GPIO_Type *)GPIO1_ALIAS1_BASE_NS)
  /** Peripheral GPIO2_ALIAS1 base address */
  #define GPIO2_ALIAS1_BASE                        (0x5009B000u)
  /** Peripheral GPIO2_ALIAS1 base address */
  #define GPIO2_ALIAS1_BASE_NS                     (0x4009B000u)
  /** Peripheral GPIO2_ALIAS1 base pointer */
  #define GPIO2_ALIAS1                             ((GPIO_Type *)GPIO2_ALIAS1_BASE)
  /** Peripheral GPIO2_ALIAS1 base pointer */
  #define GPIO2_ALIAS1_NS                          ((GPIO_Type *)GPIO2_ALIAS1_BASE_NS)
  /** Peripheral GPIO3_ALIAS1 base address */
  #define GPIO3_ALIAS1_BASE                        (0x5009D000u)
  /** Peripheral GPIO3_ALIAS1 base address */
  #define GPIO3_ALIAS1_BASE_NS                     (0x4009D000u)
  /** Peripheral GPIO3_ALIAS1 base pointer */
  #define GPIO3_ALIAS1                             ((GPIO_Type *)GPIO3_ALIAS1_BASE)
  /** Peripheral GPIO3_ALIAS1 base pointer */
  #define GPIO3_ALIAS1_NS                          ((GPIO_Type *)GPIO3_ALIAS1_BASE_NS)
  /** Peripheral GPIO4_ALIAS1 base address */
  #define GPIO4_ALIAS1_BASE                        (0x5009F000u)
  /** Peripheral GPIO4_ALIAS1 base address */
  #define GPIO4_ALIAS1_BASE_NS                     (0x4009F000u)
  /** Peripheral GPIO4_ALIAS1 base pointer */
  #define GPIO4_ALIAS1                             ((GPIO_Type *)GPIO4_ALIAS1_BASE)
  /** Peripheral GPIO4_ALIAS1 base pointer */
  #define GPIO4_ALIAS1_NS                          ((GPIO_Type *)GPIO4_ALIAS1_BASE_NS)
  /** Peripheral GPIO5_ALIAS1 base address */
  #define GPIO5_ALIAS1_BASE                        (0x50041000u)
  /** Peripheral GPIO5_ALIAS1 base address */
  #define GPIO5_ALIAS1_BASE_NS                     (0x40041000u)
  /** Peripheral GPIO5_ALIAS1 base pointer */
  #define GPIO5_ALIAS1                             ((GPIO_Type *)GPIO5_ALIAS1_BASE)
  /** Peripheral GPIO5_ALIAS1 base pointer */
  #define GPIO5_ALIAS1_NS                          ((GPIO_Type *)GPIO5_ALIAS1_BASE_NS)
  /** Array initializer of GPIO peripheral base addresses */
  #define GPIO_BASE_ADDRS                          { GPIO0_BASE, GPIO1_BASE, GPIO2_BASE, GPIO3_BASE, GPIO4_BASE, GPIO5_BASE, GPIO0_ALIAS1_BASE, GPIO1_ALIAS1_BASE, GPIO2_ALIAS1_BASE, GPIO3_ALIAS1_BASE, GPIO4_ALIAS1_BASE, GPIO5_ALIAS1_BASE }
  /** Array initializer of GPIO peripheral base pointers */
  #define GPIO_BASE_PTRS                           { GPIO0, GPIO1, GPIO2, GPIO3, GPIO4, GPIO5, GPIO0_ALIAS1, GPIO1_ALIAS1, GPIO2_ALIAS1, GPIO3_ALIAS1, GPIO4_ALIAS1, GPIO5_ALIAS1 }
  /** Array initializer of GPIO peripheral base addresses */
  #define GPIO_BASE_ADDRS_NS                       { GPIO0_BASE_NS, GPIO1_BASE_NS, GPIO2_BASE_NS, GPIO3_BASE_NS, GPIO4_BASE_NS, GPIO5_BASE_NS, GPIO0_ALIAS1_BASE_NS, GPIO1_ALIAS1_BASE_NS, GPIO2_ALIAS1_BASE_NS, GPIO3_ALIAS1_BASE_NS, GPIO4_ALIAS1_BASE_NS, GPIO5_ALIAS1_BASE_NS }
  /** Array initializer of GPIO peripheral base pointers */
  #define GPIO_BASE_PTRS_NS                        { GPIO0_NS, GPIO1_NS, GPIO2_NS, GPIO3_NS, GPIO4_NS, GPIO5_NS, GPIO0_ALIAS1_NS, GPIO1_ALIAS1_NS, GPIO2_ALIAS1_NS, GPIO3_ALIAS1_NS, GPIO4_ALIAS1_NS, GPIO5_ALIAS1_NS }
#else
  /** Peripheral GPIO0 base address */
  #define GPIO0_BASE                               (0x40096000u)
  /** Peripheral GPIO0 base pointer */
  #define GPIO0                                    ((GPIO_Type *)GPIO0_BASE)
  /** Peripheral GPIO1 base address */
  #define GPIO1_BASE                               (0x40098000u)
  /** Peripheral GPIO1 base pointer */
  #define GPIO1                                    ((GPIO_Type *)GPIO1_BASE)
  /** Peripheral GPIO2 base address */
  #define GPIO2_BASE                               (0x4009A000u)
  /** Peripheral GPIO2 base pointer */
  #define GPIO2                                    ((GPIO_Type *)GPIO2_BASE)
  /** Peripheral GPIO3 base address */
  #define GPIO3_BASE                               (0x4009C000u)
  /** Peripheral GPIO3 base pointer */
  #define GPIO3                                    ((GPIO_Type *)GPIO3_BASE)
  /** Peripheral GPIO4 base address */
  #define GPIO4_BASE                               (0x4009E000u)
  /** Peripheral GPIO4 base pointer */
  #define GPIO4                                    ((GPIO_Type *)GPIO4_BASE)
  /** Peripheral GPIO5 base address */
  #define GPIO5_BASE                               (0x40040000u)
  /** Peripheral GPIO5 base pointer */
  #define GPIO5                                    ((GPIO_Type *)GPIO5_BASE)
  /** Peripheral GPIO0_ALIAS1 base address */
  #define GPIO0_ALIAS1_BASE                        (0x40097000u)
  /** Peripheral GPIO0_ALIAS1 base pointer */
  #define GPIO0_ALIAS1                             ((GPIO_Type *)GPIO0_ALIAS1_BASE)
  /** Peripheral GPIO1_ALIAS1 base address */
  #define GPIO1_ALIAS1_BASE                        (0x40099000u)
  /** Peripheral GPIO1_ALIAS1 base pointer */
  #define GPIO1_ALIAS1                             ((GPIO_Type *)GPIO1_ALIAS1_BASE)
  /** Peripheral GPIO2_ALIAS1 base address */
  #define GPIO2_ALIAS1_BASE                        (0x4009B000u)
  /** Peripheral GPIO2_ALIAS1 base pointer */
  #define GPIO2_ALIAS1                             ((GPIO_Type *)GPIO2_ALIAS1_BASE)
  /** Peripheral GPIO3_ALIAS1 base address */
  #define GPIO3_ALIAS1_BASE                        (0x4009D000u)
  /** Peripheral GPIO3_ALIAS1 base pointer */
  #define GPIO3_ALIAS1                             ((GPIO_Type *)GPIO3_ALIAS1_BASE)
  /** Peripheral GPIO4_ALIAS1 base address */
  #define GPIO4_ALIAS1_BASE                        (0x4009F000u)
  /** Peripheral GPIO4_ALIAS1 base pointer */
  #define GPIO4_ALIAS1                             ((GPIO_Type *)GPIO4_ALIAS1_BASE)
  /** Peripheral GPIO5_ALIAS1 base address */
  #define GPIO5_ALIAS1_BASE                        (0x40041000u)
  /** Peripheral GPIO5_ALIAS1 base pointer */
  #define GPIO5_ALIAS1                             ((GPIO_Type *)GPIO5_ALIAS1_BASE)
  /** Array initializer of GPIO peripheral base addresses */
  #define GPIO_BASE_ADDRS                          { GPIO0_BASE, GPIO1_BASE, GPIO2_BASE, GPIO3_BASE, GPIO4_BASE, GPIO5_BASE, GPIO0_ALIAS1_BASE, GPIO1_ALIAS1_BASE, GPIO2_ALIAS1_BASE, GPIO3_ALIAS1_BASE, GPIO4_ALIAS1_BASE, GPIO5_ALIAS1_BASE }
  /** Array initializer of GPIO peripheral base pointers */
  #define GPIO_BASE_PTRS                           { GPIO0, GPIO1, GPIO2, GPIO3, GPIO4, GPIO5, GPIO0_ALIAS1, GPIO1_ALIAS1, GPIO2_ALIAS1, GPIO3_ALIAS1, GPIO4_ALIAS1, GPIO5_ALIAS1 }
#endif

/* I2S - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral SAI0 base address */
  #define SAI0_BASE                                (0x50106000u)
  /** Peripheral SAI0 base address */
  #define SAI0_BASE_NS                             (0x40106000u)
  /** Peripheral SAI0 base pointer */
  #define SAI0                                     ((I2S_Type *)SAI0_BASE)
  /** Peripheral SAI0 base pointer */
  #define SAI0_NS                                  ((I2S_Type *)SAI0_BASE_NS)
  /** Peripheral SAI1 base address */
  #define SAI1_BASE                                (0x50107000u)
  /** Peripheral SAI1 base address */
  #define SAI1_BASE_NS                             (0x40107000u)
  /** Peripheral SAI1 base pointer */
  #define SAI1                                     ((I2S_Type *)SAI1_BASE)
  /** Peripheral SAI1 base pointer */
  #define SAI1_NS                                  ((I2S_Type *)SAI1_BASE_NS)
  /** Array initializer of I2S peripheral base addresses */
  #define I2S_BASE_ADDRS                           { SAI0_BASE, SAI1_BASE }
  /** Array initializer of I2S peripheral base pointers */
  #define I2S_BASE_PTRS                            { SAI0, SAI1 }
  /** Array initializer of I2S peripheral base addresses */
  #define I2S_BASE_ADDRS_NS                        { SAI0_BASE_NS, SAI1_BASE_NS }
  /** Array initializer of I2S peripheral base pointers */
  #define I2S_BASE_PTRS_NS                         { SAI0_NS, SAI1_NS }
#else
  /** Peripheral SAI0 base address */
  #define SAI0_BASE                                (0x40106000u)
  /** Peripheral SAI0 base pointer */
  #define SAI0                                     ((I2S_Type *)SAI0_BASE)
  /** Peripheral SAI1 base address */
  #define SAI1_BASE                                (0x40107000u)
  /** Peripheral SAI1 base pointer */
  #define SAI1                                     ((I2S_Type *)SAI1_BASE)
  /** Array initializer of I2S peripheral base addresses */
  #define I2S_BASE_ADDRS                           { SAI0_BASE, SAI1_BASE }
  /** Array initializer of I2S peripheral base pointers */
  #define I2S_BASE_PTRS                            { SAI0, SAI1 }
#endif
/** Interrupt vectors for the I2S peripheral type */
#define I2S_RX_IRQS                              { SAI0_IRQn, SAI1_IRQn }
#define I2S_TX_IRQS                              { SAI0_IRQn, SAI1_IRQn }

/* I3C - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral I3C0 base address */
  #define I3C0_BASE                                (0x50021000u)
  /** Peripheral I3C0 base address */
  #define I3C0_BASE_NS                             (0x40021000u)
  /** Peripheral I3C0 base pointer */
  #define I3C0                                     ((I3C_Type *)I3C0_BASE)
  /** Peripheral I3C0 base pointer */
  #define I3C0_NS                                  ((I3C_Type *)I3C0_BASE_NS)
  /** Peripheral I3C1 base address */
  #define I3C1_BASE                                (0x50022000u)
  /** Peripheral I3C1 base address */
  #define I3C1_BASE_NS                             (0x40022000u)
  /** Peripheral I3C1 base pointer */
  #define I3C1                                     ((I3C_Type *)I3C1_BASE)
  /** Peripheral I3C1 base pointer */
  #define I3C1_NS                                  ((I3C_Type *)I3C1_BASE_NS)
  /** Array initializer of I3C peripheral base addresses */
  #define I3C_BASE_ADDRS                           { I3C0_BASE, I3C1_BASE }
  /** Array initializer of I3C peripheral base pointers */
  #define I3C_BASE_PTRS                            { I3C0, I3C1 }
  /** Array initializer of I3C peripheral base addresses */
  #define I3C_BASE_ADDRS_NS                        { I3C0_BASE_NS, I3C1_BASE_NS }
  /** Array initializer of I3C peripheral base pointers */
  #define I3C_BASE_PTRS_NS                         { I3C0_NS, I3C1_NS }
#else
  /** Peripheral I3C0 base address */
  #define I3C0_BASE                                (0x40021000u)
  /** Peripheral I3C0 base pointer */
  #define I3C0                                     ((I3C_Type *)I3C0_BASE)
  /** Peripheral I3C1 base address */
  #define I3C1_BASE                                (0x40022000u)
  /** Peripheral I3C1 base pointer */
  #define I3C1                                     ((I3C_Type *)I3C1_BASE)
  /** Array initializer of I3C peripheral base addresses */
  #define I3C_BASE_ADDRS                           { I3C0_BASE, I3C1_BASE }
  /** Array initializer of I3C peripheral base pointers */
  #define I3C_BASE_PTRS                            { I3C0, I3C1 }
#endif
/** Interrupt vectors for the I3C peripheral type */
#define I3C_IRQS                                 { I3C0_IRQn, I3C1_IRQn }

/* INPUTMUX - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral INPUTMUX0 base address */
  #define INPUTMUX0_BASE                           (0x50006000u)
  /** Peripheral INPUTMUX0 base address */
  #define INPUTMUX0_BASE_NS                        (0x40006000u)
  /** Peripheral INPUTMUX0 base pointer */
  #define INPUTMUX0                                ((INPUTMUX_Type *)INPUTMUX0_BASE)
  /** Peripheral INPUTMUX0 base pointer */
  #define INPUTMUX0_NS                             ((INPUTMUX_Type *)INPUTMUX0_BASE_NS)
  /** Array initializer of INPUTMUX peripheral base addresses */
  #define INPUTMUX_BASE_ADDRS                      { INPUTMUX0_BASE }
  /** Array initializer of INPUTMUX peripheral base pointers */
  #define INPUTMUX_BASE_PTRS                       { INPUTMUX0 }
  /** Array initializer of INPUTMUX peripheral base addresses */
  #define INPUTMUX_BASE_ADDRS_NS                   { INPUTMUX0_BASE_NS }
  /** Array initializer of INPUTMUX peripheral base pointers */
  #define INPUTMUX_BASE_PTRS_NS                    { INPUTMUX0_NS }
#else
  /** Peripheral INPUTMUX0 base address */
  #define INPUTMUX0_BASE                           (0x40006000u)
  /** Peripheral INPUTMUX0 base pointer */
  #define INPUTMUX0                                ((INPUTMUX_Type *)INPUTMUX0_BASE)
  /** Array initializer of INPUTMUX peripheral base addresses */
  #define INPUTMUX_BASE_ADDRS                      { INPUTMUX0_BASE }
  /** Array initializer of INPUTMUX peripheral base pointers */
  #define INPUTMUX_BASE_PTRS                       { INPUTMUX0 }
#endif

/* INTM - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral INTM0 base address */
  #define INTM0_BASE                               (0x5005D000u)
  /** Peripheral INTM0 base address */
  #define INTM0_BASE_NS                            (0x4005D000u)
  /** Peripheral INTM0 base pointer */
  #define INTM0                                    ((INTM_Type *)INTM0_BASE)
  /** Peripheral INTM0 base pointer */
  #define INTM0_NS                                 ((INTM_Type *)INTM0_BASE_NS)
  /** Array initializer of INTM peripheral base addresses */
  #define INTM_BASE_ADDRS                          { INTM0_BASE }
  /** Array initializer of INTM peripheral base pointers */
  #define INTM_BASE_PTRS                           { INTM0 }
  /** Array initializer of INTM peripheral base addresses */
  #define INTM_BASE_ADDRS_NS                       { INTM0_BASE_NS }
  /** Array initializer of INTM peripheral base pointers */
  #define INTM_BASE_PTRS_NS                        { INTM0_NS }
#else
  /** Peripheral INTM0 base address */
  #define INTM0_BASE                               (0x4005D000u)
  /** Peripheral INTM0 base pointer */
  #define INTM0                                    ((INTM_Type *)INTM0_BASE)
  /** Array initializer of INTM peripheral base addresses */
  #define INTM_BASE_ADDRS                          { INTM0_BASE }
  /** Array initializer of INTM peripheral base pointers */
  #define INTM_BASE_PTRS                           { INTM0 }
#endif

/* ITRC - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral ITRC0 base address */
  #define ITRC0_BASE                               (0x50026000u)
  /** Peripheral ITRC0 base address */
  #define ITRC0_BASE_NS                            (0x40026000u)
  /** Peripheral ITRC0 base pointer */
  #define ITRC0                                    ((ITRC_Type *)ITRC0_BASE)
  /** Peripheral ITRC0 base pointer */
  #define ITRC0_NS                                 ((ITRC_Type *)ITRC0_BASE_NS)
  /** Array initializer of ITRC peripheral base addresses */
  #define ITRC_BASE_ADDRS                          { ITRC0_BASE }
  /** Array initializer of ITRC peripheral base pointers */
  #define ITRC_BASE_PTRS                           { ITRC0 }
  /** Array initializer of ITRC peripheral base addresses */
  #define ITRC_BASE_ADDRS_NS                       { ITRC0_BASE_NS }
  /** Array initializer of ITRC peripheral base pointers */
  #define ITRC_BASE_PTRS_NS                        { ITRC0_NS }
#else
  /** Peripheral ITRC0 base address */
  #define ITRC0_BASE                               (0x40026000u)
  /** Peripheral ITRC0 base pointer */
  #define ITRC0                                    ((ITRC_Type *)ITRC0_BASE)
  /** Array initializer of ITRC peripheral base addresses */
  #define ITRC_BASE_ADDRS                          { ITRC0_BASE }
  /** Array initializer of ITRC peripheral base pointers */
  #define ITRC_BASE_PTRS                           { ITRC0 }
#endif

/* LPCMP - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral CMP0 base address */
  #define CMP0_BASE                                (0x50051000u)
  /** Peripheral CMP0 base address */
  #define CMP0_BASE_NS                             (0x40051000u)
  /** Peripheral CMP0 base pointer */
  #define CMP0                                     ((LPCMP_Type *)CMP0_BASE)
  /** Peripheral CMP0 base pointer */
  #define CMP0_NS                                  ((LPCMP_Type *)CMP0_BASE_NS)
  /** Peripheral CMP1 base address */
  #define CMP1_BASE                                (0x50052000u)
  /** Peripheral CMP1 base address */
  #define CMP1_BASE_NS                             (0x40052000u)
  /** Peripheral CMP1 base pointer */
  #define CMP1                                     ((LPCMP_Type *)CMP1_BASE)
  /** Peripheral CMP1 base pointer */
  #define CMP1_NS                                  ((LPCMP_Type *)CMP1_BASE_NS)
  /** Array initializer of LPCMP peripheral base addresses */
  #define LPCMP_BASE_ADDRS                         { CMP0_BASE, CMP1_BASE }
  /** Array initializer of LPCMP peripheral base pointers */
  #define LPCMP_BASE_PTRS                          { CMP0, CMP1 }
  /** Array initializer of LPCMP peripheral base addresses */
  #define LPCMP_BASE_ADDRS_NS                      { CMP0_BASE_NS, CMP1_BASE_NS }
  /** Array initializer of LPCMP peripheral base pointers */
  #define LPCMP_BASE_PTRS_NS                       { CMP0_NS, CMP1_NS }
#else
  /** Peripheral CMP0 base address */
  #define CMP0_BASE                                (0x40051000u)
  /** Peripheral CMP0 base pointer */
  #define CMP0                                     ((LPCMP_Type *)CMP0_BASE)
  /** Peripheral CMP1 base address */
  #define CMP1_BASE                                (0x40052000u)
  /** Peripheral CMP1 base pointer */
  #define CMP1                                     ((LPCMP_Type *)CMP1_BASE)
  /** Array initializer of LPCMP peripheral base addresses */
  #define LPCMP_BASE_ADDRS                         { CMP0_BASE, CMP1_BASE }
  /** Array initializer of LPCMP peripheral base pointers */
  #define LPCMP_BASE_PTRS                          { CMP0, CMP1 }
#endif
/** Interrupt vectors for the LPCMP peripheral type */
#define LPCMP_IRQS                               { HSCMP0_IRQn, HSCMP1_IRQn }

/* LPI2C - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral LPI2C0 base address */
  #define LPI2C0_BASE                              (0x50092800u)
  /** Peripheral LPI2C0 base address */
  #define LPI2C0_BASE_NS                           (0x40092800u)
  /** Peripheral LPI2C0 base pointer */
  #define LPI2C0                                   ((LPI2C_Type *)LPI2C0_BASE)
  /** Peripheral LPI2C0 base pointer */
  #define LPI2C0_NS                                ((LPI2C_Type *)LPI2C0_BASE_NS)
  /** Peripheral LPI2C1 base address */
  #define LPI2C1_BASE                              (0x50093800u)
  /** Peripheral LPI2C1 base address */
  #define LPI2C1_BASE_NS                           (0x40093800u)
  /** Peripheral LPI2C1 base pointer */
  #define LPI2C1                                   ((LPI2C_Type *)LPI2C1_BASE)
  /** Peripheral LPI2C1 base pointer */
  #define LPI2C1_NS                                ((LPI2C_Type *)LPI2C1_BASE_NS)
  /** Peripheral LPI2C2 base address */
  #define LPI2C2_BASE                              (0x50094800u)
  /** Peripheral LPI2C2 base address */
  #define LPI2C2_BASE_NS                           (0x40094800u)
  /** Peripheral LPI2C2 base pointer */
  #define LPI2C2                                   ((LPI2C_Type *)LPI2C2_BASE)
  /** Peripheral LPI2C2 base pointer */
  #define LPI2C2_NS                                ((LPI2C_Type *)LPI2C2_BASE_NS)
  /** Peripheral LPI2C3 base address */
  #define LPI2C3_BASE                              (0x50095800u)
  /** Peripheral LPI2C3 base address */
  #define LPI2C3_BASE_NS                           (0x40095800u)
  /** Peripheral LPI2C3 base pointer */
  #define LPI2C3                                   ((LPI2C_Type *)LPI2C3_BASE)
  /** Peripheral LPI2C3 base pointer */
  #define LPI2C3_NS                                ((LPI2C_Type *)LPI2C3_BASE_NS)
  /** Peripheral LPI2C4 base address */
  #define LPI2C4_BASE                              (0x500B4800u)
  /** Peripheral LPI2C4 base address */
  #define LPI2C4_BASE_NS                           (0x400B4800u)
  /** Peripheral LPI2C4 base pointer */
  #define LPI2C4                                   ((LPI2C_Type *)LPI2C4_BASE)
  /** Peripheral LPI2C4 base pointer */
  #define LPI2C4_NS                                ((LPI2C_Type *)LPI2C4_BASE_NS)
  /** Peripheral LPI2C5 base address */
  #define LPI2C5_BASE                              (0x500B5800u)
  /** Peripheral LPI2C5 base address */
  #define LPI2C5_BASE_NS                           (0x400B5800u)
  /** Peripheral LPI2C5 base pointer */
  #define LPI2C5                                   ((LPI2C_Type *)LPI2C5_BASE)
  /** Peripheral LPI2C5 base pointer */
  #define LPI2C5_NS                                ((LPI2C_Type *)LPI2C5_BASE_NS)
  /** Peripheral LPI2C6 base address */
  #define LPI2C6_BASE                              (0x500B6800u)
  /** Peripheral LPI2C6 base address */
  #define LPI2C6_BASE_NS                           (0x400B6800u)
  /** Peripheral LPI2C6 base pointer */
  #define LPI2C6                                   ((LPI2C_Type *)LPI2C6_BASE)
  /** Peripheral LPI2C6 base pointer */
  #define LPI2C6_NS                                ((LPI2C_Type *)LPI2C6_BASE_NS)
  /** Peripheral LPI2C7 base address */
  #define LPI2C7_BASE                              (0x500B7800u)
  /** Peripheral LPI2C7 base address */
  #define LPI2C7_BASE_NS                           (0x400B7800u)
  /** Peripheral LPI2C7 base pointer */
  #define LPI2C7                                   ((LPI2C_Type *)LPI2C7_BASE)
  /** Peripheral LPI2C7 base pointer */
  #define LPI2C7_NS                                ((LPI2C_Type *)LPI2C7_BASE_NS)
  /** Array initializer of LPI2C peripheral base addresses */
  #define LPI2C_BASE_ADDRS                         { LPI2C0_BASE, LPI2C1_BASE, LPI2C2_BASE, LPI2C3_BASE, LPI2C4_BASE, LPI2C5_BASE, LPI2C6_BASE, LPI2C7_BASE }
  /** Array initializer of LPI2C peripheral base pointers */
  #define LPI2C_BASE_PTRS                          { LPI2C0, LPI2C1, LPI2C2, LPI2C3, LPI2C4, LPI2C5, LPI2C6, LPI2C7 }
  /** Array initializer of LPI2C peripheral base addresses */
  #define LPI2C_BASE_ADDRS_NS                      { LPI2C0_BASE_NS, LPI2C1_BASE_NS, LPI2C2_BASE_NS, LPI2C3_BASE_NS, LPI2C4_BASE_NS, LPI2C5_BASE_NS, LPI2C6_BASE_NS, LPI2C7_BASE_NS }
  /** Array initializer of LPI2C peripheral base pointers */
  #define LPI2C_BASE_PTRS_NS                       { LPI2C0_NS, LPI2C1_NS, LPI2C2_NS, LPI2C3_NS, LPI2C4_NS, LPI2C5_NS, LPI2C6_NS, LPI2C7_NS }
#else
  /** Peripheral LPI2C0 base address */
  #define LPI2C0_BASE                              (0x40092800u)
  /** Peripheral LPI2C0 base pointer */
  #define LPI2C0                                   ((LPI2C_Type *)LPI2C0_BASE)
  /** Peripheral LPI2C1 base address */
  #define LPI2C1_BASE                              (0x40093800u)
  /** Peripheral LPI2C1 base pointer */
  #define LPI2C1                                   ((LPI2C_Type *)LPI2C1_BASE)
  /** Peripheral LPI2C2 base address */
  #define LPI2C2_BASE                              (0x40094800u)
  /** Peripheral LPI2C2 base pointer */
  #define LPI2C2                                   ((LPI2C_Type *)LPI2C2_BASE)
  /** Peripheral LPI2C3 base address */
  #define LPI2C3_BASE                              (0x40095800u)
  /** Peripheral LPI2C3 base pointer */
  #define LPI2C3                                   ((LPI2C_Type *)LPI2C3_BASE)
  /** Peripheral LPI2C4 base address */
  #define LPI2C4_BASE                              (0x400B4800u)
  /** Peripheral LPI2C4 base pointer */
  #define LPI2C4                                   ((LPI2C_Type *)LPI2C4_BASE)
  /** Peripheral LPI2C5 base address */
  #define LPI2C5_BASE                              (0x400B5800u)
  /** Peripheral LPI2C5 base pointer */
  #define LPI2C5                                   ((LPI2C_Type *)LPI2C5_BASE)
  /** Peripheral LPI2C6 base address */
  #define LPI2C6_BASE                              (0x400B6800u)
  /** Peripheral LPI2C6 base pointer */
  #define LPI2C6                                   ((LPI2C_Type *)LPI2C6_BASE)
  /** Peripheral LPI2C7 base address */
  #define LPI2C7_BASE                              (0x400B7800u)
  /** Peripheral LPI2C7 base pointer */
  #define LPI2C7                                   ((LPI2C_Type *)LPI2C7_BASE)
  /** Array initializer of LPI2C peripheral base addresses */
  #define LPI2C_BASE_ADDRS                         { LPI2C0_BASE, LPI2C1_BASE, LPI2C2_BASE, LPI2C3_BASE, LPI2C4_BASE, LPI2C5_BASE, LPI2C6_BASE, LPI2C7_BASE }
  /** Array initializer of LPI2C peripheral base pointers */
  #define LPI2C_BASE_PTRS                          { LPI2C0, LPI2C1, LPI2C2, LPI2C3, LPI2C4, LPI2C5, LPI2C6, LPI2C7 }
#endif
/** Interrupt vectors for the LPI2C peripheral type */
#define LPI2C_IRQS                               { LP_FLEXCOMM0_IRQn, LP_FLEXCOMM1_IRQn, LP_FLEXCOMM2_IRQn, LP_FLEXCOMM3_IRQn, LP_FLEXCOMM4_IRQn, LP_FLEXCOMM5_IRQn, LP_FLEXCOMM6_IRQn, LP_FLEXCOMM7_IRQn }

/* LPSPI - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral LPSPI0 base address */
  #define LPSPI0_BASE                              (0x50092000u)
  /** Peripheral LPSPI0 base address */
  #define LPSPI0_BASE_NS                           (0x40092000u)
  /** Peripheral LPSPI0 base pointer */
  #define LPSPI0                                   ((LPSPI_Type *)LPSPI0_BASE)
  /** Peripheral LPSPI0 base pointer */
  #define LPSPI0_NS                                ((LPSPI_Type *)LPSPI0_BASE_NS)
  /** Peripheral LPSPI1 base address */
  #define LPSPI1_BASE                              (0x50093000u)
  /** Peripheral LPSPI1 base address */
  #define LPSPI1_BASE_NS                           (0x40093000u)
  /** Peripheral LPSPI1 base pointer */
  #define LPSPI1                                   ((LPSPI_Type *)LPSPI1_BASE)
  /** Peripheral LPSPI1 base pointer */
  #define LPSPI1_NS                                ((LPSPI_Type *)LPSPI1_BASE_NS)
  /** Peripheral LPSPI2 base address */
  #define LPSPI2_BASE                              (0x50094000u)
  /** Peripheral LPSPI2 base address */
  #define LPSPI2_BASE_NS                           (0x40094000u)
  /** Peripheral LPSPI2 base pointer */
  #define LPSPI2                                   ((LPSPI_Type *)LPSPI2_BASE)
  /** Peripheral LPSPI2 base pointer */
  #define LPSPI2_NS                                ((LPSPI_Type *)LPSPI2_BASE_NS)
  /** Peripheral LPSPI3 base address */
  #define LPSPI3_BASE                              (0x50095000u)
  /** Peripheral LPSPI3 base address */
  #define LPSPI3_BASE_NS                           (0x40095000u)
  /** Peripheral LPSPI3 base pointer */
  #define LPSPI3                                   ((LPSPI_Type *)LPSPI3_BASE)
  /** Peripheral LPSPI3 base pointer */
  #define LPSPI3_NS                                ((LPSPI_Type *)LPSPI3_BASE_NS)
  /** Peripheral LPSPI4 base address */
  #define LPSPI4_BASE                              (0x500B4000u)
  /** Peripheral LPSPI4 base address */
  #define LPSPI4_BASE_NS                           (0x400B4000u)
  /** Peripheral LPSPI4 base pointer */
  #define LPSPI4                                   ((LPSPI_Type *)LPSPI4_BASE)
  /** Peripheral LPSPI4 base pointer */
  #define LPSPI4_NS                                ((LPSPI_Type *)LPSPI4_BASE_NS)
  /** Peripheral LPSPI5 base address */
  #define LPSPI5_BASE                              (0x500B5000u)
  /** Peripheral LPSPI5 base address */
  #define LPSPI5_BASE_NS                           (0x400B5000u)
  /** Peripheral LPSPI5 base pointer */
  #define LPSPI5                                   ((LPSPI_Type *)LPSPI5_BASE)
  /** Peripheral LPSPI5 base pointer */
  #define LPSPI5_NS                                ((LPSPI_Type *)LPSPI5_BASE_NS)
  /** Peripheral LPSPI6 base address */
  #define LPSPI6_BASE                              (0x500B6000u)
  /** Peripheral LPSPI6 base address */
  #define LPSPI6_BASE_NS                           (0x400B6000u)
  /** Peripheral LPSPI6 base pointer */
  #define LPSPI6                                   ((LPSPI_Type *)LPSPI6_BASE)
  /** Peripheral LPSPI6 base pointer */
  #define LPSPI6_NS                                ((LPSPI_Type *)LPSPI6_BASE_NS)
  /** Peripheral LPSPI7 base address */
  #define LPSPI7_BASE                              (0x500B7000u)
  /** Peripheral LPSPI7 base address */
  #define LPSPI7_BASE_NS                           (0x400B7000u)
  /** Peripheral LPSPI7 base pointer */
  #define LPSPI7                                   ((LPSPI_Type *)LPSPI7_BASE)
  /** Peripheral LPSPI7 base pointer */
  #define LPSPI7_NS                                ((LPSPI_Type *)LPSPI7_BASE_NS)
  /** Array initializer of LPSPI peripheral base addresses */
  #define LPSPI_BASE_ADDRS                         { LPSPI0_BASE, LPSPI1_BASE, LPSPI2_BASE, LPSPI3_BASE, LPSPI4_BASE, LPSPI5_BASE, LPSPI6_BASE, LPSPI7_BASE }
  /** Array initializer of LPSPI peripheral base pointers */
  #define LPSPI_BASE_PTRS                          { LPSPI0, LPSPI1, LPSPI2, LPSPI3, LPSPI4, LPSPI5, LPSPI6, LPSPI7 }
  /** Array initializer of LPSPI peripheral base addresses */
  #define LPSPI_BASE_ADDRS_NS                      { LPSPI0_BASE_NS, LPSPI1_BASE_NS, LPSPI2_BASE_NS, LPSPI3_BASE_NS, LPSPI4_BASE_NS, LPSPI5_BASE_NS, LPSPI6_BASE_NS, LPSPI7_BASE_NS }
  /** Array initializer of LPSPI peripheral base pointers */
  #define LPSPI_BASE_PTRS_NS                       { LPSPI0_NS, LPSPI1_NS, LPSPI2_NS, LPSPI3_NS, LPSPI4_NS, LPSPI5_NS, LPSPI6_NS, LPSPI7_NS }
#else
  /** Peripheral LPSPI0 base address */
  #define LPSPI0_BASE                              (0x40092000u)
  /** Peripheral LPSPI0 base pointer */
  #define LPSPI0                                   ((LPSPI_Type *)LPSPI0_BASE)
  /** Peripheral LPSPI1 base address */
  #define LPSPI1_BASE                              (0x40093000u)
  /** Peripheral LPSPI1 base pointer */
  #define LPSPI1                                   ((LPSPI_Type *)LPSPI1_BASE)
  /** Peripheral LPSPI2 base address */
  #define LPSPI2_BASE                              (0x40094000u)
  /** Peripheral LPSPI2 base pointer */
  #define LPSPI2                                   ((LPSPI_Type *)LPSPI2_BASE)
  /** Peripheral LPSPI3 base address */
  #define LPSPI3_BASE                              (0x40095000u)
  /** Peripheral LPSPI3 base pointer */
  #define LPSPI3                                   ((LPSPI_Type *)LPSPI3_BASE)
  /** Peripheral LPSPI4 base address */
  #define LPSPI4_BASE                              (0x400B4000u)
  /** Peripheral LPSPI4 base pointer */
  #define LPSPI4                                   ((LPSPI_Type *)LPSPI4_BASE)
  /** Peripheral LPSPI5 base address */
  #define LPSPI5_BASE                              (0x400B5000u)
  /** Peripheral LPSPI5 base pointer */
  #define LPSPI5                                   ((LPSPI_Type *)LPSPI5_BASE)
  /** Peripheral LPSPI6 base address */
  #define LPSPI6_BASE                              (0x400B6000u)
  /** Peripheral LPSPI6 base pointer */
  #define LPSPI6                                   ((LPSPI_Type *)LPSPI6_BASE)
  /** Peripheral LPSPI7 base address */
  #define LPSPI7_BASE                              (0x400B7000u)
  /** Peripheral LPSPI7 base pointer */
  #define LPSPI7                                   ((LPSPI_Type *)LPSPI7_BASE)
  /** Array initializer of LPSPI peripheral base addresses */
  #define LPSPI_BASE_ADDRS                         { LPSPI0_BASE, LPSPI1_BASE, LPSPI2_BASE, LPSPI3_BASE, LPSPI4_BASE, LPSPI5_BASE, LPSPI6_BASE, LPSPI7_BASE }
  /** Array initializer of LPSPI peripheral base pointers */
  #define LPSPI_BASE_PTRS                          { LPSPI0, LPSPI1, LPSPI2, LPSPI3, LPSPI4, LPSPI5, LPSPI6, LPSPI7 }
#endif
/** Interrupt vectors for the LPSPI peripheral type */
#define LPSPI_IRQS                               { LP_FLEXCOMM0_IRQn, LP_FLEXCOMM1_IRQn, LP_FLEXCOMM2_IRQn, LP_FLEXCOMM3_IRQn, LP_FLEXCOMM4_IRQn, LP_FLEXCOMM5_IRQn, LP_FLEXCOMM6_IRQn, LP_FLEXCOMM7_IRQn }

/* LPTMR - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral LPTMR0 base address */
  #define LPTMR0_BASE                              (0x5004A000u)
  /** Peripheral LPTMR0 base address */
  #define LPTMR0_BASE_NS                           (0x4004A000u)
  /** Peripheral LPTMR0 base pointer */
  #define LPTMR0                                   ((LPTMR_Type *)LPTMR0_BASE)
  /** Peripheral LPTMR0 base pointer */
  #define LPTMR0_NS                                ((LPTMR_Type *)LPTMR0_BASE_NS)
  /** Peripheral LPTMR1 base address */
  #define LPTMR1_BASE                              (0x5004B000u)
  /** Peripheral LPTMR1 base address */
  #define LPTMR1_BASE_NS                           (0x4004B000u)
  /** Peripheral LPTMR1 base pointer */
  #define LPTMR1                                   ((LPTMR_Type *)LPTMR1_BASE)
  /** Peripheral LPTMR1 base pointer */
  #define LPTMR1_NS                                ((LPTMR_Type *)LPTMR1_BASE_NS)
  /** Array initializer of LPTMR peripheral base addresses */
  #define LPTMR_BASE_ADDRS                         { LPTMR0_BASE, LPTMR1_BASE }
  /** Array initializer of LPTMR peripheral base pointers */
  #define LPTMR_BASE_PTRS                          { LPTMR0, LPTMR1 }
  /** Array initializer of LPTMR peripheral base addresses */
  #define LPTMR_BASE_ADDRS_NS                      { LPTMR0_BASE_NS, LPTMR1_BASE_NS }
  /** Array initializer of LPTMR peripheral base pointers */
  #define LPTMR_BASE_PTRS_NS                       { LPTMR0_NS, LPTMR1_NS }
#else
  /** Peripheral LPTMR0 base address */
  #define LPTMR0_BASE                              (0x4004A000u)
  /** Peripheral LPTMR0 base pointer */
  #define LPTMR0                                   ((LPTMR_Type *)LPTMR0_BASE)
  /** Peripheral LPTMR1 base address */
  #define LPTMR1_BASE                              (0x4004B000u)
  /** Peripheral LPTMR1 base pointer */
  #define LPTMR1                                   ((LPTMR_Type *)LPTMR1_BASE)
  /** Array initializer of LPTMR peripheral base addresses */
  #define LPTMR_BASE_ADDRS                         { LPTMR0_BASE, LPTMR1_BASE }
  /** Array initializer of LPTMR peripheral base pointers */
  #define LPTMR_BASE_PTRS                          { LPTMR0, LPTMR1 }
#endif
/** Interrupt vectors for the LPTMR peripheral type */
#define LPTMR_IRQS                               { LPTMR0_IRQn, LPTMR1_IRQn }

/* LPUART - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral LPUART0 base address */
  #define LPUART0_BASE                             (0x50092000u)
  /** Peripheral LPUART0 base address */
  #define LPUART0_BASE_NS                          (0x40092000u)
  /** Peripheral LPUART0 base pointer */
  #define LPUART0                                  ((LPUART_Type *)LPUART0_BASE)
  /** Peripheral LPUART0 base pointer */
  #define LPUART0_NS                               ((LPUART_Type *)LPUART0_BASE_NS)
  /** Peripheral LPUART1 base address */
  #define LPUART1_BASE                             (0x50093000u)
  /** Peripheral LPUART1 base address */
  #define LPUART1_BASE_NS                          (0x40093000u)
  /** Peripheral LPUART1 base pointer */
  #define LPUART1                                  ((LPUART_Type *)LPUART1_BASE)
  /** Peripheral LPUART1 base pointer */
  #define LPUART1_NS                               ((LPUART_Type *)LPUART1_BASE_NS)
  /** Peripheral LPUART2 base address */
  #define LPUART2_BASE                             (0x50094000u)
  /** Peripheral LPUART2 base address */
  #define LPUART2_BASE_NS                          (0x40094000u)
  /** Peripheral LPUART2 base pointer */
  #define LPUART2                                  ((LPUART_Type *)LPUART2_BASE)
  /** Peripheral LPUART2 base pointer */
  #define LPUART2_NS                               ((LPUART_Type *)LPUART2_BASE_NS)
  /** Peripheral LPUART3 base address */
  #define LPUART3_BASE                             (0x50095000u)
  /** Peripheral LPUART3 base address */
  #define LPUART3_BASE_NS                          (0x40095000u)
  /** Peripheral LPUART3 base pointer */
  #define LPUART3                                  ((LPUART_Type *)LPUART3_BASE)
  /** Peripheral LPUART3 base pointer */
  #define LPUART3_NS                               ((LPUART_Type *)LPUART3_BASE_NS)
  /** Peripheral LPUART4 base address */
  #define LPUART4_BASE                             (0x500B4000u)
  /** Peripheral LPUART4 base address */
  #define LPUART4_BASE_NS                          (0x400B4000u)
  /** Peripheral LPUART4 base pointer */
  #define LPUART4                                  ((LPUART_Type *)LPUART4_BASE)
  /** Peripheral LPUART4 base pointer */
  #define LPUART4_NS                               ((LPUART_Type *)LPUART4_BASE_NS)
  /** Peripheral LPUART5 base address */
  #define LPUART5_BASE                             (0x500B5000u)
  /** Peripheral LPUART5 base address */
  #define LPUART5_BASE_NS                          (0x400B5000u)
  /** Peripheral LPUART5 base pointer */
  #define LPUART5                                  ((LPUART_Type *)LPUART5_BASE)
  /** Peripheral LPUART5 base pointer */
  #define LPUART5_NS                               ((LPUART_Type *)LPUART5_BASE_NS)
  /** Peripheral LPUART6 base address */
  #define LPUART6_BASE                             (0x500B6000u)
  /** Peripheral LPUART6 base address */
  #define LPUART6_BASE_NS                          (0x400B6000u)
  /** Peripheral LPUART6 base pointer */
  #define LPUART6                                  ((LPUART_Type *)LPUART6_BASE)
  /** Peripheral LPUART6 base pointer */
  #define LPUART6_NS                               ((LPUART_Type *)LPUART6_BASE_NS)
  /** Peripheral LPUART7 base address */
  #define LPUART7_BASE                             (0x500B7000u)
  /** Peripheral LPUART7 base address */
  #define LPUART7_BASE_NS                          (0x400B7000u)
  /** Peripheral LPUART7 base pointer */
  #define LPUART7                                  ((LPUART_Type *)LPUART7_BASE)
  /** Peripheral LPUART7 base pointer */
  #define LPUART7_NS                               ((LPUART_Type *)LPUART7_BASE_NS)
  /** Array initializer of LPUART peripheral base addresses */
  #define LPUART_BASE_ADDRS                        { LPUART0_BASE, LPUART1_BASE, LPUART2_BASE, LPUART3_BASE, LPUART4_BASE, LPUART5_BASE, LPUART6_BASE, LPUART7_BASE }
  /** Array initializer of LPUART peripheral base pointers */
  #define LPUART_BASE_PTRS                         { LPUART0, LPUART1, LPUART2, LPUART3, LPUART4, LPUART5, LPUART6, LPUART7 }
  /** Array initializer of LPUART peripheral base addresses */
  #define LPUART_BASE_ADDRS_NS                     { LPUART0_BASE_NS, LPUART1_BASE_NS, LPUART2_BASE_NS, LPUART3_BASE_NS, LPUART4_BASE_NS, LPUART5_BASE_NS, LPUART6_BASE_NS, LPUART7_BASE_NS }
  /** Array initializer of LPUART peripheral base pointers */
  #define LPUART_BASE_PTRS_NS                      { LPUART0_NS, LPUART1_NS, LPUART2_NS, LPUART3_NS, LPUART4_NS, LPUART5_NS, LPUART6_NS, LPUART7_NS }
#else
  /** Peripheral LPUART0 base address */
  #define LPUART0_BASE                             (0x40092000u)
  /** Peripheral LPUART0 base pointer */
  #define LPUART0                                  ((LPUART_Type *)LPUART0_BASE)
  /** Peripheral LPUART1 base address */
  #define LPUART1_BASE                             (0x40093000u)
  /** Peripheral LPUART1 base pointer */
  #define LPUART1                                  ((LPUART_Type *)LPUART1_BASE)
  /** Peripheral LPUART2 base address */
  #define LPUART2_BASE                             (0x40094000u)
  /** Peripheral LPUART2 base pointer */
  #define LPUART2                                  ((LPUART_Type *)LPUART2_BASE)
  /** Peripheral LPUART3 base address */
  #define LPUART3_BASE                             (0x40095000u)
  /** Peripheral LPUART3 base pointer */
  #define LPUART3                                  ((LPUART_Type *)LPUART3_BASE)
  /** Peripheral LPUART4 base address */
  #define LPUART4_BASE                             (0x400B4000u)
  /** Peripheral LPUART4 base pointer */
  #define LPUART4                                  ((LPUART_Type *)LPUART4_BASE)
  /** Peripheral LPUART5 base address */
  #define LPUART5_BASE                             (0x400B5000u)
  /** Peripheral LPUART5 base pointer */
  #define LPUART5                                  ((LPUART_Type *)LPUART5_BASE)
  /** Peripheral LPUART6 base address */
  #define LPUART6_BASE                             (0x400B6000u)
  /** Peripheral LPUART6 base pointer */
  #define LPUART6                                  ((LPUART_Type *)LPUART6_BASE)
  /** Peripheral LPUART7 base address */
  #define LPUART7_BASE                             (0x400B7000u)
  /** Peripheral LPUART7 base pointer */
  #define LPUART7                                  ((LPUART_Type *)LPUART7_BASE)
  /** Array initializer of LPUART peripheral base addresses */
  #define LPUART_BASE_ADDRS                        { LPUART0_BASE, LPUART1_BASE, LPUART2_BASE, LPUART3_BASE, LPUART4_BASE, LPUART5_BASE, LPUART6_BASE, LPUART7_BASE }
  /** Array initializer of LPUART peripheral base pointers */
  #define LPUART_BASE_PTRS                         { LPUART0, LPUART1, LPUART2, LPUART3, LPUART4, LPUART5, LPUART6, LPUART7 }
#endif
/** Interrupt vectors for the LPUART peripheral type */
#define LPUART_RX_TX_IRQS                        { LP_FLEXCOMM0_IRQn, LP_FLEXCOMM1_IRQn, LP_FLEXCOMM2_IRQn, LP_FLEXCOMM3_IRQn, LP_FLEXCOMM4_IRQn, LP_FLEXCOMM5_IRQn, LP_FLEXCOMM6_IRQn, LP_FLEXCOMM7_IRQn }
#define LPUART_ERR_IRQS                          { LP_FLEXCOMM0_IRQn, LP_FLEXCOMM1_IRQn, LP_FLEXCOMM2_IRQn, LP_FLEXCOMM3_IRQn, LP_FLEXCOMM4_IRQn, LP_FLEXCOMM5_IRQn, LP_FLEXCOMM6_IRQn, LP_FLEXCOMM7_IRQn }

/* LP_FLEXCOMM - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral LP_FLEXCOMM0 base address */
  #define LP_FLEXCOMM0_BASE                        (0x50092000u)
  /** Peripheral LP_FLEXCOMM0 base address */
  #define LP_FLEXCOMM0_BASE_NS                     (0x40092000u)
  /** Peripheral LP_FLEXCOMM0 base pointer */
  #define LP_FLEXCOMM0                             ((LP_FLEXCOMM_Type *)LP_FLEXCOMM0_BASE)
  /** Peripheral LP_FLEXCOMM0 base pointer */
  #define LP_FLEXCOMM0_NS                          ((LP_FLEXCOMM_Type *)LP_FLEXCOMM0_BASE_NS)
  /** Peripheral LP_FLEXCOMM1 base address */
  #define LP_FLEXCOMM1_BASE                        (0x50093000u)
  /** Peripheral LP_FLEXCOMM1 base address */
  #define LP_FLEXCOMM1_BASE_NS                     (0x40093000u)
  /** Peripheral LP_FLEXCOMM1 base pointer */
  #define LP_FLEXCOMM1                             ((LP_FLEXCOMM_Type *)LP_FLEXCOMM1_BASE)
  /** Peripheral LP_FLEXCOMM1 base pointer */
  #define LP_FLEXCOMM1_NS                          ((LP_FLEXCOMM_Type *)LP_FLEXCOMM1_BASE_NS)
  /** Peripheral LP_FLEXCOMM2 base address */
  #define LP_FLEXCOMM2_BASE                        (0x50094000u)
  /** Peripheral LP_FLEXCOMM2 base address */
  #define LP_FLEXCOMM2_BASE_NS                     (0x40094000u)
  /** Peripheral LP_FLEXCOMM2 base pointer */
  #define LP_FLEXCOMM2                             ((LP_FLEXCOMM_Type *)LP_FLEXCOMM2_BASE)
  /** Peripheral LP_FLEXCOMM2 base pointer */
  #define LP_FLEXCOMM2_NS                          ((LP_FLEXCOMM_Type *)LP_FLEXCOMM2_BASE_NS)
  /** Peripheral LP_FLEXCOMM3 base address */
  #define LP_FLEXCOMM3_BASE                        (0x50095000u)
  /** Peripheral LP_FLEXCOMM3 base address */
  #define LP_FLEXCOMM3_BASE_NS                     (0x40095000u)
  /** Peripheral LP_FLEXCOMM3 base pointer */
  #define LP_FLEXCOMM3                             ((LP_FLEXCOMM_Type *)LP_FLEXCOMM3_BASE)
  /** Peripheral LP_FLEXCOMM3 base pointer */
  #define LP_FLEXCOMM3_NS                          ((LP_FLEXCOMM_Type *)LP_FLEXCOMM3_BASE_NS)
  /** Peripheral LP_FLEXCOMM4 base address */
  #define LP_FLEXCOMM4_BASE                        (0x500B4000u)
  /** Peripheral LP_FLEXCOMM4 base address */
  #define LP_FLEXCOMM4_BASE_NS                     (0x400B4000u)
  /** Peripheral LP_FLEXCOMM4 base pointer */
  #define LP_FLEXCOMM4                             ((LP_FLEXCOMM_Type *)LP_FLEXCOMM4_BASE)
  /** Peripheral LP_FLEXCOMM4 base pointer */
  #define LP_FLEXCOMM4_NS                          ((LP_FLEXCOMM_Type *)LP_FLEXCOMM4_BASE_NS)
  /** Peripheral LP_FLEXCOMM5 base address */
  #define LP_FLEXCOMM5_BASE                        (0x500B5000u)
  /** Peripheral LP_FLEXCOMM5 base address */
  #define LP_FLEXCOMM5_BASE_NS                     (0x400B5000u)
  /** Peripheral LP_FLEXCOMM5 base pointer */
  #define LP_FLEXCOMM5                             ((LP_FLEXCOMM_Type *)LP_FLEXCOMM5_BASE)
  /** Peripheral LP_FLEXCOMM5 base pointer */
  #define LP_FLEXCOMM5_NS                          ((LP_FLEXCOMM_Type *)LP_FLEXCOMM5_BASE_NS)
  /** Peripheral LP_FLEXCOMM6 base address */
  #define LP_FLEXCOMM6_BASE                        (0x500B6000u)
  /** Peripheral LP_FLEXCOMM6 base address */
  #define LP_FLEXCOMM6_BASE_NS                     (0x400B6000u)
  /** Peripheral LP_FLEXCOMM6 base pointer */
  #define LP_FLEXCOMM6                             ((LP_FLEXCOMM_Type *)LP_FLEXCOMM6_BASE)
  /** Peripheral LP_FLEXCOMM6 base pointer */
  #define LP_FLEXCOMM6_NS                          ((LP_FLEXCOMM_Type *)LP_FLEXCOMM6_BASE_NS)
  /** Peripheral LP_FLEXCOMM7 base address */
  #define LP_FLEXCOMM7_BASE                        (0x500B7000u)
  /** Peripheral LP_FLEXCOMM7 base address */
  #define LP_FLEXCOMM7_BASE_NS                     (0x400B7000u)
  /** Peripheral LP_FLEXCOMM7 base pointer */
  #define LP_FLEXCOMM7                             ((LP_FLEXCOMM_Type *)LP_FLEXCOMM7_BASE)
  /** Peripheral LP_FLEXCOMM7 base pointer */
  #define LP_FLEXCOMM7_NS                          ((LP_FLEXCOMM_Type *)LP_FLEXCOMM7_BASE_NS)
  /** Array initializer of LP_FLEXCOMM peripheral base addresses */
  #define LP_FLEXCOMM_BASE_ADDRS                   { LP_FLEXCOMM0_BASE, LP_FLEXCOMM1_BASE, LP_FLEXCOMM2_BASE, LP_FLEXCOMM3_BASE, LP_FLEXCOMM4_BASE, LP_FLEXCOMM5_BASE, LP_FLEXCOMM6_BASE, LP_FLEXCOMM7_BASE }
  /** Array initializer of LP_FLEXCOMM peripheral base pointers */
  #define LP_FLEXCOMM_BASE_PTRS                    { LP_FLEXCOMM0, LP_FLEXCOMM1, LP_FLEXCOMM2, LP_FLEXCOMM3, LP_FLEXCOMM4, LP_FLEXCOMM5, LP_FLEXCOMM6, LP_FLEXCOMM7 }
  /** Array initializer of LP_FLEXCOMM peripheral base addresses */
  #define LP_FLEXCOMM_BASE_ADDRS_NS                { LP_FLEXCOMM0_BASE_NS, LP_FLEXCOMM1_BASE_NS, LP_FLEXCOMM2_BASE_NS, LP_FLEXCOMM3_BASE_NS, LP_FLEXCOMM4_BASE_NS, LP_FLEXCOMM5_BASE_NS, LP_FLEXCOMM6_BASE_NS, LP_FLEXCOMM7_BASE_NS }
  /** Array initializer of LP_FLEXCOMM peripheral base pointers */
  #define LP_FLEXCOMM_BASE_PTRS_NS                 { LP_FLEXCOMM0_NS, LP_FLEXCOMM1_NS, LP_FLEXCOMM2_NS, LP_FLEXCOMM3_NS, LP_FLEXCOMM4_NS, LP_FLEXCOMM5_NS, LP_FLEXCOMM6_NS, LP_FLEXCOMM7_NS }
#else
  /** Peripheral LP_FLEXCOMM0 base address */
  #define LP_FLEXCOMM0_BASE                        (0x40092000u)
  /** Peripheral LP_FLEXCOMM0 base pointer */
  #define LP_FLEXCOMM0                             ((LP_FLEXCOMM_Type *)LP_FLEXCOMM0_BASE)
  /** Peripheral LP_FLEXCOMM1 base address */
  #define LP_FLEXCOMM1_BASE                        (0x40093000u)
  /** Peripheral LP_FLEXCOMM1 base pointer */
  #define LP_FLEXCOMM1                             ((LP_FLEXCOMM_Type *)LP_FLEXCOMM1_BASE)
  /** Peripheral LP_FLEXCOMM2 base address */
  #define LP_FLEXCOMM2_BASE                        (0x40094000u)
  /** Peripheral LP_FLEXCOMM2 base pointer */
  #define LP_FLEXCOMM2                             ((LP_FLEXCOMM_Type *)LP_FLEXCOMM2_BASE)
  /** Peripheral LP_FLEXCOMM3 base address */
  #define LP_FLEXCOMM3_BASE                        (0x40095000u)
  /** Peripheral LP_FLEXCOMM3 base pointer */
  #define LP_FLEXCOMM3                             ((LP_FLEXCOMM_Type *)LP_FLEXCOMM3_BASE)
  /** Peripheral LP_FLEXCOMM4 base address */
  #define LP_FLEXCOMM4_BASE                        (0x400B4000u)
  /** Peripheral LP_FLEXCOMM4 base pointer */
  #define LP_FLEXCOMM4                             ((LP_FLEXCOMM_Type *)LP_FLEXCOMM4_BASE)
  /** Peripheral LP_FLEXCOMM5 base address */
  #define LP_FLEXCOMM5_BASE                        (0x400B5000u)
  /** Peripheral LP_FLEXCOMM5 base pointer */
  #define LP_FLEXCOMM5                             ((LP_FLEXCOMM_Type *)LP_FLEXCOMM5_BASE)
  /** Peripheral LP_FLEXCOMM6 base address */
  #define LP_FLEXCOMM6_BASE                        (0x400B6000u)
  /** Peripheral LP_FLEXCOMM6 base pointer */
  #define LP_FLEXCOMM6                             ((LP_FLEXCOMM_Type *)LP_FLEXCOMM6_BASE)
  /** Peripheral LP_FLEXCOMM7 base address */
  #define LP_FLEXCOMM7_BASE                        (0x400B7000u)
  /** Peripheral LP_FLEXCOMM7 base pointer */
  #define LP_FLEXCOMM7                             ((LP_FLEXCOMM_Type *)LP_FLEXCOMM7_BASE)
  /** Array initializer of LP_FLEXCOMM peripheral base addresses */
  #define LP_FLEXCOMM_BASE_ADDRS                   { LP_FLEXCOMM0_BASE, LP_FLEXCOMM1_BASE, LP_FLEXCOMM2_BASE, LP_FLEXCOMM3_BASE, LP_FLEXCOMM4_BASE, LP_FLEXCOMM5_BASE, LP_FLEXCOMM6_BASE, LP_FLEXCOMM7_BASE }
  /** Array initializer of LP_FLEXCOMM peripheral base pointers */
  #define LP_FLEXCOMM_BASE_PTRS                    { LP_FLEXCOMM0, LP_FLEXCOMM1, LP_FLEXCOMM2, LP_FLEXCOMM3, LP_FLEXCOMM4, LP_FLEXCOMM5, LP_FLEXCOMM6, LP_FLEXCOMM7 }
#endif
/** Interrupt vectors for the LP_FLEXCOMM peripheral type */
#define LP_FLEXCOMM_IRQS                         { LP_FLEXCOMM0_IRQn, LP_FLEXCOMM1_IRQn, LP_FLEXCOMM2_IRQn, LP_FLEXCOMM3_IRQn, LP_FLEXCOMM4_IRQn, LP_FLEXCOMM5_IRQn, LP_FLEXCOMM6_IRQn, LP_FLEXCOMM7_IRQn }

/* MRT - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral MRT0 base address */
  #define MRT0_BASE                                (0x50013000u)
  /** Peripheral MRT0 base address */
  #define MRT0_BASE_NS                             (0x40013000u)
  /** Peripheral MRT0 base pointer */
  #define MRT0                                     ((MRT_Type *)MRT0_BASE)
  /** Peripheral MRT0 base pointer */
  #define MRT0_NS                                  ((MRT_Type *)MRT0_BASE_NS)
  /** Array initializer of MRT peripheral base addresses */
  #define MRT_BASE_ADDRS                           { MRT0_BASE }
  /** Array initializer of MRT peripheral base pointers */
  #define MRT_BASE_PTRS                            { MRT0 }
  /** Array initializer of MRT peripheral base addresses */
  #define MRT_BASE_ADDRS_NS                        { MRT0_BASE_NS }
  /** Array initializer of MRT peripheral base pointers */
  #define MRT_BASE_PTRS_NS                         { MRT0_NS }
#else
  /** Peripheral MRT0 base address */
  #define MRT0_BASE                                (0x40013000u)
  /** Peripheral MRT0 base pointer */
  #define MRT0                                     ((MRT_Type *)MRT0_BASE)
  /** Array initializer of MRT peripheral base addresses */
  #define MRT_BASE_ADDRS                           { MRT0_BASE }
  /** Array initializer of MRT peripheral base pointers */
  #define MRT_BASE_PTRS                            { MRT0 }
#endif
/** Interrupt vectors for the MRT peripheral type */
#define MRT_IRQS                                 { MRT0_IRQn }

/* NPX - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral NPX0 base address */
  #define NPX0_BASE                                (0x500CC000u)
  /** Peripheral NPX0 base address */
  #define NPX0_BASE_NS                             (0x400CC000u)
  /** Peripheral NPX0 base pointer */
  #define NPX0                                     ((NPX_Type *)NPX0_BASE)
  /** Peripheral NPX0 base pointer */
  #define NPX0_NS                                  ((NPX_Type *)NPX0_BASE_NS)
  /** Array initializer of NPX peripheral base addresses */
  #define NPX_BASE_ADDRS                           { NPX0_BASE }
  /** Array initializer of NPX peripheral base pointers */
  #define NPX_BASE_PTRS                            { NPX0 }
  /** Array initializer of NPX peripheral base addresses */
  #define NPX_BASE_ADDRS_NS                        { NPX0_BASE_NS }
  /** Array initializer of NPX peripheral base pointers */
  #define NPX_BASE_PTRS_NS                         { NPX0_NS }
#else
  /** Peripheral NPX0 base address */
  #define NPX0_BASE                                (0x400CC000u)
  /** Peripheral NPX0 base pointer */
  #define NPX0                                     ((NPX_Type *)NPX0_BASE)
  /** Array initializer of NPX peripheral base addresses */
  #define NPX_BASE_ADDRS                           { NPX0_BASE }
  /** Array initializer of NPX peripheral base pointers */
  #define NPX_BASE_PTRS                            { NPX0 }
#endif

/* OSTIMER - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral OSTIMER0 base address */
  #define OSTIMER0_BASE                            (0x50049000u)
  /** Peripheral OSTIMER0 base address */
  #define OSTIMER0_BASE_NS                         (0x40049000u)
  /** Peripheral OSTIMER0 base pointer */
  #define OSTIMER0                                 ((OSTIMER_Type *)OSTIMER0_BASE)
  /** Peripheral OSTIMER0 base pointer */
  #define OSTIMER0_NS                              ((OSTIMER_Type *)OSTIMER0_BASE_NS)
  /** Array initializer of OSTIMER peripheral base addresses */
  #define OSTIMER_BASE_ADDRS                       { OSTIMER0_BASE }
  /** Array initializer of OSTIMER peripheral base pointers */
  #define OSTIMER_BASE_PTRS                        { OSTIMER0 }
  /** Array initializer of OSTIMER peripheral base addresses */
  #define OSTIMER_BASE_ADDRS_NS                    { OSTIMER0_BASE_NS }
  /** Array initializer of OSTIMER peripheral base pointers */
  #define OSTIMER_BASE_PTRS_NS                     { OSTIMER0_NS }
#else
  /** Peripheral OSTIMER0 base address */
  #define OSTIMER0_BASE                            (0x40049000u)
  /** Peripheral OSTIMER0 base pointer */
  #define OSTIMER0                                 ((OSTIMER_Type *)OSTIMER0_BASE)
  /** Array initializer of OSTIMER peripheral base addresses */
  #define OSTIMER_BASE_ADDRS                       { OSTIMER0_BASE }
  /** Array initializer of OSTIMER peripheral base pointers */
  #define OSTIMER_BASE_PTRS                        { OSTIMER0 }
#endif
/** Interrupt vectors for the OSTIMER peripheral type */
#define OSTIMER_IRQS                             { OS_EVENT_IRQn }

/* OTPC - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral OTPC0 base address */
  #define OTPC0_BASE                               (0x500C9000u)
  /** Peripheral OTPC0 base address */
  #define OTPC0_BASE_NS                            (0x400C9000u)
  /** Peripheral OTPC0 base pointer */
  #define OTPC0                                    ((OTPC_Type *)OTPC0_BASE)
  /** Peripheral OTPC0 base pointer */
  #define OTPC0_NS                                 ((OTPC_Type *)OTPC0_BASE_NS)
  /** Array initializer of OTPC peripheral base addresses */
  #define OTPC_BASE_ADDRS                          { OTPC0_BASE }
  /** Array initializer of OTPC peripheral base pointers */
  #define OTPC_BASE_PTRS                           { OTPC0 }
  /** Array initializer of OTPC peripheral base addresses */
  #define OTPC_BASE_ADDRS_NS                       { OTPC0_BASE_NS }
  /** Array initializer of OTPC peripheral base pointers */
  #define OTPC_BASE_PTRS_NS                        { OTPC0_NS }
#else
  /** Peripheral OTPC0 base address */
  #define OTPC0_BASE                               (0x400C9000u)
  /** Peripheral OTPC0 base pointer */
  #define OTPC0                                    ((OTPC_Type *)OTPC0_BASE)
  /** Array initializer of OTPC peripheral base addresses */
  #define OTPC_BASE_ADDRS                          { OTPC0_BASE }
  /** Array initializer of OTPC peripheral base pointers */
  #define OTPC_BASE_PTRS                           { OTPC0 }
#endif

/* PDM - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral PDM base address */
  #define PDM_BASE                                 (0x5010C000u)
  /** Peripheral PDM base address */
  #define PDM_BASE_NS                              (0x4010C000u)
  /** Peripheral PDM base pointer */
  #define PDM                                      ((PDM_Type *)PDM_BASE)
  /** Peripheral PDM base pointer */
  #define PDM_NS                                   ((PDM_Type *)PDM_BASE_NS)
  /** Array initializer of PDM peripheral base addresses */
  #define PDM_BASE_ADDRS                           { PDM_BASE }
  /** Array initializer of PDM peripheral base pointers */
  #define PDM_BASE_PTRS                            { PDM }
  /** Array initializer of PDM peripheral base addresses */
  #define PDM_BASE_ADDRS_NS                        { PDM_BASE_NS }
  /** Array initializer of PDM peripheral base pointers */
  #define PDM_BASE_PTRS_NS                         { PDM_NS }
#else
  /** Peripheral PDM base address */
  #define PDM_BASE                                 (0x4010C000u)
  /** Peripheral PDM base pointer */
  #define PDM                                      ((PDM_Type *)PDM_BASE)
  /** Array initializer of PDM peripheral base addresses */
  #define PDM_BASE_ADDRS                           { PDM_BASE }
  /** Array initializer of PDM peripheral base pointers */
  #define PDM_BASE_PTRS                            { PDM }
#endif
/** Interrupt vectors for the PDM peripheral type */
#define PDM_IRQS                                 { PDM_EVENT_IRQn }

/* PINT - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral PINT0 base address */
  #define PINT0_BASE                               (0x50004000u)
  /** Peripheral PINT0 base address */
  #define PINT0_BASE_NS                            (0x40004000u)
  /** Peripheral PINT0 base pointer */
  #define PINT0                                    ((PINT_Type *)PINT0_BASE)
  /** Peripheral PINT0 base pointer */
  #define PINT0_NS                                 ((PINT_Type *)PINT0_BASE_NS)
  /** Array initializer of PINT peripheral base addresses */
  #define PINT_BASE_ADDRS                          { PINT0_BASE }
  /** Array initializer of PINT peripheral base pointers */
  #define PINT_BASE_PTRS                           { PINT0 }
  /** Array initializer of PINT peripheral base addresses */
  #define PINT_BASE_ADDRS_NS                       { PINT0_BASE_NS }
  /** Array initializer of PINT peripheral base pointers */
  #define PINT_BASE_PTRS_NS                        { PINT0_NS }
#else
  /** Peripheral PINT0 base address */
  #define PINT0_BASE                               (0x40004000u)
  /** Peripheral PINT0 base pointer */
  #define PINT0                                    ((PINT_Type *)PINT0_BASE)
  /** Array initializer of PINT peripheral base addresses */
  #define PINT_BASE_ADDRS                          { PINT0_BASE }
  /** Array initializer of PINT peripheral base pointers */
  #define PINT_BASE_PTRS                           { PINT0 }
#endif
/** Interrupt vectors for the PINT peripheral type */
#define PINT_IRQS                                { PINT0_IRQn }

/* PKC - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral PKC0 base address */
  #define PKC0_BASE                                (0x5002B000u)
  /** Peripheral PKC0 base address */
  #define PKC0_BASE_NS                             (0x4002B000u)
  /** Peripheral PKC0 base pointer */
  #define PKC0                                     ((PKC_Type *)PKC0_BASE)
  /** Peripheral PKC0 base pointer */
  #define PKC0_NS                                  ((PKC_Type *)PKC0_BASE_NS)
  /** Array initializer of PKC peripheral base addresses */
  #define PKC_BASE_ADDRS                           { PKC0_BASE }
  /** Array initializer of PKC peripheral base pointers */
  #define PKC_BASE_PTRS                            { PKC0 }
  /** Array initializer of PKC peripheral base addresses */
  #define PKC_BASE_ADDRS_NS                        { PKC0_BASE_NS }
  /** Array initializer of PKC peripheral base pointers */
  #define PKC_BASE_PTRS_NS                         { PKC0_NS }
#else
  /** Peripheral PKC0 base address */
  #define PKC0_BASE                                (0x4002B000u)
  /** Peripheral PKC0 base pointer */
  #define PKC0                                     ((PKC_Type *)PKC0_BASE)
  /** Array initializer of PKC peripheral base addresses */
  #define PKC_BASE_ADDRS                           { PKC0_BASE }
  /** Array initializer of PKC peripheral base pointers */
  #define PKC_BASE_PTRS                            { PKC0 }
#endif

/* PORT - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral PORT0 base address */
  #define PORT0_BASE                               (0x50116000u)
  /** Peripheral PORT0 base address */
  #define PORT0_BASE_NS                            (0x40116000u)
  /** Peripheral PORT0 base pointer */
  #define PORT0                                    ((PORT_Type *)PORT0_BASE)
  /** Peripheral PORT0 base pointer */
  #define PORT0_NS                                 ((PORT_Type *)PORT0_BASE_NS)
  /** Peripheral PORT1 base address */
  #define PORT1_BASE                               (0x50117000u)
  /** Peripheral PORT1 base address */
  #define PORT1_BASE_NS                            (0x40117000u)
  /** Peripheral PORT1 base pointer */
  #define PORT1                                    ((PORT_Type *)PORT1_BASE)
  /** Peripheral PORT1 base pointer */
  #define PORT1_NS                                 ((PORT_Type *)PORT1_BASE_NS)
  /** Peripheral PORT2 base address */
  #define PORT2_BASE                               (0x50118000u)
  /** Peripheral PORT2 base address */
  #define PORT2_BASE_NS                            (0x40118000u)
  /** Peripheral PORT2 base pointer */
  #define PORT2                                    ((PORT_Type *)PORT2_BASE)
  /** Peripheral PORT2 base pointer */
  #define PORT2_NS                                 ((PORT_Type *)PORT2_BASE_NS)
  /** Peripheral PORT3 base address */
  #define PORT3_BASE                               (0x50119000u)
  /** Peripheral PORT3 base address */
  #define PORT3_BASE_NS                            (0x40119000u)
  /** Peripheral PORT3 base pointer */
  #define PORT3                                    ((PORT_Type *)PORT3_BASE)
  /** Peripheral PORT3 base pointer */
  #define PORT3_NS                                 ((PORT_Type *)PORT3_BASE_NS)
  /** Peripheral PORT4 base address */
  #define PORT4_BASE                               (0x5011A000u)
  /** Peripheral PORT4 base address */
  #define PORT4_BASE_NS                            (0x4011A000u)
  /** Peripheral PORT4 base pointer */
  #define PORT4                                    ((PORT_Type *)PORT4_BASE)
  /** Peripheral PORT4 base pointer */
  #define PORT4_NS                                 ((PORT_Type *)PORT4_BASE_NS)
  /** Peripheral PORT5 base address */
  #define PORT5_BASE                               (0x50042000u)
  /** Peripheral PORT5 base address */
  #define PORT5_BASE_NS                            (0x40042000u)
  /** Peripheral PORT5 base pointer */
  #define PORT5                                    ((PORT_Type *)PORT5_BASE)
  /** Peripheral PORT5 base pointer */
  #define PORT5_NS                                 ((PORT_Type *)PORT5_BASE_NS)
  /** Array initializer of PORT peripheral base addresses */
  #define PORT_BASE_ADDRS                          { PORT0_BASE, PORT1_BASE, PORT2_BASE, PORT3_BASE, PORT4_BASE, PORT5_BASE }
  /** Array initializer of PORT peripheral base pointers */
  #define PORT_BASE_PTRS                           { PORT0, PORT1, PORT2, PORT3, PORT4, PORT5 }
  /** Array initializer of PORT peripheral base addresses */
  #define PORT_BASE_ADDRS_NS                       { PORT0_BASE_NS, PORT1_BASE_NS, PORT2_BASE_NS, PORT3_BASE_NS, PORT4_BASE_NS, PORT5_BASE_NS }
  /** Array initializer of PORT peripheral base pointers */
  #define PORT_BASE_PTRS_NS                        { PORT0_NS, PORT1_NS, PORT2_NS, PORT3_NS, PORT4_NS, PORT5_NS }
#else
  /** Peripheral PORT0 base address */
  #define PORT0_BASE                               (0x40116000u)
  /** Peripheral PORT0 base pointer */
  #define PORT0                                    ((PORT_Type *)PORT0_BASE)
  /** Peripheral PORT1 base address */
  #define PORT1_BASE                               (0x40117000u)
  /** Peripheral PORT1 base pointer */
  #define PORT1                                    ((PORT_Type *)PORT1_BASE)
  /** Peripheral PORT2 base address */
  #define PORT2_BASE                               (0x40118000u)
  /** Peripheral PORT2 base pointer */
  #define PORT2                                    ((PORT_Type *)PORT2_BASE)
  /** Peripheral PORT3 base address */
  #define PORT3_BASE                               (0x40119000u)
  /** Peripheral PORT3 base pointer */
  #define PORT3                                    ((PORT_Type *)PORT3_BASE)
  /** Peripheral PORT4 base address */
  #define PORT4_BASE                               (0x4011A000u)
  /** Peripheral PORT4 base pointer */
  #define PORT4                                    ((PORT_Type *)PORT4_BASE)
  /** Peripheral PORT5 base address */
  #define PORT5_BASE                               (0x40042000u)
  /** Peripheral PORT5 base pointer */
  #define PORT5                                    ((PORT_Type *)PORT5_BASE)
  /** Array initializer of PORT peripheral base addresses */
  #define PORT_BASE_ADDRS                          { PORT0_BASE, PORT1_BASE, PORT2_BASE, PORT3_BASE, PORT4_BASE, PORT5_BASE }
  /** Array initializer of PORT peripheral base pointers */
  #define PORT_BASE_PTRS                           { PORT0, PORT1, PORT2, PORT3, PORT4, PORT5 }
#endif

/* PUF - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral PUF base address */
  #define PUF_BASE                                 (0x5002C000u)
  /** Peripheral PUF base address */
  #define PUF_BASE_NS                              (0x4002C000u)
  /** Peripheral PUF base pointer */
  #define PUF                                      ((PUF_Type *)PUF_BASE)
  /** Peripheral PUF base pointer */
  #define PUF_NS                                   ((PUF_Type *)PUF_BASE_NS)
  /** Peripheral PUF_ALIAS1 base address */
  #define PUF_ALIAS1_BASE                          (0x5002D000u)
  /** Peripheral PUF_ALIAS1 base address */
  #define PUF_ALIAS1_BASE_NS                       (0x4002D000u)
  /** Peripheral PUF_ALIAS1 base pointer */
  #define PUF_ALIAS1                               ((PUF_Type *)PUF_ALIAS1_BASE)
  /** Peripheral PUF_ALIAS1 base pointer */
  #define PUF_ALIAS1_NS                            ((PUF_Type *)PUF_ALIAS1_BASE_NS)
  /** Peripheral PUF_ALIAS2 base address */
  #define PUF_ALIAS2_BASE                          (0x5002E000u)
  /** Peripheral PUF_ALIAS2 base address */
  #define PUF_ALIAS2_BASE_NS                       (0x4002E000u)
  /** Peripheral PUF_ALIAS2 base pointer */
  #define PUF_ALIAS2                               ((PUF_Type *)PUF_ALIAS2_BASE)
  /** Peripheral PUF_ALIAS2 base pointer */
  #define PUF_ALIAS2_NS                            ((PUF_Type *)PUF_ALIAS2_BASE_NS)
  /** Peripheral PUF_ALIAS3 base address */
  #define PUF_ALIAS3_BASE                          (0x5002F000u)
  /** Peripheral PUF_ALIAS3 base address */
  #define PUF_ALIAS3_BASE_NS                       (0x4002F000u)
  /** Peripheral PUF_ALIAS3 base pointer */
  #define PUF_ALIAS3                               ((PUF_Type *)PUF_ALIAS3_BASE)
  /** Peripheral PUF_ALIAS3 base pointer */
  #define PUF_ALIAS3_NS                            ((PUF_Type *)PUF_ALIAS3_BASE_NS)
  /** Array initializer of PUF peripheral base addresses */
  #define PUF_BASE_ADDRS                           { PUF_BASE, PUF_ALIAS1_BASE, PUF_ALIAS2_BASE, PUF_ALIAS3_BASE }
  /** Array initializer of PUF peripheral base pointers */
  #define PUF_BASE_PTRS                            { PUF, PUF_ALIAS1, PUF_ALIAS2, PUF_ALIAS3 }
  /** Array initializer of PUF peripheral base addresses */
  #define PUF_BASE_ADDRS_NS                        { PUF_BASE_NS, PUF_ALIAS1_BASE_NS, PUF_ALIAS2_BASE_NS, PUF_ALIAS3_BASE_NS }
  /** Array initializer of PUF peripheral base pointers */
  #define PUF_BASE_PTRS_NS                         { PUF_NS, PUF_ALIAS1_NS, PUF_ALIAS2_NS, PUF_ALIAS3_NS }
#else
  /** Peripheral PUF base address */
  #define PUF_BASE                                 (0x4002C000u)
  /** Peripheral PUF base pointer */
  #define PUF                                      ((PUF_Type *)PUF_BASE)
  /** Peripheral PUF_ALIAS1 base address */
  #define PUF_ALIAS1_BASE                          (0x4002D000u)
  /** Peripheral PUF_ALIAS1 base pointer */
  #define PUF_ALIAS1                               ((PUF_Type *)PUF_ALIAS1_BASE)
  /** Peripheral PUF_ALIAS2 base address */
  #define PUF_ALIAS2_BASE                          (0x4002E000u)
  /** Peripheral PUF_ALIAS2 base pointer */
  #define PUF_ALIAS2                               ((PUF_Type *)PUF_ALIAS2_BASE)
  /** Peripheral PUF_ALIAS3 base address */
  #define PUF_ALIAS3_BASE                          (0x4002F000u)
  /** Peripheral PUF_ALIAS3 base pointer */
  #define PUF_ALIAS3                               ((PUF_Type *)PUF_ALIAS3_BASE)
  /** Array initializer of PUF peripheral base addresses */
  #define PUF_BASE_ADDRS                           { PUF_BASE, PUF_ALIAS1_BASE, PUF_ALIAS2_BASE, PUF_ALIAS3_BASE }
  /** Array initializer of PUF peripheral base pointers */
  #define PUF_BASE_PTRS                            { PUF, PUF_ALIAS1, PUF_ALIAS2, PUF_ALIAS3 }
#endif

/* PWM - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral PWM0 base address */
  #define PWM0_BASE                                (0x500CE000u)
  /** Peripheral PWM0 base address */
  #define PWM0_BASE_NS                             (0x400CE000u)
  /** Peripheral PWM0 base pointer */
  #define PWM0                                     ((PWM_Type *)PWM0_BASE)
  /** Peripheral PWM0 base pointer */
  #define PWM0_NS                                  ((PWM_Type *)PWM0_BASE_NS)
  /** Peripheral PWM1 base address */
  #define PWM1_BASE                                (0x500D0000u)
  /** Peripheral PWM1 base address */
  #define PWM1_BASE_NS                             (0x400D0000u)
  /** Peripheral PWM1 base pointer */
  #define PWM1                                     ((PWM_Type *)PWM1_BASE)
  /** Peripheral PWM1 base pointer */
  #define PWM1_NS                                  ((PWM_Type *)PWM1_BASE_NS)
  /** Array initializer of PWM peripheral base addresses */
  #define PWM_BASE_ADDRS                           { PWM0_BASE, PWM1_BASE }
  /** Array initializer of PWM peripheral base pointers */
  #define PWM_BASE_PTRS                            { PWM0, PWM1 }
  /** Array initializer of PWM peripheral base addresses */
  #define PWM_BASE_ADDRS_NS                        { PWM0_BASE_NS, PWM1_BASE_NS }
  /** Array initializer of PWM peripheral base pointers */
  #define PWM_BASE_PTRS_NS                         { PWM0_NS, PWM1_NS }
#else
  /** Peripheral PWM0 base address */
  #define PWM0_BASE                                (0x400CE000u)
  /** Peripheral PWM0 base pointer */
  #define PWM0                                     ((PWM_Type *)PWM0_BASE)
  /** Peripheral PWM1 base address */
  #define PWM1_BASE                                (0x400D0000u)
  /** Peripheral PWM1 base pointer */
  #define PWM1                                     ((PWM_Type *)PWM1_BASE)
  /** Array initializer of PWM peripheral base addresses */
  #define PWM_BASE_ADDRS                           { PWM0_BASE, PWM1_BASE }
  /** Array initializer of PWM peripheral base pointers */
  #define PWM_BASE_PTRS                            { PWM0, PWM1 }
#endif
/** Interrupt vectors for the PWM peripheral type */
#define PWM_CMP_IRQS                             { { FLEXPWM0_SUBMODULE0_IRQn, FLEXPWM0_SUBMODULE1_IRQn, FLEXPWM0_SUBMODULE2_IRQn, FLEXPWM0_SUBMODULE3_IRQn }, { FLEXPWM1_SUBMODULE0_IRQn, FLEXPWM1_SUBMODULE1_IRQn, FLEXPWM1_SUBMODULE2_IRQn, FLEXPWM1_SUBMODULE3_IRQn } }
#define PWM_RELOAD_IRQS                          { { FLEXPWM0_SUBMODULE0_IRQn, FLEXPWM0_SUBMODULE1_IRQn, FLEXPWM0_SUBMODULE2_IRQn, FLEXPWM0_SUBMODULE3_IRQn }, { FLEXPWM1_SUBMODULE0_IRQn, FLEXPWM1_SUBMODULE1_IRQn, FLEXPWM1_SUBMODULE2_IRQn, FLEXPWM1_SUBMODULE3_IRQn } }
#define PWM_CAPTURE_IRQS                         { { FLEXPWM0_SUBMODULE0_IRQn, FLEXPWM0_SUBMODULE1_IRQn, FLEXPWM0_SUBMODULE2_IRQn, FLEXPWM0_SUBMODULE3_IRQn }, { FLEXPWM1_SUBMODULE0_IRQn, FLEXPWM1_SUBMODULE1_IRQn, FLEXPWM1_SUBMODULE2_IRQn, FLEXPWM1_SUBMODULE3_IRQn } }
#define PWM_FAULT_IRQS                           { FLEXPWM0_FAULT_IRQn, FLEXPWM1_FAULT_IRQn }
#define PWM_RELOAD_ERROR_IRQS                    { FLEXPWM0_RELOAD_ERROR_IRQn, FLEXPWM1_RELOAD_ERROR_IRQn }

/* QDC - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral QDC0 base address */
  #define QDC0_BASE                                (0x500CF000u)
  /** Peripheral QDC0 base address */
  #define QDC0_BASE_NS                             (0x400CF000u)
  /** Peripheral QDC0 base pointer */
  #define QDC0                                     ((QDC_Type *)QDC0_BASE)
  /** Peripheral QDC0 base pointer */
  #define QDC0_NS                                  ((QDC_Type *)QDC0_BASE_NS)
  /** Peripheral QDC1 base address */
  #define QDC1_BASE                                (0x500D1000u)
  /** Peripheral QDC1 base address */
  #define QDC1_BASE_NS                             (0x400D1000u)
  /** Peripheral QDC1 base pointer */
  #define QDC1                                     ((QDC_Type *)QDC1_BASE)
  /** Peripheral QDC1 base pointer */
  #define QDC1_NS                                  ((QDC_Type *)QDC1_BASE_NS)
  /** Array initializer of QDC peripheral base addresses */
  #define QDC_BASE_ADDRS                           { QDC0_BASE, QDC1_BASE }
  /** Array initializer of QDC peripheral base pointers */
  #define QDC_BASE_PTRS                            { QDC0, QDC1 }
  /** Array initializer of QDC peripheral base addresses */
  #define QDC_BASE_ADDRS_NS                        { QDC0_BASE_NS, QDC1_BASE_NS }
  /** Array initializer of QDC peripheral base pointers */
  #define QDC_BASE_PTRS_NS                         { QDC0_NS, QDC1_NS }
#else
  /** Peripheral QDC0 base address */
  #define QDC0_BASE                                (0x400CF000u)
  /** Peripheral QDC0 base pointer */
  #define QDC0                                     ((QDC_Type *)QDC0_BASE)
  /** Peripheral QDC1 base address */
  #define QDC1_BASE                                (0x400D1000u)
  /** Peripheral QDC1 base pointer */
  #define QDC1                                     ((QDC_Type *)QDC1_BASE)
  /** Array initializer of QDC peripheral base addresses */
  #define QDC_BASE_ADDRS                           { QDC0_BASE, QDC1_BASE }
  /** Array initializer of QDC peripheral base pointers */
  #define QDC_BASE_PTRS                            { QDC0, QDC1 }
#endif
/** Interrupt vectors for the QDC peripheral type */
#define QDC_COMPARE_IRQS                         { QDC0_COMPARE_IRQn, QDC1_COMPARE_IRQn }
#define QDC_HOME_IRQS                            { QDC0_HOME_IRQn, QDC1_HOME_IRQn }
#define QDC_WDOG_IRQS                            { QDC0_WDG_SAB_IRQn, QDC1_WDG_SAB_IRQn }
#define QDC_INDEX_IRQS                           { QDC0_IDX_IRQn, QDC1_IDX_IRQn }

/* RTC - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral RTC0 base address */
  #define RTC0_BASE                                (0x5004C000u)
  /** Peripheral RTC0 base address */
  #define RTC0_BASE_NS                             (0x4004C000u)
  /** Peripheral RTC0 base pointer */
  #define RTC0                                     ((RTC_Type *)RTC0_BASE)
  /** Peripheral RTC0 base pointer */
  #define RTC0_NS                                  ((RTC_Type *)RTC0_BASE_NS)
  /** Array initializer of RTC peripheral base addresses */
  #define RTC_BASE_ADDRS                           { RTC0_BASE }
  /** Array initializer of RTC peripheral base pointers */
  #define RTC_BASE_PTRS                            { RTC0 }
  /** Array initializer of RTC peripheral base addresses */
  #define RTC_BASE_ADDRS_NS                        { RTC0_BASE_NS }
  /** Array initializer of RTC peripheral base pointers */
  #define RTC_BASE_PTRS_NS                         { RTC0_NS }
#else
  /** Peripheral RTC0 base address */
  #define RTC0_BASE                                (0x4004C000u)
  /** Peripheral RTC0 base pointer */
  #define RTC0                                     ((RTC_Type *)RTC0_BASE)
  /** Array initializer of RTC peripheral base addresses */
  #define RTC_BASE_ADDRS                           { RTC0_BASE }
  /** Array initializer of RTC peripheral base pointers */
  #define RTC_BASE_PTRS                            { RTC0 }
#endif
/** Interrupt vectors for the RTC peripheral type */
#define RTC_IRQS                                 { RTC_IRQn }

/* S50 - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral ELS base address */
  #define ELS_BASE                                 (0x50054000u)
  /** Peripheral ELS base address */
  #define ELS_BASE_NS                              (0x40054000u)
  /** Peripheral ELS base pointer */
  #define ELS                                      ((S50_Type *)ELS_BASE)
  /** Peripheral ELS base pointer */
  #define ELS_NS                                   ((S50_Type *)ELS_BASE_NS)
  /** Peripheral ELS_ALIAS1 base address */
  #define ELS_ALIAS1_BASE                          (0x50055000u)
  /** Peripheral ELS_ALIAS1 base address */
  #define ELS_ALIAS1_BASE_NS                       (0x40055000u)
  /** Peripheral ELS_ALIAS1 base pointer */
  #define ELS_ALIAS1                               ((S50_Type *)ELS_ALIAS1_BASE)
  /** Peripheral ELS_ALIAS1 base pointer */
  #define ELS_ALIAS1_NS                            ((S50_Type *)ELS_ALIAS1_BASE_NS)
  /** Peripheral ELS_ALIAS2 base address */
  #define ELS_ALIAS2_BASE                          (0x50056000u)
  /** Peripheral ELS_ALIAS2 base address */
  #define ELS_ALIAS2_BASE_NS                       (0x40056000u)
  /** Peripheral ELS_ALIAS2 base pointer */
  #define ELS_ALIAS2                               ((S50_Type *)ELS_ALIAS2_BASE)
  /** Peripheral ELS_ALIAS2 base pointer */
  #define ELS_ALIAS2_NS                            ((S50_Type *)ELS_ALIAS2_BASE_NS)
  /** Peripheral ELS_ALIAS3 base address */
  #define ELS_ALIAS3_BASE                          (0x50057000u)
  /** Peripheral ELS_ALIAS3 base address */
  #define ELS_ALIAS3_BASE_NS                       (0x40057000u)
  /** Peripheral ELS_ALIAS3 base pointer */
  #define ELS_ALIAS3                               ((S50_Type *)ELS_ALIAS3_BASE)
  /** Peripheral ELS_ALIAS3 base pointer */
  #define ELS_ALIAS3_NS                            ((S50_Type *)ELS_ALIAS3_BASE_NS)
  /** Array initializer of S50 peripheral base addresses */
  #define S50_BASE_ADDRS                           { ELS_BASE, ELS_ALIAS1_BASE, ELS_ALIAS2_BASE, ELS_ALIAS3_BASE }
  /** Array initializer of S50 peripheral base pointers */
  #define S50_BASE_PTRS                            { ELS, ELS_ALIAS1, ELS_ALIAS2, ELS_ALIAS3 }
  /** Array initializer of S50 peripheral base addresses */
  #define S50_BASE_ADDRS_NS                        { ELS_BASE_NS, ELS_ALIAS1_BASE_NS, ELS_ALIAS2_BASE_NS, ELS_ALIAS3_BASE_NS }
  /** Array initializer of S50 peripheral base pointers */
  #define S50_BASE_PTRS_NS                         { ELS_NS, ELS_ALIAS1_NS, ELS_ALIAS2_NS, ELS_ALIAS3_NS }
#else
  /** Peripheral ELS base address */
  #define ELS_BASE                                 (0x40054000u)
  /** Peripheral ELS base pointer */
  #define ELS                                      ((S50_Type *)ELS_BASE)
  /** Peripheral ELS_ALIAS1 base address */
  #define ELS_ALIAS1_BASE                          (0x40055000u)
  /** Peripheral ELS_ALIAS1 base pointer */
  #define ELS_ALIAS1                               ((S50_Type *)ELS_ALIAS1_BASE)
  /** Peripheral ELS_ALIAS2 base address */
  #define ELS_ALIAS2_BASE                          (0x40056000u)
  /** Peripheral ELS_ALIAS2 base pointer */
  #define ELS_ALIAS2                               ((S50_Type *)ELS_ALIAS2_BASE)
  /** Peripheral ELS_ALIAS3 base address */
  #define ELS_ALIAS3_BASE                          (0x40057000u)
  /** Peripheral ELS_ALIAS3 base pointer */
  #define ELS_ALIAS3                               ((S50_Type *)ELS_ALIAS3_BASE)
  /** Array initializer of S50 peripheral base addresses */
  #define S50_BASE_ADDRS                           { ELS_BASE, ELS_ALIAS1_BASE, ELS_ALIAS2_BASE, ELS_ALIAS3_BASE }
  /** Array initializer of S50 peripheral base pointers */
  #define S50_BASE_PTRS                            { ELS, ELS_ALIAS1, ELS_ALIAS2, ELS_ALIAS3 }
#endif

/* SCG - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral SCG0 base address */
  #define SCG0_BASE                                (0x50044000u)
  /** Peripheral SCG0 base address */
  #define SCG0_BASE_NS                             (0x40044000u)
  /** Peripheral SCG0 base pointer */
  #define SCG0                                     ((SCG_Type *)SCG0_BASE)
  /** Peripheral SCG0 base pointer */
  #define SCG0_NS                                  ((SCG_Type *)SCG0_BASE_NS)
  /** Array initializer of SCG peripheral base addresses */
  #define SCG_BASE_ADDRS                           { SCG0_BASE }
  /** Array initializer of SCG peripheral base pointers */
  #define SCG_BASE_PTRS                            { SCG0 }
  /** Array initializer of SCG peripheral base addresses */
  #define SCG_BASE_ADDRS_NS                        { SCG0_BASE_NS }
  /** Array initializer of SCG peripheral base pointers */
  #define SCG_BASE_PTRS_NS                         { SCG0_NS }
#else
  /** Peripheral SCG0 base address */
  #define SCG0_BASE                                (0x40044000u)
  /** Peripheral SCG0 base pointer */
  #define SCG0                                     ((SCG_Type *)SCG0_BASE)
  /** Array initializer of SCG peripheral base addresses */
  #define SCG_BASE_ADDRS                           { SCG0_BASE }
  /** Array initializer of SCG peripheral base pointers */
  #define SCG_BASE_PTRS                            { SCG0 }
#endif

/* SMARTDMA - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral SMARTDMA0 base address */
  #define SMARTDMA0_BASE                           (0x50033000u)
  /** Peripheral SMARTDMA0 base address */
  #define SMARTDMA0_BASE_NS                        (0x40033000u)
  /** Peripheral SMARTDMA0 base pointer */
  #define SMARTDMA0                                ((SMARTDMA_Type *)SMARTDMA0_BASE)
  /** Peripheral SMARTDMA0 base pointer */
  #define SMARTDMA0_NS                             ((SMARTDMA_Type *)SMARTDMA0_BASE_NS)
  /** Array initializer of SMARTDMA peripheral base addresses */
  #define SMARTDMA_BASE_ADDRS                      { SMARTDMA0_BASE }
  /** Array initializer of SMARTDMA peripheral base pointers */
  #define SMARTDMA_BASE_PTRS                       { SMARTDMA0 }
  /** Array initializer of SMARTDMA peripheral base addresses */
  #define SMARTDMA_BASE_ADDRS_NS                   { SMARTDMA0_BASE_NS }
  /** Array initializer of SMARTDMA peripheral base pointers */
  #define SMARTDMA_BASE_PTRS_NS                    { SMARTDMA0_NS }
#else
  /** Peripheral SMARTDMA0 base address */
  #define SMARTDMA0_BASE                           (0x40033000u)
  /** Peripheral SMARTDMA0 base pointer */
  #define SMARTDMA0                                ((SMARTDMA_Type *)SMARTDMA0_BASE)
  /** Array initializer of SMARTDMA peripheral base addresses */
  #define SMARTDMA_BASE_ADDRS                      { SMARTDMA0_BASE }
  /** Array initializer of SMARTDMA peripheral base pointers */
  #define SMARTDMA_BASE_PTRS                       { SMARTDMA0 }
#endif

/* SPC - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral SPC0 base address */
  #define SPC0_BASE                                (0x50045000u)
  /** Peripheral SPC0 base address */
  #define SPC0_BASE_NS                             (0x40045000u)
  /** Peripheral SPC0 base pointer */
  #define SPC0                                     ((SPC_Type *)SPC0_BASE)
  /** Peripheral SPC0 base pointer */
  #define SPC0_NS                                  ((SPC_Type *)SPC0_BASE_NS)
  /** Array initializer of SPC peripheral base addresses */
  #define SPC_BASE_ADDRS                           { SPC0_BASE }
  /** Array initializer of SPC peripheral base pointers */
  #define SPC_BASE_PTRS                            { SPC0 }
  /** Array initializer of SPC peripheral base addresses */
  #define SPC_BASE_ADDRS_NS                        { SPC0_BASE_NS }
  /** Array initializer of SPC peripheral base pointers */
  #define SPC_BASE_PTRS_NS                         { SPC0_NS }
#else
  /** Peripheral SPC0 base address */
  #define SPC0_BASE                                (0x40045000u)
  /** Peripheral SPC0 base pointer */
  #define SPC0                                     ((SPC_Type *)SPC0_BASE)
  /** Array initializer of SPC peripheral base addresses */
  #define SPC_BASE_ADDRS                           { SPC0_BASE }
  /** Array initializer of SPC peripheral base pointers */
  #define SPC_BASE_PTRS                            { SPC0 }
#endif

/* SYSCON - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral SYSCON0 base address */
  #define SYSCON0_BASE                             (0x50000000u)
  /** Peripheral SYSCON0 base address */
  #define SYSCON0_BASE_NS                          (0x40000000u)
  /** Peripheral SYSCON0 base pointer */
  #define SYSCON0                                  ((SYSCON_Type *)SYSCON0_BASE)
  /** Peripheral SYSCON0 base pointer */
  #define SYSCON0_NS                               ((SYSCON_Type *)SYSCON0_BASE_NS)
  /** Array initializer of SYSCON peripheral base addresses */
  #define SYSCON_BASE_ADDRS                        { SYSCON0_BASE }
  /** Array initializer of SYSCON peripheral base pointers */
  #define SYSCON_BASE_PTRS                         { SYSCON0 }
  /** Array initializer of SYSCON peripheral base addresses */
  #define SYSCON_BASE_ADDRS_NS                     { SYSCON0_BASE_NS }
  /** Array initializer of SYSCON peripheral base pointers */
  #define SYSCON_BASE_PTRS_NS                      { SYSCON0_NS }
#else
  /** Peripheral SYSCON0 base address */
  #define SYSCON0_BASE                             (0x40000000u)
  /** Peripheral SYSCON0 base pointer */
  #define SYSCON0                                  ((SYSCON_Type *)SYSCON0_BASE)
  /** Array initializer of SYSCON peripheral base addresses */
  #define SYSCON_BASE_ADDRS                        { SYSCON0_BASE }
  /** Array initializer of SYSCON peripheral base pointers */
  #define SYSCON_BASE_PTRS                         { SYSCON0 }
#endif

/* SYSPM - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral CMX_PERFMON0 base address */
  #define CMX_PERFMON0_BASE                        (0x500C1000u)
  /** Peripheral CMX_PERFMON0 base address */
  #define CMX_PERFMON0_BASE_NS                     (0x400C1000u)
  /** Peripheral CMX_PERFMON0 base pointer */
  #define CMX_PERFMON0                             ((SYSPM_Type *)CMX_PERFMON0_BASE)
  /** Peripheral CMX_PERFMON0 base pointer */
  #define CMX_PERFMON0_NS                          ((SYSPM_Type *)CMX_PERFMON0_BASE_NS)
  /** Array initializer of SYSPM peripheral base addresses */
  #define SYSPM_BASE_ADDRS                         { CMX_PERFMON0_BASE }
  /** Array initializer of SYSPM peripheral base pointers */
  #define SYSPM_BASE_PTRS                          { CMX_PERFMON0 }
  /** Array initializer of SYSPM peripheral base addresses */
  #define SYSPM_BASE_ADDRS_NS                      { CMX_PERFMON0_BASE_NS }
  /** Array initializer of SYSPM peripheral base pointers */
  #define SYSPM_BASE_PTRS_NS                       { CMX_PERFMON0_NS }
#else
  /** Peripheral CMX_PERFMON0 base address */
  #define CMX_PERFMON0_BASE                        (0x400C1000u)
  /** Peripheral CMX_PERFMON0 base pointer */
  #define CMX_PERFMON0                             ((SYSPM_Type *)CMX_PERFMON0_BASE)
  /** Array initializer of SYSPM peripheral base addresses */
  #define SYSPM_BASE_ADDRS                         { CMX_PERFMON0_BASE }
  /** Array initializer of SYSPM peripheral base pointers */
  #define SYSPM_BASE_PTRS                          { CMX_PERFMON0 }
#endif

/* TRDC - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral TRDC base address */
  #define TRDC_BASE                                (0x500C7000u)
  /** Peripheral TRDC base address */
  #define TRDC_BASE_NS                             (0x400C7000u)
  /** Peripheral TRDC base pointer */
  #define TRDC                                     ((TRDC_Type *)TRDC_BASE)
  /** Peripheral TRDC base pointer */
  #define TRDC_NS                                  ((TRDC_Type *)TRDC_BASE_NS)
  /** Array initializer of TRDC peripheral base addresses */
  #define TRDC_BASE_ADDRS                          { TRDC_BASE }
  /** Array initializer of TRDC peripheral base pointers */
  #define TRDC_BASE_PTRS                           { TRDC }
  /** Array initializer of TRDC peripheral base addresses */
  #define TRDC_BASE_ADDRS_NS                       { TRDC_BASE_NS }
  /** Array initializer of TRDC peripheral base pointers */
  #define TRDC_BASE_PTRS_NS                        { TRDC_NS }
#else
  /** Peripheral TRDC base address */
  #define TRDC_BASE                                (0x400C7000u)
  /** Peripheral TRDC base pointer */
  #define TRDC                                     ((TRDC_Type *)TRDC_BASE)
  /** Array initializer of TRDC peripheral base addresses */
  #define TRDC_BASE_ADDRS                          { TRDC_BASE }
  /** Array initializer of TRDC peripheral base pointers */
  #define TRDC_BASE_PTRS                           { TRDC }
#endif
#define MBC0_MEMORY_CFG_WORD_COUNT {1,2,4,1}
#define MBC1_MEMORY_CFG_WORD_COUNT {1,1,1,1}
#define MBC2_MEMORY_CFG_WORD_COUNT {9,6,1,1}
#define MBC3_MEMORY_CFG_WORD_COUNT {3,0,0,0}
#define MBC_MEMORY_CFG_WORD_COUNT {MBC0_MEMORY_CFG_WORD_COUNT , MBC1_MEMORY_CFG_WORD_COUNT, MBC2_MEMORY_CFG_WORD_COUNT, MBC3_MEMORY_CFG_WORD_COUNT}
#define MBC0_MEMORY_NSE_WORD_COUNT {1,1,1,1}
#define MBC1_MEMORY_NSE_WORD_COUNT {1,1,1,1}
#define MBC2_MEMORY_NSE_WORD_COUNT {3,2,1,1}
#define MBC3_MEMORY_NSE_WORD_COUNT {1,0,0,0}
#define MBC_MEMORY_NSE_WORD_COUNT {MBC0_MEMORY_NSE_WORD_COUNT , MBC1_MEMORY_NSE_WORD_COUNT, MBC2_MEMORY_NSE_WORD_COUNT, MBC3_MEMORY_NSE_WORD_COUNT}


/* USBHS - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral USBHS1__USBC base address */
  #define USBHS1__USBC_BASE                        (0x5010B000u)
  /** Peripheral USBHS1__USBC base address */
  #define USBHS1__USBC_BASE_NS                     (0x4010B000u)
  /** Peripheral USBHS1__USBC base pointer */
  #define USBHS1__USBC                             ((USBHS_Type *)USBHS1__USBC_BASE)
  /** Peripheral USBHS1__USBC base pointer */
  #define USBHS1__USBC_NS                          ((USBHS_Type *)USBHS1__USBC_BASE_NS)
  /** Array initializer of USBHS peripheral base addresses */
  #define USBHS_BASE_ADDRS                         { USBHS1__USBC_BASE }
  /** Array initializer of USBHS peripheral base pointers */
  #define USBHS_BASE_PTRS                          { USBHS1__USBC }
  /** Array initializer of USBHS peripheral base addresses */
  #define USBHS_BASE_ADDRS_NS                      { USBHS1__USBC_BASE_NS }
  /** Array initializer of USBHS peripheral base pointers */
  #define USBHS_BASE_PTRS_NS                       { USBHS1__USBC_NS }
#else
  /** Peripheral USBHS1__USBC base address */
  #define USBHS1__USBC_BASE                        (0x4010B000u)
  /** Peripheral USBHS1__USBC base pointer */
  #define USBHS1__USBC                             ((USBHS_Type *)USBHS1__USBC_BASE)
  /** Array initializer of USBHS peripheral base addresses */
  #define USBHS_BASE_ADDRS                         { USBHS1__USBC_BASE }
  /** Array initializer of USBHS peripheral base pointers */
  #define USBHS_BASE_PTRS                          { USBHS1__USBC }
#endif
/** Interrupt vectors for the USBHS peripheral type */
#define USBHS_IRQS                               { USB1_HS_IRQn }

/* USBHSDCD - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral USBHS1_PHY_DCD base address */
  #define USBHS1_PHY_DCD_BASE                      (0x5010A800u)
  /** Peripheral USBHS1_PHY_DCD base address */
  #define USBHS1_PHY_DCD_BASE_NS                   (0x4010A800u)
  /** Peripheral USBHS1_PHY_DCD base pointer */
  #define USBHS1_PHY_DCD                           ((USBHSDCD_Type *)USBHS1_PHY_DCD_BASE)
  /** Peripheral USBHS1_PHY_DCD base pointer */
  #define USBHS1_PHY_DCD_NS                        ((USBHSDCD_Type *)USBHS1_PHY_DCD_BASE_NS)
  /** Array initializer of USBHSDCD peripheral base addresses */
  #define USBHSDCD_BASE_ADDRS                      { USBHS1_PHY_DCD_BASE }
  /** Array initializer of USBHSDCD peripheral base pointers */
  #define USBHSDCD_BASE_PTRS                       { USBHS1_PHY_DCD }
  /** Array initializer of USBHSDCD peripheral base addresses */
  #define USBHSDCD_BASE_ADDRS_NS                   { USBHS1_PHY_DCD_BASE_NS }
  /** Array initializer of USBHSDCD peripheral base pointers */
  #define USBHSDCD_BASE_PTRS_NS                    { USBHS1_PHY_DCD_NS }
#else
  /** Peripheral USBHS1_PHY_DCD base address */
  #define USBHS1_PHY_DCD_BASE                      (0x4010A800u)
  /** Peripheral USBHS1_PHY_DCD base pointer */
  #define USBHS1_PHY_DCD                           ((USBHSDCD_Type *)USBHS1_PHY_DCD_BASE)
  /** Array initializer of USBHSDCD peripheral base addresses */
  #define USBHSDCD_BASE_ADDRS                      { USBHS1_PHY_DCD_BASE }
  /** Array initializer of USBHSDCD peripheral base pointers */
  #define USBHSDCD_BASE_PTRS                       { USBHS1_PHY_DCD }
#endif

/* USBNC - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral USBHS1__USBNC base address */
  #define USBHS1__USBNC_BASE                       (0x5010B200u)
  /** Peripheral USBHS1__USBNC base address */
  #define USBHS1__USBNC_BASE_NS                    (0x4010B200u)
  /** Peripheral USBHS1__USBNC base pointer */
  #define USBHS1__USBNC                            ((USBNC_Type *)USBHS1__USBNC_BASE)
  /** Peripheral USBHS1__USBNC base pointer */
  #define USBHS1__USBNC_NS                         ((USBNC_Type *)USBHS1__USBNC_BASE_NS)
  /** Array initializer of USBNC peripheral base addresses */
  #define USBNC_BASE_ADDRS                         { USBHS1__USBNC_BASE }
  /** Array initializer of USBNC peripheral base pointers */
  #define USBNC_BASE_PTRS                          { USBHS1__USBNC }
  /** Array initializer of USBNC peripheral base addresses */
  #define USBNC_BASE_ADDRS_NS                      { USBHS1__USBNC_BASE_NS }
  /** Array initializer of USBNC peripheral base pointers */
  #define USBNC_BASE_PTRS_NS                       { USBHS1__USBNC_NS }
#else
  /** Peripheral USBHS1__USBNC base address */
  #define USBHS1__USBNC_BASE                       (0x4010B200u)
  /** Peripheral USBHS1__USBNC base pointer */
  #define USBHS1__USBNC                            ((USBNC_Type *)USBHS1__USBNC_BASE)
  /** Array initializer of USBNC peripheral base addresses */
  #define USBNC_BASE_ADDRS                         { USBHS1__USBNC_BASE }
  /** Array initializer of USBNC peripheral base pointers */
  #define USBNC_BASE_PTRS                          { USBHS1__USBNC }
#endif

/* USBPHY - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral USBPHY base address */
  #define USBPHY_BASE                              (0x5010A000u)
  /** Peripheral USBPHY base address */
  #define USBPHY_BASE_NS                           (0x4010A000u)
  /** Peripheral USBPHY base pointer */
  #define USBPHY                                   ((USBPHY_Type *)USBPHY_BASE)
  /** Peripheral USBPHY base pointer */
  #define USBPHY_NS                                ((USBPHY_Type *)USBPHY_BASE_NS)
  /** Array initializer of USBPHY peripheral base addresses */
  #define USBPHY_BASE_ADDRS                        { USBPHY_BASE }
  /** Array initializer of USBPHY peripheral base pointers */
  #define USBPHY_BASE_PTRS                         { USBPHY }
  /** Array initializer of USBPHY peripheral base addresses */
  #define USBPHY_BASE_ADDRS_NS                     { USBPHY_BASE_NS }
  /** Array initializer of USBPHY peripheral base pointers */
  #define USBPHY_BASE_PTRS_NS                      { USBPHY_NS }
#else
  /** Peripheral USBPHY base address */
  #define USBPHY_BASE                              (0x4010A000u)
  /** Peripheral USBPHY base pointer */
  #define USBPHY                                   ((USBPHY_Type *)USBPHY_BASE)
  /** Array initializer of USBPHY peripheral base addresses */
  #define USBPHY_BASE_ADDRS                        { USBPHY_BASE }
  /** Array initializer of USBPHY peripheral base pointers */
  #define USBPHY_BASE_PTRS                         { USBPHY }
#endif
/** Interrupt vectors for the USBPHY peripheral type */
#define USBPHY_IRQS                              { USB1_HS_PHY_IRQn }
/* Backward compatibility */
#define USBPHY_CTRL_ENDEVPLUGINDET_MASK     USBPHY_CTRL_ENDEVPLUGINDETECT_MASK
#define USBPHY_CTRL_ENDEVPLUGINDET_SHIFT    USBPHY_CTRL_ENDEVPLUGINDETECT_SHIFT
#define USBPHY_CTRL_ENDEVPLUGINDET(x)       USBPHY_CTRL_ENDEVPLUGINDETECT(x)
#define USBPHY_TX_TXCAL45DM_MASK            USBPHY_TX_TXCAL45DN_MASK
#define USBPHY_TX_TXCAL45DM_SHIFT           USBPHY_TX_TXCAL45DN_SHIFT
#define USBPHY_TX_TXCAL45DM(x)              USBPHY_TX_TXCAL45DN(x)



/* UTICK - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral UTICK0 base address */
  #define UTICK0_BASE                              (0x50012000u)
  /** Peripheral UTICK0 base address */
  #define UTICK0_BASE_NS                           (0x40012000u)
  /** Peripheral UTICK0 base pointer */
  #define UTICK0                                   ((UTICK_Type *)UTICK0_BASE)
  /** Peripheral UTICK0 base pointer */
  #define UTICK0_NS                                ((UTICK_Type *)UTICK0_BASE_NS)
  /** Array initializer of UTICK peripheral base addresses */
  #define UTICK_BASE_ADDRS                         { UTICK0_BASE }
  /** Array initializer of UTICK peripheral base pointers */
  #define UTICK_BASE_PTRS                          { UTICK0 }
  /** Array initializer of UTICK peripheral base addresses */
  #define UTICK_BASE_ADDRS_NS                      { UTICK0_BASE_NS }
  /** Array initializer of UTICK peripheral base pointers */
  #define UTICK_BASE_PTRS_NS                       { UTICK0_NS }
#else
  /** Peripheral UTICK0 base address */
  #define UTICK0_BASE                              (0x40012000u)
  /** Peripheral UTICK0 base pointer */
  #define UTICK0                                   ((UTICK_Type *)UTICK0_BASE)
  /** Array initializer of UTICK peripheral base addresses */
  #define UTICK_BASE_ADDRS                         { UTICK0_BASE }
  /** Array initializer of UTICK peripheral base pointers */
  #define UTICK_BASE_PTRS                          { UTICK0 }
#endif
/** Interrupt vectors for the UTICK peripheral type */
#define UTICK_IRQS                               { UTICK0_IRQn }

/* VBAT - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral VBAT0 base address */
  #define VBAT0_BASE                               (0x50059000u)
  /** Peripheral VBAT0 base address */
  #define VBAT0_BASE_NS                            (0x40059000u)
  /** Peripheral VBAT0 base pointer */
  #define VBAT0                                    ((VBAT_Type *)VBAT0_BASE)
  /** Peripheral VBAT0 base pointer */
  #define VBAT0_NS                                 ((VBAT_Type *)VBAT0_BASE_NS)
  /** Array initializer of VBAT peripheral base addresses */
  #define VBAT_BASE_ADDRS                          { VBAT0_BASE }
  /** Array initializer of VBAT peripheral base pointers */
  #define VBAT_BASE_PTRS                           { VBAT0 }
  /** Array initializer of VBAT peripheral base addresses */
  #define VBAT_BASE_ADDRS_NS                       { VBAT0_BASE_NS }
  /** Array initializer of VBAT peripheral base pointers */
  #define VBAT_BASE_PTRS_NS                        { VBAT0_NS }
#else
  /** Peripheral VBAT0 base address */
  #define VBAT0_BASE                               (0x40059000u)
  /** Peripheral VBAT0 base pointer */
  #define VBAT0                                    ((VBAT_Type *)VBAT0_BASE)
  /** Array initializer of VBAT peripheral base addresses */
  #define VBAT_BASE_ADDRS                          { VBAT0_BASE }
  /** Array initializer of VBAT peripheral base pointers */
  #define VBAT_BASE_PTRS                           { VBAT0 }
#endif

/* VREF - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral VREF0 base address */
  #define VREF0_BASE                               (0x50111000u)
  /** Peripheral VREF0 base address */
  #define VREF0_BASE_NS                            (0x40111000u)
  /** Peripheral VREF0 base pointer */
  #define VREF0                                    ((VREF_Type *)VREF0_BASE)
  /** Peripheral VREF0 base pointer */
  #define VREF0_NS                                 ((VREF_Type *)VREF0_BASE_NS)
  /** Array initializer of VREF peripheral base addresses */
  #define VREF_BASE_ADDRS                          { VREF0_BASE }
  /** Array initializer of VREF peripheral base pointers */
  #define VREF_BASE_PTRS                           { VREF0 }
  /** Array initializer of VREF peripheral base addresses */
  #define VREF_BASE_ADDRS_NS                       { VREF0_BASE_NS }
  /** Array initializer of VREF peripheral base pointers */
  #define VREF_BASE_PTRS_NS                        { VREF0_NS }
#else
  /** Peripheral VREF0 base address */
  #define VREF0_BASE                               (0x40111000u)
  /** Peripheral VREF0 base pointer */
  #define VREF0                                    ((VREF_Type *)VREF0_BASE)
  /** Array initializer of VREF peripheral base addresses */
  #define VREF_BASE_ADDRS                          { VREF0_BASE }
  /** Array initializer of VREF peripheral base pointers */
  #define VREF_BASE_PTRS                           { VREF0 }
#endif

/* WUU - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral WUU0 base address */
  #define WUU0_BASE                                (0x50046000u)
  /** Peripheral WUU0 base address */
  #define WUU0_BASE_NS                             (0x40046000u)
  /** Peripheral WUU0 base pointer */
  #define WUU0                                     ((WUU_Type *)WUU0_BASE)
  /** Peripheral WUU0 base pointer */
  #define WUU0_NS                                  ((WUU_Type *)WUU0_BASE_NS)
  /** Array initializer of WUU peripheral base addresses */
  #define WUU_BASE_ADDRS                           { WUU0_BASE }
  /** Array initializer of WUU peripheral base pointers */
  #define WUU_BASE_PTRS                            { WUU0 }
  /** Array initializer of WUU peripheral base addresses */
  #define WUU_BASE_ADDRS_NS                        { WUU0_BASE_NS }
  /** Array initializer of WUU peripheral base pointers */
  #define WUU_BASE_PTRS_NS                         { WUU0_NS }
#else
  /** Peripheral WUU0 base address */
  #define WUU0_BASE                                (0x40046000u)
  /** Peripheral WUU0 base pointer */
  #define WUU0                                     ((WUU_Type *)WUU0_BASE)
  /** Array initializer of WUU peripheral base addresses */
  #define WUU_BASE_ADDRS                           { WUU0_BASE }
  /** Array initializer of WUU peripheral base pointers */
  #define WUU_BASE_PTRS                            { WUU0 }
#endif

/* WWDT - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral WWDT0 base address */
  #define WWDT0_BASE                               (0x50016000u)
  /** Peripheral WWDT0 base address */
  #define WWDT0_BASE_NS                            (0x40016000u)
  /** Peripheral WWDT0 base pointer */
  #define WWDT0                                    ((WWDT_Type *)WWDT0_BASE)
  /** Peripheral WWDT0 base pointer */
  #define WWDT0_NS                                 ((WWDT_Type *)WWDT0_BASE_NS)
  /** Peripheral WWDT1 base address */
  #define WWDT1_BASE                               (0x50017000u)
  /** Peripheral WWDT1 base address */
  #define WWDT1_BASE_NS                            (0x40017000u)
  /** Peripheral WWDT1 base pointer */
  #define WWDT1                                    ((WWDT_Type *)WWDT1_BASE)
  /** Peripheral WWDT1 base pointer */
  #define WWDT1_NS                                 ((WWDT_Type *)WWDT1_BASE_NS)
  /** Array initializer of WWDT peripheral base addresses */
  #define WWDT_BASE_ADDRS                          { WWDT0_BASE, WWDT1_BASE }
  /** Array initializer of WWDT peripheral base pointers */
  #define WWDT_BASE_PTRS                           { WWDT0, WWDT1 }
  /** Array initializer of WWDT peripheral base addresses */
  #define WWDT_BASE_ADDRS_NS                       { WWDT0_BASE_NS, WWDT1_BASE_NS }
  /** Array initializer of WWDT peripheral base pointers */
  #define WWDT_BASE_PTRS_NS                        { WWDT0_NS, WWDT1_NS }
#else
  /** Peripheral WWDT0 base address */
  #define WWDT0_BASE                               (0x40016000u)
  /** Peripheral WWDT0 base pointer */
  #define WWDT0                                    ((WWDT_Type *)WWDT0_BASE)
  /** Peripheral WWDT1 base address */
  #define WWDT1_BASE                               (0x40017000u)
  /** Peripheral WWDT1 base pointer */
  #define WWDT1                                    ((WWDT_Type *)WWDT1_BASE)
  /** Array initializer of WWDT peripheral base addresses */
  #define WWDT_BASE_ADDRS                          { WWDT0_BASE, WWDT1_BASE }
  /** Array initializer of WWDT peripheral base pointers */
  #define WWDT_BASE_PTRS                           { WWDT0, WWDT1 }
#endif
/** Interrupt vectors for the WWDT peripheral type */
#define WWDT_IRQS                                { WWDT0_IRQn, WWDT1_IRQn }

/* ----------------------------------------------------------------------------
   -- Macros for use with bit field definitions (xxx_SHIFT, xxx_MASK).
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup Bit_Field_Generic_Macros Macros for use with bit field definitions (xxx_SHIFT, xxx_MASK).
 * @{
 */

#if defined(__ARMCC_VERSION)
  #if (__ARMCC_VERSION >= 6010050)
    #pragma clang system_header
  #endif
#elif defined(__IAR_SYSTEMS_ICC__)
  #pragma system_include
#endif

/**
 * @brief Mask and left-shift a bit field value for use in a register bit range.
 * @param field Name of the register bit field.
 * @param value Value of the bit field.
 * @return Masked and shifted value.
 */
#define NXP_VAL2FLD(field, value)    (((value) << (field ## _SHIFT)) & (field ## _MASK))
/**
 * @brief Mask and right-shift a register value to extract a bit field value.
 * @param field Name of the register bit field.
 * @param value Value of the register.
 * @return Masked and shifted bit field value.
 */
#define NXP_FLD2VAL(field, value)    (((value) & (field ## _MASK)) >> (field ## _SHIFT))

/*!
 * @}
 */ /* end of group Bit_Field_Generic_Macros */


/* ----------------------------------------------------------------------------
   -- SDK Compatibility
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup SDK_Compatibility_Symbols SDK Compatibility
 * @{
 */

/** High Speed SPI (Flexcomm 8) interrupt name */
#define LSPI_HS_IRQn                                FLEXCOMM8_IRQn


/*!
 * @}
 */ /* end of group SDK_Compatibility_Symbols */


#endif  /* MCXN236_COMMON_H_ */

