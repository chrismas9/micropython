MCU_SERIES = f4
CMSIS_MCU = STM32F405xx
AF_FILE = boards/stm32f405_af.csv
LD_FILES = boards/stm32f405_big_mem.ld boards/common_ifs2.ld
OPENOCD_CONFIG = boards/openocd_stm32l4.cfg
FROZEN_MANIFEST ?= boards/CNX-MANIFEST/manifest.py

# Code in first sector. Rest of code after file system.
TEXT0_ADDR = 0x08000000
TEXT1_ADDR = 0x08040000

# MicroPython settings
# MICROPY_VFS_LFS2 = 1

# The following allows UART interrupts to be serviced during Flash erase.
MICROPY_HW_ENABLE_ISR_UART_FLASH_FUNCS_IN_RAM = 1

FIRMWARE = $(BOARD)
