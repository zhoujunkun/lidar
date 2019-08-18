#ifndef _INIT_PERIPH_H
#define _INIT_PERIPH_H

#include "stm32f0xx.h"

#define UART_BAUDRATE   115200 

typedef enum
{
  TRANSFER = 0,
  DONE,
}tx_status_type;

typedef enum
{
  CLK_PWM = 0,
  CLK_GPIO,
}ClkPinType;

//TSL1401 SI pin
#define SI_PIN          GPIO_Pin_1
#define SI_PORT         GPIOA

//TSL1401 CLK pin
#define CLK_PIN         GPIO_Pin_9 //TIM1_CH2
#define CLK_PORT        GPIOA

//���������� ����������
#define LASER_PINS      (GPIO_Pin_3 | GPIO_Pin_4)
#define LASER_PORT      GPIOA

//LED output
#define LED_PIN         GPIO_Pin_1
#define LED_PORT        GPIOB

//ADC input
#define ADC_PIN         GPIO_Pin_0
#define ADC_PORT        GPIOA

//Encder input
#define ENCODER_PIN     GPIO_Pin_7
#define ENCODER_PORT    GPIOA

//Encder input
#define UART_TX_PIN     GPIO_Pin_2
#define UART_TX_PORT    GPIOA
#define UART_TX_PINSOURCE       GPIO_PinSource2

void init_all_periph(void);
void init_clk(void);
void init_gpio(void);
void switch_led(uint8_t val);
void Delay_ms(uint32_t ms);

#endif











