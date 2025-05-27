#define MICROPY_HW_BOARD_NAME       "RMIT ANCILLARY POWER SUPPLY"
#define MICROPY_HW_MCU_NAME         "STM32L433CC"
#define MICROPY_PY_SYS_PLATFORM     "RMIT MOTORSPORT"
#define MICROPY_HW_FLASH_FS_LABEL   "MOTORSPORT"

// This port is specifically for the PSHV-CTR controller in the RMIT MOTORSPORT Ancillary Power Supply.
// All unused peripherals and features are disabled to free up memory.
// The pyb library is not available - use machine.
// Note: CANbus is disabled because the CANbus driver is not available in machine library.
// pyb library for CANbus requires an STM32L452CET6 (512kB Flash) ot STM32L4P5CGT6 (1MB Flash).

#define MICROPY_EMIT_THUMB          (0)
#define MICROPY_EMIT_INLINE_THUMB   (0)
#define MICROPY_PY_BUILTINS_COMPLEX (0)
#define MICROPY_PY_GENERATOR_PEND_THROW (0)
#define MICROPY_PY_FRAMEBUF         (0) // 4KB.
#define MICROPY_PY_USOCKET          (0)
#define MICROPY_PY_NETWORK          (0)
#define MICROPY_PY_ONEWIRE          (0)
#define MICROPY_PY_STM              (0)
#define MICROPY_PY_PYB_LEGACY       (0)
#define MICROPY_PY_UHEAPQ           (0)
#define MICROPY_PY_UTIMEQ           (0)

#define MICROPY_HW_HAS_FLASH        (1)
#define MICROPY_HW_ENABLE_INTERNAL_FLASH_STORAGE (1)
#define MICROPY_HW_ENABLE_RTC       (0)
#define MICROPY_HW_ENABLE_ADC       (1)
#define MICROPY_HW_ENABLE_DAC       (0)
#define MICROPY_HW_ENABLE_USB       (1)
#define MICROPY_HW_ENABLE_TIMER     (1)
#define MICROPY_HW_HAS_SWITCH       (1)
#define MICROPY_HW_ENABLE_CAN       (0) // Approx 6KB.

// MSI is used. It is internal 4MHz medium accuracy RC oscillator.
// It is trimmed against the 32.768 kHz crystal with +/-0.25% accuracy.
// System Clock is 80 MHz.
#define MICROPY_HW_CLK_PLLM         (1)
#define MICROPY_HW_CLK_PLLN         (40) // Change to 40 for 80MHz.
#define MICROPY_HW_CLK_PLLR         (RCC_PLLR_DIV2) // SYSCLK = 4*1*40/2 = 80MHz.
#define MICROPY_HW_CLK_PLLP         (RCC_PLLP_DIV7)
#define MICROPY_HW_CLK_PLLQ         (RCC_PLLQ_DIV2)
#define MICROPY_HW_FLASH_LATENCY    FLASH_LATENCY_4

// The board has an external 32kHz crystal
#define MICROPY_HW_RTC_USE_LSE      (1)

// Most peripherals are disabled. They can be enabled using the formats below.

// UART config
//#define MICROPY_HW_UART3_NAME       "U-3"
//#define MICROPY_HW_UART3_TX         (pin_B10) // Unused pins.
//#define MICROPY_HW_UART3_RX         (pin_B11) // Unused pins.

//#define MICROPY_HW_LPUART1_NAME     "U-LP1"
//#define MICROPY_HW_LPUART1_TX       (pin_B11) // Unused pins.
//#define MICROPY_HW_LPUART1_RX       (pin_B10) // Unused pins.

// Enable to direct REPL to serial port, instead of USB.
//#define MICROPY_HW_UART_REPL        PYB_LPUART_1
//#define MICROPY_HW_UART_REPL_BAUD   115200

// I2C buses
//#define MICROPY_HW_I2C2_NAME        "I-2"
//#define MICROPY_HW_I2C2_SCL         (pin_B10) // Unused pins.
//#define MICROPY_HW_I2C2_SDA         (pin_B11) // Unused pins.

// SPI buses
//#define MICROPY_HW_SPI1_NAME        "S-1"
//#define MICROPY_HW_SPI1_NSS         (pin_A4) // Unused pins.
//#define MICROPY_HW_SPI1_SCK         (pin_A5) // Unused pins.
//#define MICROPY_HW_SPI1_MISO        (pin_A6) // Unused pins.
//#define MICROPY_HW_SPI1_MOSI        (pin_A7) // Unused pins.

// CAN busses
//#define MICROPY_HW_CAN1_NAME        "C-1"
//#define MICROPY_HW_CAN1_TX          (pin_B9)
//#define MICROPY_HW_CAN1_RX          (pin_B8)

// USRSW has no pullup or pulldown; it is active low and broken out on a header
#define MICROPY_HW_USRSW_PIN        (pin_C13)
#define MICROPY_HW_USRSW_PULL       (GPIO_PULLUP)
#define MICROPY_HW_USRSW_EXTI_MODE  (GPIO_MODE_IT_FALLING)
#define MICROPY_HW_USRSW_PRESSED    (0)

// PSHV-CTR has 3 on-board LEDs.
#define MICROPY_HW_LED1             (pin_A13) // red
#define MICROPY_HW_LED2             (pin_A14) // green
#define MICROPY_HW_LED3             (pin_H3)  // blue
#define MICROPY_HW_LED_OTYPE        (GPIO_MODE_OUTPUT_PP)
#define MICROPY_HW_LED_ON(pin)      (mp_hal_pin_high(pin))
#define MICROPY_HW_LED_OFF(pin)     (mp_hal_pin_low(pin))

// USB config
#define MICROPY_HW_USB_FS           (1)
