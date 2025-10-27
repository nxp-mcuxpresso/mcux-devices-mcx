# CLOCK

## [2.1.5]

- Improvements
  - Fixed the MSG ARR30-C violation issues.

## [2.1.4]

- Improvements
  - Fixed the MSG ARR30-C, INT30-C and INT31-C violation issues.

## [2.1.3]

- Improvements
  - Added the missing enum kNONE_to_SCT_CLK.

## [2.1.2]

- Improvements
  - Include the fsl_common.h in clock driver to fix the compiling issue in Zephyr build.

## [2.1.1]

- Improvements
  - Fixed the coverity high issues in clock driver.
    Before using the pointer, check the passed parameter to ensure that
    it will not corrupt or misinterpret adjacent memory locations.

## [2.1.0]

- New Features
  - Added CLOCK_SetupPLUClkInClocking() to store the PLU CLKIN frequency.
- Bug Fixes
  - Fixed CLOCK_GetFlexCommClkFreq function to get flexcomm output frequency correctly.
  - Fixed attach incorrect attach_id for SCT.

## [2.0.3]

- Bug Fixes
  - Fixed attach incorrect attach_id.

## [2.0.2]

- New Features
  - Added get actual clock attach id api to allow users to obtain the actual
    clock source in target register.
- Bug Fixes
  - The attach clock and get actual clock attach id APIs should check
    combination of two clock sources.
- Optimizations
  - Made the judgement statements more clear.
  - Strengthened the compatibility of clock attach id.
  - Removed some unmeaningful definitions and add some useful ones to
    enhance readability.

## [2.0.1]

- Some minor fixes.

## [2.0.0]

- Initial version.
