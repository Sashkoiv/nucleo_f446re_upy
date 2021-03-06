// This file was automatically generated by make-pins.py
//
// --af boards/stm32f401_af.csv
// --board boards/STM32F4NUCLEO/pins.csv
// --prefix boards/stm32f4xx_prefix.c

// stm32f4xx_prefix.c becomes the initial portion of the generated pins file.

#include <stdio.h>

#include "py/obj.h"
#include "pin.h"
#include MICROPY_HAL_H

#define AF(af_idx, af_fn, af_unit, af_type, af_ptr) \
{ \
    { &pin_af_type }, \
    .name = MP_QSTR_AF ## af_idx ## _ ## af_fn ## af_unit, \
    .idx = (af_idx), \
    .fn = AF_FN_ ## af_fn, \
    .unit = (af_unit), \
    .type = AF_PIN_TYPE_ ## af_fn ## _ ## af_type, \
    .af_fn = (af_ptr) \
}

#define PIN(p_port, p_pin, p_af, p_adc_num, p_adc_channel) \
{ \
    { &pin_type }, \
    .name = MP_QSTR_ ## p_port ## p_pin, \
    .port = PORT_ ## p_port, \
    .pin = (p_pin), \
    .num_af = (sizeof(p_af) / sizeof(pin_af_obj_t)), \
    .pin_mask = (1 << ((p_pin) & 0x0f)), \
    .gpio = GPIO ## p_port, \
    .af = p_af, \
    .adc_num = p_adc_num, \
    .adc_channel = p_adc_channel, \
}

const pin_af_obj_t pin_A0_af[] = {
  AF( 1, TIM     ,  2, CH1       , TIM2    ), // TIM2_CH1
  AF( 1, TIM     ,  2, ETR       , TIM2    ), // TIM2_ETR
  AF( 2, TIM     ,  5, CH1       , TIM5    ), // TIM5_CH1
#if defined(MICROPY_HW_UART2_PORT)
  AF( 7, USART   ,  2, CTS       , USART2  ), // USART2_CTS
#endif
  //(15, EVENTOUT,  0,           , EVENTOUT), // EVENTOUT
};

const pin_obj_t pin_A0 = PIN(A, 0, pin_A0_af, PIN_ADC1, 0);

const pin_af_obj_t pin_A1_af[] = {
  AF( 1, TIM     ,  2, CH2       , TIM2    ), // TIM2_CH2
  AF( 2, TIM     ,  5, CH2       , TIM5    ), // TIM5_CH2
#if defined(MICROPY_HW_UART2_PORT)
  AF( 7, USART   ,  2, RTS       , USART2  ), // USART2_RTS
#endif
  //(15, EVENTOUT,  0,           , EVENTOUT), // EVENTOUT
};

const pin_obj_t pin_A1 = PIN(A, 1, pin_A1_af, PIN_ADC1, 1);

const pin_af_obj_t pin_A2_af[] = {
  AF( 1, TIM     ,  2, CH3       , TIM2    ), // TIM2_CH3
  AF( 2, TIM     ,  5, CH3       , TIM5    ), // TIM5_CH3
  AF( 3, TIM     ,  9, CH1       , TIM9    ), // TIM9_CH1
#if defined(MICROPY_HW_UART2_PORT)
  AF( 7, USART   ,  2, TX        , USART2  ), // USART2_TX
#endif
  //(15, EVENTOUT,  0,           , EVENTOUT), // EVENTOUT
};

const pin_obj_t pin_A2 = PIN(A, 2, pin_A2_af, PIN_ADC1, 2);

const pin_af_obj_t pin_A3_af[] = {
  AF( 1, TIM     ,  2, CH4       , TIM2    ), // TIM2_CH4
  AF( 2, TIM     ,  5, CH4       , TIM5    ), // TIM5_CH4
  AF( 3, TIM     ,  9, CH2       , TIM9    ), // TIM9_CH2
#if defined(MICROPY_HW_UART2_PORT)
  AF( 7, USART   ,  2, RX        , USART2  ), // USART2_RX
#endif
  //(15, EVENTOUT,  0,           , EVENTOUT), // EVENTOUT
};

const pin_obj_t pin_A3 = PIN(A, 3, pin_A3_af, PIN_ADC1, 3);

const pin_af_obj_t pin_A4_af[] = {
#if (defined(MICROPY_HW_ENABLE_SPI1) && MICROPY_HW_ENABLE_SPI1)
  AF( 5, SPI     ,  1, NSS       , SPI1    ), // SPI1_NSS
#endif
#if (defined(MICROPY_HW_ENABLE_SPI3) && MICROPY_HW_ENABLE_SPI3)
  AF( 6, SPI     ,  3, NSS       , SPI3    ), // SPI3_NSS
#endif
#if (defined(MICROPY_HW_ENABLE_I2S3) && MICROPY_HW_ENABLE_I2S3)
  AF( 6, I2S     ,  3, WS        , I2S3    ), // I2S3_WS
#endif
#if defined(MICROPY_HW_UART2_PORT)
  AF( 7, USART   ,  2, CK        , USART2  ), // USART2_CK
#endif
  //(15, EVENTOUT,  0,           , EVENTOUT), // EVENTOUT
};

const pin_obj_t pin_A4 = PIN(A, 4, pin_A4_af, PIN_ADC1, 4);

const pin_af_obj_t pin_A5_af[] = {
  AF( 1, TIM     ,  2, CH1       , TIM2    ), // TIM2_CH1
  AF( 1, TIM     ,  2, ETR       , TIM2    ), // TIM2_ETR
#if (defined(MICROPY_HW_ENABLE_SPI1) && MICROPY_HW_ENABLE_SPI1)
  AF( 5, SPI     ,  1, SCK       , SPI1    ), // SPI1_SCK
#endif
  //(15, EVENTOUT,  0,           , EVENTOUT), // EVENTOUT
};

const pin_obj_t pin_A5 = PIN(A, 5, pin_A5_af, PIN_ADC1, 5);

const pin_af_obj_t pin_A6_af[] = {
  AF( 1, TIM     ,  1, BKIN      , TIM1    ), // TIM1_BKIN
  AF( 2, TIM     ,  3, CH1       , TIM3    ), // TIM3_CH1
#if (defined(MICROPY_HW_ENABLE_SPI1) && MICROPY_HW_ENABLE_SPI1)
  AF( 5, SPI     ,  1, MISO      , SPI1    ), // SPI1_MISO
#endif
  //(15, EVENTOUT,  0,           , EVENTOUT), // EVENTOUT
};

const pin_obj_t pin_A6 = PIN(A, 6, pin_A6_af, PIN_ADC1, 6);

const pin_af_obj_t pin_A7_af[] = {
  AF( 1, TIM     ,  1, CH1N      , TIM1    ), // TIM1_CH1N
  AF( 2, TIM     ,  3, CH2       , TIM3    ), // TIM3_CH2
#if (defined(MICROPY_HW_ENABLE_SPI1) && MICROPY_HW_ENABLE_SPI1)
  AF( 5, SPI     ,  1, MOSI      , SPI1    ), // SPI1_MOSI
#endif
  //(15, EVENTOUT,  0,           , EVENTOUT), // EVENTOUT
};

const pin_obj_t pin_A7 = PIN(A, 7, pin_A7_af, PIN_ADC1, 7);

const pin_af_obj_t pin_A8_af[] = {
  //( 0, MCO     ,  0, 1         , MCO     ), // MCO_1
  AF( 1, TIM     ,  1, CH1       , TIM1    ), // TIM1_CH1
#if defined(MICROPY_HW_I2C3_SCL)
  AF( 4, I2C     ,  3, SCL       , I2C3    ), // I2C3_SCL
#endif
#if defined(MICROPY_HW_UART1_PORT) || defined(MICROPY_HW_UART1_TX_PORT)
  AF( 7, USART   ,  1, CK        , USART1  ), // USART1_CK
#endif
  //(10, OTG     ,  0, FS_SOF    , OTG     ), // OTG_FS_SOF
  //(15, EVENTOUT,  0,           , EVENTOUT), // EVENTOUT
};

const pin_obj_t pin_A8 = PIN(A, 8, pin_A8_af, 0, 0);

const pin_af_obj_t pin_A9_af[] = {
  AF( 1, TIM     ,  1, CH2       , TIM1    ), // TIM1_CH2
  //( 4, I2C     ,  3, SMBA      , I2C3    ), // I2C3_SMBA
#if defined(MICROPY_HW_UART1_PORT) || defined(MICROPY_HW_UART1_TX_PORT)
  AF( 7, USART   ,  1, TX        , USART1  ), // USART1_TX
#endif
  //(10, OTG     ,  0, FS_VBUS   , OTG     ), // OTG_FS_VBUS
  //(15, EVENTOUT,  0,           , EVENTOUT), // EVENTOUT
};

const pin_obj_t pin_A9 = PIN(A, 9, pin_A9_af, 0, 0);

const pin_af_obj_t pin_A10_af[] = {
  AF( 1, TIM     ,  1, CH3       , TIM1    ), // TIM1_CH3
#if defined(MICROPY_HW_UART1_PORT) || defined(MICROPY_HW_UART1_TX_PORT)
  AF( 7, USART   ,  1, RX        , USART1  ), // USART1_RX
#endif
  //(10, OTG     ,  0, FS_ID     , OTG     ), // OTG_FS_ID
  //(15, EVENTOUT,  0,           , EVENTOUT), // EVENTOUT
};

const pin_obj_t pin_A10 = PIN(A, 10, pin_A10_af, 0, 0);

// const pin_af_obj_t pin_A13_af[] = {
  //( 0, JTMS    ,  0, SWDIO     , JTMS    ), // JTMS_SWDIO
  //(15, EVENTOUT,  0,           , EVENTOUT), // EVENTOUT
// };

const pin_obj_t pin_A13 = PIN(A, 13, NULL, 0, 0);

// const pin_af_obj_t pin_A14_af[] = {
  //( 0, JTCK    ,  0, SWCLK     , JTCK    ), // JTCK_SWCLK
  //(15, EVENTOUT,  0,           , EVENTOUT), // EVENTOUT
// };

const pin_obj_t pin_A14 = PIN(A, 14, NULL, 0, 0);

const pin_af_obj_t pin_A15_af[] = {
  //( 0, JTDI    ,  0,           , JTDI    ), // JTDI
  AF( 1, TIM     ,  2, CH1       , TIM2    ), // TIM2_CH1
  AF( 1, TIM     ,  2, ETR       , TIM2    ), // TIM2_ETR
#if (defined(MICROPY_HW_ENABLE_SPI1) && MICROPY_HW_ENABLE_SPI1)
  AF( 5, SPI     ,  1, NSS       , SPI1    ), // SPI1_NSS
#endif
#if (defined(MICROPY_HW_ENABLE_SPI3) && MICROPY_HW_ENABLE_SPI3)
  AF( 6, SPI     ,  3, NSS       , SPI3    ), // SPI3_NSS
#endif
#if (defined(MICROPY_HW_ENABLE_I2S3) && MICROPY_HW_ENABLE_I2S3)
  AF( 6, I2S     ,  3, WS        , I2S3    ), // I2S3_WS
#endif
  //(15, EVENTOUT,  0,           , EVENTOUT), // EVENTOUT
};

const pin_obj_t pin_A15 = PIN(A, 15, pin_A15_af, 0, 0);

const pin_af_obj_t pin_B0_af[] = {
  AF( 1, TIM     ,  1, CH2N      , TIM1    ), // TIM1_CH2N
  AF( 2, TIM     ,  3, CH3       , TIM3    ), // TIM3_CH3
  //(15, EVENTOUT,  0,           , EVENTOUT), // EVENTOUT
};

const pin_obj_t pin_B0 = PIN(B, 0, pin_B0_af, PIN_ADC1, 8);

const pin_af_obj_t pin_B1_af[] = {
  AF( 1, TIM     ,  1, CH3N      , TIM1    ), // TIM1_CH3N
  AF( 2, TIM     ,  3, CH4       , TIM3    ), // TIM3_CH4
  //(15, EVENTOUT,  0,           , EVENTOUT), // EVENTOUT
};

const pin_obj_t pin_B1 = PIN(B, 1, pin_B1_af, PIN_ADC1, 9);

// const pin_af_obj_t pin_B2_af[] = {
  //(15, EVENTOUT,  0,           , EVENTOUT), // EVENTOUT
// };

const pin_obj_t pin_B2 = PIN(B, 2, NULL, 0, 0);

const pin_af_obj_t pin_B4_af[] = {
  //( 0, JTRST   ,  0,           , JTRST   ), // JTRST
  AF( 2, TIM     ,  3, CH1       , TIM3    ), // TIM3_CH1
#if (defined(MICROPY_HW_ENABLE_SPI1) && MICROPY_HW_ENABLE_SPI1)
  AF( 5, SPI     ,  1, MISO      , SPI1    ), // SPI1_MISO
#endif
#if (defined(MICROPY_HW_ENABLE_SPI3) && MICROPY_HW_ENABLE_SPI3)
  AF( 6, SPI     ,  3, MISO      , SPI3    ), // SPI3_MISO
#endif
#if (defined(MICROPY_HW_ENABLE_I2S3) && MICROPY_HW_ENABLE_I2S3)
  AF( 7, I2S     ,  3, EXTSD     , I2S3    ), // I2S3_EXTSD
#endif
#if defined(MICROPY_HW_I2C3_SCL)
  AF( 9, I2C     ,  3, SDA       , I2C3    ), // I2C3_SDA
#endif
  //(15, EVENTOUT,  0,           , EVENTOUT), // EVENTOUT
};

const pin_obj_t pin_B4 = PIN(B, 4, pin_B4_af, 0, 0);

const pin_af_obj_t pin_B5_af[] = {
  AF( 2, TIM     ,  3, CH2       , TIM3    ), // TIM3_CH2
  //( 4, I2C     ,  1, SMBA      , I2C1    ), // I2C1_SMBA
#if (defined(MICROPY_HW_ENABLE_SPI1) && MICROPY_HW_ENABLE_SPI1)
  AF( 5, SPI     ,  1, MOSI      , SPI1    ), // SPI1_MOSI
#endif
#if (defined(MICROPY_HW_ENABLE_SPI3) && MICROPY_HW_ENABLE_SPI3)
  AF( 6, SPI     ,  3, MOSI      , SPI3    ), // SPI3_MOSI
#endif
#if (defined(MICROPY_HW_ENABLE_I2S3) && MICROPY_HW_ENABLE_I2S3)
  AF( 6, I2S     ,  3, SD        , I2S3    ), // I2S3_SD
#endif
  //(15, EVENTOUT,  0,           , EVENTOUT), // EVENTOUT
};

const pin_obj_t pin_B5 = PIN(B, 5, pin_B5_af, 0, 0);

const pin_af_obj_t pin_B6_af[] = {
  AF( 2, TIM     ,  4, CH1       , TIM4    ), // TIM4_CH1
#if defined(MICROPY_HW_I2C1_SCL)
  AF( 4, I2C     ,  1, SCL       , I2C1    ), // I2C1_SCL
#endif
#if defined(MICROPY_HW_UART1_PORT) || defined(MICROPY_HW_UART1_TX_PORT)
  AF( 7, USART   ,  1, TX        , USART1  ), // USART1_TX
#endif
  //(15, EVENTOUT,  0,           , EVENTOUT), // EVENTOUT
};

const pin_obj_t pin_B6 = PIN(B, 6, pin_B6_af, 0, 0);

const pin_af_obj_t pin_B7_af[] = {
  AF( 2, TIM     ,  4, CH2       , TIM4    ), // TIM4_CH2
#if defined(MICROPY_HW_I2C1_SCL)
  AF( 4, I2C     ,  1, SDA       , I2C1    ), // I2C1_SDA
#endif
#if defined(MICROPY_HW_UART1_PORT) || defined(MICROPY_HW_UART1_TX_PORT)
  AF( 7, USART   ,  1, RX        , USART1  ), // USART1_RX
#endif
  //(15, EVENTOUT,  0,           , EVENTOUT), // EVENTOUT
};

const pin_obj_t pin_B7 = PIN(B, 7, pin_B7_af, 0, 0);

const pin_af_obj_t pin_B8_af[] = {
  AF( 2, TIM     ,  4, CH3       , TIM4    ), // TIM4_CH3
  AF( 3, TIM     , 10, CH1       , TIM10   ), // TIM10_CH1
#if defined(MICROPY_HW_I2C1_SCL)
  AF( 4, I2C     ,  1, SCL       , I2C1    ), // I2C1_SCL
#endif
  //(12, SDIO    ,  0, D4        , SDIO    ), // SDIO_D4
  //(15, EVENTOUT,  0,           , EVENTOUT), // EVENTOUT
};

const pin_obj_t pin_B8 = PIN(B, 8, pin_B8_af, 0, 0);

const pin_af_obj_t pin_B9_af[] = {
  AF( 2, TIM     ,  4, CH4       , TIM4    ), // TIM4_CH4
  AF( 3, TIM     , 11, CH1       , TIM11   ), // TIM11_CH1
#if defined(MICROPY_HW_I2C1_SCL)
  AF( 4, I2C     ,  1, SDA       , I2C1    ), // I2C1_SDA
#endif
#if (defined(MICROPY_HW_ENABLE_SPI2) && MICROPY_HW_ENABLE_SPI2)
  AF( 5, SPI     ,  2, NSS       , SPI2    ), // SPI2_NSS
#endif
#if (defined(MICROPY_HW_ENABLE_I2S2) && MICROPY_HW_ENABLE_I2S2)
  AF( 5, I2S     ,  2, WS        , I2S2    ), // I2S2_WS
#endif
  //(12, SDIO    ,  0, D5        , SDIO    ), // SDIO_D5
  //(15, EVENTOUT,  0,           , EVENTOUT), // EVENTOUT
};

const pin_obj_t pin_B9 = PIN(B, 9, pin_B9_af, 0, 0);

const pin_af_obj_t pin_B10_af[] = {
  AF( 1, TIM     ,  2, CH3       , TIM2    ), // TIM2_CH3
#if defined(MICROPY_HW_I2C2_SCL)
  AF( 4, I2C     ,  2, SCL       , I2C2    ), // I2C2_SCL
#endif
#if (defined(MICROPY_HW_ENABLE_SPI2) && MICROPY_HW_ENABLE_SPI2)
  AF( 5, SPI     ,  2, SCK       , SPI2    ), // SPI2_SCK
#endif
#if (defined(MICROPY_HW_ENABLE_I2S2) && MICROPY_HW_ENABLE_I2S2)
  AF( 5, I2S     ,  2, CK        , I2S2    ), // I2S2_CK
#endif
  //(15, EVENTOUT,  0,           , EVENTOUT), // EVENTOUT
};

const pin_obj_t pin_B10 = PIN(B, 10, pin_B10_af, 0, 0);

const pin_af_obj_t pin_B12_af[] = {
  AF( 1, TIM     ,  1, BKIN      , TIM1    ), // TIM1_BKIN
  //( 4, I2C     ,  2, SMBA      , I2C2    ), // I2C2_SMBA
#if (defined(MICROPY_HW_ENABLE_SPI2) && MICROPY_HW_ENABLE_SPI2)
  AF( 5, SPI     ,  2, NSS       , SPI2    ), // SPI2_NSS
#endif
#if (defined(MICROPY_HW_ENABLE_I2S2) && MICROPY_HW_ENABLE_I2S2)
  AF( 5, I2S     ,  2, WS        , I2S2    ), // I2S2_WS
#endif
  //(15, EVENTOUT,  0,           , EVENTOUT), // EVENTOUT
};

const pin_obj_t pin_B12 = PIN(B, 12, pin_B12_af, 0, 0);

const pin_af_obj_t pin_B13_af[] = {
  AF( 1, TIM     ,  1, CH1N      , TIM1    ), // TIM1_CH1N
#if (defined(MICROPY_HW_ENABLE_SPI2) && MICROPY_HW_ENABLE_SPI2)
  AF( 5, SPI     ,  2, SCK       , SPI2    ), // SPI2_SCK
#endif
#if (defined(MICROPY_HW_ENABLE_I2S2) && MICROPY_HW_ENABLE_I2S2)
  AF( 5, I2S     ,  2, CK        , I2S2    ), // I2S2_CK
#endif
  //(15, EVENTOUT,  0,           , EVENTOUT), // EVENTOUT
};

const pin_obj_t pin_B13 = PIN(B, 13, pin_B13_af, 0, 0);

const pin_af_obj_t pin_B14_af[] = {
  AF( 1, TIM     ,  1, CH2N      , TIM1    ), // TIM1_CH2N
#if (defined(MICROPY_HW_ENABLE_SPI2) && MICROPY_HW_ENABLE_SPI2)
  AF( 5, SPI     ,  2, MISO      , SPI2    ), // SPI2_MISO
#endif
#if (defined(MICROPY_HW_ENABLE_I2S2) && MICROPY_HW_ENABLE_I2S2)
  AF( 6, I2S     ,  2, EXTSD     , I2S2    ), // I2S2_EXTSD
#endif
  //(15, EVENTOUT,  0,           , EVENTOUT), // EVENTOUT
};

const pin_obj_t pin_B14 = PIN(B, 14, pin_B14_af, 0, 0);

const pin_af_obj_t pin_B15_af[] = {
  //( 0, RTC     ,  0, REFIN     , RTC     ), // RTC_REFIN
  AF( 1, TIM     ,  1, CH3N      , TIM1    ), // TIM1_CH3N
#if (defined(MICROPY_HW_ENABLE_SPI2) && MICROPY_HW_ENABLE_SPI2)
  AF( 5, SPI     ,  2, MOSI      , SPI2    ), // SPI2_MOSI
#endif
#if (defined(MICROPY_HW_ENABLE_I2S2) && MICROPY_HW_ENABLE_I2S2)
  AF( 5, I2S     ,  2, SD        , I2S2    ), // I2S2_SD
#endif
  //(15, EVENTOUT,  0,           , EVENTOUT), // EVENTOUT
};

const pin_obj_t pin_B15 = PIN(B, 15, pin_B15_af, 0, 0);

// const pin_af_obj_t pin_C0_af[] = {
  //(15, EVENTOUT,  0,           , EVENTOUT), // EVENTOUT
// };

const pin_obj_t pin_C0 = PIN(C, 0, NULL, PIN_ADC1, 10);

// const pin_af_obj_t pin_C1_af[] = {
  //(15, EVENTOUT,  0,           , EVENTOUT), // EVENTOUT
// };

const pin_obj_t pin_C1 = PIN(C, 1, NULL, PIN_ADC1, 11);

const pin_af_obj_t pin_C2_af[] = {
#if (defined(MICROPY_HW_ENABLE_SPI2) && MICROPY_HW_ENABLE_SPI2)
  AF( 5, SPI     ,  2, MISO      , SPI2    ), // SPI2_MISO
#endif
#if (defined(MICROPY_HW_ENABLE_I2S2) && MICROPY_HW_ENABLE_I2S2)
  AF( 6, I2S     ,  2, EXTSD     , I2S2    ), // I2S2_EXTSD
#endif
  //(15, EVENTOUT,  0,           , EVENTOUT), // EVENTOUT
};

const pin_obj_t pin_C2 = PIN(C, 2, pin_C2_af, PIN_ADC1, 12);

const pin_af_obj_t pin_C3_af[] = {
#if (defined(MICROPY_HW_ENABLE_SPI2) && MICROPY_HW_ENABLE_SPI2)
  AF( 5, SPI     ,  2, MOSI      , SPI2    ), // SPI2_MOSI
#endif
#if (defined(MICROPY_HW_ENABLE_I2S2) && MICROPY_HW_ENABLE_I2S2)
  AF( 5, I2S     ,  2, SD        , I2S2    ), // I2S2_SD
#endif
  //(15, EVENTOUT,  0,           , EVENTOUT), // EVENTOUT
};

const pin_obj_t pin_C3 = PIN(C, 3, pin_C3_af, PIN_ADC1, 13);

// const pin_af_obj_t pin_C4_af[] = {
  //(15, EVENTOUT,  0,           , EVENTOUT), // EVENTOUT
// };

const pin_obj_t pin_C4 = PIN(C, 4, NULL, PIN_ADC1, 14);

// const pin_af_obj_t pin_C5_af[] = {
  //(15, EVENTOUT,  0,           , EVENTOUT), // EVENTOUT
// };

const pin_obj_t pin_C5 = PIN(C, 5, NULL, PIN_ADC1, 15);

const pin_af_obj_t pin_C6_af[] = {
  AF( 2, TIM     ,  3, CH1       , TIM3    ), // TIM3_CH1
#if (defined(MICROPY_HW_ENABLE_I2S2) && MICROPY_HW_ENABLE_I2S2)
  AF( 5, I2S     ,  2, MCK       , I2S2    ), // I2S2_MCK
#endif
#if defined(MICROPY_HW_UART6_PORT)
  AF( 8, USART   ,  6, TX        , USART6  ), // USART6_TX
#endif
  //(12, SDIO    ,  0, D6        , SDIO    ), // SDIO_D6
  //(15, EVENTOUT,  0,           , EVENTOUT), // EVENTOUT
};

const pin_obj_t pin_C6 = PIN(C, 6, pin_C6_af, 0, 0);

const pin_af_obj_t pin_C7_af[] = {
  AF( 2, TIM     ,  3, CH2       , TIM3    ), // TIM3_CH2
#if (defined(MICROPY_HW_ENABLE_I2S3) && MICROPY_HW_ENABLE_I2S3)
  AF( 6, I2S     ,  3, MCK       , I2S3    ), // I2S3_MCK
#endif
#if defined(MICROPY_HW_UART6_PORT)
  AF( 8, USART   ,  6, RX        , USART6  ), // USART6_RX
#endif
  //(12, SDIO    ,  0, D7        , SDIO    ), // SDIO_D7
  //(15, EVENTOUT,  0,           , EVENTOUT), // EVENTOUT
};

const pin_obj_t pin_C7 = PIN(C, 7, pin_C7_af, 0, 0);

const pin_af_obj_t pin_C8_af[] = {
  AF( 2, TIM     ,  3, CH3       , TIM3    ), // TIM3_CH3
#if defined(MICROPY_HW_UART6_PORT)
  AF( 8, USART   ,  6, CK        , USART6  ), // USART6_CK
#endif
  //(12, SDIO    ,  0, D0        , SDIO    ), // SDIO_D0
  //(15, EVENTOUT,  0,           , EVENTOUT), // EVENTOUT
};

const pin_obj_t pin_C8 = PIN(C, 8, pin_C8_af, 0, 0);

const pin_af_obj_t pin_C9_af[] = {
  //( 0, MCO     ,  0, 2         , MCO     ), // MCO_2
  AF( 2, TIM     ,  3, CH4       , TIM3    ), // TIM3_CH4
#if defined(MICROPY_HW_I2C3_SCL)
  AF( 4, I2C     ,  3, SDA       , I2C3    ), // I2C3_SDA
#endif
  //( 5, I2S     ,  0, CKIN      , I2S     ), // I2S_CKIN
  //(12, SDIO    ,  0, D1        , SDIO    ), // SDIO_D1
  //(15, EVENTOUT,  0,           , EVENTOUT), // EVENTOUT
};

const pin_obj_t pin_C9 = PIN(C, 9, pin_C9_af, 0, 0);

const pin_af_obj_t pin_C10_af[] = {
#if (defined(MICROPY_HW_ENABLE_SPI3) && MICROPY_HW_ENABLE_SPI3)
  AF( 6, SPI     ,  3, SCK       , SPI3    ), // SPI3_SCK
#endif
#if (defined(MICROPY_HW_ENABLE_I2S3) && MICROPY_HW_ENABLE_I2S3)
  AF( 6, I2S     ,  3, CK        , I2S3    ), // I2S3_CK
#endif
  //(12, SDIO    ,  0, D2        , SDIO    ), // SDIO_D2
  //(15, EVENTOUT,  0,           , EVENTOUT), // EVENTOUT
};

const pin_obj_t pin_C10 = PIN(C, 10, pin_C10_af, 0, 0);

const pin_af_obj_t pin_C11_af[] = {
#if (defined(MICROPY_HW_ENABLE_I2S3) && MICROPY_HW_ENABLE_I2S3)
  AF( 5, I2S     ,  3, EXTSD     , I2S3    ), // I2S3_EXTSD
#endif
#if (defined(MICROPY_HW_ENABLE_SPI3) && MICROPY_HW_ENABLE_SPI3)
  AF( 6, SPI     ,  3, MISO      , SPI3    ), // SPI3_MISO
#endif
  //(12, SDIO    ,  0, D3        , SDIO    ), // SDIO_D3
  //(15, EVENTOUT,  0,           , EVENTOUT), // EVENTOUT
};

const pin_obj_t pin_C11 = PIN(C, 11, pin_C11_af, 0, 0);

const pin_af_obj_t pin_C12_af[] = {
#if (defined(MICROPY_HW_ENABLE_SPI3) && MICROPY_HW_ENABLE_SPI3)
  AF( 6, SPI     ,  3, MOSI      , SPI3    ), // SPI3_MOSI
#endif
#if (defined(MICROPY_HW_ENABLE_I2S3) && MICROPY_HW_ENABLE_I2S3)
  AF( 6, I2S     ,  3, SD        , I2S3    ), // I2S3_SD
#endif
  //(12, SDIO    ,  0, CK        , SDIO    ), // SDIO_CK
  //(15, EVENTOUT,  0,           , EVENTOUT), // EVENTOUT
};

const pin_obj_t pin_C12 = PIN(C, 12, pin_C12_af, 0, 0);

// const pin_af_obj_t pin_C13_af[] = {
  //(15, EVENTOUT,  0,           , EVENTOUT), // EVENTOUT
// };

const pin_obj_t pin_C13 = PIN(C, 13, NULL, 0, 0);

// const pin_af_obj_t pin_C14_af[] = {
  //(15, EVENTOUT,  0,           , EVENTOUT), // EVENTOUT
// };

const pin_obj_t pin_C14 = PIN(C, 14, NULL, 0, 0);

// const pin_af_obj_t pin_C15_af[] = {
  //(15, EVENTOUT,  0,           , EVENTOUT), // EVENTOUT
// };

const pin_obj_t pin_C15 = PIN(C, 15, NULL, 0, 0);

const pin_af_obj_t pin_D2_af[] = {
  AF( 2, TIM     ,  3, ETR       , TIM3    ), // TIM3_ETR
  //(12, SDIO    ,  0, CMD       , SDIO    ), // SDIO_CMD
  //(15, EVENTOUT,  0,           , EVENTOUT), // EVENTOUT
};

const pin_obj_t pin_D2 = PIN(D, 2, pin_D2_af, 0, 0);

// const pin_af_obj_t pin_H0_af[] = {
  //(15, EVENTOUT,  0,           , EVENTOUT), // EVENTOUT
// };

const pin_obj_t pin_H0 = PIN(H, 0, NULL, 0, 0);

// const pin_af_obj_t pin_H1_af[] = {
  //(15, EVENTOUT,  0,           , EVENTOUT), // EVENTOUT
// };

const pin_obj_t pin_H1 = PIN(H, 1, NULL, 0, 0);

STATIC const mp_map_elem_t pin_cpu_pins_locals_dict_table[] = {
  { MP_OBJ_NEW_QSTR(MP_QSTR_A0), (mp_obj_t)&pin_A0 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_A1), (mp_obj_t)&pin_A1 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_A2), (mp_obj_t)&pin_A2 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_A3), (mp_obj_t)&pin_A3 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_A4), (mp_obj_t)&pin_A4 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_A5), (mp_obj_t)&pin_A5 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_A6), (mp_obj_t)&pin_A6 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_A7), (mp_obj_t)&pin_A7 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_A8), (mp_obj_t)&pin_A8 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_A9), (mp_obj_t)&pin_A9 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_A10), (mp_obj_t)&pin_A10 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_A13), (mp_obj_t)&pin_A13 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_A14), (mp_obj_t)&pin_A14 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_A15), (mp_obj_t)&pin_A15 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_B0), (mp_obj_t)&pin_B0 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_B1), (mp_obj_t)&pin_B1 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_B2), (mp_obj_t)&pin_B2 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_B4), (mp_obj_t)&pin_B4 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_B5), (mp_obj_t)&pin_B5 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_B6), (mp_obj_t)&pin_B6 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_B7), (mp_obj_t)&pin_B7 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_B8), (mp_obj_t)&pin_B8 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_B9), (mp_obj_t)&pin_B9 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_B10), (mp_obj_t)&pin_B10 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_B12), (mp_obj_t)&pin_B12 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_B13), (mp_obj_t)&pin_B13 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_B14), (mp_obj_t)&pin_B14 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_B15), (mp_obj_t)&pin_B15 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_C0), (mp_obj_t)&pin_C0 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_C1), (mp_obj_t)&pin_C1 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_C2), (mp_obj_t)&pin_C2 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_C3), (mp_obj_t)&pin_C3 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_C4), (mp_obj_t)&pin_C4 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_C5), (mp_obj_t)&pin_C5 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_C6), (mp_obj_t)&pin_C6 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_C7), (mp_obj_t)&pin_C7 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_C8), (mp_obj_t)&pin_C8 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_C9), (mp_obj_t)&pin_C9 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_C10), (mp_obj_t)&pin_C10 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_C11), (mp_obj_t)&pin_C11 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_C12), (mp_obj_t)&pin_C12 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_C13), (mp_obj_t)&pin_C13 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_C14), (mp_obj_t)&pin_C14 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_C15), (mp_obj_t)&pin_C15 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_D2), (mp_obj_t)&pin_D2 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_H0), (mp_obj_t)&pin_H0 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_H1), (mp_obj_t)&pin_H1 },
};
MP_DEFINE_CONST_DICT(pin_cpu_pins_locals_dict, pin_cpu_pins_locals_dict_table);

STATIC const mp_map_elem_t pin_board_pins_locals_dict_table[] = {
  { MP_OBJ_NEW_QSTR(MP_QSTR_PC0), (mp_obj_t)&pin_C0 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_PC1), (mp_obj_t)&pin_C1 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_PC2), (mp_obj_t)&pin_C2 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_PC3), (mp_obj_t)&pin_C3 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_PA0), (mp_obj_t)&pin_A0 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_PA1), (mp_obj_t)&pin_A1 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_PA2), (mp_obj_t)&pin_A2 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_PA3), (mp_obj_t)&pin_A3 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_PA4), (mp_obj_t)&pin_A4 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_PA5), (mp_obj_t)&pin_A5 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_PA6), (mp_obj_t)&pin_A6 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_PA7), (mp_obj_t)&pin_A7 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_PC4), (mp_obj_t)&pin_C4 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_PC5), (mp_obj_t)&pin_C5 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_PB0), (mp_obj_t)&pin_B0 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_PB1), (mp_obj_t)&pin_B1 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_PB2), (mp_obj_t)&pin_B2 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_PB10), (mp_obj_t)&pin_B10 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_PB12), (mp_obj_t)&pin_B12 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_PB13), (mp_obj_t)&pin_B13 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_PB14), (mp_obj_t)&pin_B14 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_PB15), (mp_obj_t)&pin_B15 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_PC6), (mp_obj_t)&pin_C6 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_PC7), (mp_obj_t)&pin_C7 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_PC8), (mp_obj_t)&pin_C8 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_PC9), (mp_obj_t)&pin_C9 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_PA8), (mp_obj_t)&pin_A8 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_PA9), (mp_obj_t)&pin_A9 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_PA10), (mp_obj_t)&pin_A10 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_PA13), (mp_obj_t)&pin_A13 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_PA14), (mp_obj_t)&pin_A14 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_PA15), (mp_obj_t)&pin_A15 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_PC10), (mp_obj_t)&pin_C10 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_PC11), (mp_obj_t)&pin_C11 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_PC12), (mp_obj_t)&pin_C12 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_PD2), (mp_obj_t)&pin_D2 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_PB4), (mp_obj_t)&pin_B4 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_PB5), (mp_obj_t)&pin_B5 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_PB6), (mp_obj_t)&pin_B6 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_PB7), (mp_obj_t)&pin_B7 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_PB8), (mp_obj_t)&pin_B8 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_PB9), (mp_obj_t)&pin_B9 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_PC13), (mp_obj_t)&pin_C13 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_PC14), (mp_obj_t)&pin_C14 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_PC15), (mp_obj_t)&pin_C15 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_PH0), (mp_obj_t)&pin_H0 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_PH1), (mp_obj_t)&pin_H1 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_LED_GREEN), (mp_obj_t)&pin_A5 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_LED_ORANGE), (mp_obj_t)&pin_A5 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_LED_RED), (mp_obj_t)&pin_A5 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_LED_BLUE), (mp_obj_t)&pin_A4 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_SW), (mp_obj_t)&pin_C13 },
};
MP_DEFINE_CONST_DICT(pin_board_pins_locals_dict, pin_board_pins_locals_dict_table);

const pin_obj_t * const pin_adc1[] = {
  &pin_A0, // 0
  &pin_A1, // 1
  &pin_A2, // 2
  &pin_A3, // 3
  &pin_A4, // 4
  &pin_A5, // 5
  &pin_A6, // 6
  &pin_A7, // 7
  &pin_B0, // 8
  &pin_B1, // 9
  &pin_C0, // 10
  &pin_C1, // 11
  &pin_C2, // 12
  &pin_C3, // 13
  &pin_C4, // 14
  &pin_C5, // 15
};

const pin_obj_t * const pin_adc2[] = {
  NULL,    // 0
  NULL,    // 1
  NULL,    // 2
  NULL,    // 3
  NULL,    // 4
  NULL,    // 5
  NULL,    // 6
  NULL,    // 7
  NULL,    // 8
  NULL,    // 9
  NULL,    // 10
  NULL,    // 11
  NULL,    // 12
  NULL,    // 13
  NULL,    // 14
  NULL,    // 15
};

const pin_obj_t * const pin_adc3[] = {
  NULL,    // 0
  NULL,    // 1
  NULL,    // 2
  NULL,    // 3
  NULL,    // 4
  NULL,    // 5
  NULL,    // 6
  NULL,    // 7
  NULL,    // 8
  NULL,    // 9
  NULL,    // 10
  NULL,    // 11
  NULL,    // 12
  NULL,    // 13
  NULL,    // 14
  NULL,    // 15
};
