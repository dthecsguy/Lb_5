/*	Author: Demarcus Sales
 *  Partner(s) Name: 
 *	Lab Section:
 *	Assignment: Lab #  Exercise #
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
    /* Insert DDR and PORT initializations */
    DDRA = 0x00;    PORTA = 0xFF;
    DDRC = 0xFF;    PORTC = 0x00;
    
    unsigned char outtie = 0;
    
    /* Insert your solution below */
    while (1) {
        
        unsigned char button = (~PINA & 0x01);
        
        if (button){
            outtie = 0xFF;
        }
        else {
            outtie = 0x00;
        }
        
        PORTC = outtie;
    }
    return 1;
}
