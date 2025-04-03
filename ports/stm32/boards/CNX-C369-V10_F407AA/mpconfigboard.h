#define MICROPY_HW_BOARD_NAME       "CNX-C369-V10_F407AA"
#define MICROPY_HW_MCU_NAME         "STM32F407VG"
#define MICROPY_PY_SYS_PLATFORM     "ConnexiDIP"
#define MICROPY_HW_FLASH_FS_LABEL   "CNXflash"

#define MICROPY_HW_USB_FS           (1)
#define MICROPY_HW_HAS_SWITCH       (1)
#define MICROPY_HW_HAS_FLASH        (1)
#define MICROPY_HW_HAS_SDCARD       (0)
#define MICROPY_HW_HAS_MMA7660      (0)
#define MICROPY_HW_HAS_LCD          (0)
#define MICROPY_HW_ENABLE_RNG       (1)
#define MICROPY_HW_ENABLE_RTC       (1)
#define MICROPY_HW_ENABLE_SERVO     (0)
#define MICROPY_HW_ENABLE_DAC       (1)
#define MICROPY_HW_ENABLE_USB       (1)
//#define MICROPY_HW_ENABLE_CAN       (1)

// HSE is 12MHz
#define MICROPY_HW_CLK_USE_HSE   (1)
#define MICROPY_HW_CLK_PLLM (12)
#define MICROPY_HW_CLK_PLLN (336)
#define MICROPY_HW_CLK_PLLP (RCC_PLLP_DIV2)
#define MICROPY_HW_CLK_PLLQ (7)
#define MICROPY_HW_CLK_LAST_FREQ (1)

// The board has a 32kHz crystal for the RTC
#define MICROPY_HW_RTC_USE_LSE      (1)

// UART config
#define MICROPY_HW_UART1_NAME   "U-L3"
#define MICROPY_HW_UART1_TX     (pin_A9)  // L3
#define MICROPY_HW_UART1_RX     (pin_A10) ///L4

#define MICROPY_HW_UART2_NAME   "U-B4"
#define MICROPY_HW_UART2_TX     (pin_D5)  // B4
#define MICROPY_HW_UART2_RX     (pin_A3)  // B5

#define MICROPY_HW_UART4_NAME   "U-B14"
#define MICROPY_HW_UART4_TX     (pin_A0)  // B14
#define MICROPY_HW_UART4_RX     (pin_C11)  // B15

#define MICROPY_HW_UART6_NAME   "U-L11"
#define MICROPY_HW_UART6_TX     (pin_C6)  // L11
#define MICROPY_HW_UART6_RX     (pin_C7)  // L12

// I2C busses
#define MICROPY_HW_I2C1_NAME "I-L5"
#define MICROPY_HW_I2C1_SCL (pin_B6) // L5
#define MICROPY_HW_I2C1_SDA (pin_B7) // L6

#define MICROPY_HW_I2C3_NAME "I-L11"
#define MICROPY_HW_I2C3_SCL (pin_A8) // L11
#define MICROPY_HW_I2C3_SDA (pin_C9) // L12

// SPI busses
#define MICROPY_HW_SPI1_NAME "S-L8"
#define MICROPY_HW_SPI1_NSS  (pin_B9) // L7
#define MICROPY_HW_SPI1_SCK  (pin_B10) // L8
#define MICROPY_HW_SPI1_MOSI (pin_B14) // L9
#define MICROPY_HW_SPI1_MISO (pin_B15) // L10

#define MICROPY_HW_SPI2_NAME "S-HL4"
#define MICROPY_HW_SPI2_NSS  (pin_A15) // L13
#define MICROPY_HW_SPI2_SCK  (pin_B3) // L14
#define MICROPY_HW_SPI2_MOSI (pin_B4) // L15
#define MICROPY_HW_SPI2_MISO (pin_C12) // L16

// CAN busses
//#define MICROPY_HW_CAN1_NAME "YA" // CAN1 on RX,TX = Y3,Y4 = PB8,PB9
//#define MICROPY_HW_CAN2_NAME "YB" // CAN2 on RX,TX = Y5,Y6 = PB12,PB13

// USRSW has no pullup or pulldown; it is active low and broken out on a header
#define MICROPY_HW_USRSW_PIN        (pin_C13)
#define MICROPY_HW_USRSW_PULL       (GPIO_PULLUP)
#define MICROPY_HW_USRSW_EXTI_MODE  (GPIO_MODE_IT_FALLING)
#define MICROPY_HW_USRSW_PRESSED    (0)

// Connexi has 3 LEDs
#define MICROPY_HW_LED1             (pin_D6) // red
#define MICROPY_HW_LED2             (pin_D7) // green
#define MICROPY_HW_LED3             (pin_D10)  // yellow
#define MICROPY_HW_LED4             (pin_D11)  // blue
#define MICROPY_HW_LED_OTYPE        (GPIO_MODE_OUTPUT_PP)
#define MICROPY_HW_LED_ON(pin)      (mp_hal_pin_high(pin))
#define MICROPY_HW_LED_OFF(pin)     (mp_hal_pin_low(pin))

// SD card detect switch
//#define MICROPY_HW_SDCARD_DETECT_PIN        (pin_A8)
//#define MICROPY_HW_SDCARD_DETECT_PULL       (GPIO_PULLUP)
//#define MICROPY_HW_SDCARD_DETECT_PRESENT    (GPIO_PIN_RESET)

// USB config
#define MICROPY_HW_USB_FS              (1)
//#define MICROPY_HW_USB_VBUS_DETECT_PIN (pin_A9)
//#define MICROPY_HW_USB_OTG_ID_PIN      (pin_A10)
