#pragma once

void board_init(void);

#define BOARD_LED_PORT GPIOB
#define BOARD_LED_PIN LL_GPIO_PIN_8

#define BOARD_USB_DP_PORT GPIOA
#define BOARD_USB_DP_PIN LL_GPIO_PIN_12

#define BOARD_USB_DM_PORT GPIOA
#define BOARD_USB_DM_PIN LL_GPIO_PIN_11

#define BOARD_I2C I2C1

#define BOARD_SDA_PORT GPIOB
#define BOARD_SDA_PIN LL_GPIO_PIN_7
#define BOARD_SDA_AF LL_GPIO_AF_4

#define BOARD_SCL_PORT GPIOA
#define BOARD_SCL_PIN LL_GPIO_PIN_15
#define BOARD_SCL_AF LL_GPIO_AF_4

#define CABLE_DET_PORT GPIOA
#define CABLE_DET_PIN LL_GPIO_PIN_10
#define CABLE_DET_IRQ EXTI15_10_IRQn