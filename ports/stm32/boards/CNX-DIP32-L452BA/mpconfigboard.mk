MCU_SERIES = l4
CMSIS_MCU = STM32L452xx
AF_FILE = boards/stm32l452_af.csv
LD_FILES = boards/stm32l452xe.ld boards/common_basic.ld
OPENOCD_CONFIG = boards/openocd_stm32l4.cfg

# CNX-specific frozen modules
FROZEN_MANIFEST ?= boards/CNX-MANIFEST/manifest.py

# The following is only needed if both:
#   MICROPY_HW_ENABLE_INTERNAL_FLASH_STORAGE and
#   MICROPY_HW_UART_REPL are enabled.

# MICROPY_HW_ENABLE_ISR_UART_FLASH_FUNCS_IN_RAM = 1
