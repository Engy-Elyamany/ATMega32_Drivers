/*
*  Author : Engy Elyamany
*  Layer  : HAL
*  SWC    : Switch
*
*/
#ifndef SWITCH_INTERFACE_H
#define SWITCH_INTERFACE_H

#define PULL_UP		1
#define PULL_DOWN	2

#define PRESSED		1
#define NOT_PRESSED	2

typedef struct  
{
	u8 Port;
	u8 Pin;
	u8 PullType;
}Switch_Configuration;

void Switch_voidInit(Switch_Configuration * target_switch);

u8 Switch_u8GetSwitchState(Switch_Configuration * target_switch);
#endif