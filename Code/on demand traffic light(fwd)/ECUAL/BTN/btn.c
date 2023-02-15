/*
 * btn.c
 *
 * Created: 1/17/2023 10:43:57 PM
 *  Author: Ahmed-AbdelWahab
 */ 
 #include "btn.h"
 
 extern uint8_t overflow_count;
 extern uint8_t phase_count;
 extern uint8_t pedestrian_request;


 void btn_init(uint8_t pinNumber, uint8_t portName){
	 DIO_init(pinNumber, portName, IN);
 }


 void btn_read(uint8_t pinNumber, uint8_t portName, uint8_t* result){
	 DIO_read(pinNumber, portName, result);
 }

 ISR(EXT_INT_0){
	 
	 /************************************************************************/
	 /*    Using rising edge with interrupt 0 to avoid long press effect     */
	 /***********************************************************************/
	 
	 /* predestrian_request flag condition is used to avoid double click here */
	 if(!pedestrian_request){
		 if(phase_count == phase_1){
			 overflow_count=20;
		 }
		 else if(phase_count == phase_2){
			 led_off(LED_YELLOW_PIN, CAR_LIGHT_PORT);
			 led_off(LED_YELLOW_PIN, PEDESTRIANS_LIGHT_PORT);
			 
			 TIMER_reset();
		 }
		 else if(phase_count == phase_3){
			 TIMER_reset();
			 
			 led_off(LED_RED_PIN, PEDESTRIANS_LIGHT_PORT);
			 led_on(LED_GREEN_PIN, PEDESTRIANS_LIGHT_PORT);
		 }
		 else if(phase_count == phase_4){
			 overflow_count=20;
			 phase_count = phase_2;
		 }
		 pedestrian_request=1;
	 }
 }