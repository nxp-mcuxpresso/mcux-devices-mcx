/*
 * Copyright 2026 NXP
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */
#include "fsl_kbapi.h"

/*! @brief Component ID definition, used by tools. */
#ifndef FSL_COMPONENT_ID
#define FSL_COMPONENT_ID "platform.drivers.kbapi"
#endif

/*******************************************************************************
 * Definitions
 ******************************************************************************/
#define BOOTLOADER_API_TREE_POINTER ((bootloader_tree_t *)0x1303d800u)

/*! @brief Interface for bootloader API functions. */
typedef struct _kb_interface
{
    status_t (*kb_init)(kb_session_ref_t **session, const kb_options_t *options);
    status_t (*kb_deinit)(kb_session_ref_t *session);
    status_t (*kb_execute)(kb_session_ref_t *session, const uint8_t *data, uint32_t dataLength);
} kb_interface_t;

/*!
 * @brief Root of the bootloader API tree.
 *
 * An instance of this struct resides in read-only memory in the bootloader. It
 * provides a user application access to APIs exported by the bootloader.
 *
 * @note The order of existing fields must not be changed.
 */
typedef struct BootloaderTree
{
    uint32_t runBootloader;    /*!< Function to start the bootloader executing.*/
    uint32_t flashDriver;      /*!< Flash driver API.*/
    kb_interface_t *kbDriver;  /*!< KB API */
    uint32_t nbootDriver;      /*!< NBOOT driver */
    uint32_t flexspiNorDriver; /*!< FlexSPI NOR FLASH Driver API.*/
    uint32_t lpspiFlashDriver; /*!< LPSPI Flash driver API.*/
    uint32_t version;          /*!< Bootloader version number.*/
    const char *copyright;     /*!< Copyright string.*/
} bootloader_tree_t;

/*******************************************************************************
 * API
 ******************************************************************************/

/* This API is used to initialize bootloader and nboot context necessary to process sb4 file format */
status_t KB_Init(kb_session_ref_t **session, const kb_options_t *options)
{
    assert(BOOTLOADER_API_TREE_POINTER);
    return BOOTLOADER_API_TREE_POINTER->kbDriver->kb_init(session, options);
}

/* This API is used to release nboot context and finalize sb4 file processing */
status_t KB_Deinit(kb_session_ref_t *session)
{
    assert(BOOTLOADER_API_TREE_POINTER);
    return BOOTLOADER_API_TREE_POINTER->kbDriver->kb_deinit(session);
}

/* This API is used to decrypt sb4 file and store signed image contents specified by loader command supported
 * while generating sb4 image through Json configuration */
status_t KB_Execute(kb_session_ref_t *session, const uint8_t *data, uint32_t dataLength)
{
    assert(BOOTLOADER_API_TREE_POINTER);
    return BOOTLOADER_API_TREE_POINTER->kbDriver->kb_execute(session, data, dataLength);
}
