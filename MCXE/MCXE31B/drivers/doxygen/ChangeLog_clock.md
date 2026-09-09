# CLOCK

## [2.2.2]
- Bug Fixes
  - Fixed kFXOSC_ModeBypass to set only OSC_BYP, since single-input bypass mode requires COMP_EN to be cleared.
  - Fixed CLOCK_InitFxosc to configure the work mode while the FXOSC is disabled and enable it afterwards, to use
    OSCON instead of the OSC_STAT flag when deciding whether the FXOSC must be disabled first, to force a
    transconductance of 0 in bypass mode, and to skip the stabilization wait in bypass mode where OSC_STAT is invalid.
  - Fixed CLOCK_GetFxoscFreq to report the configured frequency in bypass mode instead of 0, while still requiring a
    stable OSC_STAT in crystal mode.

## [2.2.1]
- Improvements
  - Added clock array for CRC. 

## [2.2.0]
- Improvements
  - Added configurable timeout support for endless while loop. 

## [2.1.3]
- Bug fixes
  - Fixed the issue reported by CERT INT31-C checker. 

## [2.1.2]
- New features
  - Added EMAC_CLOCKS. 
## [2.1.1]
- Bug fix
  - Added missed mux source for MUX_9.
  - Delete some redundant mux source for MUX_10.

## [2.1.0]
- New features
  - Added support for more devices.
  - Added FIRC divider support and API CLOCK_SetFircDiv.

## [2.0.1]

- Bug fix
  - Fixed bugs in pll_unlock_accuracy_t and CLOCK_InitPll.
  - Fixed some potentioal operation wrap issue.

## [2.0.0]

- initial version.