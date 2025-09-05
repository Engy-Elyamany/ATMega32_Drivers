/*
 *  ==================== EXTI_config.h ====================
 *  Author : Engy Elyamany
 *  Layer  : MCAL
 *  SWC    : External Interrupt
 *
 */
#ifndef EXTI_CONFIG_H
#define EXTI_CONFIG_H

/* Using PreBuild Configuration, set sense control of interrupt pins
 * It's the event which the interrupts waits to happen
 * Options:
 *		- FALLING_EDGE	
 *		- RISING_EDGE		
 *		- ON_CHANGE		
 *		- LOW_LEVEL		
 */

#define INT0_SENSE FALLING_EDGE
#define INT1_SENSE FALLING_EDGE
#define INT2_SENSE FALLING_EDGE

#endif