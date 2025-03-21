# CLOCK

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
