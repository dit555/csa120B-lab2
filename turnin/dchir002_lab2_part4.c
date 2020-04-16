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
	DDRC = 0x00; PORTC = 0x00;
	DDRD = 0x00; PORTD = 0x00;
	unsigned char tempA = 0x00;
	unsigned char tempB = 0x00;
	unsigned char tempC = 0x00;
	unsigned char tempD = 0x00;

	while(1) {
		tempA = PINA;
		tempB = PINB;
		tempC = PINC;
		tempD = 0x00;
		if ( (tempA + tempB + tempC) > 140)
			tempD = tempD | 0x01;
		
		if ( ((tempA - tempC) > 80) || ((tempC - tempA) > 80))
			tempD = tempD | 0x02;
    		
		PORTD = tempD | (tempA + tempB + tempC) << 2;

		
	}
    return 1;
}
