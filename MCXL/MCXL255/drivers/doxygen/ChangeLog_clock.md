# CLOCK

## [1.5.0]

- Added new CLOCK_GetADVCControlState() API function to to return the ADVC control state whether the AON CPU and ADVC monitored peripheral root clocks change cause the ADVC Pre/Post Change Request API function call.

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
