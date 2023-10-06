/***********************************************************************************
 ***********                      Created on: oct 21, 2021            **************   
 ***********                      Author: Ahmed Tarek                 **************  
 ***********                      File Name : MADC_PROGRAM            **************  
 ***********                       V 1.0                              **************  
 ***********                 Description: PROGRAM fo MADC             **************  
 ***********                                                          **************  
 ***********                                                          **************  
 ***********************************************************************************/
 
 #include "STD_TYPES.h"
 #include "BIT_MATH.h"
 #include "MADC_Private.h"
 #include "MADC_Interface.h"
 
 
 
 void MADC_voidInit(void)
 {
	 /*AVCC as reference voltage*/
	SET_BIT(ADMUX,ADMUX_REFS0);
	CLR_BIT(ADMUX,ADMUX_REFS1);

	/*Activate Right adjust result*/
	CLR_BIT(ADMUX,ADMUX_ADLAR);

   /* disable interupt */
	CLR_BIT(ADMUX,ADCSRA_ADIE);

	/*Set Prescaler to divide by 128*/
	SET_BIT(ADCSRA,ADCSRA_ADPS2);
	SET_BIT(ADCSRA,ADCSRA_ADPS1);
	SET_BIT(ADCSRA,ADCSRA_ADPS0);

	/*Enable peripheral*/
	SET_BIT(ADCSRA,ADCSRA_ADEN);
 }

 u16 MADC_ReadData (u8 Copy_U8Channel)
 {
	 /*Clear the MUX bits in ADMUX register*/
		ADMUX&=0b11100000;

	/*Set the required channel into the MUX bits*/
		ADMUX|=Copy_U8Channel;
	
	/*Start conversion*/
		SET_BIT(ADCSRA,ADCSRA_ADSC);
    
	/*Polling (busy waiting) until the conversion complete flag is set*/
	while(GET_BIT(ADCSRA,ADCSRA_ADIF)==0);
	
	/*clear the conversion complete flag*/
		SET_BIT(ADCSRA,ADCSRA_ADIF);

	/*Return the reading*/
	return ADC_data;
 }
