/*
 * Copyright 2025 NXP
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include "fsl_dcm.h"

/*******************************************************************************
 * Definitions
 ******************************************************************************/

/*******************************************************************************
 * Code
 ******************************************************************************/

/* Component ID definition, used by tools. */
#ifndef FSL_COMPONENT_ID
#define FSL_COMPONENT_ID "platform.drivers.dcm"
#endif

/*
 * @brief Get DCF scan report.
 *
 * @param slot Slot number, should be less than DCM_DCMSRR_COUNT.
 * @param report The DCF scan report.
 */
void DCM_GetDcfScanReport(uint32_t slot, dcm_dcf_scan_report_t *report)
{
    assert(slot < DCM_DCMSRR_COUNT);
    assert(report != NULL);

    union
    {
        uint32_t reg;
        dcm_dcf_scan_report_t dcfScanReport;
    } localReport;

    localReport.reg = DCM->DCMSRR[slot];
    *report = localReport.dcfScanReport;
}

/*
 * @brief Get life cycle slost scan status.
 *
 * @param status The life cycle scan status.
 */
static void DCM_GetLifeCycleSlotScanStatus(dcm_life_cycle_slot_scan_status_t *status, uint32_t regVal)
{
    status->hasError = (regVal & DCM_DCMLCS_DCMLCSS1_MASK) >> DCM_DCMLCS_DCMLCSS1_SHIFT;
    status->marking  = (regVal & DCM_DCMLCS_DCMLCC1_MASK) >> DCM_DCMLCS_DCMLCC1_SHIFT;
    status->hasEccError  = (regVal & DCM_DCMLCS_DCMLCE1_MASK) >> DCM_DCMLCS_DCMLCE1_SHIFT;
    status->hasFlashError  = (regVal & DCM_DCMLCS_DCMLCFE1_MASK) >> DCM_DCMLCS_DCMLCFE1_SHIFT;
}

/*
 * @brief Get life cycle scan status.
 *
 * @param status The life cycle scan status.
 */
void DCM_GetLifeCycleScanStatus(dcm_life_cycle_scan_status_t *status)
{
    assert(status != NULL);

    uint32_t dcmlcs  = DCM->DCMLCS;
    uint32_t dcmlcs2 = DCM->DCMLCS_2;

    DCM_GetLifeCycleSlotScanStatus(&status->status[0], dcmlcs & 0x3FUL);

    dcmlcs >>= 6;
    DCM_GetLifeCycleSlotScanStatus(&status->status[1], dcmlcs & 0x3FUL);

    dcmlcs >>= 6;
    DCM_GetLifeCycleSlotScanStatus(&status->status[2], dcmlcs & 0x3FUL);

    dcmlcs >>= 6;
    DCM_GetLifeCycleSlotScanStatus(&status->status[3], dcmlcs & 0x3FUL);

    dcmlcs >>= 6;
    DCM_GetLifeCycleSlotScanStatus(&status->status[4], dcmlcs & 0x3FUL);

    DCM_GetLifeCycleSlotScanStatus(&status->status[5], dcmlcs2 & 0x3FUL);
}

/*
 * @brief Clear life cycle scan status.
 */
void DCM_ClearLifeCycleScanStatus(void)
{
    DCM->DCMLCS   = 0x3FFFFFFFUL;
    DCM->DCMLCS_2 = 0x0000003FUL;
}
