# ROMAPI

## [1.2.2]

- Improvements
  - Removed unsupported properties from the flash_get_property API.
  - The flash_get_property API now always returns kStatus_FLASH_Success.
  - Enabled the FLASH_VerifyEraseBlock API.

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
