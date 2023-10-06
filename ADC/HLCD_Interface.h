/***********************************************************************************
 ***********                      Created on: Sep 24, 2021            **************   
 ***********                      Author: Ahmed Tarek                 **************  
 ***********                      File Name : HLCD_INTERFACE          **************  
 ***********                       V 1.0                              **************  
 ***********                 Description: INTERFACE for LCD           **************  
 ***********                                                          **************  
 ***********                                                          **************  
 ***********************************************************************************/






#ifndef HLCD_INTERFACE_H
#define HLCD_INTERFACE_H

void HLCD_VoidSendChar(u8 Copy_U8Data);

void HLCD_VoidSendCommand(u8 Copy_U8Command);

void HLCD_VoidStringChar (char* str);

void HLCD_VoidSetPostion(u8 Copy_U8Row,u8 Copy_U8Col);

void HLCD_VoidInit(void);

void HLCD_SendNumber(u32 num);

void HLCD_DrawChar(void);

#endif
