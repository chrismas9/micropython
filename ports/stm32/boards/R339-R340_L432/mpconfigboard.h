#define MICROPY_HW_BOARD_NAME       "R339V-R340V_L432"
#define MICROPY_HW_MCU_NAME         "STM32L432KC"
#define MICROPY_PY_SYS_PLATFORM     "Rail Technology"
#define MICROPY_HW_FLASH_FS_LABEL   "RTIflash"

#define MICROPY_EMIT_THUMB          (0)
#define MICROPY_EMIT_INLINE_THUMB   (0)
#define MICROPY_PY_BUILTINS_COMPLEX (0)
#define MICROPY_PY_GENERATOR_PEND_THROW (0)
#define MICROPY_PY_FRAMEBUF         (0) // 4KB.
#define MICROPY_PY_USOCKET          (0)
#define MICROPY_PY_NETWORK          (0)
#define MICROPY_PY_ONEWIRE          (0)
#define MICROPY_PY_STM              (0)
#define MICROPY_PY_PYB_LEGACY       (1)
#define MICROPY_PY_UHEAPQ           (0)
#define MICROPY_PY_UTIMEQ           (0)

#define MICROPY_HW_HAS_FLASH        (1)
#define MICROPY_HW_ENABLE_INTERNAL_FLASH_STORAGE (1)
#define MICROPY_HW_ENABLE_RTC       (1)
#define MICROPY_HW_ENABLE_ADC       (1)
#define MICROPY_HW_ENABLE_DAC       (1)
#define MICROPY_HW_ENABLE_USB       (0)
#define MICROPY_HW_ENABLE_TIMER     (1)
#define MICROPY_HW_HAS_SWITCH       (1)
#define MICROPY_HW_ENABLE_CAN       (0) // Approx 6KB.

// MSI is used and is 4MHz
#define MICROPY_HW_CLK_PLLM (1)
#define MICROPY_HW_CLK_PLLN (40) // Change to 16 for 32MHz.
#define MICROPY_HW_CLK_PLLR (RCC_PLLR_DIV2) // SYSCLK = 4*1*40/2 = 80MHz.
#define MICROPY_HW_CLK_PLLP (RCC_PLLP_DIV7)
#define MICROPY_HW_CLK_PLLQ (RCC_PLLQ_DIV2)
#define MICROPY_HW_FLASH_LATENCY    FLASH_LATENCY_4

// The board has an external 32kHz crystal
#define MICROPY_HW_RTC_USE_BYPASS   (1)

// UART config
#define MICROPY_HW_UART1_NAME   "U-H3"
#define MICROPY_HW_UART1_TX     (pin_A9)
#define MICROPY_HW_UART1_RX     (pin_A10)


#define MICROPY_HW_UART_REPL        PYB_UART_1
#define MICROPY_HW_UART_REPL_BAUD   115200

// I2C buses
#define MICROPY_HW_I2C1_NAME "I-H5"
#define MICROPY_HW_I2C1_SCL (pin_B6)
#define MICROPY_HW_I2C1_SDA (pin_B7)

// SPI buses
#define MICROPY_HW_SPI1_NAME "SPI"
#define MICROPY_HW_SPI1_NSS     (pin_A4)
#define MICROPY_HW_SPI1_SCK     (pin_A5)
#define MICROPY_HW_SPI1_MISO    (pin_A6)
#define MICROPY_HW_SPI1_MOSI    (pin_A7)

// USRSW has no pullup or pulldown; it is active low and broken out on a header
#define MICROPY_HW_USRSW_PIN        (pin_A15)
#define MICROPY_HW_USRSW_PULL       (GPIO_PULLUP)
#define MICROPY_HW_USRSW_EXTI_MODE  (GPIO_MODE_IT_FALLING)
#define MICROPY_HW_USRSW_PRESSED    (0)

// Connexi has 3 LEDs
#define MICROPY_HW_LED1             (pin_H3) // red
#define MICROPY_HW_LED2             (pin_A14) // green
#define MICROPY_HW_LED3             (pin_A13)  // blue
#define MICROPY_HW_LED_OTYPE        (GPIO_MODE_OUTPUT_PP)
#define MICROPY_HW_LED_ON(pin)      (mp_hal_pin_high(pin))
#define MICROPY_HW_LED_OFF(pin)     (mp_hal_pin_low(pin))
