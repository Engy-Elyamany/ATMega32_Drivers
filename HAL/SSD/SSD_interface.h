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