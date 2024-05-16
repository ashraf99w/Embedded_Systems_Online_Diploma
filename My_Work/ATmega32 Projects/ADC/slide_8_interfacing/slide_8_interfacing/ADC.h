/*
 * ADC.h
 *
 * Created: 28/09/2021 10:49:18
 *  Author: ashraf
 */ 


#ifndef ADC_H_
#define ADC_H_

void ADC_vinit(unsigned char ref_volt,unsigned char enable_interrupt_INT0,
unsigned char enable_DIFRENTIAL_MODE,unsigned char ENABLE_ADC_INTERRUPT);
unsigned short ADC_u16Read(void);
unsigned short ADC_u16Read_EXTERNAL_INTERRUPT0(void);



#endif /* ADC_H_ */