#define MICROPY_HW_BOARD_NAME       "QFN48-L452CE"
#define MICROPY_HW_MCU_NAME         "STM32L452"
#define MICROPY_PY_SYS_PLATFORM     "Connexi"
#define MICROPY_HW_FLASH_FS_LABEL   "CNXflash"

#define MICROPY_HW_HAS_FLASH        (1)
#define MICROPY_HW_HAS_SWITCH       (1)
#define MICROPY_HW_ENABLE_RNG       (1)
#define MICROPY_HW_ENABLE_RTC       (1)
#define MICROPY_HW_ENABLE_TIMER     (1)
#define MICROPY_HW_ENABLE_SERVO     (0) // SERVO requires TIM5 (not on L452).
#define MICROPY_HW_ENABLE_USB       (1)
#define MICROPY_HW_ENABLE_ADC       (1)
#define MICROPY_HW_ENABLE_DAC       (1)
#define MICROPY_HW_ENABLE_CAN       (1)
#define MICROPY_HW_ENABLE_SDCARD    (0)

// MSI is used and is 4MHz. MCU clock is 80MHz.
#define MICROPY_HW_CLK_PLLM (1)
#define MICROPY_HW_CLK_PLLN (40)
#define MICROPY_HW_CLK_PLLP (RCC_PLLP_DIV7)
#define MICROPY_HW_CLK_PLLQ (RCC_PLLQ_DIV2)
#define MICROPY_HW_CLK_PLLR (RCC_PLLR_DIV2)
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
#define MICROPY_HW_UART1_NAME   "UART1"
#define MICROPY_HW_UART1_TX     (pin_A9)
#define MICROPY_HW_UART1_RX     (pin_A10)

#define MICROPY_HW_UART2_NAME   "UART2"
#define MICROPY_HW_UART2_TX     (pin_A2)
#define MICROPY_HW_UART2_RX     (pin_A3)

#define MICROPY_HW_UART3_NAME   "UART3"
#define MICROPY_HW_UART3_TX     (pin_B10)
#define MICROPY_HW_UART3_RX     (pin_B11)

#define MICROPY_HW_UART4_NAME   "UART4"
#define MICROPY_HW_UART4_TX     (pin_A0)
#define MICROPY_HW_UART4_RX     (pin_A1)

// I2C busses
#define MICROPY_HW_I2C1_NAME "I2C1"
#define MICROPY_HW_I2C1_SCL (pin_B6)
#define MICROPY_HW_I2C1_SDA (pin_B7)

#define MICROPY_HW_I2C2_NAME "I2C2"
#define MICROPY_HW_I2C2_SCL (pin_B10)
#define MICROPY_HW_I2C2_SDA (pin_B11)

// SPI busses
#define MICROPY_HW_SPI1_NAME "SPI1"
#define MICROPY_HW_SPI1_NSS  (pin_A15)
#define MICROPY_HW_SPI1_SCK  (pin_B3)
#define MICROPY_HW_SPI1_MOSI (pin_B5)
#define MICROPY_HW_SPI1_MISO (pin_B4)

#define MICROPY_HW_SPI2_NAME "SPI2"
#define MICROPY_HW_SPI2_NSS  (pin_B12)
#define MICROPY_HW_SPI2_SCK  (pin_B13)
#define MICROPY_HW_SPI2_MOSI (pin_B15)
#define MICROPY_HW_SPI2_MISO (pin_B14)

// CAN busses
#define MICROPY_HW_CAN1_NAME "CAN1"
#define MICROPY_HW_CAN1_TX (pin_B9)
#define MICROPY_HW_CAN1_RX (pin_B8)

// USRSW has no pullup or pulldown; it is active low and broken out on a header
#define MICROPY_HW_USRSW_PIN        (pin_C13)
#define MICROPY_HW_USRSW_PULL       (GPIO_PULLUP)
#define MICROPY_HW_USRSW_EXTI_MODE  (GPIO_MODE_IT_FALLING)
#define MICROPY_HW_USRSW_PRESSED    (0)

#define MICROPY_HW_LED1             (pin_H3) // red
#define MICROPY_HW_LED2             (pin_A14) // green
#define MICROPY_HW_LED3             (pin_A13) // blue
#define MICROPY_HW_LED_ON(pin)      (mp_hal_pin_high(pin))
#define MICROPY_HW_LED_OFF(pin)     (mp_hal_pin_low(pin))

// USB config
#define MICROPY_HW_USB_FS           (1)
