/*
 * Stm32_F103C6_GPIO_Driver.h
 *
 *  Created on: Apr 17, 2024
 *      Author: ashraf
 */

#ifndef INC_STM32_F103C6_GPIO_DRIVER_H_
#define INC_STM32_F103C6_GPIO_DRIVER_H_

//includes
#include"Stm32_F103x6.h"
//========================================

//Config structure

typedef struct{

	uint16_t GPIO_PinNumber;			//specifies GPIO pins to be configured
	                                    //this parameter must be a value of @ref GPIO_Pins_Define

	uint8_t GPIO_Mode;					//specifies the operating mode for the selected pin
	                                    //this parameter must be a value of @ref GPIO_Mode_Define

	uint8_t GPIO_output_speed;			//specifies the speed of the selected pin
	                                    //this parameter must be a value of @ref GPIO_speed_Define

}GPIO_PinConfig_t;



//==============================
//Macros Configuration Reference
//==============================

//@ref GPIO_PIN_State

#define GPIO_PIN_Set 	  		1
#define GPIO_PIN_Cleared 		0

//@ref GPIO_RETURN_LOCK

#define GPIO_RETURN_LOCK_Ok         1
#define GPIO_RETURN_LOCK_Error      0

//@ref GPIO_Pins_Define
#define GPIO_Pin_0    ((uint16_t)0x0001) /*pin 0 selected*/
#define GPIO_Pin_1    ((uint16_t)0x0002) /*pin 1 selected*/
#define GPIO_Pin_2    ((uint16_t)0x0004) /*pin 2 selected*/
#define GPIO_Pin_3    ((uint16_t)0x0008) /*pin 3 selected*/
#define GPIO_Pin_4    ((uint16_t)0x0010) /*pin 4 selected*/
#define GPIO_Pin_5    ((uint16_t)0x0020) /*pin 5 selected*/
#define GPIO_Pin_6    ((uint16_t)0x0040) /*pin 6 selected*/
#define GPIO_Pin_7    ((uint16_t)0x0080) /*pin 7 selected*/
#define GPIO_Pin_8    ((uint16_t)0x0100) /*pin 8 selected*/
#define GPIO_Pin_9    ((uint16_t)0x0200) /*pin 9 selected*/
#define GPIO_Pin_10   ((uint16_t)0x0400) /*pin 10 selected*/
#define GPIO_Pin_11   ((uint16_t)0x0800) /*pin 11 selected*/
#define GPIO_Pin_12   ((uint16_t)0x1000) /*pin 12 selected*/
#define GPIO_Pin_13   ((uint16_t)0x2000) /*pin 13 selected*/
#define GPIO_Pin_14   ((uint16_t)0x4000) /*pin 14 selected*/
#define GPIO_Pin_15   ((uint16_t)0x8000) /*pin 15 selected*/
#define GPIO_Pin_all  ((uint16_t)0xFFFF) /*all pins selected*/
#define GPIO_Pin_MASK  0x0000FFFFU /*PIN MASK FOR ASSERT TEST*/

//@ref GPIO_Mode_Define

//0: Analog mode
//1: Floating input (reset state)
//2: Input with pull-up
//3: Input with pull-down
//4: General purpose output push-pull
//5: General purpose output Open-drain
//6: Alternate function output Push-pull
//7: Alternate function output Open-drain
//8: Alternate function input

#define GPIO_Mode_Analog 		   ((uint8_t)0x0000)    //Analog mode
#define GPIO_Mode_INPUT_FLI        ((uint8_t)0x0001)    //Floating input (reset state)
#define GPIO_Mode_INPUT_PU     	   ((uint8_t)0x0002)    //Input with pull-up
#define GPIO_Mode_INPUT_PD         ((uint8_t)0x0003)    //Input with pull-down
#define GPIO_Mode_OUTPUT_PP        ((uint8_t)0x0004)    //General purpose output push-pull
#define GPIO_Mode_OUTPUT_OD        ((uint8_t)0x0005)    //General purpose Open-drain
#define GPIO_Mode_AF_PP            ((uint8_t)0x0006)    //Alternate function output Push-pull
#define GPIO_Mode_AF_OD    		   ((uint8_t)0x0007)    //Alternate function output Open-drain
#define GPIO_Mode_AF_INPUT  	   ((uint8_t)0x0008)    //Alternate function input

//@ref GPIO_speed_Define

//1: Output mode, max speed 10 MHz.
//2: Output mode, max speed 2 MHz.
//3: Output mode, max speed 50 MHz

#define GPIO_speed_10M       ((uint8_t)0x0001) //Output mode, max speed 10 MHz.
#define GPIO_speed_2M        ((uint8_t)0x0002) //Output mode, max speed 2 MHz.
#define GPIO_speed_50M       ((uint8_t)0x0003) //Output mode, max speed 50 MHz.

//=======================================
//  APIs Supported by "MCAL GPIO DRIVER"
//=======================================
void MCAL_GPIO_Init (GPIO_TypeDef* GPIOx, GPIO_PinConfig_t * PinConfig);
void MCAL_GPIO_DeInit (GPIO_TypeDef* GPIOx);

uint8_t MCAL_GPIO_ReadPin (GPIO_TypeDef* GPIOx,uint16_t PinNumber);
uint16_t MCAL_GPIO_ReadPort (GPIO_TypeDef* GPIOx);

void MCAL_GPIO_WritePin (GPIO_TypeDef* GPIOx,uint16_t PinNumber,uint8_t value);
void  MCAL_GPIO_WritePort (GPIO_TypeDef* GPIOx,uint16_t value);

void MCAL_GPIO_TogglePin (GPIO_TypeDef* GPIOx,uint16_t PinNumber);
void MCAL_GPIO_TogglePort (GPIO_TypeDef* GPIOx);

uint8_t MCAL_GPIO_LockPin (GPIO_TypeDef* GPIOx,uint16_t PinNumber);
#endif /* INC_STM32_F103C6_GPIO_DRIVER_H_ */
