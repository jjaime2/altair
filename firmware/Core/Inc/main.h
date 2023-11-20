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
#include "stm32f4xx_hal.h"

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
#define MTRB_DIR_Pin GPIO_PIN_2
#define MTRB_DIR_GPIO_Port GPIOC
#define MTRC_DIR_Pin GPIO_PIN_3
#define MTRC_DIR_GPIO_Port GPIOC
#define ENCB_CHB_Pin GPIO_PIN_0
#define ENCB_CHB_GPIO_Port GPIOA
#define ENCB_CHA_Pin GPIO_PIN_1
#define ENCB_CHA_GPIO_Port GPIOA
#define ENCC_CHB_Pin GPIO_PIN_5
#define ENCC_CHB_GPIO_Port GPIOA
#define ENCD_CHB_Pin GPIO_PIN_6
#define ENCD_CHB_GPIO_Port GPIOA
#define ENCD_CHA_Pin GPIO_PIN_7
#define ENCD_CHA_GPIO_Port GPIOA
#define MTRD_DIR_Pin GPIO_PIN_5
#define MTRD_DIR_GPIO_Port GPIOC
#define MTRA_DIR_Pin GPIO_PIN_6
#define MTRA_DIR_GPIO_Port GPIOC
#define MTRA_PWM_Pin GPIO_PIN_8
#define MTRA_PWM_GPIO_Port GPIOA
#define MTRB_PWM_Pin GPIO_PIN_9
#define MTRB_PWM_GPIO_Port GPIOA
#define MTRC_PWM_Pin GPIO_PIN_10
#define MTRC_PWM_GPIO_Port GPIOA
#define MTRD_PWM_Pin GPIO_PIN_11
#define MTRD_PWM_GPIO_Port GPIOA
#define TMS_Pin GPIO_PIN_13
#define TMS_GPIO_Port GPIOA
#define TCK_Pin GPIO_PIN_14
#define TCK_GPIO_Port GPIOA
#define ENCC_CHA_Pin GPIO_PIN_3
#define ENCC_CHA_GPIO_Port GPIOB
#define ENCA_CHA_Pin GPIO_PIN_6
#define ENCA_CHA_GPIO_Port GPIOB
#define ENCA_CHB_Pin GPIO_PIN_7
#define ENCA_CHB_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
