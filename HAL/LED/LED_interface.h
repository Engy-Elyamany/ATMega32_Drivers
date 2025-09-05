/*
*  Author : Engy Elyamany
*  Layer  : HAL
*  SWC    : LED
*
*/
#ifndef LED_INTERFACE_H
#define LED_INTERFACE_H


#define SOURCE_CONNECTION	1
#define SINK_CONNECTION		2

typedef struct
{
	u8 Port;
	u8 Pin;
	u8 ConnectionType;
}LED_Configuration;

void LED_voidInit(LED_Configuration * target_Led);
void LED_voidLedON(LED_Configuration * target_Led);
void LED_voidLedOFF(LED_Configuration * target_Led);

#endif