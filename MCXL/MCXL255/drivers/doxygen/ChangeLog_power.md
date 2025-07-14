# Power

## [2.1.0]

- Bug Fixes
    - Removed certain items from power_wakeup_source_t that were related to WUU.

- Improvements
    - Added configurable wakeup sources for various low power modes.
    - Adjusted the sequence for entering specific low power modes.
    - Enhanced MU message details, including explanations for NACK responses.
    - Introduced cm0pWFI in power_handle_t to indicate whether CM0P executed WFI.

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


## [2.0.0]

- Initial version.
