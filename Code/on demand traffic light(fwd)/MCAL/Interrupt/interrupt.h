/*
 * interrupt.h
 *
 * Created: 1/18/2023 2:13:54 AM
 *  Author: Ahmed-AbdelWahab
 */ 


#ifndef INTERRUPT_H_
#define INTERRUPT_H_

#include "../../Utilities/macros.h"
#include "../../Utilities/registers.h"

/************************************************************************/
/*             Interrupts vectors from interrupt vector table           */
/************************************************************************/ 
#define EXT_INT_0	__vector_1
#define EXT_INT_1	__vector_2
#define EXT_INT_2	__vector_3
#define TIMER_0_OVERFLOW __vector_11

/************************************************************************/
/*                  Defining ISR function prototype                    */
/************************************************************************/ 
#define ISR(INT_VECT) void INT_VECT(void) __attribute__((signal,used));\
void INT_VECT(void)


/************************************************************************/
/*                       Function prototypes                           */
/************************************************************************/ 
void interrupt_global_init();
void interrupt_0_init();
void interrupt_t0_overflow_init();



#endif /* INTERRUPT_H_ */