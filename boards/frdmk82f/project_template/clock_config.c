/*
 * Copyright 2018 NXP.
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/
/*
 * How to setup clock using clock driver functions:
 *
 * 1. CLOCK_SetSimSafeDivs, to make sure core clock, bus clock, flexbus clock
 *    and flash clock are in allowed range during clock mode switch.
 *
 * 2. Call CLOCK_Osc0Init to setup OSC clock, if it is used in target mode.
 *
 * 3. Set MCG configuration, MCG includes three parts: FLL clock, PLL clock and
 *    internal reference clock(MCGIRCLK). Follow the steps to setup:
 *
 *    1). Call CLOCK_BootToXxxMode to set MCG to target mode.
 *
 *    2). If target mode is FBI/BLPI/PBI mode, the MCGIRCLK has been configured
 *        correctly. For other modes, need to call CLOCK_SetInternalRefClkConfig
 *        explicitly to setup MCGIRCLK.
 *
 *    3). Don't need to configure FLL explicitly, because if target mode is FLL
 *        mode, then FLL has been configured by the function CLOCK_BootToXxxMode,
 *        if the target mode is not FLL mode, the FLL is disabled.
 *
 *    4). If target mode is PEE/PBE/PEI/PBI mode, then the related PLL has been
 *        setup by CLOCK_BootToXxxMode. In FBE/FBI/FEE/FBE mode, the PLL could
 *        be enabled independently, call CLOCK_EnablePll0 explicitly in this case.
 *
 * 4. Call CLOCK_SetSimConfig to set the clock configuration in SIM.
 */

/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
!!GlobalInfo
product: Clocks v4.1
processor: MK82FN256xxx15
package_id: MK82FN256VLL15
mcu_data: ksdk2_0
processor_version: 4.0.0
board: FRDM-K82F
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */

#include "fsl_smc.h"
#include "clock_config.h"

/*******************************************************************************
 * Definitions
 ******************************************************************************/
#define MCG_IRCLK_DISABLE 0U                  /*!< MCGIRCLK disabled */
#define MCG_PLL_DISABLE 0U                    /*!< MCGPLLCLK disabled */
#define OSC_CAP0P 0U                          /*!< Oscillator 0pF capacitor load */
#define OSC_ER_CLK_DISABLE 0U                 /*!< Disable external reference clock */
#define SIM_CLKOUT_SEL_FLEXBUS_CLK 0U         /*!< CLKOUT pin clock select: FlexBus clock */
#define SIM_EMVSIM_CLK_SEL_OSCERCLK_CLK 2U    /*!< EMVSIM clock select: OSCERCLK clock */
#define SIM_FLEXIO_CLK_SEL_CORE_SYSTEM_CLK 0U /*!< FLEXIO clock select: Core/system clock */
#define SIM_LPUART_CLK_SEL_OSCERCLK_CLK 2U    /*!< LPUART clock select: OSCERCLK clock */
#define SIM_OSC32KSEL_RTC32KCLK_CLK 2U        /*!< OSC32KSEL select: RTC32KCLK clock (32.768kHz) */
#define SIM_PLLFLLSEL_IRC48MCLK_CLK 3U        /*!< PLLFLL select: IRC48MCLK clock */
#define SIM_SDHC_CLK_SEL_CORE_SYSTEM_CLK 0U   /*!< SDHC clock select: Core/system clock */
#define SIM_TPM_CLK_SEL_OSCERCLK_CLK 2U       /*!< TPM clock select: OSCERCLK clock */
#define SIM_TRACE_CLK_DIV_1 0U                /*!< Trace clock divider divisor: divided by 1 */
#define SIM_TRACE_CLK_FRAC_1 0U               /*!< Trace clock divider fraction: multiplied by 1 */
#define SIM_TRACE_CLK_SEL_CORE_SYSTEM_CLK 1U  /*!< Trace clock select: Core/system clock */
#define SIM_USB_CLK_48000000HZ 48000000U      /*!< Input SIM frequency for USB: 48000000Hz */

/*******************************************************************************
 * Variables
 ******************************************************************************/
/* System clock frequency. */
extern uint32_t SystemCoreClock;

/*******************************************************************************
 * Code
 ******************************************************************************/
/*FUNCTION**********************************************************************
 *
 * Function Name : CLOCK_CONFIG_SetFllExtRefDiv
 * Description   : Configure FLL external reference divider (FRDIV).
 * Param frdiv   : The value to set FRDIV.
 *
 *END**************************************************************************/
static void CLOCK_CONFIG_SetFllExtRefDiv(uint8_t frdiv)
{
    MCG->C1 = ((MCG->C1 & ~MCG_C1_FRDIV_MASK) | MCG_C1_FRDIV(frdiv));
}

/*******************************************************************************
 ************************ BOARD_InitBootClocks function ************************
 ******************************************************************************/
void BOARD_InitBootClocks(void)
{
    BOARD_BootClockHSRUN();
}

/*******************************************************************************
 ********************* Configuration BOARD_BootClockHSRUN **********************
 ******************************************************************************/
/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
!!Configuration
name: BOARD_BootClockHSRUN
called_from_default_init: true
outputs:
- {id: Bus_clock.outFreq, value: 75 MHz}
- {id: CLKOUT.outFreq, value: 75 MHz}
- {id: Core_clock.outFreq, value: 150 MHz, locked: true, accuracy: '0.001'}
- {id: EMVSIMCLK.outFreq, value: 12 MHz}
- {id: FLEXIOCLK.outFreq, value: 150 MHz}
- {id: Flash_clock.outFreq, value: 25 MHz}
- {id: FlexBus_clock.outFreq, value: 75 MHz}
- {id: IRC48MCLK.outFreq, value: 48 MHz}
- {id: LPO_clock.outFreq, value: 1 kHz}
- {id: LPUARTCLK.outFreq, value: 12 MHz}
- {id: MCGFFCLK.outFreq, value: 375 kHz}
- {id: MCGIRCLK.outFreq, value: 4 MHz, locked: true, accuracy: '0.001'}
- {id: MCGPLLCLK.outFreq, value: 150 MHz}
- {id: MCGPLLCLK2X.outFreq, value: 300 MHz}
- {id: OSCERCLK.outFreq, value: 12 MHz}
- {id: OSCERCLK_UNDIV.outFreq, value: 12 MHz}
- {id: PLLFLLCLK.outFreq, value: 48 MHz}
- {id: SDHCCLK.outFreq, value: 150 MHz}
- {id: System_clock.outFreq, value: 150 MHz}
- {id: TPMCLK.outFreq, value: 12 MHz}
- {id: TRACECLKIN.outFreq, value: 150 MHz}
- {id: USB48MCLK.outFreq, value: 48 MHz}
settings:
- {id: MCGMode, value: PEE}
- {id: powerMode, value: HSRUN}
- {id: CLKOUTConfig, value: 'yes'}
- {id: EMVSIMClkConfig, value: 'yes'}
- {id: FLEXIOClkConfig, value: 'yes'}
- {id: LPUARTClkConfig, value: 'yes'}
- {id: MCG.FCRDIV.scale, value: '1'}
- {id: MCG.FRDIV.scale, value: '32'}
- {id: MCG.IRCS.sel, value: MCG.FCRDIV}
- {id: MCG.IREFS.sel, value: MCG.FRDIV}
- {id: MCG.PLLS.sel, value: MCG.PLL_DIV2}
- {id: MCG.VDIV.scale, value: '25'}
- {id: MCG_C1_IRCLKEN_CFG, value: Enabled}
- {id: MCG_C2_OSC_MODE_CFG, value: ModeOscLowPower}
- {id: MCG_C2_RANGE0_CFG, value: Very_high}
- {id: MCG_C2_RANGE0_FRDIV_CFG, value: Very_high}
- {id: OSC_CR_ERCLKEN_CFG, value: Enabled}
- {id: OSC_CR_ERCLKEN_UNDIV_CFG, value: Enabled}
- {id: RTCCLKOUTConfig, value: 'yes'}
- {id: RTC_CR_OSCE_CFG, value: Enabled}
- {id: RTC_CR_OSC_CAP_LOAD_CFG, value: SC10PF}
- {id: SDHCClkConfig, value: 'yes'}
- {id: SIM.EMVSIMSRCSEL.sel, value: OSC.OSCERCLK}
- {id: SIM.LPUARTSRCSEL.sel, value: OSC.OSCERCLK}
- {id: SIM.OSC32KSEL.sel, value: RTC.RTC32KCLK}
- {id: SIM.OUTDIV2.scale, value: '2'}
- {id: SIM.OUTDIV4.scale, value: '6'}
- {id: SIM.PLLFLLSEL.sel, value: IRC48M.IRC48MCLK}
- {id: SIM.RTCCLKOUTSEL.sel, value: RTC.RTC32KCLK}
- {id: SIM.TPMSRCSEL.sel, value: OSC.OSCERCLK}
- {id: SIM.USBFRAC.scale, value: '1', locked: true}
- {id: SIM.USBSRCSEL.sel, value: SIM.USBDIV}
- {id: TPMClkConfig, value: 'yes'}
- {id: TraceClkConfig, value: 'yes'}
- {id: USBClkConfig, value: 'yes'}
sources:
- {id: IRC48M.IRC48M.outFreq, value: 48 MHz}
- {id: OSC.OSC.outFreq, value: 12 MHz, enabled: true}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */

/*******************************************************************************
 * Variables for BOARD_BootClockHSRUN configuration
 ******************************************************************************/
const mcg_config_t mcgConfig_BOARD_BootClockHSRUN = {
    .mcgMode         = kMCG_ModePEE,      /* PEE - PLL Engaged External */
    .irclkEnableMode = kMCG_IrclkEnable,  /* MCGIRCLK enabled, MCGIRCLK disabled in STOP mode */
    .ircs            = kMCG_IrcFast,      /* Fast internal reference clock selected */
    .fcrdiv          = 0x0U,              /* Fast IRC divider: divided by 1 */
    .frdiv           = 0x0U,              /* FLL reference clock divider: divided by 32 */
    .drs             = kMCG_DrsLow,       /* Low frequency range */
    .dmx32           = kMCG_Dmx32Default, /* DCO has a default range of 25% */
    .oscsel          = kMCG_OscselOsc,    /* Selects System Oscillator (OSCCLK) */
    .pll0Config =
        {
            .enableMode = MCG_PLL_DISABLE, /* MCGPLLCLK disabled */
            .prdiv      = 0x0U,            /* PLL Reference divider: divided by 1 */
            .vdiv       = 0x9U,            /* VCO divider: multiplied by 25 */
        },
};
const sim_clock_config_t simConfig_BOARD_BootClockHSRUN = {
    .pllFllSel  = SIM_PLLFLLSEL_IRC48MCLK_CLK, /* PLLFLL select: IRC48MCLK clock */
    .pllFllDiv  = 0,                           /* PLLFLLSEL clock divider divisor: divided by 1 */
    .pllFllFrac = 0,                           /* PLLFLLSEL clock divider fraction: multiplied by 1 */
    .er32kSrc   = SIM_OSC32KSEL_RTC32KCLK_CLK, /* OSC32KSEL select: RTC32KCLK clock (32.768kHz) */
    .clkdiv1    = 0x1150000U,                  /* SIM_CLKDIV1 - OUTDIV1: /1, OUTDIV2: /2, OUTDIV3: /2, OUTDIV4: /6 */
};
const osc_config_t oscConfig_BOARD_BootClockHSRUN = {
    .freq        = 12000000U,            /* Oscillator frequency: 12000000Hz */
    .capLoad     = (OSC_CAP0P),          /* Oscillator capacity load: 0pF */
    .workMode    = kOSC_ModeOscLowPower, /* Oscillator low power */
    .oscerConfig = {
        .enableMode =
            kOSC_ErClkEnable, /* Enable external reference clock, disable external reference clock in STOP mode */
        .erclkDiv = 0,        /* Divider for OSCERCLK: divided by 1 */
    }};

/*******************************************************************************
 * Code for BOARD_BootClockHSRUN configuration
 ******************************************************************************/
void BOARD_BootClockHSRUN(void)
{
    /* Set HSRUN power mode */
    SMC_SetPowerModeProtection(SMC, kSMC_AllowPowerModeAll);
    SMC_SetPowerModeHsrun(SMC);
    while (SMC_GetPowerModeState(SMC) != kSMC_PowerStateHsrun)
    {
    }
    /* Set the system clock dividers in SIM to safe value. */
    CLOCK_SetSimSafeDivs();
    /* Initializes OSC0 according to board configuration. */
    CLOCK_InitOsc0(&oscConfig_BOARD_BootClockHSRUN);
    CLOCK_SetXtal0Freq(oscConfig_BOARD_BootClockHSRUN.freq);
    /* Configure the Internal Reference clock (MCGIRCLK). */
    CLOCK_SetInternalRefClkConfig(mcgConfig_BOARD_BootClockHSRUN.irclkEnableMode, mcgConfig_BOARD_BootClockHSRUN.ircs,
                                  mcgConfig_BOARD_BootClockHSRUN.fcrdiv);
    /* Configure FLL external reference divider (FRDIV). */
    CLOCK_CONFIG_SetFllExtRefDiv(mcgConfig_BOARD_BootClockHSRUN.frdiv);
    /* Set MCG to PEE mode. */
    CLOCK_BootToPeeMode(mcgConfig_BOARD_BootClockHSRUN.oscsel, kMCG_PllClkSelPll0,
                        &mcgConfig_BOARD_BootClockHSRUN.pll0Config);
    /* Set the clock configuration in SIM module. */
    CLOCK_SetSimConfig(&simConfig_BOARD_BootClockHSRUN);
    /* Set SystemCoreClock variable. */
    SystemCoreClock = BOARD_BOOTCLOCKHSRUN_CORE_CLOCK;
    /* Enable USB FS clock. */
    CLOCK_EnableUsbfs0Clock(kCLOCK_UsbSrcIrc48M, SIM_USB_CLK_48000000HZ);
    /* Set SDHC clock source. */
    CLOCK_SetSdhc0Clock(SIM_SDHC_CLK_SEL_CORE_SYSTEM_CLK);
    /* Set LPUART clock source. */
    CLOCK_SetLpuartClock(SIM_LPUART_CLK_SEL_OSCERCLK_CLK);
    /* Set FLEXIO clock source. */
    CLOCK_SetFlexio0Clock(SIM_FLEXIO_CLK_SEL_CORE_SYSTEM_CLK);
    /* Set EMVSIM clock source. */
    CLOCK_SetEmvsimClock(SIM_EMVSIM_CLK_SEL_OSCERCLK_CLK);
    /* Set TPM clock source. */
    CLOCK_SetTpmClock(SIM_TPM_CLK_SEL_OSCERCLK_CLK);
    /* Set CLKOUT source. */
    CLOCK_SetClkOutClock(SIM_CLKOUT_SEL_FLEXBUS_CLK);
    /* Set debug trace clock source. */
    CLOCK_SetTraceClock(SIM_TRACE_CLK_SEL_CORE_SYSTEM_CLK, SIM_TRACE_CLK_DIV_1, SIM_TRACE_CLK_FRAC_1);
}

/*******************************************************************************
 ********************* Configuration BOARD_BootClockVLPR ***********************
 ******************************************************************************/
/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
!!Configuration
name: BOARD_BootClockVLPR
outputs:
- {id: Bus_clock.outFreq, value: 4 MHz}
- {id: Core_clock.outFreq, value: 4 MHz, locked: true, accuracy: '0.001'}
- {id: Flash_clock.outFreq, value: 800 kHz}
- {id: FlexBus_clock.outFreq, value: 2 MHz}
- {id: LPO_clock.outFreq, value: 1 kHz}
- {id: System_clock.outFreq, value: 4 MHz}
- {id: TRACECLKIN.outFreq, value: 4 MHz}
settings:
- {id: MCGMode, value: BLPI}
- {id: powerMode, value: VLPR}
- {id: MCG.CLKS.sel, value: MCG.IRCS}
- {id: MCG.FCRDIV.scale, value: '1'}
- {id: MCG.IRCS.sel, value: MCG.FCRDIV}
- {id: RTC_CR_OSCE_CFG, value: Enabled}
- {id: RTC_CR_OSC_CAP_LOAD_CFG, value: SC10PF}
- {id: SIM.OSC32KSEL.sel, value: RTC.RTC32KCLK}
- {id: SIM.OUTDIV4.scale, value: '5'}
- {id: SIM.PLLFLLSEL.sel, value: IRC48M.IRC48MCLK}
- {id: SIM.RTCCLKOUTSEL.sel, value: RTC.RTC32KCLK}
- {id: TraceClkConfig, value: 'yes'}
sources:
- {id: OSC.OSC.outFreq, value: 12 MHz}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */

/*******************************************************************************
 * Variables for BOARD_BootClockVLPR configuration
 ******************************************************************************/
const mcg_config_t mcgConfig_BOARD_BootClockVLPR = {
    .mcgMode         = kMCG_ModeBLPI,     /* BLPI - Bypassed Low Power Internal */
    .irclkEnableMode = MCG_IRCLK_DISABLE, /* MCGIRCLK disabled */
    .ircs            = kMCG_IrcFast,      /* Fast internal reference clock selected */
    .fcrdiv          = 0x0U,              /* Fast IRC divider: divided by 1 */
    .frdiv           = 0x0U,              /* FLL reference clock divider: divided by 1 */
    .drs             = kMCG_DrsLow,       /* Low frequency range */
    .dmx32           = kMCG_Dmx32Default, /* DCO has a default range of 25% */
    .oscsel          = kMCG_OscselOsc,    /* Selects System Oscillator (OSCCLK) */
    .pll0Config =
        {
            .enableMode = MCG_PLL_DISABLE, /* MCGPLLCLK disabled */
            .prdiv      = 0x0U,            /* PLL Reference divider: divided by 1 */
            .vdiv       = 0x0U,            /* VCO divider: multiplied by 16 */
        },
};
const sim_clock_config_t simConfig_BOARD_BootClockVLPR = {
    .pllFllSel  = SIM_PLLFLLSEL_IRC48MCLK_CLK, /* PLLFLL select: IRC48MCLK clock */
    .pllFllDiv  = 0,                           /* PLLFLLSEL clock divider divisor: divided by 1 */
    .pllFllFrac = 0,                           /* PLLFLLSEL clock divider fraction: multiplied by 1 */
    .er32kSrc   = SIM_OSC32KSEL_RTC32KCLK_CLK, /* OSC32KSEL select: RTC32KCLK clock (32.768kHz) */
    .clkdiv1    = 0x140000U,                   /* SIM_CLKDIV1 - OUTDIV1: /1, OUTDIV2: /1, OUTDIV3: /2, OUTDIV4: /5 */
};
const osc_config_t oscConfig_BOARD_BootClockVLPR = {
    .freq        = 0U,           /* Oscillator frequency: 0Hz */
    .capLoad     = (OSC_CAP0P),  /* Oscillator capacity load: 0pF */
    .workMode    = kOSC_ModeExt, /* Use external clock */
    .oscerConfig = {
        .enableMode = OSC_ER_CLK_DISABLE, /* Disable external reference clock */
        .erclkDiv   = 0,                  /* Divider for OSCERCLK: divided by 1 */
    }};

/*******************************************************************************
 * Code for BOARD_BootClockVLPR configuration
 ******************************************************************************/
void BOARD_BootClockVLPR(void)
{
    /* Set the system clock dividers in SIM to safe value. */
    CLOCK_SetSimSafeDivs();
    /* Set MCG to BLPI mode. */
    CLOCK_BootToBlpiMode(mcgConfig_BOARD_BootClockVLPR.fcrdiv, mcgConfig_BOARD_BootClockVLPR.ircs,
                         mcgConfig_BOARD_BootClockVLPR.irclkEnableMode);
    /* Set the clock configuration in SIM module. */
    CLOCK_SetSimConfig(&simConfig_BOARD_BootClockVLPR);
    /* Set VLPR power mode. */
    SMC_SetPowerModeProtection(SMC, kSMC_AllowPowerModeAll);
#if (defined(FSL_FEATURE_SMC_HAS_LPWUI) && FSL_FEATURE_SMC_HAS_LPWUI)
    SMC_SetPowerModeVlpr(SMC, false);
#else
    SMC_SetPowerModeVlpr(SMC);
#endif
    while (SMC_GetPowerModeState(SMC) != kSMC_PowerStateVlpr)
    {
    }
    /* Set SystemCoreClock variable. */
    SystemCoreClock = BOARD_BOOTCLOCKVLPR_CORE_CLOCK;
    /* Set debug trace clock source. */
    CLOCK_SetTraceClock(SIM_TRACE_CLK_SEL_CORE_SYSTEM_CLK, SIM_TRACE_CLK_DIV_1, SIM_TRACE_CLK_FRAC_1);
}
