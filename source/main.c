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
    DDRB = 0xFF;    PORTB = 0x00;
    
    unsigned char outtie = 0;
    
    /* Insert your solution below */
    while (1) {
        
        unsigned char button = (~PINA & 0x01);
        
        if (button){
            outtie = (outtie & 0xFC) | 0x01;
        }
        else {
            outtie = (outtie & 0xFC) | 0x02;
        }
        
        PORTB = outtie;
    }
    return 1;
}
