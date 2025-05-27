MCU_SERIES = l4
CMSIS_MCU = STM32L433xx
AF_FILE = boards/stm32l433_af.csv
LD_FILES = boards/RMIT-APS-STM32L433/stm32l433.ld boards/common_basic.ld
OPENOCD_CONFIG = boards/openocd_stm32l4.cfg

# MicroPython settings. Use LittleFS1 because it is smaller and more reliable than FAT.
# LFS drive cannot be mounted under Windows. Use Thonny to load files.
MICROPY_VFS_FAT = 0
MICROPY_VFS_LFS1 ?= 1

# Don't include default frozen modules because MCU is tight on flash space.
FROZEN_MANIFEST ?=
