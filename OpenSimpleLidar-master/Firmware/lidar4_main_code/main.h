/**
  ******************************************************************************
  * @file    Project/STM32F0xx_StdPeriph_Templates/main.h 
  * @author  MCD Application Team
  * @version V1.5.0
  * @date    05-December-2014
  * @brief   Header for main.c module
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; COPYRIGHT 2014 STMicroelectronics</center></h2>
  *
  * Licensed under MCD-ST Liberty SW License Agreement V2, (the "License");
  * You may not use this file except in compliance with the License.
  * You may obtain a copy of the License at:
  *
  *        http://www.st.com/software_license_agreement_liberty_v2
  *
  * Unless required by applicable law or agreed to in writing, software 
  * distributed under the License is distributed on an "AS IS" BASIS, 
  * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  * See the License for the specific language governing permissions and
  * limitations under the License.
  *
  ******************************************************************************
  */
  
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

/* Includes ------------------------------------------------------------------*/
#include "stm32f0xx.h"

#include "encoder_handler.h"
#include "laser_handler.h"
#include "uart_handler.h"
#include "init_periph.h"

//Number of the pixels in TSL1401
#define CAPTURED_POINTS_CNT     128

//Measurement every 2 deg - 180 points per rotation
//This helps to increase speed twice
#define TWO_DEG_MODE    


//Length of packet in halfwords (2 bytes)
//360 data + 2 header + 1 status flags + 1 speed
#define PACKET_OFFSET (uint16_t)(2+1+1)
#define PACKET_LENGTH (uint16_t)(360+PACKET_OFFSET)

//Number of encoder marks (holes)
#define ENC_NUM                 15     

#define UART_BAUDRATE           115200

#define SYSTICK_FREQUENCY       1000 //Hz
    
//Emulating encoder for debug purposes
//#define ENABLE_ENCODER_EMULATION
    
#ifdef ENABLE_ENCODER_EMULATION
    
#define VIRTUAL_ROTATION_SPEED  4 //Rotation per second
#define VIRTUAL_ROTATION_PERIOD (1000 /  VIRTUAL_ROTATION_SPEED) //1000ms in one sec
    
//Perio of the emulated encoder
#define VIRTUAL_ENCODER_PERIOD  (VIRTUAL_ROTATION_PERIOD / ENC_NUM)

#endif


/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/
/* Exported macro ------------------------------------------------------------*/
/* Exported functions ------------------------------------------------------- */

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
