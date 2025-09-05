/*
*  Author : Engy Elyamany
*  Layer  : HAL
*  SWC    : SSD
*
*/

# define F_CPU 8000000UL
#include "../../LIB/STD_TYPES.h"
#include "../../LIB/BIT_MATH.h"
#include "../../MCAL/DIO/DIO_interface.h"

#include "SSD_config.h"
#include "SSD_interface.h"
#include "SSD_private.h"

static u8 seven_segment[10] = {
	0b00111111,
	0b00000110,
	0b01011011,
	0b01001111,
	0b01100110,
	0b01101101,
	0b01111101,
	0b00000111,
	0b01111111,
0b01101111};

void SSD_voidInit(SSD_Configuration * target_SSD)
{
	DIO_u8SetPortDirection(target_SSD->DataPort,DIO_u8PORT_OUTPUT);
	DIO_u8SetPinDirection(target_SSD->EnablePort,target_SSD->EnablePin,DIO_u8PORT_OUTPUT);
	DIO_u8SetPinValue(target_SSD->EnablePort,target_SSD->EnablePin,DIO_u8PIN_LOW);
}


void SSD_voidEnableCommon(SSD_Configuration * target_SSD)
{
	if(target_SSD->CommonType == COMMON_CATHODE)
	{
		DIO_u8SetPinValue(target_SSD->EnablePort,target_SSD->EnablePin,DIO_u8PIN_LOW);
	}
	else if (target_SSD->CommonType == COMMON_ANODE)
	{
		DIO_u8SetPinValue(target_SSD->EnablePort,target_SSD->EnablePin,DIO_u8PIN_HIGH);
	}
}

u8 SSD_u8SetNumber(SSD_Configuration * target_SSD, u8 target_number){
	u8 ErrorState = NO_ERROR;
	
	if(target_number >= 0 && target_number <= 9)
	{
		DIO_u8SetPortValue(target_SSD->DataPort,seven_segment[target_number]);
	}
	else
	{
		ErrorState = ERROR;
	}
	
	return ErrorState;
	
}

void SSD_voidDisableCommon(SSD_Configuration * target_SSD)
{
	if(target_SSD->CommonType == COMMON_CATHODE)
	{
		DIO_u8SetPinValue(target_SSD->EnablePort,target_SSD->EnablePin,DIO_u8PIN_HIGH);
	}
	else if (target_SSD->CommonType == COMMON_ANODE)
	{
		DIO_u8SetPinValue(target_SSD->EnablePort,target_SSD->EnablePin,DIO_u8PIN_LOW);
	}
}