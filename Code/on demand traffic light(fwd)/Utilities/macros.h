/*
 * Macros.h
 *
 * Created: 1/17/2023 12:35:05 PM
 *  Author: Ahmed-AbdelWahab
 */ 


#ifndef MACROS_H_
#define MACROS_H_


/* Typedefs */

typedef unsigned char uint8_t;

/************************************************************************/
/*						ports                                           */
/************************************************************************/

#define PORT_A 'A'
#define PORT_B 'B'
#define PORT_C 'C'
#define PORT_D 'D'

/************************************************************************/
/*						 Traffic Lights Ports Names					    */
/************************************************************************/
#define CAR_LIGHT_PORT PORT_A
#define PEDESTRIANS_LIGHT_PORT PORT_B

/************************************************************************/
/*						BTN port name                                   */
/************************************************************************/
#define BTN_PORT PORT_D

/************************************************************************/
/*						LED Pin Names			                        */
/************************************************************************/
#define LED_RED_PIN 0
#define LED_YELLOW_PIN 1
#define LED_GREEN_PIN 2


/************************************************************************/
/*						BTN Pin Name									    */
/************************************************************************/
#define BTN_PIN 16

/************************************************************************/
/*						Bit updates                                     */
/************************************************************************/
#define set_pin(pinNumber, registerAddress) registerAddress |= (1<<pinNumber)
#define clear_pin(pinNumber, registerAddress) registerAddress &= ~(1<<pinNumber)
#define toggle_pin(pinNumber, registerAddress) registerAddress ^= (1<<pinNumber)
#define get_pin(pinNumber, registerAddress) ((registerAddress & (1<<pinNumber))>>pinNumber)

/************************************************************************/
/*						Pin State                                       */
/************************************************************************/
#define IN 0
#define LOW 0
#define HIGH 1
#define OUT 1

/************************************************************************/
/*					Traffic light phases                                */
/************************************************************************/
#define phase_1 0
#define phase_2 1
#define phase_3 2
#define phase_4 3

#endif /* MACROS_H_ */