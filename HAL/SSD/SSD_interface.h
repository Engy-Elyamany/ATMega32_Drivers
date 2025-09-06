/*
*  Author : Engy Elyamany
*  Layer  : HAL
*  SWC    : SSD
*
*/
#ifndef SSD_INTERFACE_H
#define SSD_INTERFACE_H

#define COMMON_CATHODE	1
#define COMMON_ANODE	2

/*Define PORT*/
#define SSD_u8PORTA				0
#define SSD_u8PORTB				1
#define SSD_u8PORTC				2
#define SSD_u8PORTD				3

/*Define Pins*/
#define SSD_u8PIN0				0
#define SSD_u8PIN1				1
#define SSD_u8PIN2				2
#define SSD_u8PIN3				3
#define SSD_u8PIN4				4
#define SSD_u8PIN5				5
#define SSD_u8PIN6				6
#define SSD_u8PIN7				7

typedef struct
{
	u8 DataPort;
	u8 CommonType;
	
}SSD_Configuration;

void SSD_voidEnableCommon(SSD_Configuration * target_SSD);
void SSD_voidInit(SSD_Configuration * target_SSD);
u8 SSD_u8SetNumber(SSD_Configuration * target_SSD, u8 target_number);
void SSD_voidDisableCommon(SSD_Configuration * target_SSD);

#endif