/*#define MICROPY_BOARD_EARLY_INIT    STM32L476DISC_board_early_init
void STM32L476DISC_board_early_init(void);
*/

#define MICROPY_HW_BOARD_NAME       "CNX-DIP40-L496AA"
#define MICROPY_HW_MCU_NAME         "STM32L496"
#define MICROPY_PY_SYS_PLATFORM     "ConnexiDIP"
#define MICROPY_HW_FLASH_FS_LABEL   "CNXflash"

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
#define MICROPY_HW_ENABLE_CAN       (1)
#define MICROPY_HW_HAS_SDCARD       (0)

// use external SPI flash for storage
/*#define MICROPY_HW_SPIFLASH_SIZE_BITS (128 * 1024 * 1024)
#define MICROPY_HW_SPIFLASH_CS      (pin_D2)
#define MICROPY_HW_SPIFLASH_SCK     (pin_C10)
#define MICROPY_HW_SPIFLASH_MOSI    (pin_C12)
#define MICROPY_HW_SPIFLASH_MISO    (pin_C11)

// block device config for SPI flash
extern const struct _mp_spiflash_config_t spiflash_config;
extern struct _spi_bdev_t spi_bdev;
#define MICROPY_HW_BDEV_IOCTL(op, arg) ( \
    (op) == BDEV_IOCTL_NUM_BLOCKS ? (MICROPY_HW_SPIFLASH_SIZE_BITS / 8 / FLASH_BLOCK_SIZE) : \
    (op) == BDEV_IOCTL_INIT ? spi_bdev_ioctl(&spi_bdev, (op), (uint32_t)&spiflash_config) : \
    spi_bdev_ioctl(&spi_bdev, (op), (arg)) \
)
#define MICROPY_HW_BDEV_READBLOCKS(dest, bl, n) spi_bdev_readblocks(&spi_bdev, (dest), (bl), (n))
#define MICROPY_HW_BDEV_WRITEBLOCKS(src, bl, n) spi_bdev_writeblocks(&spi_bdev, (src), (bl), (n))
*/

// MSI is used and is 4MHz. MCU clock is 80MHz.
#define MICROPY_HW_CLK_PLLM (1)
#define MICROPY_HW_CLK_PLLN (40)
#define MICROPY_HW_CLK_PLLP (RCC_PLLP_DIV7)
#define MICROPY_HW_CLK_PLLR (RCC_PLLR_DIV2)
#define MICROPY_HW_CLK_PLLQ (RCC_PLLQ_DIV2)

// The board has an external 32kHz crystal
#define MICROPY_HW_RTC_USE_LSE      (1)

#define MICROPY_HW_FLASH_LATENCY    FLASH_LATENCY_4
// USART & UART config
#define MICROPY_HW_UART1_NAME   "U-H3"
#define MICROPY_HW_UART1_TX     (pin_A9)  // H3
#define MICROPY_HW_UART1_RX     (pin_A10) ///H4

#define MICROPY_HW_UART2_NAME   "U-B4"
#define MICROPY_HW_UART2_TX     (pin_A2)  // B4
#define MICROPY_HW_UART2_RX     (pin_A3)  // B5

#define MICROPY_HW_UART3_NAME   "U-H11"
#define MICROPY_HW_UART3_TX     (pin_B10)  // H11
#define MICROPY_HW_UART3_RX     (pin_B11)  // H12

#define MICROPY_HW_UART4_NAME   "U-B14"
#define MICROPY_HW_UART4_TX     (pin_A0)  // B14
#define MICROPY_HW_UART4_RX     (pin_A1)  // B15

// I2C busses
#define MICROPY_HW_I2C1_NAME "I-H5"
#define MICROPY_HW_I2C1_SCL (pin_B6) // H5
#define MICROPY_HW_I2C1_SDA (pin_B7) // H6
#define MICROPY_HW_I2C2_NAME "I-H11"
#define MICROPY_HW_I2C2_SCL (pin_B10) // H11
#define MICROPY_HW_I2C2_SDA (pin_B11) // H12

// SPI busses
#define MICROPY_HW_SPI1_NAME "S-H8"
#define MICROPY_HW_SPI1_NSS  (pin_A15) // H7
#define MICROPY_HW_SPI1_SCK  (pin_B3) // H8
#define MICROPY_HW_SPI1_MOSI (pin_B5) // H9
#define MICROPY_HW_SPI1_MISO (pin_B4) // H10

#define MICROPY_HW_SPI2_NAME "S-H14"
// #define MICROPY_HW_SPI2_NSS  (pin_C8) // H13 MASTER ONLY
#define MICROPY_HW_SPI2_SCK  (pin_B13) // H14
#define MICROPY_HW_SPI2_MOSI (pin_C3) // H15
#define MICROPY_HW_SPI2_MISO (pin_C2) // H16

// CAN busses
#define MICROPY_HW_CAN1_NAME "C-H3"
#define MICROPY_HW_CAN1_TX (pin_B9) // H3
#define MICROPY_HW_CAN1_RX (pin_B8) // H4

// USRSW has no pullup or pulldown; it is active low and broken out on a header
#define MICROPY_HW_USRSW_PIN        (pin_C13)
#define MICROPY_HW_USRSW_PULL       (GPIO_PULLUP)
#define MICROPY_HW_USRSW_EXTI_MODE  (GPIO_MODE_IT_FALLING)
#define MICROPY_HW_USRSW_PRESSED    (0)

// Board has 3 LEDs
#define MICROPY_HW_LED1             (pin_A8) // red
#define MICROPY_HW_LED2             (pin_C9) // green
#define MICROPY_HW_LED3             (pin_B2) // blue
#define MICROPY_HW_LED_ON(pin)      (mp_hal_pin_high(pin))
#define MICROPY_HW_LED_OFF(pin)     (mp_hal_pin_low(pin))

// USB config
#define MICROPY_HW_USB_FS (1)
