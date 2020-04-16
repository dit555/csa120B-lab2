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
	//DDRB = 0xFF; PORTB = 0x00;
	DDRC = 0xFF; PORTC = 0x00;
	unsigned char temp = 0x00;
	unsigned char spots = 0x00;
	while(1) {
		temp = PINA;
		spots = 0x00;
		if ( (temp & 0x01) == 0x00)
		       spots = spots + 1;

		if ( (temp & 0x02) == 0x00)
			spots = spots + 1;

		if ( (temp & 0x04) == 0x00)
                        spots = spots + 1;

		 if ( (temp & 0x08) == 0x00)
                        spots = spots + 1;

		PORTC = spots;
    	}
    return 1;
}
