/*
    BitzOS (BOS) V0.1.4 - Copyright (C) 2017 Hexabitz
    All rights reserved
		
    File Name     : H0BR4.c
    Description   : Header file for module H0BR4.
										IMU (ST LSM6DS3TR) + Digital Compass (ST LSM303AGRTR)
*/
	
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef H0BR4_H
#define H0BR4_H

/* Includes ------------------------------------------------------------------*/
#include "BOS.h"
#include "H0BR4_uart.h"	
#include "H0BR4_gpio.h"	
#include "H0BR4_dma.h"		
	
/* Exported definitions -------------------------------------------------------*/

#define	modulePN		_H0BR4

/* Port-related definitions */
#define	NumOfPorts		6
#define P_PROG 				P2						/* ST factory bootloader UART */

/* Define available ports */
#define _P1 
#define _P2 
#define _P3 
#define _P4 
#define _P5 
#define _P6

/* Define available USARTs */
#define _Usart1 1
#define _Usart2 1
#define _Usart3 1
#define _Usart4 1
#define _Usart5 1
#define _Usart6	1

/* Port-UART mapping */
#define P1uart &huart4	
#define P2uart &huart2
#define P3uart &huart6
#define P4uart &huart3
#define P5uart &huart1
#define P6uart &huart5
	
/* Port Definitions */
#define	USART1_TX_PIN		GPIO_PIN_9
#define	USART1_RX_PIN		GPIO_PIN_10
#define	USART1_TX_PORT	GPIOA
#define	USART1_RX_PORT	GPIOA
#define	USART1_AF				GPIO_AF1_USART1

#define	USART2_TX_PIN		GPIO_PIN_2
#define	USART2_RX_PIN		GPIO_PIN_3
#define	USART2_TX_PORT	GPIOA
#define	USART2_RX_PORT	GPIOA
#define	USART2_AF				GPIO_AF1_USART2

#define	USART3_TX_PIN		GPIO_PIN_10
#define	USART3_RX_PIN		GPIO_PIN_11
#define	USART3_TX_PORT	GPIOB
#define	USART3_RX_PORT	GPIOB
#define	USART3_AF				GPIO_AF4_USART3

#define	USART4_TX_PIN		GPIO_PIN_0
#define	USART4_RX_PIN		GPIO_PIN_1
#define	USART4_TX_PORT	GPIOA
#define	USART4_RX_PORT	GPIOA
#define	USART4_AF				GPIO_AF4_USART4

#define	USART5_TX_PIN		GPIO_PIN_3
#define	USART5_RX_PIN		GPIO_PIN_4
#define	USART5_TX_PORT	GPIOB
#define	USART5_RX_PORT	GPIOB
#define	USART5_AF				GPIO_AF4_USART5

#define	USART6_TX_PIN		GPIO_PIN_4
#define	USART6_RX_PIN		GPIO_PIN_5
#define	USART6_TX_PORT	GPIOA
#define	USART6_RX_PORT	GPIOA
#define	USART6_AF				GPIO_AF5_USART6

/* Module-specific Definitions */
#define IMU_INT1_PORT						GPIOB
#define IMU_INT1_PIN						GPIO_PIN_12
#define IMU_INT1_GPIO_CLK()			__GPIOB_CLK_ENABLE();
#define IMU_INT2_PORT						GPIOA
#define IMU_INT2_PIN						GPIO_PIN_6
#define IMU_INT2_GPIO_CLK()			__GPIOA_CLK_ENABLE();
#define MAG_INT_PORT						GPIOA
#define MAG_INT_PIN							GPIO_PIN_7
#define MAG_INT_GPIO_CLK()			__GPIOA_CLK_ENABLE();
#define XL_INT1_PORT						GPIOB
#define XL_INT1_PIN							GPIO_PIN_1
#define XL_INT1_GPIO_CLK()			__GPIOB_CLK_ENABLE();
#define XL_INT2_PORT						GPIOB
#define XL_INT2_PIN							GPIO_PIN_0
#define XL_INT2_GPIO_CLK()			__GPIOB_CLK_ENABLE();


/* Module_Status Type Definition */  
typedef enum 
{
  H0BR4_OK = 0,
	H0BR4_ERR_UnknownMessage,
  H0BR4_ERR_WrongColor,
	H0BR4_ERR_WrongIntensity,
	H0BR4_ERROR = 255
} Module_Status;

/* Indicator LED */
#define _IND_LED_PORT		GPIOA
#define _IND_LED_PIN		GPIO_PIN_11


/* Export UART variables */
extern UART_HandleTypeDef huart1;
extern UART_HandleTypeDef huart2;
extern UART_HandleTypeDef huart3;
extern UART_HandleTypeDef huart4;
extern UART_HandleTypeDef huart5;
extern UART_HandleTypeDef huart6;

/* Define UART Init prototypes */
extern void MX_USART1_UART_Init(void);
extern void MX_USART2_UART_Init(void);
extern void MX_USART3_UART_Init(void);
extern void MX_USART4_UART_Init(void);
extern void MX_USART5_UART_Init(void);
extern void MX_USART6_UART_Init(void);


/* -----------------------------------------------------------------------
	|														Message Codes	 														 	|
   ----------------------------------------------------------------------- 
*/


	
/* -----------------------------------------------------------------------
	|																APIs	 																 	|
   ----------------------------------------------------------------------- 
*/


/* -----------------------------------------------------------------------
	|															Commands																 	|
   ----------------------------------------------------------------------- 
*/



#endif /* H0BR4_H */

/************************ (C) COPYRIGHT HEXABITZ *****END OF FILE****/