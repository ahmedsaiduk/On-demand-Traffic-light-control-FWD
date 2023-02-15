/*
 * timer.h
 *
 * Created: 1/18/2023 10:58:38 AM
 *  Author: Ahmed-AbdelWahab
 */ 


#ifndef TIMER_H_
#define TIMER_H_

#include "../INTERRUPT/interrupt.h"

#define init_value 11 // number of overflows



/************************************************************************/
/*                    TIMER0 function prototypes                        */
/************************************************************************/ 
void TIMER_0_init();
void TIMER_0_set_init_value(uint8_t val);
void TIMER_0_start();
void TIMER_0_stop();
void TIMER_0_reset();
void TIMER_0_delay();


/***********************************************************************************************/
/*       Callback function to access LED_toggle function from upper layer (ECUAL)             */
/**********************************************************************************************/
void setcallback(void (*function)(uint8_t, uint8_t));




#endif /* TIMER_H_ */