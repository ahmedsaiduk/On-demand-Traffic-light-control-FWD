/*
 * interrupt.c
 *
 * Created: 1/18/2023 2:14:31 AM
 *  Author: Ahmed-AbdelWahab
 */ 


#include "interrupt.h"

void interrupt_global_init(){
	/************************************************************************/
	/*               enabling global interrupt in status register          */
	/**********************************************************************/
	set_pin(7, SREG);
}

void interrupt_0_init(){
	/********************************************************************************/
	/* setting int_0 mode on rising edge in micro-controller unit control register */
	/******************************************************************************/
	set_pin(0, MCUCR);
	set_pin(1, MCUCR);
	
	/*************************************************************************/
	/*    enabling int_0 interrupt in general interrupt control register     */
	/***********************************************************************/
	set_pin(6, GICR);
}


void interrupt_t0_overflow_init(){
	/********************************************************************/
	/*     enabling t0 overflow interrupt in timer interrupt mask      */
	/******************************************************************/
	set_pin(0, TIMSK);
}