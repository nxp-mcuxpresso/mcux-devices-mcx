# CLOCK

## [2.3.1]

- Bug Fixes
  - Fixed MISRA C-2012 rule 10.1, rule 10.4, rule 10.8, rule 15.5 and so on.

## [2.3.0]

- New feature:
  - Moved SDK_DelayAtLeastUs function from clock driver to common driver.

## [2.2.0]

- Fix the issue for MISRA-2012 check.
  - Fixed rule 10.4, rule 10.1, rule 10.6, rule 13.5, rule 10.8.
- Bug Fix:
  - Fix incorrect External Oscillator Configuration sequence and ensure oscillator
    configuration be executed before it be enabled.
- New feature
  - Adding new API CLOCK_DelayAtLeastUs() to implemente a delay fucntion which allow
    users set delay in unit of microsecond.

## [2.1.1]

- Bug Fix:
  - Update IP_CLOCKS array, remove unused gates and add missing gates.

## [2.1.0]

- Other Changes:
  - Merge fsl_mcglite and fsl_osc into fsl_clock.

## [2.0.0]

- Initial version.
