/*
** ###################################################################
**     Version:             rev. 1.0, 2024-03-26
**     Build:               b250623
**
**     Abstract:
**         Chip specific module features.
**
**     Copyright 2016 Freescale Semiconductor, Inc.
**     Copyright 2016-2025 NXP
**     SPDX-License-Identifier: BSD-3-Clause
**
**     http:                 www.nxp.com
**     mail:                 support@nxp.com
**
**     Revisions:
**     - rev. 1.0 (2024-03-26)
**         Initial version based on Rev1 DraftC RM
**
** ###################################################################
*/

#ifndef _MCXA345_FEATURES_H_
#define _MCXA345_FEATURES_H_

/* SOC module features */

#if defined(CPU_MCXA345VLH)
    /* @brief AOI availability on the SoC. */
    #define FSL_FEATURE_SOC_AOI_COUNT (2)
    /* @brief CDOG availability on the SoC. */
    #define FSL_FEATURE_SOC_CDOG_COUNT (1)
    /* @brief CMC availability on the SoC. */
    #define FSL_FEATURE_SOC_CMC_COUNT (1)
    /* @brief CRC availability on the SoC. */
    #define FSL_FEATURE_SOC_CRC_COUNT (1)
    /* @brief CTIMER availability on the SoC. */
    #define FSL_FEATURE_SOC_CTIMER_COUNT (5)
    /* @brief EDMA availability on the SoC. */
    #define FSL_FEATURE_SOC_EDMA_COUNT (1)
    /* @brief EIM availability on the SoC. */
    #define FSL_FEATURE_SOC_EIM_COUNT (1)
    /* @brief EQDC availability on the SoC. */
    #define FSL_FEATURE_SOC_EQDC_COUNT (2)
    /* @brief FLEXCAN availability on the SoC. */
    #define FSL_FEATURE_SOC_FLEXCAN_COUNT (1)
    /* @brief FMC availability on the SoC. */
    #define FSL_FEATURE_SOC_FMC_COUNT (1)
    /* @brief FREQME availability on the SoC. */
    #define FSL_FEATURE_SOC_FREQME_COUNT (1)
    /* @brief GPIO availability on the SoC. */
    #define FSL_FEATURE_SOC_GPIO_COUNT (5)
    /* @brief SPC availability on the SoC. */
    #define FSL_FEATURE_SOC_SPC_COUNT (1)
    /* @brief INPUTMUX availability on the SoC. */
    #define FSL_FEATURE_SOC_INPUTMUX_COUNT (1)
    /* @brief LPADC availability on the SoC. */
    #define FSL_FEATURE_SOC_LPADC_COUNT (4)
    /* @brief LPCMP availability on the SoC. */
    #define FSL_FEATURE_SOC_LPCMP_COUNT (3)
    /* @brief LPDAC availability on the SoC. */
    #define FSL_FEATURE_SOC_LPDAC_COUNT (1)
    /* @brief LPI2C availability on the SoC. */
    #define FSL_FEATURE_SOC_LPI2C_COUNT (4)
    /* @brief LPSPI availability on the SoC. */
    #define FSL_FEATURE_SOC_LPSPI_COUNT (2)
    /* @brief LPTMR availability on the SoC. */
    #define FSL_FEATURE_SOC_LPTMR_COUNT (1)
    /* @brief LPUART availability on the SoC. */
    #define FSL_FEATURE_SOC_LPUART_COUNT (6)
    /* @brief OPAMP availability on the SoC. */
    #define FSL_FEATURE_SOC_OPAMP_COUNT (3)
    /* @brief OSTIMER availability on the SoC. */
    #define FSL_FEATURE_SOC_OSTIMER_COUNT (1)
    /* @brief PORT availability on the SoC. */
    #define FSL_FEATURE_SOC_PORT_COUNT (5)
    /* @brief PWM availability on the SoC. */
    #define FSL_FEATURE_SOC_PWM_COUNT (2)
    /* @brief RTC availability on the SoC. */
    #define FSL_FEATURE_SOC_RTC_COUNT (1)
    /* @brief SCG availability on the SoC. */
    #define FSL_FEATURE_SOC_SCG_COUNT (1)
    /* @brief SMARTDMA availability on the SoC. */
    #define FSL_FEATURE_SOC_SMARTDMA_COUNT (1)
    /* @brief SYSCON availability on the SoC. */
    #define FSL_FEATURE_SOC_SYSCON_COUNT (1)
    /* @brief UTICK availability on the SoC. */
    #define FSL_FEATURE_SOC_UTICK_COUNT (1)
    /* @brief WAKETIMER availability on the SoC. */
    #define FSL_FEATURE_SOC_WAKETIMER_COUNT (1)
    /* @brief WWDT availability on the SoC. */
    #define FSL_FEATURE_SOC_WWDT_COUNT (1)
    /* @brief WUU availability on the SoC. */
    #define FSL_FEATURE_SOC_WUU_COUNT (1)
#elif defined(CPU_MCXA345VLL) || defined(CPU_MCXA345VLQ) || defined(CPU_MCXA345VPN)
    /* @brief AOI availability on the SoC. */
    #define FSL_FEATURE_SOC_AOI_COUNT (2)
    /* @brief CDOG availability on the SoC. */
    #define FSL_FEATURE_SOC_CDOG_COUNT (1)
    /* @brief CMC availability on the SoC. */
    #define FSL_FEATURE_SOC_CMC_COUNT (1)
    /* @brief CRC availability on the SoC. */
    #define FSL_FEATURE_SOC_CRC_COUNT (1)
    /* @brief CTIMER availability on the SoC. */
    #define FSL_FEATURE_SOC_CTIMER_COUNT (5)
    /* @brief EDMA availability on the SoC. */
    #define FSL_FEATURE_SOC_EDMA_COUNT (1)
    /* @brief EIM availability on the SoC. */
    #define FSL_FEATURE_SOC_EIM_COUNT (1)
    /* @brief EQDC availability on the SoC. */
    #define FSL_FEATURE_SOC_EQDC_COUNT (2)
    /* @brief FLEXCAN availability on the SoC. */
    #define FSL_FEATURE_SOC_FLEXCAN_COUNT (1)
    /* @brief FMC availability on the SoC. */
    #define FSL_FEATURE_SOC_FMC_COUNT (1)
    /* @brief FREQME availability on the SoC. */
    #define FSL_FEATURE_SOC_FREQME_COUNT (1)
    /* @brief GPIO availability on the SoC. */
    #define FSL_FEATURE_SOC_GPIO_COUNT (5)
    /* @brief SPC availability on the SoC. */
    #define FSL_FEATURE_SOC_SPC_COUNT (1)
    /* @brief INPUTMUX availability on the SoC. */
    #define FSL_FEATURE_SOC_INPUTMUX_COUNT (1)
    /* @brief LPADC availability on the SoC. */
    #define FSL_FEATURE_SOC_LPADC_COUNT (4)
    /* @brief LPCMP availability on the SoC. */
    #define FSL_FEATURE_SOC_LPCMP_COUNT (3)
    /* @brief LPDAC availability on the SoC. */
    #define FSL_FEATURE_SOC_LPDAC_COUNT (1)
    /* @brief LPI2C availability on the SoC. */
    #define FSL_FEATURE_SOC_LPI2C_COUNT (4)
    /* @brief LPSPI availability on the SoC. */
    #define FSL_FEATURE_SOC_LPSPI_COUNT (2)
    /* @brief LPTMR availability on the SoC. */
    #define FSL_FEATURE_SOC_LPTMR_COUNT (1)
    /* @brief LPUART availability on the SoC. */
    #define FSL_FEATURE_SOC_LPUART_COUNT (6)
    /* @brief OPAMP availability on the SoC. */
    #define FSL_FEATURE_SOC_OPAMP_COUNT (4)
    /* @brief OSTIMER availability on the SoC. */
    #define FSL_FEATURE_SOC_OSTIMER_COUNT (1)
    /* @brief PORT availability on the SoC. */
    #define FSL_FEATURE_SOC_PORT_COUNT (5)
    /* @brief PWM availability on the SoC. */
    #define FSL_FEATURE_SOC_PWM_COUNT (2)
    /* @brief RTC availability on the SoC. */
    #define FSL_FEATURE_SOC_RTC_COUNT (1)
    /* @brief SCG availability on the SoC. */
    #define FSL_FEATURE_SOC_SCG_COUNT (1)
    /* @brief SMARTDMA availability on the SoC. */
    #define FSL_FEATURE_SOC_SMARTDMA_COUNT (1)
    /* @brief SYSCON availability on the SoC. */
    #define FSL_FEATURE_SOC_SYSCON_COUNT (1)
    /* @brief UTICK availability on the SoC. */
    #define FSL_FEATURE_SOC_UTICK_COUNT (1)
    /* @brief WAKETIMER availability on the SoC. */
    #define FSL_FEATURE_SOC_WAKETIMER_COUNT (1)
    /* @brief WWDT availability on the SoC. */
    #define FSL_FEATURE_SOC_WWDT_COUNT (1)
    /* @brief WUU availability on the SoC. */
    #define FSL_FEATURE_SOC_WUU_COUNT (1)
#endif

/* LPADC module features */

/* @brief FIFO availability on the SoC. */
#define FSL_FEATURE_LPADC_FIFO_COUNT (1)
/* @brief Does not support two simultanious single ended conversions (bitfield TCTRL[FIFO_SEL_B]). */
#define FSL_FEATURE_LPADC_HAS_NO_TCTRL_FIFO_SEL_B (1)
/* @brief Has subsequent trigger priority (bitfield CFG[TPRICTRL]). */
#define FSL_FEATURE_LPADC_HAS_CFG_SUBSEQUENT_PRIORITY (1)
/* @brief Has differential mode (bitfield CMDLn[DIFF]). */
#define FSL_FEATURE_LPADC_HAS_CMDL_DIFF (0)
/* @brief Has channel scale (bitfield CMDLn[CSCALE]). */
#define FSL_FEATURE_LPADC_HAS_CMDL_CSCALE (0)
/* @brief Has conversion type select (bitfield CMDLn[CTYPE]). */
#define FSL_FEATURE_LPADC_HAS_CMDL_CTYPE (1)
/* @brief Has conversion resolution select  (bitfield CMDLn[MODE]). */
#define FSL_FEATURE_LPADC_HAS_CMDL_MODE (1)
/* @brief Has Wait for trigger assertion before execution (bitfield CMDHn[WAIT_TRIG]). */
#define FSL_FEATURE_LPADC_HAS_CMDH_WAIT_TRIG (1)
/* @brief Has offset calibration (bitfield CTRL[CALOFS]). */
#define FSL_FEATURE_LPADC_HAS_CTRL_CALOFS (1)
/* @brief Has gain calibration (bitfield CTRL[CAL_REQ]). */
#define FSL_FEATURE_LPADC_HAS_CTRL_CAL_REQ (1)
/* @brief Has calibration average (bitfield CTRL[CAL_AVGS]). */
#define FSL_FEATURE_LPADC_HAS_CTRL_CAL_AVGS (1)
/* @brief Has internal clock (bitfield CFG[ADCKEN]). */
#define FSL_FEATURE_LPADC_HAS_CFG_ADCKEN (0)
/* @brief Enable support for low voltage reference on option 1 reference (bitfield CFG[VREF1RNG]). */
#define FSL_FEATURE_LPADC_HAS_CFG_VREF1RNG (0)
/* @brief Has calibration (bitfield CFG[CALOFS]). */
#define FSL_FEATURE_LPADC_HAS_CFG_CALOFS (0)
/* @brief Has offset trim (register OFSTRIM). */
#define FSL_FEATURE_LPADC_HAS_OFSTRIM (1)
/* @brief Has power select (bitfield CFG[PWRSEL]). */
#define FSL_FEATURE_LPADC_HAS_CFG_PWRSEL (1)
/* @brief Has alternate channel B scale (bitfield CMDLn[ALTB_CSCALE]). */
#define FSL_FEATURE_LPADC_HAS_CMDL_ALTB_CSCALE (0)
/* @brief Has alternate channel B select enable (bitfield CMDLn[ALTBEN]). */
#define FSL_FEATURE_LPADC_HAS_CMDL_ALTBEN (0)
/* @brief Has alternate channel input (bitfield CMDLn[ALTB_ADCH]). */
#define FSL_FEATURE_LPADC_HAS_CMDL_ALTB_ADCH (0)
/* @brief Has offset calibration mode (bitfield CTRL[CALOFSMODE]). */
#define FSL_FEATURE_LPADC_HAS_CTRL_CALOFSMODE (0)
/* @brief Conversion averaged bitfiled width. */
#define FSL_FEATURE_LPADC_CONVERSIONS_AVERAGED_BITFIELD_WIDTH (4)
/* @brief Enable hardware trigger command selection */
#define FSL_FEATURE_LPADC_HAS_TCTRL_CMD_SEL (0)
/* @brief OFSTRIM availability on the SoC. */
#define FSL_FEATURE_LPADC_OFSTRIM_COUNT (1)
/* @brief Has Trigger status register. */
#define FSL_FEATURE_LPADC_HAS_TSTAT (1)
/* @brief Has B side channels. */
#define FSL_FEATURE_LPADC_HAS_B_SIDE_CHANNELS (0)
/* @brief Indicate whether the LPADC STAT register has trigger exception interrupt function (bitfield STAT[TEXC_INT]). */
#define FSL_FEATURE_LPADC_HAS_STAT_TEXC_INT (1)
/* @brief Indicate whether the LPADC STAT register has trigger completion interrupt function (bitfield STAT[TCOMP_INT]). */
#define FSL_FEATURE_LPADC_HAS_STAT_TCOMP_INT (1)
/* @brief Indicate whether the LPADC STAT register has calibration ready function (bitfield STAT[CAL_RDY]). */
#define FSL_FEATURE_LPADC_HAS_STAT_CAL_RDY (1)
/* @brief Indicate whether the LPADC STAT register has ADC active function (bitfield STAT[ADC_ACTIVE]). */
#define FSL_FEATURE_LPADC_HAS_STAT_ADC_ACTIVE (1)
/* @brief Indicate whether the LPADC IE register has trigger exception interrupt enable function (bitfield IE[TEXC_IE]). */
#define FSL_FEATURE_LPADC_HAS_IE_TEXC_IE (1)
/* @brief Indicate whether the LPADC IE register has trigger completion interrupt enable function (bitfield IE[TCOMP_IE]). */
#define FSL_FEATURE_LPADC_HAS_IE_TCOMP_IE (1)
/* @brief Indicate whether the LPADC CFG register has trigger resume/restart enable function (bitfield CFG[TRES]). */
#define FSL_FEATURE_LPADC_HAS_CFG_TRES (1)
/* @brief Indicate whether the LPADC CFG register has trigger command resume/restart enable function (bitfield CFG[TCMDRES]). */
#define FSL_FEATURE_LPADC_HAS_CFG_TCMDRES (1)
/* @brief Indicate whether the LPADC CFG register has high priority trigger exception disable function (bitfield CFG[HPT_EXDI]). */
#define FSL_FEATURE_LPADC_HAS_CFG_HPT_EXDI (1)
/* @brief Indicate LPADC CFG register TPRICTRL bitfield width. */
#define FSL_FEATURE_LPADC_CFG_TPRICTRL_BITFIELD_WIDTH (2)
/* @brief Has compare function enable (bitfield CMDHn[CMPEN]). */
#define FSL_FEATURE_LPADC_HAS_CMDH_CMPEN (1)
/* @brief Has High Speed Mode Trim Request (bitfield CTRL[CALHS]). */
#define FSL_FEATURE_LPADC_HAS_CTRL_CALHS (1)
/* @brief Has internal temperature sensor. */
#define FSL_FEATURE_LPADC_HAS_INTERNAL_TEMP_SENSOR (1)
/* @brief Temperature sensor parameter A (slope). */
#define FSL_FEATURE_LPADC_TEMP_PARAMETER_A (738.0f)
/* @brief Temperature sensor parameter B (offset). */
#define FSL_FEATURE_LPADC_TEMP_PARAMETER_B (287.5f)
/* @brief Temperature sensor parameter Alpha. */
#define FSL_FEATURE_LPADC_TEMP_PARAMETER_ALPHA (10.06f)
/* @brief The buffer size of temperature sensor. */
#define FSL_FEATURE_LPADC_TEMP_SENS_BUFFER_SIZE (2U)

/* AOI module features */

/* @brief Maximum value of input mux. */
#define FSL_FEATURE_AOI_MODULE_INPUTS (4)
/* @brief Number of events related to number of registers AOIx_BFCRT01n/AOIx_BFCRT23n. */
#define FSL_FEATURE_AOI_EVENT_COUNT (4)

/* FLEXCAN module features */

/* @brief Message buffer size */
#define FSL_FEATURE_FLEXCAN_HAS_MESSAGE_BUFFER_MAX_NUMBERn(x) (32)
/* @brief Has doze mode support (register bit field MCR[DOZE]). */
#define FSL_FEATURE_FLEXCAN_HAS_DOZE_MODE_SUPPORT (1)
/* @brief Insatnce has doze mode support (register bit field MCR[DOZE]). */
#define FSL_FEATURE_FLEXCAN_INSTANCE_HAS_DOZE_MODE_SUPPORTn(x) (1)
/* @brief Has a glitch filter on the receive pin (register bit field MCR[WAKSRC]). */
#define FSL_FEATURE_FLEXCAN_HAS_GLITCH_FILTER (1)
/* @brief Has extended interrupt mask and flag register (register IMASK2, IFLAG2). */
#define FSL_FEATURE_FLEXCAN_HAS_EXTENDED_FLAG_REGISTER (0)
/* @brief Instance has extended bit timing register (register CBT). */
#define FSL_FEATURE_FLEXCAN_INSTANCE_HAS_EXTENDED_TIMING_REGISTERn(x) (1)
/* @brief Has a receive FIFO DMA feature (register bit field MCR[DMA]). */
#define FSL_FEATURE_FLEXCAN_HAS_RX_FIFO_DMA (1)
/* @brief Instance has a receive FIFO DMA feature (register bit field MCR[DMA]). */
#define FSL_FEATURE_FLEXCAN_INSTANCE_HAS_RX_FIFO_DMAn(x) (1)
/* @brief Remove CAN Engine Clock Source Selection from unsupported part. */
#define FSL_FEATURE_FLEXCAN_SUPPORT_ENGINE_CLK_SEL_REMOVE (1)
/* @brief Instance remove CAN Engine Clock Source Selection from unsupported part. */
#define FSL_FEATURE_FLEXCAN_INSTANCE_SUPPORT_ENGINE_CLK_SEL_REMOVEn(x) (1)
/* @brief Is affected by errata with ID 5641 (Module does not transmit a message that is enabled to be transmitted at a specific moment during the arbitration process). */
#define FSL_FEATURE_FLEXCAN_HAS_ERRATA_5641 (0)
/* @brief Is affected by errata with ID 5829 (FlexCAN: FlexCAN does not transmit a message that is enabled to be transmitted in a specific moment during the arbitration process). */
#define FSL_FEATURE_FLEXCAN_HAS_ERRATA_5829 (0)
/* @brief Is affected by errata with ID 6032 (FlexCAN: A frame with wrong ID or payload is transmitted into the CAN bus when the Message Buffer under transmission is either aborted or deactivated while the CAN bus is in the Bus Idle state). */
#define FSL_FEATURE_FLEXCAN_HAS_ERRATA_6032 (0)
/* @brief Is affected by errata with ID 9595 (FlexCAN: Corrupt frame possible if the Freeze Mode or the Low-Power Mode are entered during a Bus-Off state). */
#define FSL_FEATURE_FLEXCAN_HAS_ERRATA_9595 (0)
/* @brief Has CAN with Flexible Data rate (CAN FD) protocol. */
#define FSL_FEATURE_FLEXCAN_HAS_FLEXIBLE_DATA_RATE (1)
/* @brief CAN instance support Flexible Data rate (CAN FD) protocol. */
#define FSL_FEATURE_FLEXCAN_INSTANCE_HAS_FLEXIBLE_DATA_RATEn(x) (1)
/* @brief Has memory error control (register MECR). */
#define FSL_FEATURE_FLEXCAN_HAS_MEMORY_ERROR_CONTROL (0)
/* @brief Has enhanced bit timing register (register EPRS, ENCBT, EDCBT and ETDC). */
#define FSL_FEATURE_FLEXCAN_HAS_ENHANCED_BIT_TIMING_REG (1)
/* @brief Has Pretended Networking mode support. */
#define FSL_FEATURE_FLEXCAN_HAS_PN_MODE (1)
/* @brief Has Enhanced Rx FIFO. */
#define FSL_FEATURE_FLEXCAN_HAS_ENHANCED_RX_FIFO (1)
/* @brief Has Enhanced Rx FIFO. */
#define FSL_FEATURE_FLEXCAN_INSTANCE_HAS_ENHANCED_RX_FIFOn(x) (1)
/* @brief Enhanced Rx FIFO size (Indicates how many CAN FD messages can be stored). */
#define FSL_FEATURE_FLEXCAN_HAS_ENHANCED_RX_FIFO_SIZE (12)
/* @brief The number of enhanced Rx FIFO filter element registers. */
#define FSL_FEATURE_FLEXCAN_HAS_ENHANCED_RX_FIFO_FILTER_MAX_NUMBER (32)
/* @brief Does not support Supervisor Mode (bitfield MCR[SUPV]. */
#define FSL_FEATURE_FLEXCAN_HAS_NO_SUPV_SUPPORT (0)
/* @brief Has more than 64 MBs. */
#define FSL_FEATURE_FLEXCAN_HAS_MORE_THAN_64_MB (0)
/* @brief Does not support self wake feature(bitfield MCR[SLFWAK]) */
#define FSL_FEATURE_FLEXCAN_HAS_NO_SLFWAK_SUPPORT (0)
/* @brief Has external time tick source (bitfield CTRL2[TIMER_SRC]). */
#define FSL_FEATURE_FLEXCAN_HAS_EXTERNAL_TIME_TICK (0)
/* @brief Instance has external time tick source (register bit field CTRL2[TIMER_SRC]). */
#define FSL_FEATURE_FLEXCAN_INSTANCE_HAS_EXTERNAL_TIME_TICKn(x) (0)
/* @brief Has Time Stamp Capture Point(bitfield CTRL2[TSTAMPCAP]). */
#define FSL_FEATURE_FLEXCAN_HAS_HIGH_RESOLUTION_TIMESTAMP (0)
/* @brief Instance has Pretended Networking option (register bit field MCR[PNET_EN]). */
#define FSL_FEATURE_FLEXCAN_INSTANCE_HAS_PN_MODEn(x) (1)
/* @brief FlexCAN maximum data rate. */
#define FSL_FEATURE_FLEXCAN_MAX_CANFD_BITRATE (8000000)
/* @brief Support payload endianness selection (bitfield CTRL2[PES]). */
#define FSL_FEATURE_FLEXCAN_HAS_ENDIANNESS_SELECTION (1)
/* @brief Enter Freeze mode before entering Disable and Stop mode. */
#define FSL_FEATURE_FLEXCAN_ENTER_FREEZE_MODE (0)
/* @brief Is affected by errata with ID 8341 (FlexCAN: Entering Freeze Mode or Low Power Mode from Normal Mode can cause the FlexCAN module to stop operating). */
#define FSL_FEATURE_FLEXCAN_HAS_ERRATA_8341 (0)
/* @brief Is affected by errata with ID 050443 (FlexCAN: : Receive Message Buffers may have its CODE Field corrupted if the Receive FIFO function is used in Classical CAN mode). */
#define FSL_FEATURE_FLEXCAN_HAS_ERRATA_050443 (0)

/* CDOG module features */

/* @brief SOC has no reset driver. */
#define FSL_FEATURE_CDOG_HAS_NO_RESET (1)
/* @brief CDOG Load default configurations during init function */
#define FSL_FEATURE_CDOG_NEED_LOAD_DEFAULT_CONF (0)

/* CMC module features */

/* @brief Has SRAM_DIS register */
#define FSL_FEATURE_MCX_CMC_HAS_SRAM_DIS_REG (0)
/* @brief Has BSR register */
#define FSL_FEATURE_MCX_CMC_HAS_BSR_REG (0)
/* @brief Has RSTCNT register */
#define FSL_FEATURE_MCX_CMC_HAS_RSTCNT_REG (0)
/* @brief Has BLR register */
#define FSL_FEATURE_MCX_CMC_HAS_BLR_REG (0)

/* LPCMP module features */

/* @brief Has CCR1 FUNC_CLK_SEL bitfield. */
#define FSL_FEATURE_LPCMP_HAS_CCR1_FUNC_CLK_SEL (1)
/* @brief Has IER RRF_IE bitfield. */
#define FSL_FEATURE_LPCMP_HAS_IER_RRF_IE (1)
/* @brief Has CSR RRF bitfield. */
#define FSL_FEATURE_LPCMP_HAS_CSR_RRF (1)
/* @brief Has Round Robin mode (related to existence of registers RRCR0). */
#define FSL_FEATURE_LPCMP_HAS_ROUNDROBIN_MODE (1)
/* @brief Has window mode (related to existence of CCR1.WINDOW_CLS). */
#define FSL_FEATURE_LPCMP_HAS_WINDOW_CONTROL (1)
/* @brief Has CCR0 CMP_STOP_EN bitfield. */
#define FSL_FEATURE_LPCMP_HAS_CCR0_CMP_STOP_EN (1)
/* @brief CMP instance support CCR0 CMP_STOP_EN bitfield. */
#define FSL_FEATURE_LPCMP_INSTANCE_SUPPORT_CCR0_CMP_STOP_ENn(x) (1)

/* CTIMER module features */

/* @brief CTIMER has no capture channel. */
#define FSL_FEATURE_CTIMER_HAS_NO_INPUT_CAPTURE (0)
/* @brief CTIMER has no capture 2 interrupt. */
#define FSL_FEATURE_CTIMER_HAS_NO_IR_CR2INT (0)
/* @brief CTIMER capture 3 interrupt. */
#define FSL_FEATURE_CTIMER_HAS_IR_CR3INT (1)
/* @brief Has CTIMER CCR_CAP2 (register bits CCR[CAP2RE][CAP2FE][CAP2I]. */
#define FSL_FEATURE_CTIMER_HAS_NO_CCR_CAP2 (0)
/* @brief Has CTIMER CCR_CAP3 (register bits CCR[CAP3RE][CAP3FE][CAP3I]). */
#define FSL_FEATURE_CTIMER_HAS_CCR_CAP3 (1)
/* @brief CTIMER Has register MSR */
#define FSL_FEATURE_CTIMER_HAS_MSR (1)

/* LPDAC module features */

/* @brief FIFO size. */
#define FSL_FEATURE_LPDAC_FIFO_SIZE (16)
/* @brief Has OPAMP as buffer, speed control signal (bitfield GCR[BUF_SPD_CTRL]). */
#define FSL_FEATURE_LPDAC_HAS_GCR_BUF_SPD_CTRL (1)
/* @brief Buffer Enable(bitfield GCR[BUF_EN]). */
#define FSL_FEATURE_LPDAC_HAS_GCR_BUF_EN (1)
/* @brief RCLK cycles before data latch(bitfield GCR[LATCH_CYC]). */
#define FSL_FEATURE_LPDAC_HAS_GCR_LATCH_CYC (1)
/* @brief VREF source number. */
#define FSL_FEATURE_ANALOG_NUM_OF_VREF_SRC (3)
/* @brief Has internal reference current options. */
#define FSL_FEATURE_LPDAC_HAS_INTERNAL_REFERENCE_CURRENT (1)
/* @brief Support Period trigger mode DAC (bitfield IER[PTGCOCO_IE]). */
#define FSL_FEATURE_LPDAC_HAS_PERIODIC_TRIGGER_MODE (1)

/* EDMA module features */

/* @brief Number of DMA channels (related to number of registers TCD, DCHPRI, bit fields ERQ[ERQn], EEI[EEIn], INT[INTn], ERR[ERRn], HRS[HRSn] and bit field widths ES[ERRCHN], CEEI[CEEI], SEEI[SEEI], CERQ[CERQ], SERQ[SERQ], CDNE[CDNE], SSRT[SSRT], CERR[CERR], CINT[CINT], TCDn_CITER_ELINKYES[LINKCH], TCDn_CSR[MAJORLINKCH], TCDn_BITER_ELINKYES[LINKCH]). (Valid only for eDMA modules.) */
#define FSL_FEATURE_EDMA_MODULE_CHANNEL (8)
/* @brief If 8 bytes transfer supported. */
#define FSL_FEATURE_EDMA_SUPPORT_8_BYTES_TRANSFER (1)
/* @brief Number of DMA channel groups (register bit fields CR[ERGA], CR[GRPnPRI], ES[GPE], DCHPRIn[GRPPRI]). (Valid only for eDMA modules.) */
#define FSL_FEATURE_EDMA_CHANNEL_GROUP_COUNT (1)
/* @brief If 16 bytes transfer supported. */
#define FSL_FEATURE_EDMA_SUPPORT_16_BYTES_TRANSFER (1)
/* @brief Has DMA_Error interrupt vector. */
#define FSL_FEATURE_EDMA_HAS_ERROR_IRQ (1)
/* @brief If 64 bytes transfer supported. */
#define FSL_FEATURE_EDMA_SUPPORT_64_BYTES_TRANSFER (1)
/* @brief whether has prot register */
#define FSL_FEATURE_EDMA_INSTANCE_HAS_PROT_REGISTERn(x) (0)
/* @brief If 128 bytes transfer supported. */
#define FSL_FEATURE_EDMA_SUPPORT_128_BYTES_TRANSFER (1)
/* @brief whether has MP channel mux */
#define FSL_FEATURE_EDMA_INSTANCE_HAS_MP_CHANNEL_MUXn(x) (0)
/* @brief If 128 bytes transfer supported. */
#define FSL_FEATURE_EDMA_INSTANCE_SUPPORT_128_BYTES_TRANSFERn(x) (1)
/* @brief If channel clock controlled independently */
#define FSL_FEATURE_EDMA_CHANNEL_HAS_OWN_CLOCK_GATE (1)
/* @brief Has register CH_CSR. */
#define FSL_FEATURE_EDMA_HAS_CHANNEL_CONFIG (1)
/* @brief Number of channel for each EDMA instance, (only defined for soc with different channel numbers for difference instance) */
#define FSL_FEATURE_EDMA_INSTANCE_CHANNELn(x) (8)
/* @brief Has channel mux */
#define FSL_FEATURE_EDMA_HAS_CHANNEL_MUX (1)
/* @brief Has no register bit fields MP_CSR[EBW]. */
#define FSL_FEATURE_EDMA_HAS_NO_MP_CSR_EBW (1)
/* @brief Instance has channel mux */
#define FSL_FEATURE_EDMA_INSTANCE_HAS_CHANNEL_MUXn(x) (1)
/* @brief If dma has common clock gate */
#define FSL_FEATURE_EDMA_HAS_COMMON_CLOCK_GATE (0)
/* @brief Has register CH_SBR. */
#define FSL_FEATURE_EDMA_HAS_SBR (1)
/* @brief If dma channel IRQ support parameter */
#define FSL_FEATURE_EDMA_MODULE_CHANNEL_IRQ_ENTRY_SUPPORT_PARAMETER (0)
/* @brief Has no register bit fields CH_SBR[ATTR]. */
#define FSL_FEATURE_EDMA_HAS_NO_CH_SBR_ATTR (1)
/* @brief NBYTES must be multiple of 8 when using scatter gather. */
#define FSL_FEATURE_EDMA_HAS_ERRATA_51327 (0)
/* @brief Has register bit field CH_CSR[SWAP]. */
#define FSL_FEATURE_EDMA_HAS_CHANNEL_SWAP_SIZE (0)
/* @brief NBYTES must be multiple of 8 when using scatter gather. */
#define FSL_FEATURE_EDMA_INSTANCE_HAS_ERRATA_51327n(x) (0)
/* @brief Instance has register bit field CH_CSR[SWAP]. */
#define FSL_FEATURE_EDMA_INSTANCE_HAS_CHANNEL_SWAP_SIZEn(x) (0)
/* @brief Has register bit fields MP_CSR[GMRC]. */
#define FSL_FEATURE_EDMA_HAS_GLOBAL_MASTER_ID_REPLICATION (1)
/* @brief Has register bit field CH_SBR[INSTR]. */
#define FSL_FEATURE_EDMA_HAS_CHANNEL_ACCESS_TYPE (0)
/* @brief Instance has register bit field CH_SBR[INSTR]. */
#define FSL_FEATURE_EDMA_INSTANCE_HAS_CHANNEL_ACCESS_TYPEn(x) (0)
/* @brief Has register bit fields CH_MATTR[WCACHE], CH_MATTR[RCACHE]. */
#define FSL_FEATURE_EDMA_HAS_CHANNEL_MEMORY_ATTRIBUTE  (0)
/* @brief Instance has register CH_MATTR. */
#define FSL_FEATURE_EDMA_INSTANCE_HAS_CHANNEL_MEMORY_ATTRIBUTEn(x) (0)
/* @brief Has register bit field CH_CSR[SIGNEXT]. */
#define FSL_FEATURE_EDMA_HAS_CHANNEL_SIGN_EXTENSION (0)
/* @brief Instance Has register bit field CH_CSR[SIGNEXT]. */
#define FSL_FEATURE_EDMA_INSTANCE_HAS_CHANNEL_SIGN_EXTENSIONn(x) (0)
/* @brief Has register bit field TCD_CSR[BWC]. */
#define FSL_FEATURE_EDMA_HAS_BANDWIDTH (1)
/* @brief Instance has register bit field TCD_CSR[BWC]. */
#define FSL_FEATURE_EDMA_INSTANCE_HAS_BANDWIDTHn(x) (1)
/* @brief Has register bit fields TCD_CSR[TMC]. */
#define FSL_FEATURE_EDMA_HAS_TRANSFER_MODE (0)
/* @brief Instance has register bit fields TCD_CSR[TMC]. */
#define FSL_FEATURE_EDMA_INSTANCE_HAS_TRANSFER_MODEn(x) (0)
/* @brief Has no register bit fields CH_SBR[SEC]. */
#define FSL_FEATURE_EDMA_HAS_NO_CH_SBR_SEC (1)
/* @brief edma5 has different tcd type. */
#define FSL_FEATURE_EDMA_TCD_TYPEn(x) (0)

/* EQDC module features */

/* @brief If EQDC CTRL2 register has EMIP bit field. */
#define FSL_FEATURE_EQDC_CTRL2_HAS_EMIP_BIT_FIELD (1)

/* PWM module features */

/* @brief If (e)FlexPWM has module A channels (outputs). */
#define FSL_FEATURE_PWM_HAS_CHANNELA (1)
/* @brief If (e)FlexPWM has module B channels (outputs). */
#define FSL_FEATURE_PWM_HAS_CHANNELB (1)
/* @brief If (e)FlexPWM has module X channels (outputs). */
#define FSL_FEATURE_PWM_HAS_CHANNELX (1)
/* @brief If (e)FlexPWM has fractional feature. */
#define FSL_FEATURE_PWM_HAS_FRACTIONAL (0)
/* @brief If (e)FlexPWM has mux trigger source select bit field. */
#define FSL_FEATURE_PWM_HAS_MUX_TRIGGER_SOURCE_SEL (1)
/* @brief Number of submodules in each (e)FlexPWM module. */
#define FSL_FEATURE_PWM_SUBMODULE_COUNT (4)
/* @brief Number of fault channel in each (e)FlexPWM module. */
#define FSL_FEATURE_PWM_FAULT_CH_COUNT (1)
/* @brief (e)FlexPWM has no WAITEN Bitfield In CTRL2 Register. */
#define FSL_FEATURE_PWM_HAS_NO_WAITEN (1)
/* @brief If (e)FlexPWM has phase delay feature. */
#define FSL_FEATURE_PWM_HAS_PHASE_DELAY (1)
/* @brief If (e)FlexPWM has input filter capture feature. */
#define FSL_FEATURE_PWM_HAS_INPUT_FILTER_CAPTURE (1)
/* @brief If (e)FlexPWM has module capture functionality on A channels (inputs). */
#define FSL_FEATURE_PWM_HAS_CAPTURE_ON_CHANNELA (0)
/* @brief If (e)FlexPWM has module capture functionality on B channels (inputs). */
#define FSL_FEATURE_PWM_HAS_CAPTURE_ON_CHANNELB (0)
/* @brief If (e)FlexPWM has module capture functionality on X channels (inputs). */
#define FSL_FEATURE_PWM_HAS_CAPTURE_ON_CHANNELX (1)

/* FMU module features */

/* @brief Is the flash module msf1? */
#define FSL_FEATURE_FSL_FEATURE_FLASH_IS_MSF1 (1)
/* @brief P-Flash block count. */
#define FSL_FEATURE_FLASH_PFLASH_BLOCK_COUNT (1)
/* @brief P-Flash block0 start address. */
#define FSL_FEATURE_FLASH_PFLASH_START_ADDRESS (0x00000000U)
/* @brief P-Flash block0 size. */
#define FSL_FEATURE_FLASH_PFLASH_BLOCK_SIZE (0x100000U)
/* @brief P-Flash sector size. */
#define FSL_FEATURE_FLASH_PFLASH_SECTOR_SIZE (0x2000U)
/* @brief P-Flash page size. */
#define FSL_FEATURE_FLASH_PFLASH_PAGE_SIZE (128)
/* @brief P-Flash phrase size. */
#define FSL_FEATURE_FLASH_PFLASH_PHRASE_SIZE (16)
/* @brief Has IFR memory. */
#define FSL_FEATURE_FLASH_HAS_IFR (1)
/* @brief flash BLOCK0 IFR0 start address. */
#define FSL_FEATURE_FLASH_IFR0_START_ADDRESS (0x01000000u)
/* @brief flash BLOCK0 IFR1 start address. */
#define FSL_FEATURE_FLASH_IFR1_START_ADDRESS (0x01100000U)
/* @brief flash block IFR0 size. */
#define FSL_FEATURE_FLASH_IFR0_SIZE (0x8000U)
/* @brief flash block IFR1 size. */
#define FSL_FEATURE_FLASH_IFR1_SIZE (0x2000U)
/* @brief IFR sector size. */
#define FSL_FEATURE_FLASH_IFR_SECTOR_SIZE (0x2000U)
/* @brief IFR page size. */
#define FSL_FEATURE_FLASH_IFR_PAGE_SIZE (128)

/* GLIKEY module features */

/* @brief GLIKEY has 8 step FSM configuration */
#define FSL_FEATURE_GLIKEY_HAS_EIGHT_STEPS (0)

/* GPIO module features */

/* @brief Has GPIO attribute checker register (GACR). */
#define FSL_FEATURE_GPIO_HAS_ATTRIBUTE_CHECKER (0)
/* @brief Has GPIO version ID register (VERID). */
#define FSL_FEATURE_GPIO_HAS_VERSION_INFO_REGISTER (1)
/* @brief Has secure/non-secure access protection registers (LOCK, PCNS, PCNP, ICNS, ICNP). */
#define FSL_FEATURE_GPIO_HAS_SECURE_PRIVILEGE_CONTROL (0)
/* @brief Has GPIO port input disable register (PIDR). */
#define FSL_FEATURE_GPIO_HAS_PORT_INPUT_CONTROL (1)
/* @brief Has GPIO interrupt/DMA request/trigger output selection. */
#define FSL_FEATURE_GPIO_HAS_INTERRUPT_CHANNEL_SELECT (0)

/* LPI2C module features */

/* @brief Has separate DMA RX and TX requests. */
#define FSL_FEATURE_LPI2C_HAS_SEPARATE_DMA_RX_TX_REQn(x) (1)
/* @brief Capacity (number of entries) of the transmit/receive FIFO (or zero if no FIFO is available). */
#define FSL_FEATURE_LPI2C_FIFO_SIZEn(x) (4)
/* @brief Has dedicated interrupt for master and slave. */
#define FSL_FEATURE_LPI2C_HAS_ROLE_SPLIT_IRQ (0)

/* LPSPI module features */

/* @brief Capacity (number of entries) of the transmit/receive FIFO. */
#define FSL_FEATURE_LPSPI_FIFO_SIZEn(x) (4)
/* @brief Has separate DMA RX and TX requests. */
#define FSL_FEATURE_LPSPI_HAS_SEPARATE_DMA_RX_TX_REQn(x) (1)
/* @brief Has CCR1 (related to existence of registers CCR1). */
#define FSL_FEATURE_LPSPI_HAS_CCR1 (1)
/* @brief Has no PCSCFG bit in CFGR1 register. */
#define FSL_FEATURE_LPSPI_HAS_NO_PCSCFG (0)
/* @brief Has no WIDTH bits in TCR register. */
#define FSL_FEATURE_LPSPI_HAS_NO_MULTI_WIDTH (0)

/* LPTMR module features */

/* @brief Has shared interrupt handler with another LPTMR module. */
#define FSL_FEATURE_LPTMR_HAS_SHARED_IRQ_HANDLER (0)
/* @brief Whether LPTMR counter is 32 bits width. */
#define FSL_FEATURE_LPTMR_CNR_WIDTH_IS_32B (1)
/* @brief Has timer DMA request enable (register bit CSR[TDRE]). */
#define FSL_FEATURE_LPTMR_HAS_CSR_TDRE (1)
/* @brief Do not has prescaler clock source 0. */
#define FSL_FEATURE_LPTMR_HAS_NO_PRESCALER_CLOCK_SOURCE_0_SUPPORT (1)
/* @brief Do not has prescaler clock source 1. */
#define FSL_FEATURE_LPTMR_HAS_NO_PRESCALER_CLOCK_SOURCE_1_SUPPORT (0)
/* @brief Do not has prescaler clock source 2. */
#define FSL_FEATURE_LPTMR_HAS_NO_PRESCALER_CLOCK_SOURCE_2_SUPPORT (1)
/* @brief Do not has prescaler clock source 3. */
#define FSL_FEATURE_LPTMR_HAS_NO_PRESCALER_CLOCK_SOURCE_3_SUPPORT (0)

/* LPUART module features */

/* @brief Has receive FIFO overflow detection (bit field CFIFO[RXOFE]). */
#define FSL_FEATURE_LPUART_HAS_IRQ_EXTENDED_FUNCTIONS (0)
/* @brief Has low power features (can be enabled in wait mode via register bit C1[DOZEEN] or CTRL[DOZEEN] if the registers are 32-bit wide). */
#define FSL_FEATURE_LPUART_HAS_LOW_POWER_UART_SUPPORT (1)
/* @brief Has extended data register ED (or extra flags in the DATA register if the registers are 32-bit wide). */
#define FSL_FEATURE_LPUART_HAS_EXTENDED_DATA_REGISTER_FLAGS (1)
/* @brief Capacity (number of entries) of the transmit/receive FIFO (or zero if no FIFO is available). */
#define FSL_FEATURE_LPUART_HAS_FIFO (1)
/* @brief Has 32-bit register MODIR */
#define FSL_FEATURE_LPUART_HAS_MODIR (1)
/* @brief Hardware flow control (RTS, CTS) is supported. */
#define FSL_FEATURE_LPUART_HAS_MODEM_SUPPORT (1)
/* @brief Infrared (modulation) is supported. */
#define FSL_FEATURE_LPUART_HAS_IR_SUPPORT (1)
/* @brief 2 bits long stop bit is available. */
#define FSL_FEATURE_LPUART_HAS_STOP_BIT_CONFIG_SUPPORT (1)
/* @brief If 10-bit mode is supported. */
#define FSL_FEATURE_LPUART_HAS_10BIT_DATA_SUPPORT (1)
/* @brief If 7-bit mode is supported. */
#define FSL_FEATURE_LPUART_HAS_7BIT_DATA_SUPPORT (1)
/* @brief Baud rate fine adjustment is available. */
#define FSL_FEATURE_LPUART_HAS_BAUD_RATE_FINE_ADJUST_SUPPORT (0)
/* @brief Baud rate oversampling is available (has bit fields C4[OSR], C5[BOTHEDGE], C5[RESYNCDIS] or BAUD[OSR], BAUD[BOTHEDGE], BAUD[RESYNCDIS] if the registers are 32-bit wide). */
#define FSL_FEATURE_LPUART_HAS_BAUD_RATE_OVER_SAMPLING_SUPPORT (1)
/* @brief Baud rate oversampling is available. */
#define FSL_FEATURE_LPUART_HAS_RX_RESYNC_SUPPORT (1)
/* @brief Baud rate oversampling is available. */
#define FSL_FEATURE_LPUART_HAS_BOTH_EDGE_SAMPLING_SUPPORT (1)
/* @brief Peripheral type. */
#define FSL_FEATURE_LPUART_IS_SCI (1)
/* @brief Capacity (number of entries) of the transmit/receive FIFO (or zero if no FIFO is available). */
#define FSL_FEATURE_LPUART_FIFO_SIZEn(x) (4)
/* @brief Supports two match addresses to filter incoming frames. */
#define FSL_FEATURE_LPUART_HAS_ADDRESS_MATCHING (1)
/* @brief Has transmitter/receiver DMA enable bits C5[TDMAE]/C5[RDMAE] (or BAUD[TDMAE]/BAUD[RDMAE] if the registers are 32-bit wide). */
#define FSL_FEATURE_LPUART_HAS_DMA_ENABLE (1)
/* @brief Has transmitter/receiver DMA select bits C4[TDMAS]/C4[RDMAS], resp. C5[TDMAS]/C5[RDMAS] if IS_SCI = 0. */
#define FSL_FEATURE_LPUART_HAS_DMA_SELECT (0)
/* @brief Data character bit order selection is supported (bit field S2[MSBF] or STAT[MSBF] if the registers are 32-bit wide). */
#define FSL_FEATURE_LPUART_HAS_BIT_ORDER_SELECT (1)
/* @brief Has smart card (ISO7816 protocol) support and no improved smart card support. */
#define FSL_FEATURE_LPUART_HAS_SMART_CARD_SUPPORT (0)
/* @brief Has improved smart card (ISO7816 protocol) support. */
#define FSL_FEATURE_LPUART_HAS_IMPROVED_SMART_CARD_SUPPORT (0)
/* @brief Has local operation network (CEA709.1-B protocol) support. */
#define FSL_FEATURE_LPUART_HAS_LOCAL_OPERATION_NETWORK_SUPPORT (0)
/* @brief Has 32-bit registers (BAUD, STAT, CTRL, DATA, MATCH, MODIR) instead of 8-bit (BDH, BDL, C1, S1, D, etc.). */
#define FSL_FEATURE_LPUART_HAS_32BIT_REGISTERS (1)
/* @brief Lin break detect available (has bit BAUD[LBKDIE]). */
#define FSL_FEATURE_LPUART_HAS_LIN_BREAK_DETECT (1)
/* @brief UART stops in Wait mode available (has bit C1[UARTSWAI]). */
#define FSL_FEATURE_LPUART_HAS_WAIT_MODE_OPERATION (0)
/* @brief Has separate DMA RX and TX requests. */
#define FSL_FEATURE_LPUART_HAS_SEPARATE_DMA_RX_TX_REQn(x) (0)
/* @brief Has separate RX and TX interrupts. */
#define FSL_FEATURE_LPUART_HAS_SEPARATE_RX_TX_IRQ (0)
/* @brief Has LPAURT_PARAM. */
#define FSL_FEATURE_LPUART_HAS_PARAM (1)
/* @brief Has LPUART_VERID. */
#define FSL_FEATURE_LPUART_HAS_VERID (1)
/* @brief Has LPUART_GLOBAL. */
#define FSL_FEATURE_LPUART_HAS_GLOBAL (1)
/* @brief Has LPUART_PINCFG. */
#define FSL_FEATURE_LPUART_HAS_PINCFG (1)
/* @brief Belong to LPFLEXCOMM */
#define FSL_FEATURE_LPUART_IS_LPFLEXCOMM (0)
/* @brief Has register MODEM Control. */
#define FSL_FEATURE_LPUART_HAS_MCR (0)
/* @brief Has register Half Duplex Control. */
#define FSL_FEATURE_LPUART_HAS_HDCR (0)
/* @brief Has register Timeout. */
#define FSL_FEATURE_LPUART_HAS_TIMEOUT (0)
/* @brief UART support swap TX and RX (has bit CTRL[SWAP]). */
#define FSL_FEATURE_LPUART_HAS_CTRL_SWAP (1)
/* @brief UART support receive rts configuration (has bit MODIR[RTSWATER]). */
#define FSL_FEATURE_LPUART_HAS_MODIR_RTSWATER (1)

/* MAU module features */

/* No feature definitions */

/* TRDC module features */

/* @brief Process master count. */
#define FSL_FEATURE_TRDC_PROCESSOR_MASTER_COUNT (2)
/* @brief TRDC instance has PID configuration or not. */
#define FSL_FEATURE_TRDC_INSTANCE_HAS_PID_CONFIGURATIONn(x) (0)
/* @brief TRDC instance has MBC. */
#define FSL_FEATURE_TRDC_HAS_MBC (1)
/* @brief TRDC instance has MRC. */
#define FSL_FEATURE_TRDC_HAS_MRC (0)
/* @brief TRDC instance has TRDC_CR. */
#define FSL_FEATURE_TRDC_HAS_GENERAL_CONFIG (0)
/* @brief TRDC instance has MDA_Wx_y_DFMT. */
#define FSL_FEATURE_TRDC_HAS_DOMAIN_ASSIGNMENT (0)
/* @brief TRDC instance has TRDC_FDID. */
#define FSL_FEATURE_TRDC_HAS_DOMAIN_ERROR (0)
/* @brief TRDC instance has TRDC_FLW_CTL. */
#define FSL_FEATURE_TRDC_HAS_FLW (0)

/* OPAMP module features */

/* @brief Opamp has OPAMP_CTR OUTSW bit */
#define FSL_FEATURE_OPAMP_HAS_OPAMP_CTR_OUTSW (0)
/* @brief Opamp has OPAMP_CTR ADCSW1 bit */
#define FSL_FEATURE_OPAMP_HAS_OPAMP_CTR_ADCSW1 (0)
/* @brief Opamp has OPAMP_CTR ADCSW2 bit */
#define FSL_FEATURE_OPAMP_HAS_OPAMP_CTR_ADCSW2 (0)
/* @brief Opamp has OPAMP_CTR BUFEN bit */
#define FSL_FEATURE_OPAMP_HAS_OPAMP_CTR_BUFEN (0)
/* @brief Opamp has OPAMP_CTR INPSEL bit */
#define FSL_FEATURE_OPAMP_HAS_OPAMP_CTR_INPSEL (0)
/* @brief Opamp has OPAMP_CTR TRIGMD bit */
#define FSL_FEATURE_OPAMP_HAS_OPAMP_CTR_TRIGMD (0)
/* @brief OPAMP support reference buffer */
#define FSL_FEATURE_OPAMP_HAS_SUPPORT_REFERENCE_BUFFER (1U)

/* PORT module features */

/* @brief Has control lock (register bit PCR[LK]). */
#define FSL_FEATURE_PORT_HAS_PIN_CONTROL_LOCK (1)
/* @brief Has open drain control (register bit PCR[ODE]). */
#define FSL_FEATURE_PORT_HAS_OPEN_DRAIN (1)
/* @brief Has digital filter (registers DFER, DFCR and DFWR). */
#define FSL_FEATURE_PORT_HAS_DIGITAL_FILTER (0)
/* @brief Has DMA request (register bit field PCR[IRQC] or ICR[IRQC] values). */
#define FSL_FEATURE_PORT_HAS_DMA_REQUEST (0)
/* @brief Has pull resistor selection available. */
#define FSL_FEATURE_PORT_HAS_PULL_SELECTION (1)
/* @brief Has pull resistor enable (register bit PCR[PE]). */
#define FSL_FEATURE_PORT_HAS_PULL_ENABLE (1)
/* @brief Has slew rate control (register bit PCR[SRE]). */
#define FSL_FEATURE_PORT_HAS_SLEW_RATE (1)
/* @brief Has passive filter (register bit field PCR[PFE]). */
#define FSL_FEATURE_PORT_HAS_PASSIVE_FILTER (1)
/* @brief Do not has interrupt control (register ISFR). */
#define FSL_FEATURE_PORT_HAS_NO_INTERRUPT (1)
/* @brief Has pull value (register bit field PCR[PV]). */
#define FSL_FEATURE_PORT_PCR_HAS_PULL_VALUE (1)
/* @brief Has drive strength1 control (register bit PCR[DSE1]). */
#define FSL_FEATURE_PORT_HAS_DRIVE_STRENGTH1 (1)
/* @brief Has version ID register (register VERID). */
#define FSL_FEATURE_PORT_HAS_VERSION_INFO_REGISTER (1)
/* @brief Has voltage range control (register bit CONFIG[RANGE]). */
#define FSL_FEATURE_PORT_SUPPORT_DIFFERENT_VOLTAGE_RANGE (1)
/* @brief Has EFT detect (registers EDFR, EDIER and EDCR). */
#define FSL_FEATURE_PORT_SUPPORT_EFT (0)
/* @brief Function 0 is GPIO. */
#define FSL_FEATURE_PORT_PCR_MUX_GPIO (0)
/* @brief Has drive strength control (register bit PCR[DSE]). */
#define FSL_FEATURE_PORT_HAS_DRIVE_STRENGTH (1)
/* @brief Defines width of PCR[MUX] field. */
#define FSL_FEATURE_PORT_PCR_MUX_WIDTH (4)
/* @brief Has dedicated interrupt vector. */
#define FSL_FEATURE_PORT_HAS_INTERRUPT_VECTOR (1)
/* @brief Has independent interrupt control(register ICR). */
#define FSL_FEATURE_PORT_HAS_INDEPENDENT_INTERRUPT_CONTROL (0)
/* @brief Has multiple pin IRQ configuration (register GICLR and GICHR). */
#define FSL_FEATURE_PORT_HAS_MULTIPLE_IRQ_CONFIG (0)
/* @brief Has Input Buffer Enable (register bit field PCR[IBE]). */
#define FSL_FEATURE_PORT_HAS_INPUT_BUFFER (1)
/* @brief Has Invert Input (register bit field PCR[INV]). */
#define FSL_FEATURE_PORT_HAS_INVERT_INPUT (1)
/* @brief Defines whether PCR[IRQC] bit-field has flag states. */
#define FSL_FEATURE_PORT_HAS_IRQC_FLAG (0)
/* @brief Defines whether PCR[IRQC] bit-field has trigger states. */
#define FSL_FEATURE_PORT_HAS_IRQC_TRIGGER (0)

/* RTC module features */

/* @brief Has no supervisor access bit (CR). */
#define FSL_FEATURE_RTC_HAS_NO_CR_SUP (1)
/* @brief Has no oscillator enable bit (CR). */
#define FSL_FEATURE_RTC_HAS_NO_CR_OSCE (1)

/* SPC module features */

/* @brief Has DCDC */
#define FSL_FEATURE_MCX_SPC_HAS_DCDC (0)
/* @brief Has SYS LDO */
#define FSL_FEATURE_MCX_SPC_HAS_SYS_LDO (0)
/* @brief Has IOVDD_LVDF */
#define FSL_FEATURE_MCX_SPC_HAS_IOVDD_VD (0)
/* @brief Has COREVDD_HVDF */
#define FSL_FEATURE_MCX_SPC_HAS_COREVDD_HVD (0)
/* @brief Has CORELDO_VDD_DS */
#define FSL_FEATURE_SPC_HAS_CORELDO_VDD_DS (1)
/* @brief Has LPBUFF_EN */
#define FSL_FEATURE_MCX_SPC_HAS_LPBUFF_EN_BIT (0)
/* @brief Has COREVDD_IVS_EN */
#define FSL_FEATURE_MCX_SPC_HAS_COREVDD_IVS_EN_BIT (0)
/* @brief Has SWITCH_STATE */
#define FSL_FEATURE_MCX_SPC_HAS_SWITCH_STATE_BIT (0)
/* @brief Has SRAMRETLDO */
#define FSL_FEATURE_MCX_SPC_HAS_SRAMRETLDO_REG (1)
/* @brief Has CFG register */
#define FSL_FEATURE_MCX_SPC_HAS_CFG_REG (0)
/* @brief Has SRAMLDO_DPD_ON */
#define FSL_FEATURE_MCX_SPC_HAS_SRAMLDO_DPD_ON_BIT (1)
/* @brief Has CNTRL register */
#define FSL_FEATURE_MCX_SPC_HAS_CNTRL_REG (1)
/* @brief Has DPDOWN_PULLDOWN_DISABLE */
#define FSL_FEATURE_MCX_SPC_HAS_DPDOWN_PULLDOWN_DISABLE_BIT (0)
/* @brief Not have glitch detect */
#define FSL_FEATURE_MCX_SPC_HAS_NO_GLITCH_DETECT (1)
/* @brief Has BLEED_EN */
#define FSL_FEATURE_MCX_SPC_HAS_DCDC_CFG_BLEED_EN (0)
/* @brief Has Power Request Status Flag */
#define FSL_FEATURE_MCX_SPC_HAS_PD_STATUS_PWR_REQ_STATUS_BIT (0)

/* SYSCON module features */

/* @brief Flash page size in bytes */
#define FSL_FEATURE_SYSCON_FLASH_PAGE_SIZE_BYTES (128)
/* @brief Flash sector size in bytes */
#define FSL_FEATURE_SYSCON_FLASH_SECTOR_SIZE_BYTES (8192)
/* @brief Flash size in bytes */
#define FSL_FEATURE_SYSCON_FLASH_SIZE_BYTES (516096)
/* @brief Support ROMAPI */
#define FSL_FEATURE_SYSCON_ROMAPI (1)
/* @brief ROMAPI tree address */
#define FSL_FEATURE_ROMAPI_BASE (0x03005FE0U)
/* @brief ROMAPI support IFR function */
#define FSL_FEATURE_ROMAPI_IFR (0)
/* @brief Powerlib API is different with other series devices */
#define FSL_FEATURE_POWERLIB_EXTEND (1)
/* @brief No OSTIMER register in PMC */
#define FSL_FEATURE_PMC_HAS_NO_OSTIMER_REG (1)
/* @brief Starter register discontinuous. */
#define FSL_FEATURE_SYSCON_STARTER_DISCONTINUOUS (1)
/* @brief Has parity miss (bitfield LPCAC_CTRL[PARITY_MISS_EN]). */
#define FSL_FEATURE_SYSCON_HAS_LPCAC_CTRL_PARITY_MISS_EN_BIT (0)
/* @brief Has parity error report (bitfield LPCAC_CTRL[PARITY_FAULT_EN]). */
#define FSL_FEATURE_SYSCON_HAS_LPCAC_CTRL_PARITY_FAULT_EN_BIT (0)

/* SysTick module features */

/* @brief Systick has external reference clock. */
#define FSL_FEATURE_SYSTICK_HAS_EXT_REF (0)
/* @brief Systick external reference clock is core clock divided by this value. */
#define FSL_FEATURE_SYSTICK_EXT_REF_CORE_DIV (0)

/* UTICK module features */

/* @brief UTICK does not support PD configure. */
#define FSL_FEATURE_UTICK_HAS_NO_PDCFG (1)

/* VBAT module features */

/* @brief Has STATUS register */
#define FSL_FEATURE_MCX_VBAT_HAS_STATUS_REG (0)
/* @brief Has TAMPER register */
#define FSL_FEATURE_MCX_VBAT_HAS_TAMPER_REG (0)
/* @brief Has BANDGAP register */
#define FSL_FEATURE_MCX_VBAT_HAS_BANDGAP_TIMER (0)
/* @brief Has LDOCTL register */
#define FSL_FEATURE_MCX_VBAT_HAS_LDOCTL_REG (0)
/* @brief Has OSCCTL register */
#define FSL_FEATURE_MCX_VBAT_HAS_OSCCTL_REG (0)
/* @brief Has SWICTL register */
#define FSL_FEATURE_MCX_VBAT_HAS_SWICTL_REG (0)
/* @brief Has CLKMON register */
#define FSL_FEATURE_MCX_VBAT_HAS_CLKMON_REG (0)

/* WWDT module features */

/* @brief Has no RESET register. */
#define FSL_FEATURE_WWDT_HAS_NO_RESET (1)

#endif /* _MCXA345_FEATURES_H_ */

