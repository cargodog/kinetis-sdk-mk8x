/*
 * Copyright (c) 2014-2015 Freescale Semiconductor, Inc.
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */
#ifndef __BOOTLOADER_CONFIG_H__
#define __BOOTLOADER_CONFIG_H__

////////////////////////////////////////////////////////////////////////////////
// Definitions
////////////////////////////////////////////////////////////////////////////////

//
// Bootloader configuration options
//

//! @name Peripheral configuration macros
//@{

#define BL_FEATURE_ROM_UART_PORT (0)
#define BL_FEATURE_ROM_I2C_PORT (0)
#define BL_FEATURE_ROM_SPI_PORT (0)

// UART ports
#if !defined(BL_CONFIG_LPUART_0)
#define BL_CONFIG_LPUART_0 (BL_FEATURE_ROM_UART_PORT)
#endif
#if !defined(BL_CONFIG_LPUART_1)
#define BL_CONFIG_LPUART_1 (BL_FEATURE_ROM_UART_PORT)
#endif
#if !defined(BL_CONFIG_LPUART_2)
#define BL_CONFIG_LPUART_2 (BL_FEATURE_ROM_UART_PORT)
#endif
#if !defined(BL_CONFIG_LPUART_4)
#if (BL_FEATURE_ROM_UART_PORT == 1)
#define BL_CONFIG_LPUART_4 (0)
#else
#define BL_CONFIG_LPUART_4 (1)
#endif // (BL_FEATURE_ROM_UART_PORT == 1)
#endif
#define BL_CONFIG_LPUART (BL_CONFIG_LPUART_0 || BL_CONFIG_LPUART_1 || BL_CONFIG_LPUART_2 || BL_CONFIG_LPUART_4)

// I2C ports
#if !defined(BL_CONFIG_I2C_0)
#define BL_CONFIG_I2C_0 (BL_FEATURE_ROM_I2C_PORT)
#endif
#if !defined(BL_CONFIG_I2C_1)
#define BL_CONFIG_I2C_1 (0)
#endif
#define BL_CONFIG_I2C (BL_CONFIG_I2C_0 || BL_CONFIG_I2C_1)

// SPI ports
#if !defined(BL_CONFIG_DSPI_0)
#define BL_CONFIG_DSPI_0 (BL_FEATURE_ROM_SPI_PORT)
#endif
#if !defined(BL_CONFIG_DSPI_1)
#define BL_CONFIG_DSPI_1 (0)
#endif
#define BL_CONFIG_DSPI (BL_CONFIG_DSPI_0 || BL_CONFIG_DSPI_1)

#if !defined(BL_CONFIG_USB_HID)
#define BL_CONFIG_USB_HID (1)
#endif
#if !defined(BL_CONFIG_USB_MSC)
#define BL_CONFIG_USB_MSC (0)
#endif
//@}

#if !defined(BL_TARGET_FLASH) && !defined(BL_TARGET_RAM)
#define BL_TARGET_FLASH (1)
#endif

#if defined(BL_TARGET_RAM)
#define BL_FEATURE_FLASH_SECURITY (0)
#else
#define BL_FEATURE_FLASH_SECURITY (1)
#endif

#define BL_FEATURE_MIN_PROFILE (0)

#define BL_FEATURE_ERASEALL_UNSECURE (0)
#define BL_FEATURE_FLASH_VERIFY_DISABLE (0)

#if !defined(BL_TARGET_RAM)
#define BL_FEATURE_CRC_CHECK (1)
#endif

#define BL_FEATURE_UART_AUTOBAUD_IRQ (1)

#define BL_FEATURE_QSPI_MODULE (1)
#define BL_FEATURE_QSPI_ALIAS_AREA (1)
#define BL_FEATURE_QSPI_HYPERFLASH (1) // NOTE: This feature can be disabled if the HyperFLASH support is not required.
#if BL_FEATURE_QSPI_MODULE
#define BL_FEATURE_EXTERNAL_MEMORY_PROPERTY (1)
#endif

// Security related features
#define BL_FEATURE_OTFAD_MODULE (1)
#if BL_FEATURE_OTFAD_MODULE
#define BL_FEATURE_ENCRYPTION_LTC (1)
#define BL_FEATURE_ENCRYPTION (1)
#define BL_FEATURE_OTFAD_KEK_ADDRESS 0xb000 // NOTE: this address must be 4-byte aligned.
#else
#define BL_FEATURE_ENCRYPTION_LTC (1)
#define BL_FEATURE_ENCRYPTION_MMCAU (0)
#define BL_FEATURE_ENCRYPTION (BL_FEATURE_ENCRYPTION_MMCAU | BL_FEATURE_ENCRYPTION_LTC)
#endif

// Bootloader peripheral detection default timeout in milliseconds
// After coming out of reset the bootloader will spin in a peripheral detection
// loop for this amount of time. A zero value means no time out.
#if DEBUG
#define BL_DEFAULT_PERIPHERAL_DETECT_TIMEOUT 0
#else
#define BL_DEFAULT_PERIPHERAL_DETECT_TIMEOUT 5000
#endif // DEBUG

// The bootloader will check this address for the application vector table upon startup.
#if !defined(BL_APP_VECTOR_TABLE_ADDRESS)
#define BL_APP_VECTOR_TABLE_ADDRESS 0xa000
#endif

/* Backup application Info */
#if !defined(BL_TARGET_RAM)
#define BL_FEATURE_RELIABLE_UPDATE (1)
#define BL_FEATURE_HARDWARE_SWAP_UPDATE (0)
// Note the BAKCUP APP START address must be sector-aligned.
#define BL_BACKUP_APP_START (0x20000)
#endif // BL_TARGET_RAM

#if BL_FEATURE_RELIABLE_UPDATE
#define BL_FEATURE_CRC_CHECK (1)
#endif // BL_FEATURE_RELIABLE_UPDATE

/* Serial Port Info */

/**************************************************************************
 * Note:
 *
 * Because of the changes to the UART modules, we can no longer define
 * the TERM_PORT as a base pointer.  The uart functions have been modified
 * accommodate this change.  Now, TERM_PORT_NUM must be defined as the
 * number of the UART port desired to use
 *
 * TERM_PORT_NUM = 0  -- This allows you to use UART0; default pins are
 *                        PTA14 and PTA15
 *
 * TERM_PORT_NUM = 1  -- This allows you to use UART1; default pins are
 *                        PTC3 and PTC4
 *
 * TERM_PORT_NUM = 2  -- This allows you to use UART2; default pins are
 *                        PTD2 and PTD3
 *
 *************************************************************************/
#define TERM_PORT_NUM 0

#define TERMINAL_BAUD 19200
#undef HW_FLOW_CONTROL

#endif // __BOOTLOADER_CONFIG_H__
////////////////////////////////////////////////////////////////////////////////
// EOF
////////////////////////////////////////////////////////////////////////////////
