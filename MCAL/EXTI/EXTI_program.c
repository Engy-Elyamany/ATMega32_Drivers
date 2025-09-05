/*
 *  ==================== EXTI_program.c ====================
 *  Author : Engy Elyamany
 *  Layer  : MCAL
 *  SWC    : External Interrupt
 *
 */
#include "../../LIB/STD_TYPES.h"
#include "../../LIB/BIT_MATH.h"

#include "EXTI_config.h"
#include "EXTI_interface.h"
#include "EXTI_private.h"
#include "EXTI_register.h"

void EXITI_voidINT0Init(void)
{
	/*check for the sense control*/
	#if INT0_SENSE == LOW_LEVEL
	CLR_BIT(MCUCR,MCUCR_ISC00);
	CLR_BIT(MCUCR,MCUCR_ISC01);
	
	#elif INT0_SENSE == ON_CHANGE
	SET_BIT(MCUCR,MCUCR_ISC00);
	CLR_BIT(MCUCR,MCUCR_ISC01);
	
	#elif INT0_SENSE == FALLING_EDGE
	CLR_BIT(MCUCR,MCUCR_ISC00);
	SET_BIT(MCUCR,MCUCR_ISC01);
	
	#elif INT0_SENSE == RISING_EDGE
	SET_BIT(MCUCR,MCUCR_ISC00);
	SET_BIT(MCUCR,MCUCR_ISC01);
	
	#else
	#error "Wrong INT0_SENSE Configuration Option"
	
	#endif
}
void EXITI_voidINT1Init(void)
{
	#if INT1_SENSE == LOW_LEVEL
	CLR_BIT(MCUCR,MCUCR_ISC10);
	CLR_BIT(MCUCR,MCUCR_ISC11);
	
	#elif INT1_SENSE == ON_CHANGE
	SET_BIT(MCUCR,MCUCR_ISC10);
	CLR_BIT(MCUCR,MCUCR_ISC11);
	
	#elif INT1_SENSE == FALLING_EDGE
	CLR_BIT(MCUCR,MCUCR_ISC10);
	SET_BIT(MCUCR,MCUCR_ISC11);
	
	#elif INT1_SENSE == RISING_EDGE
	SET_BIT(MCUCR,MCUCR_ISC10);
	SET_BIT(MCUCR,MCUCR_ISC11);
	
	#else
	#error "Wrong INT1_SENSE Configuration Option"
	
	#endif
}

void EXITI_voidINT2Init(void)
{
	
	if INT2_SENSE == FALLING_EDGE
	CLR_BIT(MCUCR,MCUSCR_ISC2);
	
	#elif INT2_SENSE == RISING_EDGE
	SET_BIT(MCUCR,MCUSCR_ISC2);
	
	#else
	#error "Wrong INT2_SENSE Configuration Option"
	
	#endif
}