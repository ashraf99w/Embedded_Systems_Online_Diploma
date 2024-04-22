/*
 * Stm32_F103x6.h
 *
 *  Created on: Apr 17, 2024
 *      Author: ashraf
 */

#ifndef INC_STM32_F103X6_H_
#define INC_STM32_F103X6_H_


//-----------------------------
//Includes
//-----------------------------
#include "stdlib.h"
#include "stdint.h"


//<-------------------------------------------------------------------------------------->
//Base addresses for Memories
//-----------------------------

#define FLASH_MEMORY_BASE	          			0x08000000UL
#define SYSTEM_MEMORY_BASE						0x1FFFF000UL
#define SRAM_MEMORY_BASE	    				0x20000000UL
#define Peripherals_BASE						0x40000000UL
#define Cortex_M3_InternalPeripheral_BASE		0xE0000000UL




//<-------------------------------------------------------------------------------------->

//-----------------------------
//Base addresses for BUS Peripherals
//-----------------------------


//-----------------------------
//Base addresses for AHP Peripherals
//-----------------------------

//RCC
#define RCC_Base 								(Peripherals_BASE + 0x00021000UL)

//-----------------------------
//Base addresses for APB2 Peripherals
//-----------------------------

//GPIO

//A,B Fully Included in LQFP48 Package
#define GPIOA_Base 								(Peripherals_BASE + 0x00010800UL)
#define GPIOB_Base 								(Peripherals_BASE + 0x00010C00UL)

//C,D Partial Included in LQFP48 Package
#define GPIOC_Base 								(Peripherals_BASE + 0x00011000UL)
#define GPIOD_Base 								(Peripherals_BASE + 0x00011400UL)

//E,F,G NOT Included in LQFP48 Package
#define GPIOE_Base 								(Peripherals_BASE + 0x00011800UL)
#define GPIOF_Base 								(Peripherals_BASE + 0x00011C00UL)
#define GPIOG_Base 								(Peripherals_BASE + 0x00012000UL)

//EXTI
#define EXTI_Base 								(Peripherals_BASE + 0x00010400UL)

//AFIO
#define AFIO_Base 								(Peripherals_BASE + 0x00010000UL)


//-----------------------------
//Base addresses for APB1 Peripherals
//-----------------------------


//<-------------------------------------------------------------------------------------->

//-*-*-*-*-*-*-*-*-*-*-*-
//Peripheral registers:
//-*-*-*-*-*-*-*-*-*-*-*

//-*-*-*-*-*-*-*-*-*-*-*-
//Peripheral registers: GPIO
//-*-*-*-*-*-*-*-*-*-*-*
typedef struct{

	volatile uint32_t CRL ;
	volatile uint32_t CRH ;
	volatile uint32_t IDR ;
	volatile uint32_t ODR ;
	volatile uint32_t BSRR ;
	volatile uint32_t BRR ;
	volatile uint32_t LCKR ;

}GPIO_TypeDef;


//-*-*-*-*-*-*-*-*-*-*-*-
//Peripheral register: EXTI
//-*-*-*-*-*-*-*-*-*-*-*
typedef struct{

	volatile uint32_t IMR ;
	volatile uint32_t EMR ;
	volatile uint32_t RTSR ;
	volatile uint32_t FTSR;
	volatile uint32_t SWIER ;
	volatile uint32_t PR ;

}EXTI_TypeDef;


//-*-*-*-*-*-*-*-*-*-*-*-
//Peripheral register: AFIO
//-*-*-*-*-*-*-*-*-*-*-*
typedef struct{

	volatile uint32_t EVCR ;
	volatile uint32_t MAPR ;
	volatile uint32_t EXTICR1 ;
	volatile uint32_t EXTICR2 ;
	volatile uint32_t EXTICR3;
	volatile uint32_t EXTICR4 ;
			 uint32_t RESERVED0 ;
	volatile uint32_t MAPR2 ;

}AFIO_TypeDef;


//-*-*-*-*-*-*-*-*-*-*-*-
//Peripheral register: RCC
//-*-*-*-*-*-*-*-*-*-*-*
typedef struct{

	volatile uint32_t CR ;
	volatile uint32_t CFGR ;
	volatile uint32_t CIR ;
	volatile uint32_t APB2RSTR ;
	volatile uint32_t APB1RSTR;
    volatile uint32_t AHBENR ;
	volatile uint32_t APB2ENR ;
	volatile uint32_t APB1ENR ;
	volatile uint32_t BDCR ;
	volatile uint32_t CSR;

}RCC_TypeDef;
//<-------------------------------------------------------------------------------------->


//-*-*-*-*-*-*-*-*-*-*-*-
//Peripheral Instants:
//-*-*-*-*-*-*-*-*-*-*-*
#define GPIOA 		((GPIO_TypeDef*)GPIOA_Base)
#define GPIOB 		((GPIO_TypeDef*)GPIOB_Base)
#define GPIOC 		((GPIO_TypeDef*)GPIOC_Base)
#define GPIOD 		((GPIO_TypeDef*)GPIOD_Base)
#define GPIOE 		((GPIO_TypeDef*)GPIOE_Base)
#define GPIOF 		((GPIO_TypeDef*)GPIOF_Base)
#define GPIOG 		((GPIO_TypeDef*)GPIOG_Base)

#define RCC 		((RCC_TypeDef*)RCC_Base)

#define EXTI 		((EXTI_TypeDef*)EXTI_Base)

#define AIFO		((AFIO_TypeDef*)AFIO_Base)
//<-------------------------------------------------------------------------------------->



//-*-*-*-*-*-*-*-*-*-*-*-
//clock enable Macros:
//-*-*-*-*-*-*-*-*-*-*-*

#define RCC_GPIOA_EN()			(RCC->APB2ENR |=1<<2)
#define RCC_GPIOB_EN()			(RCC->APB2ENR |=1<<3)
#define RCC_GPIOC_EN()			(RCC->APB2ENR |=1<<4)
#define RCC_GPIOD_EN()			(RCC->APB2ENR |=1<<5)
#define RCC_GPIOE_EN()			(RCC->APB2ENR |=1<<6)
#define RCC_GPIOF_EN()			(RCC->APB2ENR |=1<<7)
#define RCC_GPIOG_EN()			(RCC->APB2ENR |=1<<8)

#define RCC_AIO_EN()			(RCC->APB2ENR |=1<<0)
//<-------------------------------------------------------------------------------------->

//-*-*-*-*-*-*-*-*-*-*-*-
//Generic Macros:
//-*-*-*-*-*-*-*-*-*-*-*
//<-------------------------------------------------------------------------------------->

#endif /* INC_STM32_F103X6_H_ */
