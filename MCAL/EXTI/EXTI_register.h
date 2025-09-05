/*
 *  ==================== EXTI_register.h ====================
 *  Author : Engy Elyamany
 *  Layer  : MCAL
 *  SWC    : External Interrupt
 *
 */
#ifndef EXTI_REGISTER_H
#define EXTI_REGISTER_H

/*Enabling GICR register for INT pins is enabling the SIE (specific Interrupt Enable)*/
#define GICR *((volatile u8*)  0x5B)
#define GICR_INT1 7  /*INT1 uses bit 7 of the GICR Register*/
#define GICR_INT0 6
#define GICR_INT2 5


/*GIFR controls to the PIF (Peripheral Interrupt Flag)*/
#define GIFR *((volatile u8*)  0x5A)


/*MCUCR controls to the sense control of INT0 and INT1*/
#define MCUCR *((volatile u8*)  0x55)
#define MCUCR_ISC00 0 /*Bit 0 of the MCUCR register controls INT0*/
#define MCUCR_ISC01 1 /*Bit 1 of the MCUCR register controls INT0*/

#define MCUCR_ISC10 2 /*Bit 2 of the MCUCR register controls INT1*/
#define MCUCR_ISC11 3 /*Bit 3 of the MCUCR register controls INT1*/


/*MCUSCR controls to the sense control of INT2*/
#define MCUSCR *((volatile u8*)  0x54)
#define MCUSCR_ISC2 6 /*Bit 6 of the MCUSCR register controls INT2*/




#endif