# Power

## [2.3.2]
- Improvements
    - Updated VDD_CORE_AON DVFS trim code values according to volume data measurement.
    - Updated Power_GetVddCoreForFreq() to select 785mV for 10MHz, 760mV for 5MHz, 750mV for 3MHz/2.5MHz/1.5MHz, 700mV for 0.75MHz, and 630mV for 32kHz.

## [2.3.1]
- New Features
    - Use ADVC_PostVoltageChangeRequestBlocking() function to synchronize ADVC post-change status in Power_SetDpd2AdvcWorkaround().
    - Updated Stall value when ADVC is enabled.
    - Update Power_SetDpd2AdvcWorkaround(), when target frequency is equal to current frequency return directly without calling ADVC APIs.
    - Optimize Power_ClearLpPowerSettings() by replacing SMM_DisableXxxCpuIso() calls with split de-assert/assert sequence, using the intermediate register operations as natural settling time to eliminate the explicit spin-wait delay.

## [2.3.0]
- New Features
    - Added automatic voltage/frequency management for DPD2 mode.
    - Introduced Power_GetVddCoreForFreq() to map frequencies to required voltages.
    - Introduced Power_GetDpd2TargetFreq() to determine target frequency for DPD2 mode.
    - Implemented Power_ConfigureStallForMode() for dynamic stall value configuration across all low power modes.
    - Added FRO16K output frequency selection (8kHz and 16kHz) support for all low power modes.
    - Added intermediate voltage enumeration values for finer-grained voltage control.
    - RAM array configuration is not supported in PD1 and PD2 modes.
    - Enable stall configuration for low power modes by removing #if 0 guards
    - Introduce power_dual_core_sync_state_t enum to properly track dual-core
        synchronization states during low power transitions
    - Fix race condition in Power_ClearLpPowerSettings() where CM0+ could
      clear AON__SMM->STAT while CM33 ROM is still reading it
    - Add proper synchronization handshake in Power_NotifyCM33ToRun() using
      backup registers and dualCoreSynced state
    - Fix DPD2->DPD1 transition path to allow CM0+ STAT write then restore
      state for subsequent DPD1->Active step
    - Add Power_ClearLpPowerSettings() calls after WFI in PD2 and request
      handling paths
    - Update all boolean dualCoreSynced checks to use new enum states

- Improvements
    - Implemented automatic clock switching for DPD2 entry and wakeup using CLOCK_AttachClk().
    - Optimized wakeup timing with dynamic stall values based on frequency for PD1/PD2/DPD1/DPD2.
    - Added PAC wakeup time configuration for DPD3/SD modes based on FRO16K frequency.
    - Save and restore original clock configuration on DPD2 wakeup when saveContext=true.
    - Added fro16KOutputFreq configuration field to all low power mode structures.
    - Code formatting improvements.
    - Updated copyright year to 2026.

- Bug Fixes
    - Fixed disableFRO2M field name to disableFRO3M to match actual hardware.
    - Add explicit mask and cast for config->aonRamArraysToRetain (16-bit bitfield)
    passed to Power_ConfigSleepModeManager (uint8_t parameter) in the DPD1-to-DPD2 path.

- Deprecations
    - Deprecated manual dpd2VddCoreAonVoltage configuration field in favor of automatic voltage selection.

## [2.2.0]
- Improvements
    - Updated the Power_CreateHandle() function to include a new second parameter, power_drv_config_t, allowing configuration without synchronizing the secondary core within the function.
    - Added a new function, Power_SyncDualCoreBlocking(), to enable synchronization between dual cores.
    - Improved Doxygen comments for better documentation.
    - Introduced a timeout mechanism for the while loop to enhance reliability.
    - Added new member disableFRO2M in power_dpd2_config_t.

- Bug Fixes
    - Fixed incorrect bitwise AND operation in Power_CreateHandle() and Power_SyncDualCoreBlocking() functions.
    - Fixed the same bitwise AND issue in Power_ReqestCM33StartLpSeq() function.

## [2.1.1]
- Improvements
    - Added "disableFRO10M" in power_dpd1_config_t to support disable FRO10M in power driver.
    - Use the __ASM macro instead of asm to ensure compatibility across different toolchains.
    - Fixed violation of CERT INT31-C of cast "~config->aonRamArraysToRetain" for int to uint8_t.

## [2.1.0]

- Bug Fixes
    - Removed certain items from power_wakeup_source_t that were related to WUU.

- Improvements
    - Added configurable wakeup sources for various low power modes.
    - Adjusted the sequence for entering specific low power modes.
    - Enhanced MU message details, including explanations for NACK responses.
    - Introduced cm0pWFI in power_handle_t to indicate whether CM0P executed WFI.
    - Added member into power_pd2_config_t, power_dpd1_config_t, power_dpd2_config_t to control
    output voltage of VDD_CORE_AON.

- New Features
    - Introduced APIs to retrieve the previous low power mode.
    - Added APIs to inspect details of MU messages.
    - Refactored Power_MuMessageCallback() into three modular functions:
        ```c
        Power_MuSyncCallback()
        Power_InterpretRequest()
        Power_InterpretResponse()
        ```
        These functions are now exposed for user access.
    - Added new function Power_PushContext() and Power_LowPowerBoot() to support context saving.



## [2.0.0]

- Initial version.
