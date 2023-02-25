/*
 * test.c
 *
 * Created: 2/25/2023 10:01:38 AM
 *  Author: Ahmed-win
 */ 

#include "test.h"

/************************************************************************/
/*							 Testing MCAL drivers					    */
/************************************************************************/

/* DIO INIT */

void dio_init_sucess_case() {
	/* with wrong port param */
	int result = DIO_init(1, 'A', IN );
	printf("Test INIT with right param [A] \n");
	printf("Test Result: %s\n", result ? "WRONG_PARAMS" : "RIGHT_CALL");
}

void dio_init_failure_case() {
	/* with wrong port param */
	int result = DIO_init(1, 'F', IN );
	printf("Test INIT with wrong param [F] \n");
	printf("Test Result: %s\n", result ? "WRONG_PARAMS" : "RIGHT_CALL");
}

/* DIO READ */

void dio_read_sucess_case() {
	/* with wrong port param */
	int result = DIO_read(1, 'A', IN );
	printf("Test READ with right param [A] \n");
	printf("Test Result: %s\n", result ? "WRONG_PARAMS" : "RIGHT_CALL");
}

void dio_read_failure_case() {
	/* with wrong port param */
	int result = DIO_read(1, 'F', IN );
	printf("Test READ with wrong param [F] \n");
	printf("Test Result: %s\n", result ? "WRONG_PARAMS" : "RIGHT_CALL");
}

/* DIO Write */

void dio_write_sucess_case() {
	/* with wrong port param */
	int result = DIO_write(1, 'A', IN );
	printf("Test WRITE with right param [A] \n");
	printf("Test Result: %s\n", result ? "WRONG_PARAMS" : "RIGHT_CALL");
}

void dio_write_failure_case() {
	/* with wrong port param */
	int result = DIO_write(1, 'F', IN );
		printf("Test WRITE with wrong param [F] \n");
	printf("Test Result: %s\n", result ? "WRONG_PARAMS" : "RIGHT_CALL");
}

/* DIO Toggle */

void dio_toggle_sucess_case() {
	/* with wrong port param */
	int result = DIO_toggle(1, 'A', IN );
	printf("Test Toggle with right param [A] \n");
	printf("Test Result: %s\n", result ? "WRONG_PARAMS" : "RIGHT_CALL");
}

void dio_toggle_failure_case() {
	/* with wrong port param */
	int result = DIO_toggle(1, 'F', IN );
	printf("Test Toggle with wrong param [F] \n");
	printf("Test Result: %s\n", result ? "WRONG_PARAMS" : "RIGHT_CALL");
}