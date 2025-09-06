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

/*Define PORT*/
#define LED_u8PORTA				0
#define LED_u8PORTB				1
#define LED_u8PORTC				2
#define LED_u8PORTD				3

/*Define Pins*/
#define LED_u8PIN0				0
#define LED_u8PIN1				1
#define LED_u8PIN2				2
#define LED_u8PIN3				3
#define LED_u8PIN4				4
#define LED_u8PIN5				5
#define LED_u8PIN6				6
#define LED_u8PIN7				7

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