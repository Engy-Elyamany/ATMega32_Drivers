/*
 *  ==================== EXTI_interface.h ====================
 *  Author : Engy Elyamany
 *  Layer  : MCAL
 *  SWC    : External Interrupt
 *
 */
#ifndef EXTI_INTERFACE_H
#define EXTI_INTERFACE_H

/*
 * Description : Functions to set the required sense control of External Interrupt Pins using Prebuild Configuration
 * Inputs	   : Accepts Void
 * Output	   : Return Void
 *
 */
void EXITI_voidINT0Init(void);
void EXITI_voidINT1Init(void);
void EXITI_voidINT2Init(void);

u8 EXTI_u8IntINT0_SetSenseControl(u8 Copy_u8Sense);
u8 EXTI_u8IntINT1_SetSenseControl(u8 Copy_u8Sense);
u8 EXTI_u8IntINT2_SetSenseControl(u8 Copy_u8Sense);

// Enable GICR functions (prebuild, postbuild)
// ISR function pointer implementations
// Add Required comments
#endif