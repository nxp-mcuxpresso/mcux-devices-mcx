# CLOCK

## [2.3.1]

- Improvements
  - The SIRC has been removed, but in some low-power wakeup use cases, the SIRC is still required.
    Updated the clock driver to provide the ability to configure the clock source to SIRC.

## [2.3.0]

- Improvements
  - Remove SIRC-related enums, structures, and functions
  - Remove unused clock definitions: kCLOCK_Tstmr0, kCLOCK_Sirc_vsys_gating
  - Remove ERR052742 errata documentation for FRO6M clock stability

## [2.2.7]

- Improvements
  - Fixed violations of the MISRA C-2012 Rule 10.1.

## [2.2.6]

- Bug Fixes
  - Fixed violations of the CERT INT31-C.

## [2.2.5]

- Improvements
  - Added comments for ERR052742: FRO6M clock is not stable.

## [2.2.4]

- Improvements
  - Fixed the MSG issue that overrunning array fro192mFreq of 5 4-byte elements at element index 7.

## [2.2.3]

- New Features
  - Provide the new API CLOCK_IsFIRCAutoTrimLocked to check whether FIRC auto trim locked to target frequency range.

## [2.2.2]

- Bug fix
  - Updated the SDK_DEVICE_MAXIMUM_CPU_CLOCK_FREQUENCY for Core1.

## [2.2.1]

- Bug fix
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
