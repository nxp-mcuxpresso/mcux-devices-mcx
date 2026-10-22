# CLOCK

## [2.0.2]

- Set OSC32K initialization trim to 0.5 ms (INIT_TRIM(0x7)) in CLOCK_SetupOsc32KClocking to avoid long delay for ROSCVLD assertion after power-on reset.
- Changed default initTrim to kVBAT_OscInitTrimHalfms in CLOCK_GetDefaultOsc32KConfig.

## [2.0.1]

- Added configurable timeout support for endless while loop.

## [2.0.0]

- Initial version.
