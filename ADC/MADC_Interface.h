/***********************************************************************************
 ***********                      Created on: Sep 21, 2021            **************   
 ***********                      Author: Ahmed Tarek                 **************  
 ***********                      File Name : MADC_INTERFACE          **************  
 ***********                       V 1.0                              **************  
 ***********                 Description: INTERFACE fo MADC           **************  
 ***********                                                          **************  
 ***********                                                          **************  
 ***********************************************************************************/



#ifndef MADC_INTERFACE_H
#define MADC_INTERFACE_H


void MADC_voidInit(void);

 u16 MADC_ReadData (u8 Copy_U8Channel);
#endif
