
/*
*  Author : Engy Elyamany
*  Layer  : HAL
*  SWC    : DCMOTOR
*
*/

#define F_CPU 8000000UL
#include "../../LIB/STD_TYPES.h"
#include "../../LIB/BIT_MATH.h"
#include "../../MCAL/DIO/DIO_interface.h"

#include "DCMOTOR_config.h"
#include "DCMOTOR_interface.h"
#include "DCMOTOR_private.h"


void DCMOTOR_voidInit(DCMOTOR_Configuration * target_motor)
{
	DIO_u8SetPinDirection(target_motor->Port,target_motor->PinX,DIO_u8PIN_OUTPUT);
	DIO_u8SetPinDirection(target_motor->Port,target_motor->PinY,DIO_u8PIN_OUTPUT);
}
void DCMOTOR_voidMove(DCMOTOR_Configuration * target_motor)
{
	if(target_motor->MotorRotation == CLOCK_WISE)
	{
		DIO_u8SetPinValue(target_motor->Port,target_motor->PinY,DIO_u8PIN_LOW);
		DIO_u8SetPinValue(target_motor->Port,target_motor->PinX,DIO_u8PIN_HIGH);
	}
	else if(target_motor->MotorRotation == COUNTER_CLOCK_WISE)
	{
		DIO_u8SetPinValue(target_motor->Port,target_motor->PinX,DIO_u8PIN_LOW);
		DIO_u8SetPinValue(target_motor->Port,target_motor->PinY,DIO_u8PIN_HIGH);
	}
}
void DCMOTOR_voidStop(DCMOTOR_Configuration * target_motor)
{
	DIO_u8SetPinValue(target_motor->Port,target_motor->PinX,DIO_u8PIN_LOW);
	DIO_u8SetPinValue(target_motor->Port,target_motor->PinY,DIO_u8PIN_LOW);
}