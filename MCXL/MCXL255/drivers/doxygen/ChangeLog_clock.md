# CLOCK

## [1.7.0]

- Added 8 `static inline` IFR1 trim getter functions (CM33 only): `CLOCK_GetVDDCore1P0InActiveModeTrim`, `CLOCK_GetVDDCore1P0InLpModeTrim`, `CLOCK_GetVDDCore1P1InActiveModeTrim`, `CLOCK_GetVDDCore1P1InLpModeTrim`, `CLOCK_GetLvdLvTrim1P0`, `CLOCK_GetLvdLvTrim1P1`, `CLOCK_GetHvdLvTrim1P0`, `CLOCK_GetHvdLvTrim1P1`.
- Removed `CLOCK_GetVDDCoreMainConfig` API function, `vdd_core_main_config_t` struct, and `main_drive_t` enum (replaced by the individual trim getter functions above).

## [1.6.0]

- Fixed CGU clock dividers behavior. The dividers are bypassed when disabled.

## [1.5.0]

- Added new CLOCK_GetADVCControlState() API function to return the ADVC control state whether the AON CPU and ADVC monitored peripheral root clocks change cause the ADVC Pre/Post Change Request API function call.

## [1.4.0]

- Updated support of ADVC to provide control AON peripheral root clocks that are used by the ADVC algorithm.
- Added new CLOCK_EnableADVCControl() and CLOCK_DisableADVCControl() API functions to enable/disable ADVC control when the AON CPU and peripheral root clocks are updated.

## [1.3.0]

- Added support of MCXL14x family

## [1.2.0]

- Improved `CLOCK_InitRosc()` function

## [1.1.0]

- Added support of INPUTMUX
- Added alias for CRC
- Changed AON FRO to 10M/2M
- Fixed switching of AON FRO
- `CLOCK_GetFroAonFreq()` now returns correct value.

## [1.0.0]

- Initial version.
