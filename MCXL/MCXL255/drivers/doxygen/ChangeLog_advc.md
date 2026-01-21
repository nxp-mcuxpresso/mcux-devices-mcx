# ADVC

## [2.0.3]
- Improvements
    - Updated frequency code enumeration values to accommodate new frequencies.
    - Added ADVC_FREQUENCY_BAD_CODE to handle invalid frequency configurations.
    - Add new error status ADVC_STATUS_ILLEGA_CLOCK_CONFIGURATION and
    kADVC_Stat_IllegalClockConfiguration to indicate when CGU clock is not
    configured to any of the supported frequencies.

## [2.0.2]
- Improvements
    - Check and restore Systick in each APIs.
    - Updated advc library, remove debug section.

## [2.0.1]

- Improvements
    - Check and retore APB clock status in each APIs.
    - Updated implementation of ADVC_IsEnabled() and ADVC_IsDisabled().
    Check register value to indicate if ADVC is enabled.

## [2.0.0]

- Initial version.
