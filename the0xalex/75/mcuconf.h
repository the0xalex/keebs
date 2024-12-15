#pragma once

#include_next <mcuconf.h>

#undef WB32_SPI_USE_QSPI
#define WB32_SPI_USE_QSPI TRUE

#undef WB32_SPI_USE_SPIM2
#define WB32_SPI_USE_SPIM2 TRUE
