# ROMAPI

## [1.2.3]

- Improvements
  - Fixed violations of the MISRA C-2012 Rule 10.1.
  - Enabled the FLASH_VerifyEraseBlock API.

## [1.2.2]

- Improvements
  - Fixed the issue that unsigned integer operation may wrap.

## [1.2.1]

- Improvements
  - Clear flash cache before every erase to prevent the possibility of returning stale data.

## [1.2.0]

- Improvements
  - Added NULL pointer check for ROM API functions.

## [1.1.0]

- New Feature
  - Added support kinetis_bootloader and nboot api.

## [1.0.0]

- initial version.
