# Copyright 2024 NXP
# All rights reserved.
#
# SPDX-License-Identifier: BSD-3-Clause

if (CONFIG_MCUX_COMPONENT_driver.aon_common)
    mcux_add_source( SOURCES fsl_aon_common.c fsl_aon_common.h )
    mcux_add_include( INCLUDES . )
endif()

if (CONFIG_MCUX_COMPONENT_driver.clock)
    mcux_add_source( SOURCES fsl_clock.c fsl_clock.h )
    mcux_add_include( INCLUDES . )
endif()

if (CONFIG_MCUX_COMPONENT_driver.edma_soc)
    mcux_add_source( SOURCES fsl_edma_soc.c fsl_edma_soc.h )
    mcux_add_include( INCLUDES . )
endif()

if (CONFIG_MCUX_COMPONENT_driver.inputmux_connections)
    mcux_add_source( SOURCES fsl_inputmux_connections.h )
    mcux_add_include( INCLUDES . )
endif()

if (CONFIG_MCUX_COMPONENT_driver.ipmq)
    mcux_add_source( SOURCES fsl_ipmq.c fsl_ipmq.h )
    mcux_add_include( INCLUDES . )
endif()

if (CONFIG_MCUX_COMPONENT_driver.power)
    mcux_add_source( SOURCES fsl_power.c fsl_power.h )
    mcux_add_include( INCLUDES . )
endif()

if (CONFIG_MCUX_COMPONENT_driver.reset)
    mcux_add_source( SOURCES fsl_reset.c fsl_reset.h )
    mcux_add_include( INCLUDES . )
endif()

if (CONFIG_MCUX_COMPONENT_driver.romapi)
    mcux_add_source( SOURCES fsl_romapi.h )
    mcux_add_include( INCLUDES . )
endif()

if (CONFIG_MCUX_COMPONENT_driver.trdc_soc)
    mcux_add_source( SOURCES fsl_trdc_soc.h )
    mcux_add_include( INCLUDES . )
endif()

if (CONFIG_MCUX_COMPONENT_driver.aon_rtc)
    mcux_add_source( SOURCES fsl_rtc.c fsl_rtc.h )
    mcux_add_include( INCLUDES . )
endif()

if (CONFIG_MCUX_COMPONENT_driver.aon_gpio)
    mcux_component_version(2.0.0)
    mcux_add_source( SOURCES fsl_aon_gpio.c fsl_aon_gpio.h )
    mcux_add_include( INCLUDES . )
endif()
