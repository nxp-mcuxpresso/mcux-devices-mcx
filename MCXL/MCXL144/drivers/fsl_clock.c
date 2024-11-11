/*
 * Copyright 2023-2024, NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include "fsl_clock.h"
#include "fsl_aon_common.h"
/*******************************************************************************
 * Definitions
 ******************************************************************************/
/* Component ID definition, used by tools. */
#ifndef FSL_COMPONENT_ID
#define FSL_COMPONENT_ID "platform.drivers.clock"
#endif

/*******************************************************************************
 * Variables
 ******************************************************************************/
/*! @brief External XTAL32K clock frequency. */
volatile uint32_t g_xtal32Freq;

/*******************************************************************************
 * Prototypes
 ******************************************************************************/
/* Get FRO 12M Clk */
static uint32_t CLOCK_GetFro12MFreq(void);
/* Get CLK 1M Clk */
static uint32_t CLOCK_GetClk1MFreq(void);
/* Get HF FRO Clk */
static uint32_t CLOCK_GetFroHfFreq(void);
/* Get CLK 16K Clk */
static uint32_t CLOCK_GetClk16KFreq(void);
/* Get RTC OSC Clk */
static uint32_t CLOCK_GetRtcOscFreq(void);
/* Get Main_Clk */
uint32_t CLOCK_GetMainClk(void);

/* Check if DIV is halt */
static inline bool CLOCK_IsDivHalt(uint32_t div_value)
{
    if (0U != (div_value & (1UL << 30U)))
    {
        return true;
    }
    else
    {
        return false;
    }
}

/*******************************************************************************
 * Code
 ******************************************************************************/
/**
 * @brief Enable the clock for specific IP.
 * @param clk : Clock to be enabled.
 * @return  Nothing
 */
void CLOCK_EnableClock(clock_ip_name_t clk)
{
    uint32_t reg_cc_offset               = CLK_GATE_REG_CC_OFFSET(clk);
    uint32_t reg_pr_offset               = CLK_GATE_REG_PR_OFFSET(clk);
    uint32_t bit_shift                   = CLK_PERIPHERAL_BIT_SHIFT(clk);
    volatile uint32_t *pClkCtrl          = (volatile uint32_t *)((uint32_t)(&(MRCC->MRCC_GLB_CCSET0)) + reg_cc_offset);
    volatile uint32_t *pPeripheralEnCtrl = (volatile uint32_t *)((uint32_t)(&(MRCC->MRCC_GLB_PR0)) + reg_pr_offset);

    if (clk == kCLOCK_GateNotAvail)
    {
        return;
    }

    if (clk == kCLOCK_GateADC0 || clk == kCLOCK_GatePERIPH_GROUP0 || clk == kCLOCK_GatePERIPH_GROUP1 ||
        clk == kCLOCK_GateCTIMER0 || clk == kCLOCK_GateCTIMER1)
    {
        Aon_AdvcPreVoltageRequest(CLOCK_GetMainCpuFreqEnum(), 0U);
    }

    /* Unlock clock configuration */
    SYSCON->CLKUNLOCK &= ~SYSCON_CLKUNLOCK_CLKGEN_LOCKOUT_MASK;

    if (clk != kCLOCK_InputMux && clk != kCLOCK_GateWWDT0 && clk != kCLOCK_GateEZRAMC_RAMA && clk != kCLOCK_GateROMCP &&
        clk != kCLOCK_GatePWMSM0 && clk != kCLOCK_GatePWMSM1 && clk != kCLOCK_GatePWMSM2 && clk != kCLOCK_GatePWMSM3)
    {
        *pPeripheralEnCtrl |= (1UL << bit_shift);
    }

    if (reg_cc_offset == REG_PWM0SUBCTL)
    {
        SYSCON->PWM0SUBCTL |= (1UL << bit_shift);
        MRCC->MRCC_GLB_PR0 |= MRCC_MRCC_GLB_PR0_FLEXPWM0_MASK;
        MRCC->MRCC_GLB_CCSET0 = MRCC_MRCC_GLB_CC0_FLEXPWM0_MASK;
    }
    else
    {
        *pClkCtrl = (1UL << bit_shift);
    }

    /* Freeze clock configuration */
    SYSCON->CLKUNLOCK |= SYSCON_CLKUNLOCK_CLKGEN_LOCKOUT_MASK;

    if (clk == kCLOCK_GateADC0 || clk == kCLOCK_GatePERIPH_GROUP0 || clk == kCLOCK_GatePERIPH_GROUP1 ||
        clk == kCLOCK_GateCTIMER0 || clk == kCLOCK_GateCTIMER1)
    {
        Aon_AdvcPostChangeFrequencyVoltageRequest(0U);
    }
}

/**
 * @brief Disable the clock for specific IP.
 * @param clk : Clock to be Disabled.
 * @return  Nothing
 */
void CLOCK_DisableClock(clock_ip_name_t clk)
{
    uint32_t reg_cc_offset               = CLK_GATE_REG_CC_OFFSET(clk);
    uint32_t reg_pr_offset               = CLK_GATE_REG_PR_OFFSET(clk);
    uint32_t bit_shift                   = CLK_PERIPHERAL_BIT_SHIFT(clk);
    volatile uint32_t *pClkCtrl          = (volatile uint32_t *)((uint32_t)(&(MRCC->MRCC_GLB_CCCLR0)) + reg_cc_offset);
    volatile uint32_t *pPeripheralEnCtrl = (volatile uint32_t *)((uint32_t)(&(MRCC->MRCC_GLB_PR0)) + reg_pr_offset);

    if (clk == kCLOCK_GateNotAvail)
    {
        return;
    }

    if (clk == kCLOCK_GateADC0 || clk == kCLOCK_GatePERIPH_GROUP0 || clk == kCLOCK_GatePERIPH_GROUP1 ||
        clk == kCLOCK_GateCTIMER0 || clk == kCLOCK_GateCTIMER1)
    {
        Aon_AdvcPreVoltageRequest(CLOCK_GetMainCpuFreqEnum(), 0U);
    }

    /* Unlock clock configuration */
    SYSCON->CLKUNLOCK &= ~SYSCON_CLKUNLOCK_CLKGEN_LOCKOUT_MASK;

    if (reg_cc_offset == REG_PWM0SUBCTL)
    {
        SYSCON->PWM0SUBCTL &= ~(1UL << bit_shift);

        if (0U == (SYSCON->PWM0SUBCTL & 0xFU))
        {
            MRCC->MRCC_GLB_CCCLR0 = MRCC_MRCC_GLB_CC0_FLEXPWM0_MASK;
            MRCC->MRCC_GLB_PR0 &= ~(MRCC_MRCC_GLB_PR0_FLEXPWM0_MASK);
        }
    }
    else
    {
        *pClkCtrl = (1UL << bit_shift);
    }

    if (clk != kCLOCK_InputMux && clk != kCLOCK_GateWWDT0 && clk != kCLOCK_GateEZRAMC_RAMA && clk != kCLOCK_GateROMCP &&
        clk != kCLOCK_GatePWMSM0 && clk != kCLOCK_GatePWMSM1 && clk != kCLOCK_GatePWMSM2 && clk != kCLOCK_GatePWMSM3)
    {
        *pPeripheralEnCtrl &= ~(1UL << bit_shift);
    }

    /* Freeze clock configuration */
    SYSCON->CLKUNLOCK |= SYSCON_CLKUNLOCK_CLKGEN_LOCKOUT_MASK;

    if (clk == kCLOCK_GateADC0 || clk == kCLOCK_GatePERIPH_GROUP0 || clk == kCLOCK_GatePERIPH_GROUP1 ||
        clk == kCLOCK_GateCTIMER0 || clk == kCLOCK_GateCTIMER1)
    {
        Aon_AdvcPostChangeFrequencyVoltageRequest(0U);
    }
}
/* Clock Selection for IP */
/**
 * brief   Configure the clock selection muxes.
 * param   connection  : Clock to be configured.
 * return  Nothing
 */
void CLOCK_AttachClk(clock_attach_id_t connection)
{
    const uint32_t reg_offset = CLK_ATTACH_REG_OFFSET(connection);
    const uint32_t clk_sel    = CLK_ATTACH_CLK_SEL(connection);

    if (kNONE_to_NONE != connection)
    {
        CLOCK_SetClockSelect((clock_select_name_t)reg_offset, clk_sel);
    }
}

/* Return the actual clock attach id */
/**
 * brief   Get the actual clock attach id.
 * This fuction uses the offset in input attach id, then it reads the actual source value in
 * the register and combine the offset to obtain an actual attach id.
 * param   connection  : Clock attach id to get.
 * return  Clock source value.
 */
clock_attach_id_t CLOCK_GetClockAttachId(clock_attach_id_t connection)
{
    const uint32_t reg_offset = CLK_ATTACH_REG_OFFSET(connection);
    uint32_t actual_sel       = 0U;
    uint32_t clock_attach_id  = 0U;

    if (kNONE_to_NONE == connection)
    {
        return kNONE_to_NONE;
    }

    actual_sel      = CLOCK_GetClockSelect((clock_select_name_t)reg_offset);
    clock_attach_id = CLK_ATTACH_MUX(reg_offset, actual_sel);

    return (clock_attach_id_t)clock_attach_id;
}

/* Set the clock selection value */
void CLOCK_SetClockSelect(clock_select_name_t sel_name, uint32_t value)
{
    volatile uint32_t *pClkCtrl = (volatile uint32_t *)(MRCC_BASE + (uint32_t)sel_name);
    assert(sel_name <= kCLOCK_SelMax);

    if (sel_name == kCLOCK_SelADC0 || sel_name == kCLOCK_SelPERIPH_GROUP0 || sel_name == kCLOCK_SelPERIPH_GROUP1 ||
        sel_name == kCLOCK_SelCTIMER0 || sel_name == kCLOCK_SelCTIMER1 || sel_name == kCLOCK_SelSCGSCS ||
        sel_name == kCLOCK_SelFIRC)
    {
        Aon_AdvcPreVoltageRequest(CLOCK_GetMainCpuFreqEnum(), 0U);
    }

    if (sel_name == kCLOCK_SelSCGSCS)
    {
        SCG0->RCCR = (SCG0->RCCR & ~(SCG_RCCR_SCS_MASK)) | SCG_RCCR_SCS(value);
        while ((SCG0->CSR & SCG_CSR_SCS_MASK) != SCG_CSR_SCS(value))
        {
        }
    }
    else if (sel_name == kCLOCK_SelFIRC)
    {
        SCG0->FIRCCFG = (SCG0->FIRCCFG & ~(SCG_FIRCCFG_DIV2_DIV4_SEL_MASK)) | SCG_FIRCCFG_DIV2_DIV4_SEL(value);
    }
    else
    {
        /* Unlock clock configuration */
        SYSCON->CLKUNLOCK &= ~SYSCON_CLKUNLOCK_CLKGEN_LOCKOUT_MASK;

        *pClkCtrl = value;

        /* Freeze clock configuration */
        SYSCON->CLKUNLOCK |= SYSCON_CLKUNLOCK_CLKGEN_LOCKOUT_MASK;
    }

    if (sel_name == kCLOCK_SelADC0 || sel_name == kCLOCK_SelPERIPH_GROUP0 || sel_name == kCLOCK_SelPERIPH_GROUP1 ||
        sel_name == kCLOCK_SelCTIMER0 || sel_name == kCLOCK_SelCTIMER1)
    {
        Aon_AdvcPostChangeFrequencyVoltageRequest(0U);
    }
}

/* Get the clock selection value */
uint32_t CLOCK_GetClockSelect(clock_select_name_t sel_name)
{
    volatile uint32_t *pClkCtrl = (volatile uint32_t *)(MRCC_BASE + (uint32_t)sel_name);
    uint32_t actual_sel         = 0U;
    assert(sel_name <= kCLOCK_SelMax);

    if (sel_name == kCLOCK_SelSCGSCS)
    {
        actual_sel = (uint32_t)((SCG0->RCCR & SCG_RCCR_SCS_MASK) >> SCG_RCCR_SCS_SHIFT);
    }
    else if (sel_name == kCLOCK_SelFIRC)
    {
        actual_sel = (uint32_t)((SCG0->FIRCCFG & SCG_FIRCCFG_DIV2_DIV4_SEL_MASK) >> SCG_FIRCCFG_DIV2_DIV4_SEL_SHIFT);
    }
    else
    {
        actual_sel = *pClkCtrl;
    }

    return actual_sel;
}

/* Set the clock divider value */
void CLOCK_SetClockDiv(clock_div_name_t div_name, uint32_t value)
{
    volatile uint32_t *pDivCtrl;
    assert(div_name <= kCLOCK_DivMax);

    if (div_name == kCLOCK_DivADC0 || div_name == kCLOCK_DivPeriphGroup0 || div_name == kCLOCK_DivPeriphgroup1 ||
        div_name == kCLOCK_DivCTIMER0 || div_name == kCLOCK_DivCTIMER1 || div_name == kCLOCK_DivAHBCLK)
    {
        Aon_AdvcPreVoltageRequest(CLOCK_GetMainCpuFreqEnum(), 0U);
    }

    /* Unlock clock configuration */
    SYSCON->CLKUNLOCK &= ~SYSCON_CLKUNLOCK_CLKGEN_LOCKOUT_MASK;

    if ((div_name == kCLOCK_DivAHBCLK) || (div_name == kCLOCK_DivAHBAIPSCLK))
    {
        pDivCtrl  = (volatile uint32_t *)(SYSCON_BASE + (uint32_t)div_name);
        *pDivCtrl = (value - 1U);
    }
    else
    {
        pDivCtrl = (volatile uint32_t *)(MRCC_BASE + (uint32_t)div_name);

        /* halt and reset clock dividers */
        *pDivCtrl = 0x3UL << 29U;

        if (value == 0U) /*!<  halt */
        {
            *pDivCtrl |= (1UL << 30U);
        }
        else
        {
            *pDivCtrl = (value - 1U);
        }
    }

    /* Freeze clock configuration */
    SYSCON->CLKUNLOCK |= SYSCON_CLKUNLOCK_CLKGEN_LOCKOUT_MASK;

    if (div_name == kCLOCK_DivADC0 || div_name == kCLOCK_DivPeriphGroup0 || div_name == kCLOCK_DivPeriphgroup1 ||
        div_name == kCLOCK_DivCTIMER0 || div_name == kCLOCK_DivCTIMER1)
    {
        Aon_AdvcPostChangeFrequencyVoltageRequest(0U);
    }
}

/* Get the clock divider value */
uint32_t CLOCK_GetClockDiv(clock_div_name_t div_name)
{
    volatile uint32_t *pDivCtrl = (volatile uint32_t *)(MRCC_BASE + (uint32_t)div_name);
    assert(div_name <= kCLOCK_DivMax);

    if (((*pDivCtrl) & (1UL << 30U)) != 0U)
    {
        return 0;
    }
    else
    {
        return ((*pDivCtrl & 0xFFU) + 1U);
    }
}

/* Halt the clock divider value */
void CLOCK_HaltClockDiv(clock_div_name_t div_name)
{
    volatile uint32_t *pDivCtrl = (volatile uint32_t *)(MRCC_BASE + (uint32_t)div_name);
    assert(div_name <= kCLOCK_DivMax);

    /* Unlock clock configuration */
    SYSCON->CLKUNLOCK &= ~SYSCON_CLKUNLOCK_CLKGEN_LOCKOUT_MASK;

    *pDivCtrl |= (1UL << 30U);

    /* Freeze clock configuration */
    SYSCON->CLKUNLOCK |= SYSCON_CLKUNLOCK_CLKGEN_LOCKOUT_MASK;
}

/* Initialize the FROHF to given frequency (36, 40) */
status_t CLOCK_SetupFROHFClocking(uint32_t iFreq, uint8_t div_sel)
{
    uint8_t freq_select = 0x0U;
    switch (iFreq)
    {
        case 36000000U:
            freq_select = 0U;
            break;
        case 40000000U:
            freq_select = 2U;
            break;
        default:
            freq_select = 0xFU;
            break;
    }

    if (0xFU == freq_select)
    {
        return kStatus_Fail;
    }

    Aon_AdvcPreVoltageRequest(CLOCK_GetMainCpuFreqEnum(), 0U);

    /* Set FIRC frequency */
    SCG0->FIRCCFG = SCG_FIRCCFG_FREQ_SEL(freq_select);
    /* Set FIRC Divider */
    SCG0->FIRCCFG |= SCG_FIRCCFG_DIV2_DIV4_SEL(div_sel);
    /* Unlock FIRCCSR */
    SCG0->FIRCCSR &= ~SCG_FIRCCSR_LK_MASK;

    /* Enable FIRC HF clock for peripheral use */
    SCG0->FIRCCSR |= SCG_FIRCCSR_FIRC_FCLK_PERIPH_EN_MASK;
    /* Enable FIRC */
    SCG0->FIRCCSR |= SCG_FIRCCSR_FIRCEN_MASK;

    /* Lock FIRCCSR */
    SCG0->FIRCCSR |= SCG_FIRCCSR_LK_MASK;

    /* Wait for FIRC clock to be valid. */
    while ((SCG0->FIRCCSR & SCG_FIRCCSR_FIRCVLD_MASK) == 0U)
    {
    }

    Aon_AdvcPostChangeFrequencyVoltageRequest(0U);

    return (status_t)kStatus_Success;
}

/* Initialize the FRO12M. */
status_t CLOCK_SetupFRO12MClocking(void)
{
    Aon_AdvcPreVoltageRequest(CLOCK_GetMainCpuFreqEnum(), 0U);

    /* Unlock SIRCCSR */
    SCG0->SIRCCSR &= ~SCG_SIRCCSR_LK_MASK;

    /* Enable FRO12M clock for peripheral use */
    SCG0->SIRCCSR |= SCG_SIRCCSR_SIRC_CLK_PERIPH_EN_MASK;
    /* Enable FRO12M clock for Flash use */
    SCG0->SIRCCSR |= SCG_SIRCCSR_SIRC_CLK_FLASH_EN_MASK;

    /* Lock SIRCCSR */
    SCG0->SIRCCSR |= SCG_SIRCCSR_LK_MASK;

    /* Wait for SIRC clock to be valid. */
    while ((SCG0->SIRCCSR & SCG_SIRCCSR_SIRCVLD_MASK) == 0U)
    {
    }

    Aon_AdvcPostChangeFrequencyVoltageRequest(0U);

    return (status_t)kStatus_Success;
}

/*!
 * brief Initializes the SCG ROSC.
 *
 * This function enables the SCG ROSC clock according to the
 * configuration.
 *
 * param config   Pointer to the configuration structure.
 * retval kStatus_Success ROSC is initialized.
 * retval kStatus_Busy ROSC has been enabled and is used by the system clock.
 * retval kStatus_ReadOnly ROSC control register is locked.
 *
 * note This function can't detect whether the system OSC has been enabled and
 * used by an IP.
 */
status_t CLOCK_InitRosc(const scg_rosc_config_t *config)
{
    assert(config);
    status_t status;

    /* De-init the ROSC first. */
    status = CLOCK_DeinitRosc();

    if (kStatus_Success != status)
    {
        return status;
    }

    CLOCK_SetRoscMonitorMode(config->monitorMode);

    /* Wait for ROSC clock to be valid. */
    while ((SCG0->ROSCCSR & SCG_ROSCCSR_ROSCVLD_MASK) != SCG_ROSCCSR_ROSCVLD_MASK)
    {
    }

    return (status_t)kStatus_Success;
}

/*!
 * brief De-initializes the SCG ROSC.
 *
 * This function disables the SCG ROSC clock.
 *
 * retval kStatus_Success System OSC is deinitialized.
 * retval kStatus_Busy System OSC is used by the system clock.
 * retval kStatus_ReadOnly System OSC control register is locked.
 *
 * note This function can't detect whether the ROSC is used by an IP.
 */
status_t CLOCK_DeinitRosc(void)
{
    uint32_t reg = SCG0->ROSCCSR;

    /* If clock is used by system, return error. */
    if ((reg & SCG_ROSCCSR_ROSCSEL_MASK) == SCG_ROSCCSR_ROSCSEL_MASK)
    {
        return (status_t)kStatus_Busy;
    }

    /* If configure register is locked, return error. */
    if ((reg & SCG_ROSCCSR_LK_MASK) == SCG_ROSCCSR_LK_MASK)
    {
        return (status_t)kStatus_ReadOnly;
    }

    /* De-initializes the SCG ROSC */
    SCG0->ROSCCSR = SCG_ROSCCSR_ROSCERR_MASK;

    return (status_t)kStatus_Success;
}

/* Get IP Clk */
/*! brief  Return Frequency of selected clock
 *  return Frequency of selected clock
 */
uint32_t CLOCK_GetFreq(clock_name_t clockName)
{
    uint32_t freq = 0U;

    switch (clockName)
    {
        case kCLOCK_MainClk: /* MAIN_CLK */
            freq = CLOCK_GetMainClk();
            break;
        case kCLOCK_CoreSysClk: /* Core/system clock(CPU_CLK) */
            freq = CLOCK_GetCoreSysClkFreq();
            break;
        case kCLOCK_SYSTEM_CLK: /* AHB clock */
            freq = CLOCK_GetCoreSysClkFreq();
            break;
        case kCLOCK_BusClk: /* Bus clock (AHB clock) */
            freq = CLOCK_GetCoreSysClkFreq();
            break;
        case kCLOCK_RtcOscClk: /* External Clock */
            freq = CLOCK_GetRtcOscFreq();
            break;
        case kCLOCK_FroHf: /* FROHF */
            freq = CLOCK_GetFroHfFreq();
            break;
        case kCLOCK_FroHfDiv: /* Divided by FROHF */
            freq = CLOCK_GetFroHfFreq() / ((MRCC->MRCC_FRO_HF_DIV_CLKDIV & 0xFU) + 1U);
            break;
        case kCLOCK_Fro12M: /* FRO12M */
            freq = CLOCK_GetFro12MFreq();
            break;
        case kCLOCK_FlashCLK: /* Sirc FLASH clock */
            freq = CLOCK_GetFlashClkFreq();
            break;
        case kCLOCK_Clk1M: /* CLK1M */
            freq = CLOCK_GetClk1MFreq();
            break;
        case kCLOCK_Clk16K: /* CLK16K[0] */
            freq = CLOCK_GetClk16KFreq();
            break;
        case kCLOCK_SLOW_CLK: /* SYSTEM_CLK divided by 4 */
            freq = CLOCK_GetCoreSysClkFreq() >> 2U;
            break;
        default:
            freq = 0U;
            break;
    }
    return freq;
}

/* Get FRO 12M Clk */
/*! brief  Return Frequency of FRO 12MHz
 *  return Frequency of FRO 12MHz
 */
static uint32_t CLOCK_GetFro12MFreq(void)
{
    return ((SCG0->SIRCCSR & SCG_SIRCCSR_SIRC_CLK_PERIPH_EN_MASK) != 0U) ? 12000000U : 0U;
}

/* Get CLK 1M Clk */
/*! brief  Return Frequency of CLK 1MHz
 *  return Frequency of CLK 1MHz
 */
static uint32_t CLOCK_GetClk1MFreq(void)
{
    return 1000000U;
}

/* Get HF FRO Clk */
/*! brief  Return Frequency of High-Freq output of FRO
 *  return Frequency of High-Freq output of FRO
 */
static uint32_t CLOCK_GetFroHfFreq(void)
{
    uint32_t freq;
    uint8_t div_sel = (SCG0->FIRCCFG & SCG_FIRCCFG_DIV2_DIV4_SEL_MASK) >> SCG_FIRCCFG_DIV2_DIV4_SEL_SHIFT;

    if (((SCG0->FIRCCSR & SCG_FIRCCSR_FIRCEN_MASK) == 0U) ||
        ((SCG0->FIRCCSR & SCG_FIRCCSR_FIRC_FCLK_PERIPH_EN_SHIFT) == 0U))
    {
        freq = 0U;
    }

    switch ((SCG0->FIRCCFG & SCG_FIRCCFG_FREQ_SEL_MASK) >> SCG_FIRCCFG_FREQ_SEL_SHIFT)
    {
        case 0U:
            freq = 36000000U / (div_sel + 1U);
            break;
        case 2U:
            freq = 40000000U / (div_sel + 1U);
            break;
        default:
            freq = 0U;
            break;
    }

    return freq;
}

/*!
 * @brief Gets the SCG RTC OSC clock frequency.
 *
 * @return  Clock frequency; If the clock is invalid, returns 0.
 */
uint32_t CLOCK_GetRtcOscFreq(void)
{
    if ((SCG0->ROSCCSR & SCG_ROSCCSR_ROSCVLD_MASK) == SCG_ROSCCSR_ROSCVLD_MASK) /* RTC OSC clock is valid. */
    {
        /* Please call CLOCK_SetXtal32Freq base on board setting before using RTC OSC clock. */
        assert(g_xtal32Freq);
        return g_xtal32Freq;
    }
    else
    {
        return 0U;
    }
}

/* Get CLK 16K Clk */
/*! brief  Return Frequency of CLK 16KHz
 *  return Frequency of CLK 16KHz
 */
static uint32_t CLOCK_GetClk16KFreq(void)
{
    return (CLOCK_GetRtcOscFreq() / 2U);
}

/* Get MAIN Clk */
/*! brief  Return Frequency of Core System
 *  return Frequency of Core System
 */
uint32_t CLOCK_GetMainClk(void)
{
    uint32_t freq = 0U;

    switch ((SCG0->CSR & SCG_CSR_SCS_MASK) >> SCG_CSR_SCS_SHIFT)
    {
        case 2U:
            freq = 12000000U; /* SIRC fro_12m ungated clock */
            break;
        case 3U:
            freq = CLOCK_GetFroHfFreq();
            break;
        case 4U:
            freq = CLOCK_GetRtcOscFreq();
            break;
        default:
            freq = 0U;
            break;
    }

    return freq;
}

/*! brief  Return Frequency of core
 *  return Frequency of the core
 */
uint32_t CLOCK_GetCoreSysClkFreq(void)
{
    return CLOCK_GetMainClk() / ((SYSCON->AHBCLKDIV & 0xFFU) + 1U);
}

/* Get FRO 12M FLASH Clk */
/*! brief  Return Frequency of flash
 *  return Frequency of flash 12M clock
 */
uint32_t CLOCK_GetFlashClkFreq(void)
{
    return ((SCG0->SIRCCSR & SCG_SIRCCSR_SIRC_CLK_FLASH_EN_MASK) != 0U) ? 12000000U : 0U;
}

/* Get CTimer Clk */
/*! brief  Return Frequency of CTimer functional Clock
 *  return Frequency of CTimer functional Clock
 */
uint32_t CLOCK_GetCTimerClkFreq(uint32_t id)
{
    uint32_t freq   = 0U;
    uint32_t clksel = (0U == id) ? (MRCC->MRCC_CTIMER0_CLKSEL) : (MRCC->MRCC_CTIMER1_CLKSEL);
    uint32_t clkdiv = (0U == id) ? (MRCC->MRCC_CTIMER0_CLKDIV) : (MRCC->MRCC_CTIMER1_CLKDIV);

    if (true == CLOCK_IsDivHalt(clkdiv))
    {
        return 0;
    }

    switch (clksel)
    {
        case 0U:
            freq = CLOCK_GetFro12MFreq();
            break;
        case 1U:
            freq = CLOCK_GetFroHfFreq() / ((MRCC->MRCC_FRO_HF_DIV_CLKDIV & 0xFU) + 1U);
            break;
        case 2U:
            freq = CLOCK_GetClk16KFreq();
            break;
        case 3U:
            switch (id)
            {
                case 1U:
                    freq = CLOCK_GetClk1MFreq();
                    break;
                default:
                    freq = 0U;
                    break;
            }
            break;
        default:
            freq = 0U;
            break;
    }

    return freq / ((clkdiv & 0xFFU) + 1U);
}

/* Get LPI2C Clk */
/*! brief  Return Frequency of LPI2C functional Clock
 *  return Frequency of LPI2C functional Clock
 */
uint32_t CLOCK_GetLpi2cClkFreq(void)
{
    uint32_t freq   = 0U;
    uint32_t clksel = (MRCC->MRCC_PERIPH_GROUP_0_CLKSEL);
    uint32_t clkdiv = (MRCC->MRCC_PERIPH_GROUP_0_CLKDIV);

    if (true == CLOCK_IsDivHalt(clkdiv))
    {
        return 0;
    }

    switch (clksel)
    {
        case 0U:
            freq = CLOCK_GetFro12MFreq();
            break;
        case 1U:
            freq = CLOCK_GetFroHfFreq() / ((MRCC->MRCC_FRO_HF_DIV_CLKDIV & 0xFU) + 1U);
            break;
        case 2U:
            freq = CLOCK_GetClk16KFreq();
            break;
        default:
            freq = 0U;
            break;
    }

    return freq / ((clkdiv & 0xFFU) + 1U);
}

/*! brief  Return Frequency of LPSPI functional Clock
 *  return Frequency of LPSPI functional Clock
 */
uint32_t CLOCK_GetLpspiClkFreq(uint32_t id)
{
    uint32_t freq   = 0U;
    uint32_t clksel = (0U == id) ? (MRCC->MRCC_PERIPH_GROUP_0_CLKSEL) : (MRCC->MRCC_PERIPH_GROUP_1_CLKSEL);
    uint32_t clkdiv = (0U == id) ? (MRCC->MRCC_PERIPH_GROUP_0_CLKDIV) : (MRCC->MRCC_PERIPH_GROUP_1_CLKDIV);

    if (true == CLOCK_IsDivHalt(clkdiv))
    {
        return 0;
    }

    switch (clksel)
    {
        case 0U:
            freq = CLOCK_GetFro12MFreq();
            break;
        case 1U:
            freq = CLOCK_GetFroHfFreq() / ((MRCC->MRCC_FRO_HF_DIV_CLKDIV & 0xFU) + 1U);
            break;
        case 2U:
            freq = CLOCK_GetClk16KFreq();
            break;
        default:
            freq = 0U;
            break;
    }

    return freq / ((clkdiv & 0xFFU) + 1U);
}

/*! brief  Return Frequency of LPUART functional Clock
 *  return Frequency of LPUART functional Clock
 */
uint32_t CLOCK_GetLpuartClkFreq(uint32_t id)
{
    uint32_t freq   = 0U;
    uint32_t clksel = (0U == id) ? (MRCC->MRCC_PERIPH_GROUP_0_CLKSEL) : (MRCC->MRCC_PERIPH_GROUP_1_CLKSEL);
    uint32_t clkdiv = (0U == id) ? (MRCC->MRCC_PERIPH_GROUP_0_CLKDIV) : (MRCC->MRCC_PERIPH_GROUP_1_CLKDIV);

    if (true == CLOCK_IsDivHalt(clkdiv))
    {
        return 0;
    }

    switch (clksel)
    {
        case 0U:
            freq = CLOCK_GetFro12MFreq();
            break;
        case 1U:
            freq = CLOCK_GetFroHfFreq() / ((MRCC->MRCC_FRO_HF_DIV_CLKDIV & 0xFU) + 1U);
            break;
        case 2U:
            freq = CLOCK_GetClk16KFreq();
            break;
        default:
            freq = 0U;
            break;
    }

    return freq / ((clkdiv & 0xFFU) + 1U);
}

/* Get UTICK0 Clk */
/*! brief  Return Frequency of UTICK0 functional Clock
 *  return Frequency of UTICK0 functional Clock
 */
uint32_t CLOCK_GetUtickClkFreq(void)
{
    uint32_t freq   = 0U;
    uint32_t clksel = MRCC->MRCC_UTICK0_CLKSEL;

    switch (clksel)
    {
        case 0U:
            freq = CLOCK_GetFro12MFreq();
            break;
        case 2U:
            freq = CLOCK_GetClk16KFreq();
            break;
        case 3U:
            freq = CLOCK_GetClk1MFreq();
            break;
        default:
            freq = 0U;
            break;
    }

    return freq;
}

/* Get WWDT0 Clk */
/*! brief  Return Frequency of WWDT0 functional Clock
 *  return Frequency of WWDT0 functional Clock
 */
uint32_t CLOCK_GetWwdtClkFreq(void)
{
    uint32_t freq   = CLOCK_GetClk1MFreq();
    uint32_t clkdiv = MRCC->MRCC_WWDT0_CLKDIV;

    if (true == CLOCK_IsDivHalt(clkdiv))
    {
        return 0;
    }

    return freq / ((clkdiv & 0xFFU) + 1U);
}

/*! brief  Return Frequency of LPTMR functional Clock
 *  return Frequency of LPTMR functional Clock
 */
uint32_t CLOCK_GetLptmrClkFreq(void)
{
    uint32_t freq   = CLOCK_GetFro12MFreq();
    uint32_t clkdiv = (MRCC->MRCC_LPTMR0_CLKDIV);

    if (true == CLOCK_IsDivHalt(clkdiv))
    {
        return 0;
    }

    return freq / ((clkdiv & 0xFFU) + 1U);
}

/*! brief  Return Frequency of OSTIMER
 *  return Frequency of OSTIMER Clock
 */
uint32_t CLOCK_GetOstimerClkFreq(void)
{
    uint32_t freq   = 0U;
    uint32_t clksel = MRCC->MRCC_OSTIMER0_CLKSEL;

    switch (clksel)
    {
        case 0U:
            freq = CLOCK_GetClk16KFreq();
            break;
        case 1U:
            freq = CLOCK_GetClk1MFreq();
            break;
        default:
            freq = 0U;
            break;
    }

    return freq;
}

/*! brief  Return Frequency of Adc Clock
 *  return Frequency of Adc.
 */
uint32_t CLOCK_GetAdcClkFreq(void)
{
    uint32_t freq   = 0U;
    uint32_t clksel = MRCC->MRCC_ADC0_CLKSEL;
    uint32_t clkdiv = MRCC->MRCC_ADC0_CLKDIV;

    if (true == CLOCK_IsDivHalt(clkdiv))
    {
        return 0;
    }

    switch (clksel)
    {
        case 0U:
            freq = CLOCK_GetFro12MFreq();
            break;
        case 1U:
            freq = CLOCK_GetFroHfFreq() / ((MRCC->MRCC_FRO_HF_DIV_CLKDIV & 0xFU) + 1U);
            break;
        case 3U:
            freq = CLOCK_GetRtcOscFreq();
            break;
        default:
            freq = 0U;
            break;
    }

    return freq / ((clkdiv & 0xFFU) + 1U);
}

/*! brief  Return Frequency of CMP Function Clock
 *  return Frequency of CMP Function.
 */
uint32_t CLOCK_GetCmpFClkFreq(void)
{
    uint32_t freq   = 0U;
    uint32_t clksel = MRCC->MRCC_CMP0_RR_CLKSEL;
    uint32_t clkdiv = MRCC->MRCC_CMP0_FUNC_CLKDIV;

    if (true == CLOCK_IsDivHalt(clkdiv))
    {
        return 0;
    }

    switch (clksel)
    {
        case 0U:
            freq = CLOCK_GetFro12MFreq();
            break;
        case 1U:
            freq = CLOCK_GetFroHfFreq() / ((MRCC->MRCC_FRO_HF_DIV_CLKDIV & 0xFU) + 1U);
            break;
        default:
            freq = 0U;
            break;
    }

    return freq / ((clkdiv & 0xFFU) + 1U);
}

/*! brief  Return Frequency of CMP Round Robin Clock
 *  return Frequency of CMP Round Robin.
 */
uint32_t CLOCK_GetCmpRRClkFreq(void)
{
    uint32_t freq   = 0U;
    uint32_t clksel = MRCC->MRCC_CMP0_RR_CLKSEL;
    uint32_t clkdiv = MRCC->MRCC_CMP0_RR_CLKDIV;

    if (true == CLOCK_IsDivHalt(clkdiv))
    {
        return 0;
    }

    switch (clksel)
    {
        case 0U:
            freq = CLOCK_GetFro12MFreq();
            break;
        case 1U:
            freq = CLOCK_GetFroHfFreq() / ((MRCC->MRCC_FRO_HF_DIV_CLKDIV & 0xFU) + 1U);
            break;
        default:
            freq = 0U;
            break;
    }

    return freq / ((clkdiv & 0xFFU) + 1U);
}

/*! brief  Return Frequency of Trace Clock
 *  return Frequency of Trace.
 */
uint32_t CLOCK_GetTraceClkFreq(void)
{
    uint32_t freq   = CLOCK_GetCoreSysClkFreq();
    uint32_t clkdiv = MRCC->MRCC_DBG_TRACE_CLKDIV;

    if (true == CLOCK_IsDivHalt(clkdiv))
    {
        return 0;
    }

    return freq / ((clkdiv & 0xFFU) + 1U);
}

/*! brief  Return Frequency of CLKOUT Clock
 *  return Frequency of CLKOUT.
 */
uint32_t CLOCK_GetClkoutClkFreq(void)
{
    uint32_t freq   = 0U;
    uint32_t clksel = MRCC->MRCC_CLKOUT_CLKSEL;
    uint32_t clkdiv = MRCC->MRCC_CLKOUT_CLKDIV;

    if (true == CLOCK_IsDivHalt(clkdiv))
    {
        return 0;
    }

    switch (clksel)
    {
        case 0U:
            freq = CLOCK_GetFro12MFreq();
            break;
        case 1U:
            freq = CLOCK_GetFroHfFreq() / ((MRCC->MRCC_FRO_HF_DIV_CLKDIV & 0xFU) + 1U);
            break;
        case 2U:
            freq = CLOCK_GetClk16KFreq();
            break;
        case 7U:
            freq = CLOCK_GetCoreSysClkFreq() >> 2U;
            break;
        default:
            freq = 0U;
            break;
    }

    return freq / ((clkdiv & 0xFFU) + 1U);
}

/* Get Periph Group Clk */
/*! brief  Return Frequency of Periph Group functional Clock
 *  return Frequency of Periph Group functional Clock
 */
uint32_t CLOCK_GetPeriphGroupClkFreq(uint32_t id)
{
    uint32_t freq   = 0U;
    uint32_t clksel = (0U == id) ? (MRCC->MRCC_PERIPH_GROUP_0_CLKSEL) : (MRCC->MRCC_PERIPH_GROUP_1_CLKSEL);
    uint32_t clkdiv = (0U == id) ? (MRCC->MRCC_PERIPH_GROUP_0_CLKDIV) : (MRCC->MRCC_PERIPH_GROUP_1_CLKDIV);

    if (true == CLOCK_IsDivHalt(clkdiv))
    {
        return 0;
    }

    switch (clksel)
    {
        case 0U:
            freq = CLOCK_GetFro12MFreq();
            break;
        case 1U:
            freq = CLOCK_GetFroHfFreq() / ((MRCC->MRCC_FRO_HF_DIV_CLKDIV & 0xFFU) + 1U);
            break;
        case 2U:
            freq = CLOCK_GetClk16KFreq();
            break;
        default:
            freq = 0U;
            break;
    }

    return freq / ((clkdiv & 0xFFU) + 1U);
}

/*! brief  Return Frequency of Systick Clock
 *  return Frequency of Systick.
 */
uint32_t CLOCK_GetSystickClkFreq(void)
{
    uint32_t freq   = 0U;
    uint32_t clksel = MRCC->MRCC_SYSTICK_CLKSEL;
    uint32_t clkdiv = MRCC->MRCC_SYSTICK_CLKDIV;

    if (true == CLOCK_IsDivHalt(clkdiv))
    {
        return 0;
    }

    switch (clksel)
    {
        case 0U:
            freq = CLOCK_GetCoreSysClkFreq();
            break;
        case 2U:
            freq = CLOCK_GetClk16KFreq();
            break;
        case 3U:
            freq = CLOCK_GetClk1MFreq();
            break;
        default:
            freq = 0U;
            break;
    }

    return freq / ((clkdiv & 0xFFU) + 1U);
}
/**
 * @brief   Setup FROHF trim.
 * @param   config   : FROHF trim value
 * @return  returns success or fail status.
 */
status_t CLOCK_FROHFTrimConfig(firc_trim_config_t config)
{
    SCG0->FIRCTCFG = SCG_FIRCTCFG_TRIMSRC(config.trimSrc);

    /* Unlock FIRCCSR */
    SCG0->FIRCCSR &= ~SCG_FIRCCSR_LK_MASK;

    /* Set trim mode. */
    SCG0->FIRCCSR |= (uint32_t)config.trimMode;

    if (kSCG_FircTrimNonUpdate == config.trimMode)
    {
        SCG0->FIRCSTAT = SCG_FIRCSTAT_TRIMFINE(config.trimFine) | SCG_FIRCSTAT_TRIMCOAR(config.trimCoar);
    }

    /* Lock FIRCCSR */
    SCG0->FIRCCSR |= SCG_FIRCCSR_LK_MASK;

    if ((SCG0->FIRCCSR & SCG_FIRCCSR_FIRCERR_MASK) == SCG_FIRCCSR_FIRCERR_MASK)
    {
        return (status_t)kStatus_Fail;
    }

    return (status_t)kStatus_Success;
}

/**
 * @brief   FROHF auto trim.
 */
void CLOCK_FROHFAutoTrim(void)
{
    if ((SCG0->ROSCCSR & SCG_ROSCCSR_ROSCVLD_MASK) != SCG_ROSCCSR_ROSCVLD_MASK)
    {
        return;
    }

    SCG0->FIRCTCFG = SCG_FIRCTCFG_TRIMSRC(kSCG_FircTrimSrcRtcOsc);
    /* Unlock FIRCCSR */
    SCG0->FIRCCSR &= ~SCG_FIRCCSR_LK_MASK;

    SCG0->FIRCCSR |= SCG_FIRCCSR_FIRCTREN_MASK;
    SCG0->FIRCCSR |= SCG_FIRCCSR_FIRCTRUP_MASK;

    /* Lock FIRCCSR */
    SCG0->FIRCCSR |= SCG_FIRCCSR_LK_MASK;

    while ((SCG0->FIRCCSR & SCG_FIRCCSR_FIRCVLD_MASK) == SCG_FIRCCSR_FIRCVLD(0u))
    {
    }

    while ((SCG0->FIRCCSR & SCG_FIRCCSR_FIRCERR_MASK) == SCG_FIRCCSR_FIRCERR(1u))
    {
    }

    while ((SCG0->FIRCCSR & SCG_FIRCCSR_TRIM_LOCK_MASK) == SCG_FIRCCSR_TRIM_LOCK(0u))
    {
    }
}

/**
 * @brief   Setup FRO 12M trim.
 * @param   config   : FRO 12M trim value
 * @return  returns success or fail status.
 */
status_t CLOCK_FRO12MTrimConfig(sirc_trim_config_t config)
{
    SCG0->SIRCTCFG = SCG_SIRCTCFG_TRIMSRC(config.trimSrc);

    /* Unlock SIRCCSR */
    SCG0->SIRCCSR &= ~SCG_SIRCCSR_LK_MASK;

    /* Set trim mode. */
    SCG0->SIRCCSR |= (uint32_t)config.trimMode;

    if (kSCG_SircTrimNonUpdate == config.trimMode)
    {
        SCG0->SIRCSTAT = SCG_SIRCSTAT_CLTRIM(config.cltrim) | SCG_SIRCSTAT_CCOTRIM(config.ccotrim);
    }

    /* Lock SIRCCSR */
    SCG0->SIRCCSR |= SCG_SIRCCSR_LK_MASK;

    if ((SCG0->SIRCCSR & SCG_SIRCCSR_SIRCERR_MASK) == SCG_SIRCCSR_SIRCERR_MASK)
    {
        return (status_t)kStatus_Fail;
    }

    return (status_t)kStatus_Success;
}

/**
 * @brief   FRO12M auto trim.
 */
void CLOCK_FRO12MAutoTrim(void)
{
    if ((SCG0->ROSCCSR & SCG_ROSCCSR_ROSCVLD_MASK) != SCG_ROSCCSR_ROSCVLD_MASK)
    {
        return;
    }

    SCG0->SIRCTCFG = SCG_SIRCTCFG_TRIMSRC(kSCG_SircTrimSrcRtcOsc);
    /* Unlock SIRCCSR */
    SCG0->SIRCCSR &= ~SCG_SIRCCSR_LK_MASK;

    SCG0->SIRCCSR |= SCG_SIRCCSR_SIRCTREN_MASK;
    SCG0->SIRCCSR |= SCG_SIRCCSR_SIRCTRUP_MASK;

    /* Lock SIRCCSR */
    SCG0->SIRCCSR |= SCG_SIRCCSR_LK_MASK;

    while ((SCG0->SIRCCSR & SCG_SIRCCSR_SIRCVLD_MASK) == SCG_SIRCCSR_SIRCVLD(0u))
    {
    }

    while ((SCG0->SIRCCSR & SCG_SIRCCSR_SIRCERR_MASK) == SCG_SIRCCSR_SIRCERR(1u))
    {
    }

    while ((SCG0->SIRCCSR & SCG_SIRCCSR_TRIM_LOCK_MASK) == SCG_SIRCCSR_TRIM_LOCK(0u))
    {
    }
}

/*!
 * @brief Sets the ROSC monitor mode.
 *
 * This function sets the ROSC monitor mode. The mode can be disabled,
 * it can generate an interrupt when the error is disabled, or reset when the error is detected.
 *
 * @param mode Monitor mode to set.
 */
void CLOCK_SetRoscMonitorMode(scg_rosc_monitor_mode_t mode)
{
    uint32_t reg = SCG0->ROSCCSR;

    reg &= ~(SCG_ROSCCSR_ROSCCM_MASK | SCG_ROSCCSR_ROSCCMRE_MASK);

    reg |= (uint32_t)mode;

    SCG0->ROSCCSR = reg;
}

/*!
 * @brief Enable the clock for OSTIMER.
 *
 * Has no OS Timer control register in PMC, leave the function empty.
 *
 */
void CLOCK_EnableOstimer32kClock(void)
{
    /* Has no OS Timer control register in PMC, return directly */
    return;
}

/**
 * @brief Return the enum of the main CPU frequency
 *
 * @return the enum used for ADVC API
 */
main_cpu_frequency_t CLOCK_GetMainCpuFreqEnum(void)
{
    uint32_t sel             = 0U;
    uint32_t freq            = CLOCK_GetCoreSysClkFreq();
    main_cpu_frequency_t ret = kMAIN_CPU_UNSUPPORTED_FREQUENCY;

    switch (freq)
    {
        case 40000000U:
            ret = kMAIN_CPU_40MHZ;
            break;
        case 20000000U:
            ret = kMAIN_CPU_20MHZ;
            break;
        case 13333333U:
            ret = kMAIN_CPU_13P33MHZ;
            break;
        case 12000000U:
            ret = kMAIN_CPU_12MHZ;
            break;
        case 10000000U:
            ret = kMAIN_CPU_10MHZ;
            break;
        case 8000000U:
            ret = kMAIN_CPU_8MHZ;
            break;
        case 6666666U:
            ret = kMAIN_CPU_6P667MHZ;
            break;
        case 6000000U:
            ret = kMAIN_CPU_6MHZ;
            break;
        case 5000000U:
            ret = kMAIN_CPU_5MHZ;
            break;
        case 4000000U:
            sel = CLOCK_GetClockSelect(kCLOCK_SelSCGSCS);
            if (2U == sel)
                ret = kMAIN_CPU_4MHZ_FRO_12MHZ;
            else if (3U == sel)
                ret = kMAIN_CPU_4MHZ_FRO_96MHZ;

            break;
        case 3333333U:
            ret = kMAIN_CPU_3P33MHZ;
            break;
        case 3000000U:
            ret = kMAIN_CPU_3MHZ;
            break;
        case 2500000U:
            ret = kMAIN_CPU_2P5MHZ;
            break;
        case 2000000U:
            sel = CLOCK_GetClockSelect(kCLOCK_SelSCGSCS);
            if (2U == sel)
                ret = kMAIN_CPU_2MHZ_FRO_12MHZ;
            else if (3U == sel)
                ret = kMAIN_CPU_2MHZ_FRO_96MHZ;

            break;
        case 1500000U:
            ret = kMAIN_CPU_1P5MHZ;
            break;
        case 1000000U:
            sel = CLOCK_GetClockSelect(kCLOCK_SelSCGSCS);
            if (2U == sel)
                ret = kMAIN_CPU_1MHZ_FRO_12MHZ;
            else if (3U == sel)
                ret = kMAIN_CPU_1MHZ_FRO_96MHZ;

            break;
        default:
            ret = kMAIN_CPU_UNSUPPORTED_FREQUENCY;
            break;
    }

    return ret;
}

/**
 * @brief Config the RTC on AON domain
 */
static void CLOCK_RtcConfig(void)
{
    uint32_t i = 0;

    Aon_RegClearBits((uint32_t)(&(AON_SMM->RTC_DC2DC_CNTRL)),
                     (SMM_RTC_DC2DC_CNTRL_ANA_RESET_N_MASK | SMM_RTC_DC2DC_CNTRL_DGTL_RST_N_MASK), 0);

    for (i = 1; i < 3; i++)
    {
        Aon_RegSetBits((uint32_t)(&(AON_SMM->RTC_DC2DC_CNTRL)), SMM_RTC_DC2DC_CNTRL_ANA_RESET_N_MASK, 0);
        SDK_DelayAtLeastUs(100, SystemCoreClock);
    }

    Aon_RegClearBits(
        (uint32_t)(&(AON_SMM->RTC_XTAL_CONFG2)),
        (SMM_RTC_XTAL_CONFG2_GMSEL_MASK | SMM_RTC_XTAL_CONFG2_DLY_CAP_SOX_MASK |
         SMM_RTC_XTAL_CONFG2_DLY_IBIAS_SOX_MASK | SMM_RTC_XTAL_CONFG2_HYSTEL_MASK | SMM_RTC_XTAL_CONFG2_XTM_MASK),
        0);

    SDK_DelayAtLeastUs(100, SystemCoreClock);

    Aon_RegClearBits((uint32_t)(&(AON_SMM->RTC_XTAL_CONFG1)),
                     (SMM_RTC_XTAL_CONFG1_CMP_IBIAS_SOX_MASK | SMM_RTC_XTAL_CONFG1_AMPSEL_MASK), 0);
    SDK_DelayAtLeastUs(10, SystemCoreClock);

    Aon_RegReadModifyWrite((uint32_t)(&AON_SMM->RTC_XTAL_CONFG2), SMM_RTC_XTAL_CONFG2_SUPDET_TM_SOX_SHIFT,
                           SMM_RTC_XTAL_CONFG2_SUPDET_TM_SOX_MASK >> SMM_RTC_XTAL_CONFG2_SUPDET_TM_SOX_SHIFT, 1, 0);
    SDK_DelayAtLeastUs(10, SystemCoreClock);

    Aon_RegReadModifyWrite((uint32_t)(&AON_SMM->RTC_ANLG_XTAL_TST), SMM_RTC_ANLG_XTAL_TST_XTAL_TST_SHIFT,
                           SMM_RTC_ANLG_XTAL_TST_XTAL_TST_MASK >> SMM_RTC_ANLG_XTAL_TST_XTAL_TST_SHIFT, 0, 0);
    SDK_DelayAtLeastUs(10, SystemCoreClock);

    Aon_RegClearBits((uint32_t)(&AON_SMM->RTC_DC2DC_CNTRL),
                     (SMM_RTC_DC2DC_CNTRL_TST_DIG_OUT_MASK | SMM_RTC_DC2DC_CNTRL_VDDRTC_TST_BFR_EN_MASK), 0);
    SDK_DelayAtLeastUs(10, SystemCoreClock);

    Aon_RegClearBits((uint32_t)(&AON_SMM->BIAS_CTRL),
                     (SMM_BIAS_CTRL_FINE_MASK | SMM_BIAS_CTRL_COARSE_MASK | SMM_BIAS_CTRL_BIAS_EN_MASK), 0);

    /* RTC XO switched mode */
    Aon_RegSetBits((uint32_t)(&AON_SMM->RTC_XTAL_CONFG2), SMM_RTC_XTAL_CONFG2_CAP_BNK_EN_MASK, 0);
    Aon_RegReadModifyWrite((uint32_t)(&AON_SMM->RTC_XTAL_CONFG1), SMM_RTC_XTAL_CONFG1_CB_XI_SHIFT,
                           SMM_RTC_XTAL_CONFG1_CB_XI_MASK >> SMM_RTC_XTAL_CONFG1_CB_XI_SHIFT, 0x3, 0);
    Aon_RegReadModifyWrite((uint32_t)(&AON_SMM->RTC_XTAL_CONFG1), SMM_RTC_XTAL_CONFG1_CB_XO_SHIFT,
                           SMM_RTC_XTAL_CONFG1_CB_XO_MASK > SMM_RTC_XTAL_CONFG1_CB_XO_SHIFT, 0x3, 0);
}

/**
 * @brief Lock the RTC
 *
 * @return returns the status of the RTC lock. Please refer to @ref rtc_lock_status_t.
 */
static rtc_lock_status_t CLOCK_RtcXtalLock(void)
{
    uint32_t rtcAlive = 0, delayCap, ampSel, gmSel;

    for (delayCap = 0; delayCap <= 7; delayCap++)
    {
        if (delayCap != 4)
        {
            Aon_RegReadModifyWrite((uint32_t)(&AON_SMM->RTC_XTAL_CONFG2), SMM_RTC_XTAL_CONFG2_DLY_CAP_SOX_SHIFT,
                                   SMM_RTC_XTAL_CONFG2_DLY_CAP_SOX_MASK >> SMM_RTC_XTAL_CONFG2_DLY_CAP_SOX_SHIFT,
                                   delayCap, 0);

            for (ampSel = 0; ampSel <= 3; ampSel++)
            {
                if (ampSel != 1)
                {
                    Aon_RegReadModifyWrite((uint32_t)(&AON_SMM->RTC_XTAL_CONFG1), SMM_RTC_XTAL_CONFG1_AMPSEL_SHIFT,
                                           SMM_RTC_XTAL_CONFG1_AMPSEL_MASK >> SMM_RTC_XTAL_CONFG1_AMPSEL_SHIFT, ampSel,
                                           0);

                    for (gmSel = 0; gmSel <= 3; gmSel++)
                    {
                        if (gmSel != 1)
                        {
                            Aon_RegReadModifyWrite(
                                (uint32_t)(&AON_SMM->RTC_XTAL_CONFG2), SMM_RTC_XTAL_CONFG2_GMSEL_SHIFT,
                                SMM_RTC_XTAL_CONFG2_GMSEL_MASK >> SMM_RTC_XTAL_CONFG2_GMSEL_SHIFT, gmSel, 0);

                            /* 1. Startup mode */
                            Aon_RegSetBits((uint32_t)(&AON_SMM->RTC_XTAL_CONFG1), SMM_RTC_XTAL_CONFG1_XTAL_EN_MASK, 0);
                            Aon_RegSetBits((uint32_t)(&AON_SMM->RTC_XTAL_CONFG2), SMM_RTC_XTAL_CONFG2_SOX_EN_MASK, 0);
                            SDK_DelayAtLeastUs(500000, SystemCoreClock);

                            assert(Aon_RtcIsAlive(&rtcAlive, 0) == kStatus_AonCommon_CheckRtcAliveSuccess);
                            if (rtcAlive)
                            {
                                /*2. Move to switch mode */
                                Aon_RegReadModifyWrite(
                                    (uint32_t)(&AON_SMM->RTC_XTAL_CONFG1), SMM_RTC_XTAL_CONFG1_CB_XI_SHIFT,
                                    SMM_RTC_XTAL_CONFG1_CB_XI_MASK >> SMM_RTC_XTAL_CONFG1_CB_XI_SHIFT, 0, 0);
                                SDK_DelayAtLeastUs(250000, SystemCoreClock);
                                Aon_RegClearBits((uint32_t)(&AON_SMM->RTC_XTAL_CONFG2), SMM_RTC_XTAL_CONFG2_SOX_EN_MASK,
                                                 0);
                                SDK_DelayAtLeastUs(50000, SystemCoreClock);

                                assert(Aon_RtcIsAlive(&rtcAlive, 0) == kStatus_AonCommon_CheckRtcAliveSuccess);
                                if (rtcAlive)
                                {
                                    return (kRTCLock_OK);
                                }
                                else
                                {
                                    return (kRTCLock_XTALNotLockedSwitchMode);
                                }
                            }
                            else
                            {
                                Aon_RegClearBits((uint32_t)(&AON_SMM->RTC_XTAL_CONFG1),
                                                 SMM_RTC_XTAL_CONFG1_XTAL_EN_MASK, 0);
                            }
                        }
                    }
                }
            }
        }
    }

    return (kRTCLock_XTALNotLocked);
}

/**
 * @brief Get the RTC division ratio according to the VDD_BAT_MCU
 * @param[in] vbat the voltage of the VDD_BAT_MCU.
 * @return returns the ratio for the RTC division.
 */
static uint32_t CLOCK_RtcGetDivRatio(float vbat)
{
    uint32_t divRatio = 0;

    if (vbat > 2.13)
    {
        if (vbat > 2.66)
        {
            if (vbat > 3.2)
            {
                divRatio = 0x0;
            }
            divRatio = 0x8;
        }
        divRatio = 0xC;
    }
    else
    {
        divRatio = 0xE;
    }

    return (divRatio);
}

/**
 * @brief Set the RTC division ratio according to the VDD_BAT_MCU
 * @param[in] vbat the voltage of the VDD_BAT_MCU.
 * @return returns the status of the RTC lock. Please refer to @ref rtc_lock_status_t.
 */
static rtc_lock_status_t CLOCK_RtcDcdcConfig(float vbat)
{
    uint32_t capDiv = 0, rtcAlive = 0;

    capDiv = CLOCK_RtcGetDivRatio(vbat);
    Aon_RegSetBits((uint32_t)(&AON_SMM->RTC_DC2DC_CNTRL), SMM_RTC_DC2DC_CNTRL_DC2DC_EN_MASK, 0);
    Aon_RegSetBits((uint32_t)(&AON_SMM->RTC_DC2DC_CNTRL), SMM_RTC_DC2DC_CNTRL_CAP_DIV_RATIO(capDiv), 0);
    SDK_DelayAtLeastUs(6400, SystemCoreClock);

    assert(Aon_RtcIsAlive(&rtcAlive, 0) == kStatus_AonCommon_CheckRtcAliveSuccess);
    if (rtcAlive)
    {
        return kRTCLock_OK;
    }
    else
    {
        return kRTCLock_DCDCFail;
    }
}

/**
 * @brief XTAL initialization
 * @param[in] vbat the voltage of the VDD_BAT_MCU.
 * @return returns the status of the RTC lock. Please refer to @ref rtc_lock_status_t.
 */
rtc_lock_status_t CLOCK_XtalInit(float vbat)
{
    rtc_lock_status_t rtcLockStatus = kRTCLock_XTALNotLocked;

    CLOCK_RtcConfig();

    rtcLockStatus = CLOCK_RtcXtalLock();

    if (kRTCLock_OK == rtcLockStatus)
    {
        rtcLockStatus = CLOCK_RtcDcdcConfig(vbat);
        if (kRTCLock_OK == rtcLockStatus)
        {
            /* XTAL is stable remove isolation */
            Aon_RegClearBits((uint32_t)(&AON_SMM->RTC_DC2DC_CNTRL), SMM_RTC_DC2DC_CNTRL_ISO_MASK, 0);
            Aon_RtcAnalogDone(0U);
        }
    }

    return rtcLockStatus;
}
