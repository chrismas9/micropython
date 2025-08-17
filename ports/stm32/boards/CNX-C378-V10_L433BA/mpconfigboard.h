#define MICROPY_HW_BOARD_NAME       "CNX-C378-V10_L433BA"
#define MICROPY_HW_MCU_NAME         "STM32L433"
#define MICROPY_PY_SYS_PLATFORM     "ConnexiDIP"
#define MICROPY_HW_FLASH_FS_LABEL   "CNXflash"

#define MICROPY_EMIT_THUMB          (0)
#define MICROPY_EMIT_INLINE_THUMB   (0)
#define MICROPY_PY_BUILTINS_COMPLEX (0)
#define MICROPY_PY_GENERATOR_PEND_THROW (0)
#define MICROPY_PY_FRAMEBUF         (0) // 4KB.
#define MICROPY_PY_USOCKET          (0)
#define MICROPY_PY_NETWORK          (0)
#define MICROPY_PY_ONEWIRE          (1)
#define MICROPY_PY_STM              (0)
#define MICROPY_PY_PYB_LEGACY       (0)
#define MICROPY_PY_UHEAPQ           (0)
#define MICROPY_PY_UTIMEQ           (0)

#define MICROPY_HW_HAS_FLASH        (1)
#define MICROPY_HW_ENABLE_INTERNAL_FLASH_STORAGE (1)
#define MICROPY_HW_ENABLE_RTC       (1)
#define MICROPY_HW_ENABLE_ADC       (1)
#define MICROPY_HW_ENABLE_DAC       (1)
#define MICROPY_HW_ENABLE_USB       (1)
#define MICROPY_HW_ENABLE_TIMER     (1)
#define MICROPY_HW_HAS_SWITCH       (1)
#define MICROPY_HW_ENABLE_CAN       (0) // Approx 6KB.
#define MICROPY_HW_ENABLE_HW_I2C_TARGET (1)

// MSI is used and is 4MHz
#define MICROPY_HW_CLK_PLLM (1)
#define MICROPY_HW_CLK_PLLN (40) // Change to 16 for 32MHz.
#define MICROPY_HW_CLK_PLLR (RCC_PLLR_DIV2) // SYSCLK = 4*1*40/2 = 80MHz.
#define MICROPY_HW_CLK_PLLP (RCC_PLLP_DIV7)
#define MICROPY_HW_CLK_PLLQ (RCC_PLLQ_DIV2)
#define MICROPY_HW_FLASH_LATENCY FLASH_LATENCY_4

// The board has an external 32kHz crystal
#define MICROPY_HW_RTC_USE_LSE      (1)
#define MICROPY_HW_RTC_USE_BYPASS   (1)
#define MICROPY_HW_RTC_USE_US       (0)
#define MICROPY_HW_RTC_USE_CALOUT   (0)

// Port naming convention.
// Ports are named after the first clock pin or first output pin if no clock.
// U = UART, I = I2C, S = SPI, C = CANbus.

// USART & UART config
#define MICROPY_HW_UART1_NAME   "U-H3"
#define MICROPY_HW_UART1_TX     (pin_A9)  // H3
#define MICROPY_HW_UART1_RX     (pin_A10) ///H4

#define MICROPY_HW_UART2_NAME   "U-B6"
#define MICROPY_HW_UART2_TX     (pin_A2)  // B6
#define MICROPY_HW_UART2_RX     (pin_A3)  // B7

#define MICROPY_HW_UART3_NAME   "U-H5"
#define MICROPY_HW_UART3_TX     (pin_B10)  // H5
#define MICROPY_HW_UART3_RX     (pin_B11)  // H6

#define MICROPY_HW_UART4_NAME   "U-B4"
#define MICROPY_HW_UART4_TX     (pin_A0)  // B4
#define MICROPY_HW_UART4_RX     (pin_A1)  // B5

// I2C busses
#define MICROPY_HW_I2C2_NAME "I-H5"
#define MICROPY_HW_I2C2_SCL (pin_B10) // H5
#define MICROPY_HW_I2C2_SDA (pin_B11) // H6

// SPI busses
#define MICROPY_HW_SPI1_NAME "S-H3"
#define MICROPY_HW_SPI1_NSS  (pin_A15) // H3
#define MICROPY_HW_SPI1_SCK  (pin_B3) // H4
#define MICROPY_HW_SPI1_MOSI (pin_B5) // H5
#define MICROPY_HW_SPI1_MISO (pin_B4) // H6

#define MICROPY_HW_SPI2_NAME "S-B5"
#define MICROPY_HW_SPI2_NSS  (pin_B12) // B4
#define MICROPY_HW_SPI2_SCK  (pin_B13) // B5
#define MICROPY_HW_SPI2_MOSI (pin_B15) // B6
#define MICROPY_HW_SPI2_MISO (pin_B14) // B7

// CAN busses
//#define MICROPY_HW_CAN1_NAME "C-H3"
//#define MICROPY_HW_CAN1_TX (pin_B9) // H3
//#define MICROPY_HW_CAN1_RX (pin_B8) // H4

// USRSW has no pullup or pulldown; it is active low and broken out on a header
#define MICROPY_HW_USRSW_PIN        (pin_C13)
#define MICROPY_HW_USRSW_PULL       (GPIO_PULLUP)
#define MICROPY_HW_USRSW_EXTI_MODE  (GPIO_MODE_IT_FALLING)
#define MICROPY_HW_USRSW_PRESSED    (0)

#define MICROPY_HW_LED1             (pin_H1) // red
#define MICROPY_HW_LED2             (pin_H0) // green
#define MICROPY_HW_LED3             (pin_H3) // blue
#define MICROPY_HW_LED_ON(pin)      (mp_hal_pin_high(pin))
#define MICROPY_HW_LED_OFF(pin)     (mp_hal_pin_low(pin))

// USB config
#define MICROPY_HW_USB_FS           (1)
