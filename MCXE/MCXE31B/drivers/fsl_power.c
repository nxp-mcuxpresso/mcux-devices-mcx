/*
 * Copyright 2025 NXP.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include "fsl_power.h"

/* Component ID definition, used by tools. */
#ifndef FSL_COMPONENT_ID
#define FSL_COMPONENT_ID "platform.drivers.power"
#endif

/*******************************************************************************
 * Variables
 ******************************************************************************/
static power_pmc_callback_t s_powerPmcCallback;

/*!
 * brief Gets the POWER PMC version id.
 *
 * This function gets the PMC version id including whether the PMC supports last mile regulator.
 *
 * param versionId         Pointer to pmc_version_id_t structure.
 */
void POWER_GetPMCVersionID(pmc_version_id_t *versionId)
{
    uint8_t major    = (uint8_t)(uint32_t)(PMC->VERID >> PMC_VERID_MAJOR_SHIFT);
    uint8_t minor    = (uint8_t)(uint32_t)((PMC->VERID >> PMC_VERID_MINOR_SHIFT) & 0xFFU);
    versionId->major = major;
    versionId->minor = minor;
    if ((PMC->VERID & PMC_VERID_LMFEAT_MASK) == 0x01)
    {
        versionId->supportLastMileRegulator = true;
    }
    else
    {
        versionId->supportLastMileRegulator = false;
    }
}

/*!
 * brief Register POWER PMC callback function.
 *
 * param cb_func   callback function
 */
void PMC_RegisterCallBack(power_pmc_callback_t cb_func)
{
    s_powerPmcCallback = cb_func;
}

void PMC_DriverIRQHandler(void);
void PMC_DriverIRQHandler(void)
{
    uint32_t pmc_interrupt_flag = 0U;
    pmc_interrupt_flag          = POWER_GetPMCInterruptFlags();
    POWER_ClearPMCInterruptFlags(pmc_interrupt_flag);
    if (s_powerPmcCallback != NULL)
    {
        s_powerPmcCallback(pmc_interrupt_flag);
    }
    SDK_ISR_EXIT_BARRIER;
}