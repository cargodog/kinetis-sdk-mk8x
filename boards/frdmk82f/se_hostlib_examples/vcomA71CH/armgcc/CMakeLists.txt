INCLUDE(CMakeForceCompiler)

# CROSS COMPILER SETTING
SET(CMAKE_SYSTEM_NAME Generic)
CMAKE_MINIMUM_REQUIRED (VERSION 2.6)

# THE VERSION NUMBER
SET (Tutorial_VERSION_MAJOR 1)
SET (Tutorial_VERSION_MINOR 0)

# ENABLE ASM
ENABLE_LANGUAGE(ASM)

SET(CMAKE_STATIC_LIBRARY_PREFIX)
SET(CMAKE_STATIC_LIBRARY_SUFFIX)

SET(CMAKE_EXECUTABLE_LIBRARY_PREFIX)
SET(CMAKE_EXECUTABLE_LIBRARY_SUFFIX)

 
# CURRENT DIRECTORY
SET(ProjDirPath ${CMAKE_CURRENT_SOURCE_DIR})


SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -DDEBUG")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -D__STARTUP_CLEAR_BSS")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -D__STARTUP_INITIALIZE_NONCACHEDATA")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -g")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -Wall")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -fno-common")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -ffunction-sections")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -fdata-sections")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -ffreestanding")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -fno-builtin")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -mthumb")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -mapcs")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -std=gnu99")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -mcpu=cortex-m4")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -mfloat-abi=hard")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -mfpu=fpv4-sp-d16")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -DNDEBUG")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -D__STARTUP_CLEAR_BSS")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -D__STARTUP_INITIALIZE_NONCACHEDATA")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -Wall")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -fno-common")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -ffunction-sections")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -fdata-sections")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -ffreestanding")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -fno-builtin")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -mthumb")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -mapcs")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -std=gnu99")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -mcpu=cortex-m4")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -mfloat-abi=hard")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -mfpu=fpv4-sp-d16")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DDEBUG")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DCPU_MK82FN256VLL15")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DUSB_STACK_BM")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DNO_SECURE_CHANNEL_SUPPORT")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DSCP_MODE=C_MAC_C_ENC_R_MAC_R_ENC")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DPRINTF_ADVANCED_ENABLE=1")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DFRDM_K82F")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DFREEDOM")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DTGT_A71CH")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DI2C")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -g")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -O0")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -Wall")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -fno-common")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -ffunction-sections")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -fdata-sections")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -ffreestanding")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -fno-builtin")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -mthumb")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -mapcs")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -std=gnu99")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -mcpu=cortex-m4")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -mfloat-abi=hard")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -mfpu=fpv4-sp-d16")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -MMD")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -MP")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DNDEBUG")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DCPU_MK82FN256VLL15")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DUSB_STACK_BM")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DNO_SECURE_CHANNEL_SUPPORT")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DSCP_MODE=C_MAC_C_ENC_R_MAC_R_ENC")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DPRINTF_ADVANCED_ENABLE=1")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DFRDM_K82F")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DFREEDOM")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DTGT_A71CH")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DI2C")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -Os")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -Wall")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -fno-common")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -ffunction-sections")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -fdata-sections")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -ffreestanding")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -fno-builtin")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -mthumb")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -mapcs")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -std=gnu99")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -mcpu=cortex-m4")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -mfloat-abi=hard")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -mfpu=fpv4-sp-d16")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -MMD")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -MP")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -DDEBUG")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -DCPU_MK82FN256VLL15")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -DTGT_A71CH")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -DI2C")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -g")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -O0")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -Wall")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -fno-common")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -ffunction-sections")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -fdata-sections")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -ffreestanding")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -fno-builtin")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -mthumb")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -mapcs")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -fno-rtti")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -fno-exceptions")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -mcpu=cortex-m4")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -mfloat-abi=hard")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -mfpu=fpv4-sp-d16")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -MMD")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -MP")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -DNDEBUG")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -DCPU_MK82FN256VLL15")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -DTGT_A71CH")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -DI2C")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -Os")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -Wall")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -fno-common")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -ffunction-sections")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -fdata-sections")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -ffreestanding")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -fno-builtin")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -mthumb")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -mapcs")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -fno-rtti")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -fno-exceptions")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -mcpu=cortex-m4")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -mfloat-abi=hard")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -mfpu=fpv4-sp-d16")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -MMD")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -MP")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -g")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} --specs=nano.specs")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} --specs=nosys.specs")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -Wall")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -fno-common")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -ffunction-sections")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -fdata-sections")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -ffreestanding")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -fno-builtin")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -mthumb")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -mapcs")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} --gc-sections")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -static")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -z")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} muldefs")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -Map=output.map")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -mcpu=cortex-m4")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -mfloat-abi=hard")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -mfpu=fpv4-sp-d16")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} --specs=nano.specs")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} --specs=nosys.specs")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -Wall")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -fno-common")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -ffunction-sections")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -fdata-sections")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -ffreestanding")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -fno-builtin")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -mthumb")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -mapcs")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} --gc-sections")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -static")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -z")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} muldefs")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -Map=output.map")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -mcpu=cortex-m4")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -mfloat-abi=hard")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -mfpu=fpv4-sp-d16")

include_directories(${ProjDirPath}/..)

include_directories(${ProjDirPath}/../../../../../middleware/se_hostlib/hostLib/vcom/kinetis)

include_directories(${ProjDirPath}/../../..)

include_directories(${ProjDirPath}/../../../../../CMSIS/Include)

include_directories(${ProjDirPath}/../../../../../devices)

include_directories(${ProjDirPath}/../../../../../middleware/mmcau)

include_directories(${ProjDirPath}/../../../../../middleware/se_hostlib)

include_directories(${ProjDirPath}/../../../../../middleware/usb/device)

include_directories(${ProjDirPath}/../../../../../middleware/usb/include)

include_directories(${ProjDirPath}/../../../../../middleware/usb/osa)

include_directories(${ProjDirPath}/../../../../../devices/MK82F25615/drivers)

include_directories(${ProjDirPath}/../../../../../components/serial_manager/usb_cdc_adapter)

include_directories(${ProjDirPath}/../../../component_examples/config)

include_directories(${ProjDirPath}/../../../../../middleware/se_hostlib/hostLib/libCommon/infra)

include_directories(${ProjDirPath}/../../../../../middleware/se_hostlib/hostLib/libCommon/scp)

include_directories(${ProjDirPath}/../../../../../middleware/se_hostlib/hostLib/inc)

include_directories(${ProjDirPath}/../../../../../middleware/se_hostlib/hostLib/libCommon/smCom)

include_directories(${ProjDirPath}/../../../../../middleware/se_hostlib/hostLib/platform/inc)

include_directories(${ProjDirPath}/../../../../../middleware/se_hostlib/platform)

include_directories(${ProjDirPath}/../../../../../devices/MK82F25615)

include_directories(${ProjDirPath}/../../../../../devices/MK82F25615/utilities/str)

include_directories(${ProjDirPath}/../../../../../devices/MK82F25615/utilities/debug_console)

include_directories(${ProjDirPath}/../../../../../components/uart)

include_directories(${ProjDirPath}/../../../../../components/serial_manager)

include_directories(${ProjDirPath}/../../../../../components/lists)

add_executable(se_hostlib_vcomA71CH.elf 
"${ProjDirPath}/../virtual_com.c"
"${ProjDirPath}/../virtual_com.h"
"${ProjDirPath}/../vcom2i2c.c"
"${ProjDirPath}/../vcom2i2c.h"
"${ProjDirPath}/../pin_mux.c"
"${ProjDirPath}/../pin_mux.h"
"${ProjDirPath}/../board.c"
"${ProjDirPath}/../board.h"
"${ProjDirPath}/../clock_config.c"
"${ProjDirPath}/../clock_config.h"
"${ProjDirPath}/../../../../../middleware/usb/device/usb_device_khci.c"
"${ProjDirPath}/../../../../../middleware/usb/device/usb_device_khci.h"
"${ProjDirPath}/../../../../../middleware/usb/include/usb.h"
"${ProjDirPath}/../../../../../middleware/usb/include/usb_misc.h"
"${ProjDirPath}/../../../../../middleware/usb/include/usb_spec.h"
"${ProjDirPath}/../../../../../middleware/usb/osa/usb_osa.h"
"${ProjDirPath}/../../../../../middleware/usb/osa/usb_osa_bm.c"
"${ProjDirPath}/../../../../../middleware/usb/osa/usb_osa_bm.h"
"${ProjDirPath}/../../../../../devices/MK82F25615/drivers/fsl_sysmpu.c"
"${ProjDirPath}/../../../../../devices/MK82F25615/drivers/fsl_sysmpu.h"
"${ProjDirPath}/../../../../../middleware/mmcau/cau_api.h"
"${ProjDirPath}/../../../../../middleware/mmcau/fsl_mmcau.c"
"${ProjDirPath}/../../../../../middleware/mmcau/fsl_mmcau.h"
"${ProjDirPath}/../../../../../devices/MK82F25615/drivers/fsl_trng.c"
"${ProjDirPath}/../../../../../devices/MK82F25615/drivers/fsl_trng.h"
"${ProjDirPath}/../../../../../devices/MK82F25615/drivers/fsl_i2c.c"
"${ProjDirPath}/../../../../../devices/MK82F25615/drivers/fsl_i2c.h"
"${ProjDirPath}/../../../../../components/serial_manager/serial_port_usb.c"
"${ProjDirPath}/../../../../../components/serial_manager/serial_port_usb.h"
"${ProjDirPath}/../../../../../components/serial_manager/usb_cdc_adapter/usb_device_descriptor.c"
"${ProjDirPath}/../../../../../components/serial_manager/usb_cdc_adapter/usb_device_descriptor.h"
"${ProjDirPath}/../../../../../components/serial_manager/usb_cdc_adapter/usb_device_cdc_acm.c"
"${ProjDirPath}/../../../../../components/serial_manager/usb_cdc_adapter/usb_device_cdc_acm.h"
"${ProjDirPath}/../../../../../components/serial_manager/usb_cdc_adapter/usb_device_class.c"
"${ProjDirPath}/../../../../../components/serial_manager/usb_cdc_adapter/usb_device_class.h"
"${ProjDirPath}/../../../../../components/serial_manager/usb_cdc_adapter/usb_device_ch9.c"
"${ProjDirPath}/../../../../../components/serial_manager/usb_cdc_adapter/usb_device_ch9.h"
"${ProjDirPath}/../../../component_examples/config/usb_device_config.h"
"${ProjDirPath}/../../../../../middleware/se_hostlib/hostLib/inc/HLSEAPI.h"
"${ProjDirPath}/../../../../../middleware/se_hostlib/hostLib/inc/HLSEComm.h"
"${ProjDirPath}/../../../../../middleware/se_hostlib/hostLib/inc/HLSECrypto.h"
"${ProjDirPath}/../../../../../middleware/se_hostlib/hostLib/inc/HLSEMisc.h"
"${ProjDirPath}/../../../../../middleware/se_hostlib/hostLib/inc/HLSEObjects.h"
"${ProjDirPath}/../../../../../middleware/se_hostlib/hostLib/inc/HLSETypes.h"
"${ProjDirPath}/../../../../../middleware/se_hostlib/hostLib/inc/PlugAndTrust_HostLib_Ver.h"
"${ProjDirPath}/../../../../../middleware/se_hostlib/hostLib/inc/PlugAndTrust_Pkg_Ver.h"
"${ProjDirPath}/../../../../../middleware/se_hostlib/hostLib/inc/a71ch_api.h"
"${ProjDirPath}/../../../../../middleware/se_hostlib/hostLib/inc/a71ch_const.h"
"${ProjDirPath}/../../../../../middleware/se_hostlib/hostLib/inc/a71ch_util.h"
"${ProjDirPath}/../../../../../middleware/se_hostlib/hostLib/inc/ax_api.h"
"${ProjDirPath}/../../../../../middleware/se_hostlib/hostLib/inc/ax_common.h"
"${ProjDirPath}/../../../../../middleware/se_hostlib/hostLib/inc/ax_common_a71ch.h"
"${ProjDirPath}/../../../../../middleware/se_hostlib/hostLib/inc/ax_common_a71cl.h"
"${ProjDirPath}/../../../../../middleware/se_hostlib/hostLib/inc/ax_common_private.h"
"${ProjDirPath}/../../../../../middleware/se_hostlib/hostLib/inc/ax_scp.h"
"${ProjDirPath}/../../../../../middleware/se_hostlib/hostLib/inc/ax_scp_private.h"
"${ProjDirPath}/../../../../../middleware/se_hostlib/hostLib/inc/ax_sss_scp.h"
"${ProjDirPath}/../../../../../middleware/se_hostlib/hostLib/inc/ax_util.h"
"${ProjDirPath}/../../../../../middleware/se_hostlib/hostLib/inc/fsl_sss_ftr_default.h"
"${ProjDirPath}/../../../../../middleware/se_hostlib/hostLib/inc/nxEnsure.h"
"${ProjDirPath}/../../../../../middleware/se_hostlib/hostLib/inc/scp.h"
"${ProjDirPath}/../../../../../middleware/se_hostlib/hostLib/libCommon/infra/global_platf.c"
"${ProjDirPath}/../../../../../middleware/se_hostlib/hostLib/libCommon/infra/global_platf.h"
"${ProjDirPath}/../../../../../middleware/se_hostlib/hostLib/libCommon/infra/nxLog.c"
"${ProjDirPath}/../../../../../middleware/se_hostlib/hostLib/libCommon/infra/nxLog.h"
"${ProjDirPath}/../../../../../middleware/se_hostlib/hostLib/libCommon/infra/nxLog_App.h"
"${ProjDirPath}/../../../../../middleware/se_hostlib/hostLib/libCommon/infra/nxLog_DefaultConfig.h"
"${ProjDirPath}/../../../../../middleware/se_hostlib/hostLib/libCommon/infra/nxLog_UseCases.h"
"${ProjDirPath}/../../../../../middleware/se_hostlib/hostLib/libCommon/infra/nxLog_VCOM.h"
"${ProjDirPath}/../../../../../middleware/se_hostlib/hostLib/libCommon/infra/nxLog_hostLib.h"
"${ProjDirPath}/../../../../../middleware/se_hostlib/hostLib/libCommon/infra/nxLog_mbedtls.h"
"${ProjDirPath}/../../../../../middleware/se_hostlib/hostLib/libCommon/infra/nxLog_scp.h"
"${ProjDirPath}/../../../../../middleware/se_hostlib/hostLib/libCommon/infra/nxLog_smCom.h"
"${ProjDirPath}/../../../../../middleware/se_hostlib/hostLib/libCommon/infra/nxLog_sscp.h"
"${ProjDirPath}/../../../../../middleware/se_hostlib/hostLib/libCommon/infra/nxLog_sss.h"
"${ProjDirPath}/../../../../../middleware/se_hostlib/hostLib/libCommon/infra/sm_apdu.c"
"${ProjDirPath}/../../../../../middleware/se_hostlib/hostLib/libCommon/infra/sm_apdu.h"
"${ProjDirPath}/../../../../../middleware/se_hostlib/hostLib/libCommon/infra/sm_api.h"
"${ProjDirPath}/../../../../../middleware/se_hostlib/hostLib/libCommon/infra/sm_errors.c"
"${ProjDirPath}/../../../../../middleware/se_hostlib/hostLib/libCommon/infra/sm_errors.h"
"${ProjDirPath}/../../../../../middleware/se_hostlib/hostLib/libCommon/infra/sm_printf.c"
"${ProjDirPath}/../../../../../middleware/se_hostlib/hostLib/libCommon/infra/sm_types.h"
"${ProjDirPath}/../../../../../middleware/se_hostlib/hostLib/libCommon/scp/scp.c"
"${ProjDirPath}/../../../../../middleware/se_hostlib/hostLib/libCommon/scp/scp.h"
"${ProjDirPath}/../../../../../middleware/se_hostlib/hostLib/libCommon/smCom/apduComm.h"
"${ProjDirPath}/../../../../../middleware/se_hostlib/hostLib/libCommon/smCom/sci2c.c"
"${ProjDirPath}/../../../../../middleware/se_hostlib/hostLib/libCommon/smCom/sci2c.h"
"${ProjDirPath}/../../../../../middleware/se_hostlib/hostLib/libCommon/smCom/sci2c_cfg.h"
"${ProjDirPath}/../../../../../middleware/se_hostlib/hostLib/libCommon/smCom/smCom.c"
"${ProjDirPath}/../../../../../middleware/se_hostlib/hostLib/libCommon/smCom/smCom.h"
"${ProjDirPath}/../../../../../middleware/se_hostlib/hostLib/libCommon/smCom/smComSCI2C.c"
"${ProjDirPath}/../../../../../middleware/se_hostlib/hostLib/libCommon/smCom/smComSCI2C.h"
"${ProjDirPath}/../../../../../middleware/se_hostlib/hostLib/platform/inc/i2c_a7.h"
"${ProjDirPath}/../../../../../middleware/se_hostlib/hostLib/platform/inc/sm_printf.h"
"${ProjDirPath}/../../../../../middleware/se_hostlib/hostLib/platform/inc/sm_timer.h"
"${ProjDirPath}/../../../../../middleware/se_hostlib/hostLib/platform/kinetis/i2c_frdm.c"
"${ProjDirPath}/../../../../../middleware/se_hostlib/hostLib/platform/kinetis/i2c_imxrt10xx.c"
"${ProjDirPath}/../../../../../middleware/se_hostlib/hostLib/platform/kinetis/i2c_lpc54xxx.c"
"${ProjDirPath}/../../../../../middleware/se_hostlib/hostLib/platform/kinetis/timer_kinetis.c"
"${ProjDirPath}/../../../../../middleware/se_hostlib/hostLib/platform/kinetis/timer_kinetis_bm.c"
"${ProjDirPath}/../../../../../middleware/se_hostlib/hostLib/platform/kinetis/timer_kinetis_freertos.c"
"${ProjDirPath}/../../../../../middleware/usb/device/usb_device.h"
"${ProjDirPath}/../../../../../middleware/usb/device/usb_device_dci.c"
"${ProjDirPath}/../../../../../middleware/usb/device/usb_device_dci.h"
"${ProjDirPath}/../../../../../devices/MK82F25615/drivers/fsl_common.c"
"${ProjDirPath}/../../../../../devices/MK82F25615/drivers/fsl_common.h"
"${ProjDirPath}/../../../../../devices/MK82F25615/drivers/fsl_clock.c"
"${ProjDirPath}/../../../../../devices/MK82F25615/drivers/fsl_clock.h"
"${ProjDirPath}/../../../../../devices/MK82F25615/drivers/fsl_flash.h"
"${ProjDirPath}/../../../../../devices/MK82F25615/drivers/fsl_ftfx_adapter.h"
"${ProjDirPath}/../../../../../devices/MK82F25615/drivers/fsl_ftfx_cache.c"
"${ProjDirPath}/../../../../../devices/MK82F25615/drivers/fsl_ftfx_cache.h"
"${ProjDirPath}/../../../../../devices/MK82F25615/drivers/fsl_ftfx_controller.c"
"${ProjDirPath}/../../../../../devices/MK82F25615/drivers/fsl_ftfx_controller.h"
"${ProjDirPath}/../../../../../devices/MK82F25615/drivers/fsl_ftfx_features.h"
"${ProjDirPath}/../../../../../devices/MK82F25615/drivers/fsl_ftfx_flash.c"
"${ProjDirPath}/../../../../../devices/MK82F25615/drivers/fsl_ftfx_flash.h"
"${ProjDirPath}/../../../../../devices/MK82F25615/drivers/fsl_ftfx_flexnvm.c"
"${ProjDirPath}/../../../../../devices/MK82F25615/drivers/fsl_ftfx_flexnvm.h"
"${ProjDirPath}/../../../../../devices/MK82F25615/drivers/fsl_ftfx_utilities.h"
"${ProjDirPath}/../../../../../devices/MK82F25615/MK82F25615.h"
"${ProjDirPath}/../../../../../devices/MK82F25615/MK82F25615_features.h"
"${ProjDirPath}/../../../../../devices/MK82F25615/fsl_device_registers.h"
"${ProjDirPath}/../../../../../devices/MK82F25615/system_MK82F25615.c"
"${ProjDirPath}/../../../../../devices/MK82F25615/system_MK82F25615.h"
"${ProjDirPath}/../../../../../devices/MK82F25615/utilities/debug_console/fsl_debug_console.c"
"${ProjDirPath}/../../../../../devices/MK82F25615/utilities/debug_console/fsl_debug_console.h"
"${ProjDirPath}/../../../../../devices/MK82F25615/utilities/debug_console/fsl_debug_console_conf.h"
"${ProjDirPath}/../../../../../devices/MK82F25615/utilities/str/fsl_str.c"
"${ProjDirPath}/../../../../../devices/MK82F25615/utilities/str/fsl_str.h"
"${ProjDirPath}/../../../../../components/uart/lpuart_adapter.c"
"${ProjDirPath}/../../../../../components/uart/uart.h"
"${ProjDirPath}/../../../../../components/serial_manager/serial_manager.c"
"${ProjDirPath}/../../../../../components/serial_manager/serial_manager.h"
"${ProjDirPath}/../../../../../components/serial_manager/serial_port_internal.h"
"${ProjDirPath}/../../../../../components/serial_manager/serial_port_uart.c"
"${ProjDirPath}/../../../../../components/serial_manager/serial_port_uart.h"
"${ProjDirPath}/../../../../../devices/MK82F25615/drivers/fsl_lpuart.c"
"${ProjDirPath}/../../../../../devices/MK82F25615/drivers/fsl_lpuart.h"
"${ProjDirPath}/../../../../../components/lists/generic_list.c"
"${ProjDirPath}/../../../../../components/lists/generic_list.h"
"${ProjDirPath}/../../../../../devices/MK82F25615/gcc/startup_MK82F25615.S"
"${ProjDirPath}/../../../../../devices/MK82F25615/drivers/fsl_port.h"
"${ProjDirPath}/../../../../../devices/MK82F25615/drivers/fsl_smc.c"
"${ProjDirPath}/../../../../../devices/MK82F25615/drivers/fsl_smc.h"
"${ProjDirPath}/../../../../../devices/MK82F25615/drivers/fsl_gpio.c"
"${ProjDirPath}/../../../../../devices/MK82F25615/drivers/fsl_gpio.h"
"${ProjDirPath}/../../../../../devices/MK82F25615/utilities/fsl_assert.c"
"${ProjDirPath}/../../../../../CMSIS/Include/core_cm4.h"
"${ProjDirPath}/../../../../../CMSIS/Include/arm_common_tables.h"
"${ProjDirPath}/../../../../../CMSIS/Include/arm_const_structs.h"
"${ProjDirPath}/../../../../../CMSIS/Include/arm_math.h"
"${ProjDirPath}/../../../../../CMSIS/Include/cmsis_armcc.h"
"${ProjDirPath}/../../../../../CMSIS/Include/cmsis_armclang.h"
"${ProjDirPath}/../../../../../CMSIS/Include/cmsis_compiler.h"
"${ProjDirPath}/../../../../../CMSIS/Include/cmsis_gcc.h"
"${ProjDirPath}/../../../../../CMSIS/Include/cmsis_iccarm.h"
"${ProjDirPath}/../../../../../CMSIS/Include/cmsis_version.h"
"${ProjDirPath}/../../../../../CMSIS/Include/core_armv8mbl.h"
"${ProjDirPath}/../../../../../CMSIS/Include/core_armv8mml.h"
"${ProjDirPath}/../../../../../CMSIS/Include/mpu_armv7.h"
"${ProjDirPath}/../../../../../CMSIS/Include/mpu_armv8.h"
)


set(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -T${ProjDirPath}/MK82FN256xxx15_flash.ld -static")

set(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -T${ProjDirPath}/MK82FN256xxx15_flash.ld -static")

TARGET_LINK_LIBRARIES(se_hostlib_vcomA71CH.elf -Wl,--start-group)
target_link_libraries(se_hostlib_vcomA71CH.elf debug m)

target_link_libraries(se_hostlib_vcomA71CH.elf debug c)

target_link_libraries(se_hostlib_vcomA71CH.elf debug gcc)

target_link_libraries(se_hostlib_vcomA71CH.elf debug nosys)

target_link_libraries(se_hostlib_vcomA71CH.elf optimized m)

target_link_libraries(se_hostlib_vcomA71CH.elf optimized c)

target_link_libraries(se_hostlib_vcomA71CH.elf optimized gcc)

target_link_libraries(se_hostlib_vcomA71CH.elf optimized nosys)

link_directories(${ProjDirPath}/../../../../../middleware/mmcau/asm-cm4-cm7)

target_link_libraries(se_hostlib_vcomA71CH.elf debug ${ProjDirPath}/../../../../../middleware/mmcau/asm-cm4-cm7/lib_mmcau.a)

link_directories(${ProjDirPath}/../../../../../middleware/mmcau/asm-cm4-cm7)

target_link_libraries(se_hostlib_vcomA71CH.elf optimized ${ProjDirPath}/../../../../../middleware/mmcau/asm-cm4-cm7/lib_mmcau.a)

TARGET_LINK_LIBRARIES(se_hostlib_vcomA71CH.elf -Wl,--end-group)

