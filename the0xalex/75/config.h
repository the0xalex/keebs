#pragma once

// External spi flash
#define EXTERNAL_FLASH_SPI_SLAVE_SELECT_PIN C4

// SPI Config for LED Driver
#define SPI_DRIVER SPIDQ
#define SPI_SCK_PIN A5
#define SPI_MOSI_PIN A7
#define SPI_MISO_PIN A6

#define AW20216S_CS_PIN_1 C5
#define AW20216S_CS_PIN_2 B11
#define AW20216S_EN_PIN   C13

#define DRIVER_1_LED_TOTAL (67)
#define DRIVER_2_LED_TOTAL (59)
#define RGB_MATRIX_LED_COUNT (DRIVER_1_LED_TOTAL + DRIVER_2_LED_TOTAL)

/*#define DIP_SWITCH_PINS { A13 } */ // TODO: Add dip switches
