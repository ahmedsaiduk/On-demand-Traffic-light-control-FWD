/*
 * registers.h
 *
 * Created: 1/17/2023 12:35:34 PM
 *  Author: Ahmed-AbdelWahab
 */ 


#ifndef REGISTERS_H_
#define REGISTERS_H_


/* global interrupt register */
#define SREG *((volatile uint8_t*)0x5F)

/************************************************************************/
/*							DIO Registers							    */
/************************************************************************/

/* port A */
#define PORTA *((volatile uint8_t*)0x3B)
#define DDRA *((volatile uint8_t*)0x3A)
#define PINA *((volatile uint8_t*)0x39)

/* port B */
#define PORTB *((volatile uint8_t*)0x38)
#define DDRB *((volatile uint8_t*)0x37)
#define PINB *((volatile uint8_t*)0x36)

/* port C */
#define PORTC *((volatile uint8_t*)0x35)
#define DDRC *((volatile uint8_t*)0x34)
#define PINC *((volatile uint8_t*)0x33)

/* port D */
#define PORTD *((volatile uint8_t*)0x32)
#define DDRD *((volatile uint8_t*)0x31)
#define PIND *((volatile uint8_t*)0x30)

/************************************************************************/
/*							TIMER Registers							    */
/************************************************************************/
#define TCCR0 *((volatile uint8_t*)0x53) // timer counter control
#define TCNT0 *((volatile uint8_t*)0x52) // timer counter register
#define TIFR *((volatile uint8_t*)0x58)
#define TIMSK *((volatile uint8_t*)0x59)
#define OCR0 *((volatile uint8_t*)0x5C)


/************************************************************************/
/*							Interrupt registers						     */
/************************************************************************/

#define MCUCR *((volatile uint8_t*)0x55)
#define GICR *((volatile uint8_t*)0x58)
#define GIFR *((volatile uint8_t*)0x5A)


#endif /* REGISTERS_H_ */