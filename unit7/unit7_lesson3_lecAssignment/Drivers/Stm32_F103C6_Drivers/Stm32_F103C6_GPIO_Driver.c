/*
 * Stm32_F103C6_GPIO_Driver.c
 *
 *  Created on: Apr 17, 2024
 *      Author: ashraf
 */
#include "Stm32_F103C6_GPIO_Driver.h"



uint8_t Get_Position_CRLH(uint16_t PinNumber)
{
	switch(PinNumber)
	{

	case GPIO_Pin_0:
		return 0;
		break;

	case GPIO_Pin_1:
		return 4;
		break;

	case GPIO_Pin_2:
		return 8;
		break;

	case GPIO_Pin_3:
		return 12;
		break;

	case GPIO_Pin_4:
		return 16;
		break;

	case GPIO_Pin_5:
		return 20;
		break;

	case GPIO_Pin_6:
		return 24;
		break;

	case GPIO_Pin_7:
		return 28;
		break;

	case GPIO_Pin_8:
		return 0;
		break;

	case GPIO_Pin_9:
		return 4;
		break;

	case GPIO_Pin_10:
		return 8;
		break;

	case GPIO_Pin_11:
		return 12;
		break;

	case GPIO_Pin_12:
		return 16;
		break;

	case GPIO_Pin_13:
		return 20;
		break;

	case GPIO_Pin_14:
		return 24;
		break;

	case GPIO_Pin_15:
		return 28;
		break;

	}
	return 0;
}

/**================================================================
 * @Fn			-MCAL_GPIO_Init
 * @brief 		-Initializes GPIOx PINy according to the specified parameters in the PinConfig
 * @param [in] 	-GPIOx:where x can be (A,B...G Depending on the used device) to select the GPIO peripheral
 * @param [in] 	-PinConfig pointer to GPIO_PinConfig_t structure that contains the configuration information
 *                for the specified GPIO pins
 * @retval 		-none
 * Note			-STM32F103C6 MCU has GPIO A,B,C,D,E modules, BUT LQFP48 PACKAGE has only GPIO a,b part of c,d
 *                exported as external pins from the mcu
 */

void MCAL_GPIO_Init (GPIO_TypeDef* GPIOx, GPIO_PinConfig_t* PinConfig)
{

	uint8_t Config_Of_Pin=0;


	//Port configuration register low  CRL configures pins from 0>>7
	//Port configuration register high CRH configures pins from 8>>15
	volatile uint32_t* configRegister = NULL; //because all registers consists of 32 bits
	configRegister = (PinConfig->GPIO_PinNumber < GPIO_Pin_8 )? &(GPIOx->CRL):&(GPIOx->CRH);


	//clear CNFx[1:0] MODEx[1:0]
	(*configRegister) &= ~(0xf<<Get_Position_CRLH(PinConfig->GPIO_PinNumber));



	//if pin is output
	if(PinConfig->GPIO_Mode == GPIO_Mode_OUTPUT_OD||PinConfig->GPIO_Mode == GPIO_Mode_OUTPUT_PP
			||PinConfig->GPIO_Mode == GPIO_Mode_AF_OD||PinConfig->GPIO_Mode == GPIO_Mode_AF_PP)
	{
		//set CNFx[1:0] MODEx[1:0]
		Config_Of_Pin=(((PinConfig->GPIO_Mode - 4)<<2) |(PinConfig->GPIO_output_speed )) & 0x0f ;

	}


	//else pin is input
	//00: Input mode (reset state)
	else
	{
		if(PinConfig->GPIO_Mode==GPIO_Mode_Analog||PinConfig->GPIO_Mode==GPIO_Mode_INPUT_FLI)
		{
			Config_Of_Pin=(((PinConfig->GPIO_Mode )<<2) |0x0) & 0x0f ;
		}

		else if(PinConfig->GPIO_Mode==GPIO_Mode_AF_INPUT)//considering it as floating input
		{
			Config_Of_Pin=(((GPIO_Mode_INPUT_FLI )<<2) |0x0) & 0x0f ;
		}

		else //PU PD Input
		{

			Config_Of_Pin=(((GPIO_Mode_INPUT_PU )<<2) |0x0) & 0x0f ;

			if(PinConfig->GPIO_Mode==GPIO_Mode_INPUT_PU)
			{
				//PxODR register = 1 input pull up is configured
				GPIOx->ODR |=PinConfig->GPIO_PinNumber;
			}

			else
			{
				//PxODR register = 0 input down up is configured
				GPIOx->ODR &=~(PinConfig->GPIO_PinNumber);
			}

		}


	}

	(*configRegister) |= (Config_Of_Pin<<Get_Position_CRLH(PinConfig->GPIO_PinNumber));


}




/**================================================================
 * @Fn			-MCAL_GPIO_DeInit
 * @brief 		-Resets all the GPIO registers
 * @param [in] 	-GPIOx:where x can be (A,B...G Depending on the used device) to select the GPIO peripheral
 * @retval 		-none
 * Note			-STM32F103C6 MCU has GPIO A,B,C,D,E modules, BUT LQFP48 PACKAGE has only GPIO a,b part of c,d
 *                exported as external pins from the mcu
 */

void MCAL_GPIO_DeInit (GPIO_TypeDef* GPIOx)
{
	if(GPIOx == GPIOA)
	{
		RCC->APB2RSTR |=(1<<2);
	}

	if(GPIOx == GPIOB)
	{
		RCC->APB2RSTR |=(1<<3);
	}
	if(GPIOx == GPIOC)
	{
		RCC->APB2RSTR |=(1<<4);
	}
	if(GPIOx == GPIOD)
	{
		RCC->APB2RSTR |=(1<<5);
	}
	if(GPIOx == GPIOE)
	{
		RCC->APB2RSTR |=(1<<6);
	}
	if(GPIOx == GPIOF)
	{
		RCC->APB2RSTR |=(1<<7);
	}
	if(GPIOx == GPIOG)
	{
		RCC->APB2RSTR |=(1<<8);
	}


}


/**================================================================
 * @Fn			-MCAL_GPIO_ReadPin
 * @brief 		-Read specific pin
 * @param [in] 	-GPIOx:where x can be (A,B...G Depending on the used device) to select the GPIO peripheral
 * @param [in] 	-PinNumber: set PinNumber according to //@ref GPIO_Pins_Define
 * @retval    	-The Pin value (two values according to //@ref GPIO_PIN_State )
 * Note			-STM32F103C6 MCU has GPIO A,B,C,D,E modules, BUT LQFP48 PACKAGE has only GPIO a,b part of c,d
 *                exported as external pins from the mcu
 */

uint8_t MCAL_GPIO_ReadPin (GPIO_TypeDef* GPIOx,uint16_t PinNumber)
{
	uint8_t BitStatus = 0;
	if(((GPIOx->IDR) & PinNumber) != GPIO_PIN_Cleared )
		BitStatus=GPIO_PIN_Set;
	else
		BitStatus=GPIO_PIN_Cleared;
	return BitStatus;
}


/**========================================================================================
 * @Fn			-MCAL_GPIO_ReadPort
 * @brief 		-Read the port value
 * @param [in] 	-GPIOx:where x can be (A,B...G Depending on the used device) to select the GPIO peripheral
 * @retval    	-The value of the port
 * Note			-STM32F103C6 MCU has GPIO A,B,C,D,E modules, BUT LQFP48 PACKAGE has only GPIO a,b part of c,d
 *                exported as external pins from the mcu
 */

uint16_t MCAL_GPIO_ReadPort (GPIO_TypeDef* GPIOx)
{

	return (uint16_t)GPIOx->IDR;
}



/**========================================================================================
 * @Fn			-MCAL_GPIO_WritePin
 * @brief 		-write on a specific pin in a port
 * @param [in] 	-GPIOx:where x can be (A,B...G Depending on the used device) to select the GPIO peripheral
 * @param [in]   -PinNumber: set PinNumber according to //@ref GPIO_Pins_Define
 * @param [in]   -value: is the value to be on the pin (two values according to //@ref GPIO_PIN_State )
 * @retval    	-none
 * Note			-STM32F103C6 MCU has GPIO A,B,C,D,E modules, BUT LQFP48 PACKAGE has only GPIO a,b part of c,d
 *                exported as external pins from the mcu
 */

void MCAL_GPIO_WritePin (GPIO_TypeDef* GPIOx,uint16_t PinNumber,uint8_t value)
{
	if(value != GPIO_PIN_Cleared)
	{
		//	GPIOx->ODR |= PinNumber;

		//or

		//		BSy: Port x Set bit y (y= 0 .. 15)
		//		These bits are write-only and can be accessed in Word mode only.
		//		0: No action on the corresponding ODRx bit
		//		1: Set the corresponding ODRx bit

		GPIOx->BSRR=PinNumber;
	}
	else
	{
		//GPIOx->ODR &= ~(PinNumber);

		//or

		//		 BRy: Port x Reset bit y (y= 0 .. 15)
		//		These bits are write-only and can be accessed in Word mode only.
		//		0: No action on the corresponding ODRx bit
		//		1: Reset the corresponding ODRx bit
		GPIOx->BRR=PinNumber;
	}


}

/**========================================================================================
 * @Fn			-MCAL_GPIO_WritePort
 * @brief 		-to write a specific value on a port
 * @param [in] 	-GPIOx:where x can be (A,B...G Depending on the used device) to select the GPIO peripheral
 * @param [in]   -value: is the value to be on the port
 * @retval    	-none
 * Note			-STM32F103C6 MCU has GPIO A,B,C,D,E modules, BUT LQFP48 PACKAGE has only GPIO a,b part of c,d
 *                exported as external pins from the mcu
 */

void  MCAL_GPIO_WritePort (GPIO_TypeDef* GPIOx,uint16_t value)
{
	GPIOx->ODR=value;

}


/**========================================================================================
 * @Fn			-MCAL_GPIO_TogglePin
 * @brief 		-Toggle a specific pin in a port
 * @param [in] 	-GPIOx:where x can be (A,B...G Depending on the used device) to select the GPIO peripheral
 * @param [in]   -PinNumber: set PinNumber according to //@ref GPIO_Pins_Define
 * @retval    	-none
 * Note			-STM32F103C6 MCU has GPIO A,B,C,D,E modules, BUT LQFP48 PACKAGE has only GPIO a,b part of c,d
 *                exported as external pins from the mcu
 */

void MCAL_GPIO_TogglePin (GPIO_TypeDef* GPIOx,uint16_t PinNumber)
{
	GPIOx->ODR ^= PinNumber;
}
/**========================================================================================
 * @Fn			-MCAL_GPIO_TogglePort
 * @brief 		-Toggle a specific port
 * @param [in] 	-GPIOx:where x can be (A,B...G Depending on the used device) to select the GPIO peripheral
 * @retval    	-none
 * Note			-STM32F103C6 MCU has GPIO A,B,C,D,E modules, BUT LQFP48 PACKAGE has only GPIO a,b part of c,d
 *                exported as external pins from the mcu
 */

void MCAL_GPIO_TogglePort (GPIO_TypeDef* GPIOx)
{
	GPIOx->ODR ^= 0xff;
}

/**========================================================================================
 * @Fn			-MCAL_GPIO_LockPin
 * @brief 		-The Locking Mechanism makes the IO configuration to be frozen
 * @param [in] 	-GPIOx:where x can be (A,B...G Depending on the used device) to select the GPIO peripheral
 * @param [in]   -PinNumber: set PinNumber according to //@ref GPIO_Pins_Define
 * @retval    	-Ok if pin configuration is locked Error if its not locked(Error & Ok are defined @ref GPIO_RETURN_LOCK )
 * Note			-STM32F103C6 MCU has GPIO A,B,C,D,E modules, BUT LQFP48 PACKAGE has only GPIO a,b part of c,d
 *                exported as external pins from the mcu
 */
uint8_t MCAL_GPIO_LockPin (GPIO_TypeDef* GPIOx,uint16_t PinNumber)
{

	//	Bit 16 LCKK[16]: Lock key
	//	This bit can be read anytime. It can only be modified using the Lock Key Writing Sequence.
	//	0: Port configuration lock key not active
	//	1: Port configuration lock key active. GPIOx_LCKR register is locked until the next reset.
	//	LOCK key writing sequence:
	//	Write 1
	//	Write 0
	//	Write 1
	//	Read 0
	//	Read 1 (this read is optional but confirms that the lock is active)
	//	Note: During the LOCK Key Writing sequence, the value of LCK[15:0] must not change.
	//	Any error in the lock sequence will abort the lock.

	//	Bits 15:0 LCKy: Port x Lock bit y (y= 0 .. 15)
	//	These bits are read write but can only be written when the LCKK bit is 0.
	//	0: Port configuration not locked
	//	1: Port configuration locked.

	//set LCKK[16]
	volatile uint32_t temp=(1<<16);
	//set LCKy
	temp |= PinNumber;
	//write 1
	GPIOx->LCKR=temp;
	//write 0
	GPIOx->LCKR=PinNumber;
	//write 1
	GPIOx->LCKR=temp;
	//read
	temp=GPIOx->LCKR;
	//	Read 1 (this read is optional but confirms that the lock is active)

	if((uint32_t)(GPIOx->LCKR & (1<<16)))
	{
		return GPIO_PIN_Set;
	}
	else
	{
		return GPIO_PIN_Cleared;

	}

}
