/*
 * Copyright (c) 2015, Freescale Semiconductor, Inc.
 * Copyright 2016-2017 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/* clang-format off */
/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
!!GlobalInfo
product: Pins v4.1
processor: MK82FN256xxx15
package_id: MK82FN256VLL15
mcu_data: ksdk2_0
processor_version: 4.0.0
board: FRDM-K82F
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */
/* clang-format on */

#include "fsl_common.h"
#include "fsl_port.h"
#include "pin_mux.h"

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitBootPins
 * Description   : Calls initialization functions.
 *
 * END ****************************************************************************************************************/
void BOARD_InitBootPins(void)
{
    BOARD_InitPins();
}

/* clang-format off */
/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitPins:
- options: {callFromInitBoot: 'true', prefix: BOARD_, coreID: core0, enableClock: 'true'}
- pin_list:
  - {pin_num: '86', peripheral: LPUART4, signal: RX, pin_signal: PTC14/LPUART4_RX/FB_AD25/SDRAM_D25/FXIO0_D20}
  - {pin_num: '82', peripheral: FTM3, signal: 'CH, 6', pin_signal: PTC10/I2C1_SCL/FTM3_CH6/I2S0_RX_FS/FB_AD5/SDRAM_A13/FXIO0_D18, direction: OUTPUT}
  - {pin_num: '87', peripheral: LPUART4, signal: TX, pin_signal: PTC15/LPUART4_TX/FB_AD24/SDRAM_D24/FXIO0_D21}
  - {pin_num: '81', peripheral: FTM3, signal: 'CH, 5', pin_signal: CMP0_IN3/PTC9/FTM3_CH5/I2S0_RX_BCLK/FB_AD6/SDRAM_A14/FTM2_FLT0/FXIO0_D17, direction: OUTPUT}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */
/* clang-format on */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
void BOARD_InitPins(void)
{
    /* Port C Clock Gate Control: Clock enabled */
    CLOCK_EnableClock(kCLOCK_PortC);

    /* PORTC10 (pin 82) is configured as FTM3_CH6 */
    PORT_SetPinMux(BOARD_LED_BLUE_PORT, BOARD_LED_BLUE_PIN, kPORT_MuxAlt3);

    /* PORTC14 (pin 86) is configured as LPUART4_RX */
    PORT_SetPinMux(BOARD_DEBUG_UART_RX_PORT, BOARD_DEBUG_UART_RX_PIN, kPORT_MuxAlt3);

    /* PORTC15 (pin 87) is configured as LPUART4_TX */
    PORT_SetPinMux(BOARD_DEBUG_UART_TX_PORT, BOARD_DEBUG_UART_TX_PIN, kPORT_MuxAlt3);

    /* PORTC9 (pin 81) is configured as FTM3_CH5 */
    PORT_SetPinMux(BOARD_LED_GREEN_PORT, BOARD_LED_GREEN_PIN, kPORT_MuxAlt3);

    SIM->SOPT8 = ((SIM->SOPT8 &
                   /* Mask bits to zero which are setting */
                   (~(SIM_SOPT8_FTM3OCH5SRC_MASK | SIM_SOPT8_FTM3OCH6SRC_MASK)))

                  /* FTM3 channel 5 output source: FTM3_CH5 pin is output of FTM3 channel 5 output. */
                  | SIM_SOPT8_FTM3OCH5SRC(SOPT8_FTM3OCH5SRC_FTM)

                  /* FTM3 channel 6 output source: FTM3_CH6 pin is output of FTM3 channel 6 output. */
                  | SIM_SOPT8_FTM3OCH6SRC(SOPT8_FTM3OCH6SRC_FTM));
}

/* clang-format off */
/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_I2C_ConfigurePins:
- options: {coreID: core0, enableClock: 'true'}
- pin_list:
  - {pin_num: '37', peripheral: I2C3, signal: SDA, pin_signal: TSI0_CH2/PTA1/LPUART0_RX/FTM0_CH6/I2C3_SDA/FXIO0_D11/EMVSIM0_IO/JTAG_TDI, open_drain: enable}
  - {pin_num: '38', peripheral: I2C3, signal: SCL, pin_signal: TSI0_CH3/PTA2/LPUART0_TX/FTM0_CH7/I2C3_SCL/FXIO0_D12/EMVSIM0_PD/JTAG_TDO/TRACE_SWO, open_drain: enable}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */
/* clang-format on */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_I2C_ConfigurePins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
void BOARD_I2C_ConfigurePins(void)
{
    /* Port A Clock Gate Control: Clock enabled */
    CLOCK_EnableClock(kCLOCK_PortA);

    /* PORTA1 (pin 37) is configured as I2C3_SDA */
    PORT_SetPinMux(BOARD_I2C_CONFIGUREPINS_I2C_SDA_PORT, BOARD_I2C_CONFIGUREPINS_I2C_SDA_PIN, kPORT_MuxAlt4);

    PORTA->PCR[1] = ((PORTA->PCR[1] &
                      /* Mask bits to zero which are setting */
                      (~(PORT_PCR_ODE_MASK | PORT_PCR_ISF_MASK)))

                     /* Open Drain Enable: Open drain output is enabled on the corresponding pin, if the pin is
                      * configured as a digital output. */
                     | PORT_PCR_ODE(kPORT_OpenDrainEnable));

    /* PORTA2 (pin 38) is configured as I2C3_SCL */
    PORT_SetPinMux(BOARD_I2C_CONFIGUREPINS_I2C_SCL_PORT, BOARD_I2C_CONFIGUREPINS_I2C_SCL_PIN, kPORT_MuxAlt4);

    PORTA->PCR[2] = ((PORTA->PCR[2] &
                      /* Mask bits to zero which are setting */
                      (~(PORT_PCR_ODE_MASK | PORT_PCR_ISF_MASK)))

                     /* Open Drain Enable: Open drain output is enabled on the corresponding pin, if the pin is
                      * configured as a digital output. */
                     | PORT_PCR_ODE(kPORT_OpenDrainEnable));
}
/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/
