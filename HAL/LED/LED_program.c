/*
*  Author : Engy Elyamany
*  Layer  : HAL
*  SWC    : LED
*
*/

# define F_CPU 8000000UL
#include "../../LIB/STD_TYPES.h"
#include "../../LIB/BIT_MATH.h"
#include "../../MCAL/DIO/DIO_interface.h"

#include "LED_config.h"
#include "LED_interface.h"
#include "LED_private.h"


void LED_voidInit(LED_Configuration *target_Led)
{
	/*Set Pin Direction to output*/
	DIO_u8SetPinDirection(target_Led->Port,target_Led->Pin,DIO_u8PIN_OUTPUT);
	
}

void LED_voidLedON(LED_Configuration *target_Led)
{
	if (target_Led->ConnectionType == SOURCE_CONNECTION)
	{
		/*Set Pin value to high*/
		DIO_u8SetPinValue(target_Led->Port,target_Led->Pin,DIO_u8PIN_HIGH);
	}
	else if(target_Led->ConnectionType == SINK_CONNECTION)
	{
		/*Set Pin value to low*/
		DIO_u8SetPinValue(target_Led->Port,target_Led->Pin,DIO_u8PIN_LOW);
	}
	
}


void LED_voidLedOFF(LED_Configuration *target_Led)
{
	if (target_Led->ConnectionType == SOURCE_CONNECTION)
	{
		/*Set Pin value to low*/
		DIO_u8SetPinValue(target_Led->Port,target_Led->Pin,DIO_u8PIN_LOW);
	}
	else if(target_Led->ConnectionType == SINK_CONNECTION)
	{
		/*Set Pin value to high*/
		DIO_u8SetPinValue(target_Led->Port,target_Led->Pin,DIO_u8PIN_HIGH);
	}
}