# CLOCK

## [2.2.3]

- Improvements:
  - Fixed the MSG issue that overrunning array fro192mFreq of 5 4-byte elements at element index 7.

## [2.2.2]

- New Features:
  - Provide the new API CLOCK_IsFIRCAutoTrimLocked to check whether FIRC auto trim locked to target frequency range.

## [2.2.1]

- Bug fix:
  - Fixed the GPIO_PinInit function may cause the hardfault in clock driver when pass the GPIOD as the fist parameter.

## [2.2.0]

- Improvements
  - Added the support for TPM2.

## [2.1.0]

- Improvements
  - Provide the FSL_SDK_FORCE_CLK_DRIVER_NS_ACCESS macro to force use the none secure address even the trustzone secure mode is enabled.

## [2.0.0]

- Fixed the MISRA issues.

## [1.1.0]

- Some minor fixes.

## [1.0.0]

- Initial version.
