/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define B1_Pin GPIO_PIN_13
#define B1_GPIO_Port GPIOC
#define B1_EXTI_IRQn EXTI15_10_IRQn
#define f1_Pin GPIO_PIN_0
#define f1_GPIO_Port GPIOC
#define f2_Pin GPIO_PIN_1
#define f2_GPIO_Port GPIOC
#define f3_Pin GPIO_PIN_2
#define f3_GPIO_Port GPIOC
#define f4_Pin GPIO_PIN_3
#define f4_GPIO_Port GPIOC
#define USART_TX_Pin GPIO_PIN_2
#define USART_TX_GPIO_Port GPIOA
#define USART_RX_Pin GPIO_PIN_3
#define USART_RX_GPIO_Port GPIOA
#define LD2_Pin GPIO_PIN_5
#define LD2_GPIO_Port GPIOA
#define l1_Pin GPIO_PIN_4
#define l1_GPIO_Port GPIOC
#define l2_Pin GPIO_PIN_5
#define l2_GPIO_Port GPIOC
#define fsw4_Pin GPIO_PIN_10
#define fsw4_GPIO_Port GPIOB
#define fsw4_EXTI_IRQn EXTI15_10_IRQn
#define l3_Pin GPIO_PIN_6
#define l3_GPIO_Port GPIOC
#define l4_Pin GPIO_PIN_7
#define l4_GPIO_Port GPIOC
#define m1_Pin GPIO_PIN_8
#define m1_GPIO_Port GPIOC
#define m2_Pin GPIO_PIN_9
#define m2_GPIO_Port GPIOC
#define fsw1_Pin GPIO_PIN_8
#define fsw1_GPIO_Port GPIOA
#define fsw1_EXTI_IRQn EXTI9_5_IRQn
#define TMS_Pin GPIO_PIN_13
#define TMS_GPIO_Port GPIOA
#define TCK_Pin GPIO_PIN_14
#define TCK_GPIO_Port GPIOA
#define m3_Pin GPIO_PIN_10
#define m3_GPIO_Port GPIOC
#define m4_Pin GPIO_PIN_11
#define m4_GPIO_Port GPIOC
#define SWO_Pin GPIO_PIN_3
#define SWO_GPIO_Port GPIOB
#define fsw2_Pin GPIO_PIN_4
#define fsw2_GPIO_Port GPIOB
#define fsw2_EXTI_IRQn EXTI4_IRQn
#define fsw3_Pin GPIO_PIN_5
#define fsw3_GPIO_Port GPIOB
#define fsw3_EXTI_IRQn EXTI9_5_IRQn
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
