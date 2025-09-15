/*
*  Author : Engy Elyamany
*  Layer  : HAL
*  SWC    : DCMOTOR
*
*/
#ifndef DCMOTOR_INTERFACE_H
#define DCMOTOR_INTERFACE_H

#define CLOCK_WISE			1
#define COUNTER_CLOCK_WISE	2

typedef struct
{
	u8 Port;
	u8 PinX;
	u8 PinY;
	u8 MotorRotation;
}DCMOTOR_Configuration;

void DCMOTOR_voidInit(DCMOTOR_Configuration * target_motor);
void DCMOTOR_voidMove(DCMOTOR_Configuration * target_motor);
void DCMOTOR_voidStop(DCMOTOR_Configuration * target_motor);

#endif