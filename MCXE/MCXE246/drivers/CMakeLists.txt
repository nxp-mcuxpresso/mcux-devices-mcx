# Copyright 2025 NXP
# All rights reserved.
#
# SPDX-License-Identifier: BSD-3-Clause

if (CONFIG_MCUX_COMPONENT_driver.clock)
    mcux_component_version(2.0.0)
    mcux_add_source( SOURCES fsl_clock.c fsl_clock.h )
    mcux_add_include( INCLUDES . )
endif()

if (CONFIG_MCUX_COMPONENT_driver.flexcan_soc)
    mcux_component_version(1.0.0)
    mcux_add_source( SOURCES fsl_flexcan_soc.c fsl_flexcan_soc.h )
    mcux_add_include( INCLUDES . )
endif()
