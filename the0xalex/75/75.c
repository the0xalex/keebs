#include "quantum.h"

#ifdef RGB_MATRIX_ENABLE
#define __ NO_LED

/* See https://docs.qmk.fm/drivers/aw20216s for driver info
 *   driver
 *   |     R Register
 *   |     |          G Register
 *   |     |          |          B Register
 *   |     |          |          | */
const aw20216s_led_t PROGMEM g_aw20216s_leds[AW20216S_LED_COUNT] = {
    {0, SW1_CS1, SW1_CS2, SW1_CS3},        // 0 ESC
    {0, SW2_CS1, SW2_CS2, SW2_CS3},        // 1 F1
    {0, SW3_CS1, SW3_CS2, SW3_CS3},        // 2 F2
    {0, SW4_CS1, SW4_CS2, SW4_CS3},        // 3 F3
    {0, SW5_CS1, SW5_CS2, SW5_CS3},        // 4 F4
    {0, SW6_CS1, SW6_CS2, SW6_CS3},        // 5 F5
    {0, SW7_CS1, SW7_CS2, SW7_CS3},        // 6 F6
    {0, SW8_CS1, SW8_CS2, SW8_CS3},        // 7 F7
    {0, SW9_CS1, SW9_CS2, SW9_CS3},        // 8 F8
    {0, SW10_CS1, SW10_CS2, SW10_CS3},     // 9 F9
    {0, SW11_CS1, SW11_CS2, SW11_CS3},     // 10 F10
    {0, SW12_CS1, SW12_CS2, SW12_CS3},     // 11 F11
    {1, SW1_CS1, SW1_CS2, SW1_CS3},        // 12 F12

    {0, SW1_CS4, SW1_CS5, SW1_CS6},        // 13 ~
    {0, SW2_CS4, SW2_CS5, SW2_CS6},        // 14 1
    {0, SW3_CS4, SW3_CS5, SW3_CS6},        // 15 2
    {0, SW4_CS4, SW4_CS5, SW4_CS6},        // 16 3
    {0, SW5_CS4, SW5_CS5, SW5_CS6},        // 17 4
    {0, SW6_CS4, SW6_CS5, SW6_CS6},        // 18 5
    {0, SW7_CS4, SW7_CS5, SW7_CS6},        // 19 6
    {0, SW8_CS4, SW8_CS5, SW8_CS6},        // 20 7
    {0, SW9_CS4, SW9_CS5, SW9_CS6},        // 21 8
    {0, SW10_CS4, SW10_CS5, SW10_CS6},     // 22 9
    {0, SW11_CS4, SW11_CS5, SW11_CS6},     // 23 0
    {0, SW12_CS4, SW12_CS5, SW12_CS6},     // 24 -
    {1, SW5_CS1, SW5_CS2, SW5_CS3},        // 25 =
    {1, SW7_CS1, SW7_CS2, SW7_CS3},        // 26 BS
    {1, SW3_CS4, SW3_CS5, SW3_CS6},        // 27 Delete

    {0, SW1_CS7, SW1_CS8, SW1_CS9},        // 28 TAB
    {0, SW2_CS7, SW2_CS8, SW2_CS9},        // 29 Q
    {0, SW3_CS7, SW3_CS8, SW3_CS9},        // 30 W
    {0, SW4_CS7, SW4_CS8, SW4_CS9},        // 31 E
    {0, SW5_CS7, SW5_CS8, SW5_CS9},        // 32 R
    {0, SW6_CS7, SW6_CS8, SW6_CS9},        // 33 T
    {0, SW7_CS7, SW7_CS8, SW7_CS9},        // 34 Y
    {0, SW8_CS7, SW8_CS8, SW8_CS9},        // 35 U
    {0, SW9_CS7, SW9_CS8, SW9_CS9},        // 36 I
    {0, SW10_CS7, SW10_CS8, SW10_CS9},     // 37 O
    {0, SW11_CS7, SW11_CS8, SW11_CS9},     // 38 P
    {0, SW12_CS7, SW12_CS8, SW12_CS9},     // 39 [
    {1, SW8_CS1, SW8_CS2, SW8_CS3},        // 40 ]
    {1, SW9_CS1, SW9_CS2, SW9_CS3},        // 41 (\)
    {1, SW4_CS4, SW4_CS5, SW4_CS6},        // 42 PGUP

    {0, SW1_CS10, SW1_CS11, SW1_CS12},     // 43 CAPS
    {0, SW2_CS10, SW2_CS11, SW2_CS12},     // 44 A
    {0, SW3_CS10, SW3_CS11, SW3_CS12},     // 45 S
    {0, SW4_CS10, SW4_CS11, SW4_CS12},     // 46 D
    {0, SW5_CS10, SW5_CS11, SW5_CS12},     // 47 F
    {0, SW6_CS10, SW6_CS11, SW6_CS12},     // 48 G
    {0, SW7_CS10, SW7_CS11, SW7_CS12},     // 49 H
    {0, SW8_CS10, SW8_CS11, SW8_CS12},     // 50 J
    {0, SW9_CS10, SW9_CS11, SW9_CS12},     // 51 K
    {0, SW10_CS10, SW10_CS11, SW10_CS12},  // 52 L
    {0, SW11_CS10, SW11_CS11, SW11_CS12},  // 53 ;
    {0, SW12_CS10, SW12_CS11, SW12_CS12},  // 54 '
    {1, SW11_CS1, SW11_CS2, SW11_CS3},     // 55 ENTER
    {1, SW7_CS4, SW7_CS5, SW7_CS6},        // 56 PGDN

    {0, SW1_CS13, SW1_CS14, SW1_CS15},     // 57 L_SHIFT
    {0, SW2_CS13, SW2_CS14, SW2_CS15},     // 58 Z
    {0, SW3_CS13, SW3_CS14, SW3_CS15},     // 59 X
    {0, SW4_CS13, SW4_CS14, SW4_CS15},     // 60 C
    {0, SW5_CS13, SW5_CS14, SW5_CS15},     // 61 V
    {0, SW6_CS13, SW6_CS14, SW6_CS15},     // 62 B
    {0, SW7_CS13, SW7_CS14, SW7_CS15},     // 63 N
    {0, SW8_CS13, SW8_CS14, SW8_CS15},     // 64 M
    {0, SW9_CS13, SW9_CS14, SW9_CS15},     // 65 ,
    {0, SW10_CS13, SW10_CS14, SW10_CS15},  // 66 .
    {0, SW11_CS13, SW11_CS14, SW11_CS15},  // 67 /
    {1, SW8_CS4, SW8_CS5, SW8_CS6},        // 68 R_SHIFT
    {1, SW9_CS4, SW9_CS5, SW9_CS6},        // 69 UP
    {1, SW2_CS1, SW2_CS2, SW2_CS3},        // 70 End

    {0, SW1_CS16, SW1_CS17, SW1_CS18},     // 71 L_CTRL
    {0, SW2_CS16, SW2_CS17, SW2_CS18},     // 72 L_WIN
    {0, SW3_CS16, SW3_CS17, SW3_CS18},     // 73 L_ALT
    {0, SW6_CS16, SW6_CS17, SW6_CS18},     // 74 SPACE
    {0, SW9_CS16, SW9_CS17, SW9_CS18},     // 75 R_ALT
    {0, SW10_CS16, SW10_CS17, SW10_CS18},  // 76 FN
    {1, SW10_CS4, SW10_CS5, SW10_CS6},     // 77 LEFT
    {1, SW11_CS4, SW11_CS5, SW11_CS6},     // 78 DOWN
    {1, SW5_CS10, SW5_CS11, SW5_CS12},     // 79 RIGHT

    {1, SW1_CS13, SW1_CS14, SW1_CS15},     // 80 SLED1
    {1, SW2_CS13, SW2_CS14, SW2_CS15},     // 81 SLED2
    {1, SW3_CS13, SW3_CS14, SW3_CS15},     // 82 SLED3
    {1, SW4_CS13, SW4_CS14, SW4_CS15},     // 83 SLED4
    {1, SW5_CS13, SW5_CS14, SW5_CS15},     // 84 SLED5
    {1, SW6_CS13, SW6_CS14, SW6_CS15},     // 85 SLED6
    {1, SW7_CS13, SW7_CS14, SW7_CS15},     // 86 SLED7
    {1, SW8_CS13, SW8_CS14, SW8_CS15},     // 87 SLED8
    {1, SW9_CS13, SW9_CS14, SW9_CS15},     // 88 SLED9
    {1, SW10_CS13, SW10_CS14, SW10_CS15},  // 89 SLED10

    {1, SW1_CS16, SW1_CS17, SW1_CS18},     // 90 SLED11
    {1, SW2_CS16, SW2_CS17, SW2_CS18},     // 91 SLED12
    {1, SW3_CS16, SW3_CS17, SW3_CS18},     // 92 SLED13
    {1, SW4_CS16, SW4_CS17, SW4_CS18},     // 93 SLED14
    {1, SW5_CS16, SW5_CS17, SW5_CS18},     // 94 SLED15
    {1, SW6_CS16, SW6_CS17, SW6_CS18},     // 95 SLED16
    {1, SW7_CS16, SW7_CS17, SW7_CS18},     // 96 SLED17
    {1, SW8_CS16, SW8_CS17, SW8_CS18},     // 97 SLED18
    {1, SW9_CS16, SW9_CS17, SW9_CS18},     // 98 SLED19
    {1, SW10_CS16, SW10_CS17, SW10_CS18},  // 99 SLED20

    {1, SW10_CS1, SW10_CS2, SW10_CS3},     // 100 LOGO / Indicator
};

led_config_t g_led_config = {
    {
        { 57, __, __, 77, __, 79, 71, 5},
        { 29, 28, 44, 0,  58, 42, 13, 14},
        { 30, 43, 45, __, 59, 56, 1,  15},
        { 31, 3,  46, 4,  60, 69, 2,  16},
        { 32, 33, 47, 48, 61, 62, 18, 17},
        { 35, 34, 50, 49, 64, 63, 19, 20},
        { 36, 40, 51, 6,  65, 27, 25, 21},
        { 37, 7,  52, 78, 66, __, 8,  22},
        { 38, 39, 53, 54, __, 67, 24, 23},
        { 72, 68, 76, 73, 74, 75, __, __},
        { __, 26, 41, 11, 55, 12, 9,  10},
        { __, __, __, __, __, __, __, __},
        { __, __, __, __, __, __, 70, __},
        { __, __, __, __, __, __, __, __},
    },
    {
        {0,0},   {18,0}, {33,0}, {48,0}, {63,0},   {81,0}, {96,0}, {111,0}, {126,0},   {144,0}, {159,0}, {174,0}, {189,0},
        {0,15}, {15,15}, {30,15}, {45,15}, {60,15}, {75,15}, {90,15}, {105,15}, {120,15}, {135,15}, {150,15}, {165,15}, {180,15},   {202,15}, {224,15},
        {4,27},   {19,27}, {34,27}, {49,27}, {64,27}, {79,27}, {94,27}, {109,27}, {124,27}, {139,27}, {154,27}, {169,27}, {184,27}, {204,27}, {224,27},
        {8,40},     {23,40}, {38,40}, {53,40}, {68,40}, {83,40}, {98,40}, {113,40}, {128,40}, {143,40}, {158,40}, {173,40},         {199,40}, {224,40},
        {15,52},      {30,52}, {45,52}, {60,52}, {75,52}, {90,52}, {105,52}, {120,52}, {135,52}, {150,52}, {165,52},  {182,52},     {210,52}, {224,52},
        {1,64}, {19,64}, {37,64},                           {92,64},                             {148,64}, {167,64},      {195,64}, {210,64}, {224,64},
        // Left and right side lights
        {0, 15},  {0, 20},  {0, 25},  {0, 30},  {0, 35},  {0, 40},  {0, 45},  {0, 50},  {0, 55},  {0, 60},
        {224, 15},  {224, 20},  {224, 25},  {224, 30},  {224, 35},  {224, 40},  {224, 45},  {224, 50},  {224, 55},  {224, 60},
        // logo / indicator
        {207, 0},
    },
    {
        // Keyboard RGB Matrix
        4,  4, 4, 4, 4,  4, 4, 4, 4,  4, 4, 4, 4,
        4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,  4, 4,
        4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,  4, 4,
        4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,   4,   4,
        4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,    4,   4, 4,
        4, 4, 4,           4,         4, 4,   4, 4, 4,
        // Lef and right side lights
        2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
        2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
        // logo
        8,
    }
};
#endif // RGB_MATRIX_ENABLE

#ifdef EEPROM_ENABLE

#include "spi_master.h"

void spi_init(void) {
    static bool is_initialised = false;
    if (!is_initialised) {
        is_initialised = true;

        // Try releasing special pins for a short time
        setPinInput(SPI_SCK_PIN);
        setPinInput(SPI_MOSI_PIN);
        setPinInput(SPI_MISO_PIN);

        chThdSleepMilliseconds(10);

        palSetPadMode(PAL_PORT(SPI_SCK_PIN), PAL_PAD(SPI_SCK_PIN), PAL_MODE_ALTERNATE(SPI_SCK_PAL_MODE) | PAL_OUTPUT_TYPE_PUSHPULL | PAL_OUTPUT_SPEED_HIGHEST | PAL_WB32_CURRENT_LEVEL3);
        palSetPadMode(PAL_PORT(SPI_MOSI_PIN), PAL_PAD(SPI_MOSI_PIN), PAL_MODE_ALTERNATE(SPI_MOSI_PAL_MODE) | PAL_OUTPUT_TYPE_PUSHPULL | PAL_OUTPUT_SPEED_HIGHEST);
        palSetPadMode(PAL_PORT(SPI_MISO_PIN), PAL_PAD(SPI_MISO_PIN), PAL_MODE_ALTERNATE(SPI_MISO_PAL_MODE) | PAL_OUTPUT_TYPE_PUSHPULL | PAL_OUTPUT_SPEED_HIGHEST);
    }
}

#endif
