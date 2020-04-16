/*	Author: Dumitru Chiriac
 *  Partner(s) Name: 
 *	Lab Section: 026
 *	Assignment: Lab # 2 eercise # test
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif



int main(void) {
    	DDRA = 0x00; PORTA = 0xFF;
	DDRB = 0xFF; PORTB = 0x00;
	unsigned char temp = 0x00;
	//unsigned char tempB = 0x00;
	while(1) {
		temp = PORTA;
		if ( temp == 0x00)
			PORTB = 0x00;
		else if ( temp & 0x03 == 0x01)
		       	PORTB = 0x01;
		else if ( temp & 0x03 == 0x02)
			PORTB = 0x00;
		else
			PORTB = 0x00;	
    	}
    return 1;
}
