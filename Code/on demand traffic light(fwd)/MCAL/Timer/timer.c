/*
 * timer.c
 *
 * Created: 1/18/2023 10:58:20 AM
 *  Author: Ahmed-AbdelWahab
 */ 


#include "timer.h"

 
/*****************************************************************************************/
/* 5 seconds delay requires: 1024 Prescalling value , 20 overflows , and 11 initial value */
/****************************************************************************************/

// Declaring extern variables to be accessed by timer driver
extern uint8_t phase_count;
extern uint8_t pedestrian_request;


uint8_t overflow_count;


void TIMER_0_init(){
	TCCR0 |= 0x00; //Normal mode
	
	TIMER_0_set_init_value(init_value);
}

void TIMER_0_set_init_value(uint8_t val){
	TCNT0 = val;
}

void TIMER_0_start(){
	TCCR0 |= ((1<<0) | (1<<2)); 	// Selecting 1024 prescalling
	
	while(overflow_count < 20); // busy wait until 20 overflow
}


void TIMER_0_stop(){
	TCCR0 = 0x00; //Stop timer
	
	overflow_count = 0;
}

void TIMER_0_delay(){
	TIMER_0_start();
	TIMER_0_stop();
}

void TIMER_reset(){
	TIMER_0_set_init_value(init_value);
	overflow_count = 0;
}

ISR(TIMER_0_OVERFLOW){
	TIMER_0_set_init_value(init_value); /* Resetting initial value for the next timer cycle */

	overflow_count++;
	
	if(phase_count== phase_2 || phase_count == phase_4){
		if(!pedestrian_request){
			led_toggle(CAR_LIGHT_PORT, LED_YELLOW_PIN);
		}
		else if(pedestrian_request){
			led_toggle(CAR_LIGHT_PORT, LED_YELLOW_PIN);
			led_toggle(PEDESTRIANS_LIGHT_PORT, LED_YELLOW_PIN);
		}
	}
}