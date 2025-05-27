#define MICROPY_HW_BOARD_NAME       "MG205"
#define MICROPY_HW_MCU_NAME         "STM32L452CE"
#define MICROPY_PY_SYS_PLATFORM     "terraTEM24"
#define MICROPY_HW_FLASH_FS_LABEL   "MonexGeo"

#define MICROPY_HW_HAS_FLASH        (1)
#define MICROPY_HW_ENABLE_INTERNAL_FLASH_STORAGE (1)
#define MICROPY_HW_HAS_SWITCH       (1)
#define MICROPY_HW_ENABLE_RNG       (1)
#define MICROPY_HW_ENABLE_RTC       (1)
#define MICROPY_HW_ENABLE_TIMER     (1)
#define MICROPY_HW_ENABLE_SERVO     (0)
#define MICROPY_HW_ENABLE_USB       (1)
#define MICROPY_HW_ENABLE_ADC       (1)
#define MICROPY_HW_ENABLE_DAC       (1)
#define MICROPY_HW_ENABLE_CAN       (0)
#define MICROPY_HW_HAS_SDCARD       (0)

#define MICROPY_HW_CLK_USE_HSE   (1)
#define MICROPY_HW_CLK_USE_BYPASS   (1) // HSE comes from external 10 MHz oscillator..
// System clock = 10 * 16 /2 = 80 MHz.
#define MICROPY_HW_CLK_PLLM (1)
#define MICROPY_HW_CLK_PLLN (16)
#define MICROPY_HW_CLK_PLLP (RCC_PLLP_DIV7)
#define MICROPY_HW_CLK_PLLR (RCC_PLLR_DIV2)
#define MICROPY_HW_CLK_PLLQ (RCC_PLLQ_DIV2)
#define MICROPY_HW_CLK_PLLSAIN (29) // NOTE: USB frequency is 48.333 MHz which is out of spec. Should be < 48.125 MHz.
#define MICROPY_HW_CLK_PLLSAIP (2)
#define MICROPY_HW_CLK_PLLSAIQ (6)
#define MICROPY_HW_CLK_PLLSAIR (2)


// The board has an external 32kHz oscillator
#define MICROPY_HW_RTC_USE_BYPASS           (1)

#define MICROPY_HW_FLASH_LATENCY    FLASH_LATENCY_4
// USART & UART config
#define MICROPY_HW_UART1_NAME   "U-H3"
#define MICROPY_HW_UART1_TX     (pin_A9)  // H3
#define MICROPY_HW_UART1_RX     (pin_A10) ///H4

#define MICROPY_HW_UART3_NAME   "U-DBG"
#define MICROPY_HW_UART3_TX     (pin_B10)  // Debug Header
#define MICROPY_HW_UART3_RX     (pin_B11)  // Debug Header

// USART3 is REPL port on debug connector.
// #define MICROPY_HW_UART_REPL        PYB_UART_3
// #define MICROPY_HW_UART_REPL_BAUD   115200

// I2C busses

// SPI busses

// CAN busses

// USRSW has no pullup or pulldown; it is active low and broken out on a header
#define MICROPY_HW_USRSW_PIN        (pin_C13)
#define MICROPY_HW_USRSW_PULL       (GPIO_PULLUP)
#define MICROPY_HW_USRSW_EXTI_MODE  (GPIO_MODE_IT_FALLING)
#define MICROPY_HW_USRSW_PRESSED    (0)

// Board has 3 LEDs
#define MICROPY_HW_LED1             (pin_B0) // red. Requires a jumper from the Flash chip since PH3 is not a GPIO on L476.
#define MICROPY_HW_LED2             (pin_A14) // green
#define MICROPY_HW_LED3             (pin_A13) // blue
#define MICROPY_HW_LED_ON(pin)      (mp_hal_pin_high(pin))
#define MICROPY_HW_LED_OFF(pin)     (mp_hal_pin_low(pin))

// USB config
#define MICROPY_HW_USB_FS (1)
