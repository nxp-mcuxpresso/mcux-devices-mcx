# Power

## [2.1.1]
- Improvements
    - Added "disableFRO10M" in power_dpd1_config_t to support disable FRO10M in power driver.
    - Use the __ASM macro instead of asm to ensure compatibility across different toolchains.

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
