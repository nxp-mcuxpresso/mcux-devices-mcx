# ROMAPI

## [1.2.6]

- Improvements:
  - Fixed violations of the MISRA C-2012 Rule 8.4, 10.1.

## [1.2.5]

- Improvements
  - Removed unsupported nboot_sb3_load_s200_fw from nboot_interface_t in fsl_nboot.h.
  - Added nboot_force_one_shot_secure_level in nboot_interface_t.
  - Added nboot_sb3_consistency_verify in nboot_interface_t.

## [1.2.4]

- Improvements
  - Added the FUSE ID definitions in fsl_nboo.h

## [1.2.3]

- Improvements
  - Fixed the issue that unsigned integer operation may wrap.

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
