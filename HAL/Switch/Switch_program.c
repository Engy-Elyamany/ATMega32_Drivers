/*
*  Author : Engy Elyamany
*  Layer  : HAL
*  SWC    : Switch
*
*/

# define F_CPU 8000000UL
#include "../../LIB/STD_TYPES.h"
#include "../../LIB/BIT_MATH.h"
#include "../../MCAL/DIO/DIO_interface.h"

#include "Switch_config.h"
#include "Switch_interface.h"
#include "Switch_private.h"


void Switch_voidInit(Switch_Configuration * target_switch)
{
	DIO_u8SetPinDirection(target_switch->Port,target_switch->Pin,DIO_u8PIN_INPUT);
	
	if(target_switch->PullType == PULL_UP)
	{
		DIO_u8SetPinValue(target_switch->Port,target_switch->Pin,DIO_u8PIN_HIGH);
	}
	
}

u8 Switch_u8GetSwitchState(Switch_Configuration * target_switch)
{
	u8 Local_u8SwitchState = NOT_PRESSED;
	
	u8 Switch_Reading = 0;
	DIO_u8GetPinValue(target_switch->Port,target_switch->Pin,&Switch_Reading);
	 if (Switch_Reading == 0 && target_switch->PullType == PULL_UP)
	 {
		 Local_u8SwitchState = PRESSED;
	 }
	 else if(Switch_Reading == 1 && target_switch->PullType == PULL_DOWN)
	 {
		  Local_u8SwitchState = PRESSED;
	 }
	 
	 return Local_u8SwitchState;
	 
}