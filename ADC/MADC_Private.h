/***********************************************************************************
 ***********                      Created on: Sep 21, 2021            **************   
 ***********                      Author: Ahmed Tarek                 **************  
 ***********                      File Name : MADC_PRIVATE            **************  
 ***********                       V 1.0                              **************  
 ***********                 Description: Private fo MADC             **************  
 ***********                                                          **************  
 ***********                                                          **************  
 ***********************************************************************************/



#ifndef MADC_PRIVATE_H
#define MADC_PRIVATE_H

#define ADMUX                     *((volatile u8*)0x27)       //ADC multiplexer selection register
#define ADMUX_REFS1               7                           // Refrence selection bit 1
#define ADMUX_REFS0               6                           // Refrence selection bit 0
#define ADMUX_ADLAR               5                           // ADC Left adjust result


#define ADCSRA                    *((volatile u8*)0x26)       // ADC control and status register A
#define ADCSRA_ADEN               7                           // ADC enable
#define ADCSRA_ADSC               6                           // start conversion 
#define ADCSRA_ADATE              5                           // Auto trigger enable
#define ADCSRA_ADIF               4                           //Interrupt flag 
#define ADCSRA_ADIE               3                           // Interrupt enable
#define ADCSRA_ADPS2              2                           // Prescaler bit 2
#define ADCSRA_ADPS1              1                           // Prescaler bit 1
#define ADCSRA_ADPS0              0                           // Prescaler bit 0

#define ADC_data     *((volatile u16*)0x24)
//#define ADCH   *((volatile u8*)0x25) //ADC high Reg

//#define ADCL  *((volatile u8*)0x24) //ADC low Reg

#endif 
