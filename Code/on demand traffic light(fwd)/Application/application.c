/*
 * application.c
 *
 * Created: 1/17/2023 10:58:20 AM
 *  Author: Ahmed-AbdelWahab
 */ 

#include "application.h"

uint8_t phase_count = phase_1;
uint8_t pedestrian_request=0;

void app_init(){
	
/************************************************************************/
/*					Initializing pins                                   */
/************************************************************************/
	btn_init(BTN_PIN, BTN_PORT);	
	
	led_init(LED_RED_PIN, CAR_LIGHT_PORT);
	led_init(LED_YELLOW_PIN, CAR_LIGHT_PORT);
	led_init(LED_GREEN_PIN, CAR_LIGHT_PORT);
	
	led_init(LED_RED_PIN, PEDESTRIANS_LIGHT_PORT);
	led_init(LED_YELLOW_PIN, PEDESTRIANS_LIGHT_PORT);
	led_init(LED_GREEN_PIN, PEDESTRIANS_LIGHT_PORT);

	TIMER_0_init();
	interrupt_t0_overflow_init();
	interrupt_0_init();
	interrupt_global_init();
}

void app_start(){
	
	//************************************* Phase 1 *************************************//
	if(phase_count == phase_1){
		led_on(LED_GREEN_PIN, CAR_LIGHT_PORT);
		led_on(LED_RED_PIN, PEDESTRIANS_LIGHT_PORT);
			
		TIMER_0_delay(); /* adds 5 seconds delay */
		
		phase_count = (phase_count+1)%4; /* using modulus to get this range of values [0-3][phase1-phase 4] */
	}
		
	//************************************* Phase 2 *************************************//
	if(phase_count == phase_2){
		/*	In this phase, timer_0 overflow interrupt blinks cars yellow light in normal mode
			and both cars and pedestrian yellow light in pedestrian mode. */
		TIMER_0_delay();
		
		/* Turning both yellow LEDs off to ensure toggling ends with an off states */
		led_off(LED_YELLOW_PIN, CAR_LIGHT_PORT);
		led_off(LED_YELLOW_PIN, PEDESTRIANS_LIGHT_PORT);
		
		phase_count = (phase_count+1)%4;
	}

	//************************************* Phase 3 *************************************//
	if(phase_count == phase_3){
		if(pedestrian_request){
			led_on(LED_GREEN_PIN, PEDESTRIANS_LIGHT_PORT);
			led_off(LED_RED_PIN, PEDESTRIANS_LIGHT_PORT);
		}
		led_off(LED_GREEN_PIN, CAR_LIGHT_PORT);
		led_on(LED_RED_PIN, CAR_LIGHT_PORT);
		
		TIMER_0_delay();
		
		phase_count = (phase_count+1)%4;
	}
	
	//************************************* Phase 4 *************************************//
	
	/*	In this phase, timer_0 overflow interrupt blinks cars yellow light in normal mode
		and both cars and pedestrian yellow light in pedestrian mode. */
	TIMER_0_delay();
	
	led_off(LED_GREEN_PIN, PEDESTRIANS_LIGHT_PORT);
	led_off(LED_YELLOW_PIN, CAR_LIGHT_PORT);
	led_off(LED_YELLOW_PIN, PEDESTRIANS_LIGHT_PORT);
	
	
	if(phase_count == phase_4){
		phase_count = (phase_count+1)%4;
		
		led_off(LED_RED_PIN, CAR_LIGHT_PORT);

		pedestrian_request=0;
	}
}
