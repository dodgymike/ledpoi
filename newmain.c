/*
 * File:   newmain.c
 * Author: mike
 *
 * Created on 14 January 2016, 11:07 PM
 */

#include <pic18f2455.h>
//#include <delays.h>
#include "config.h"

unsigned long update_leds(unsigned long leds, unsigned int *direction) {
    if(leds <= 0b0000000000000011) {
        leds = 0b0000000000000110;
        *direction = 1;
    } else if(leds >= 0b1100000000000000) {
        *direction = 0;
        leds = 0b0110000000000000;
    }
    
    if(*direction == 0) {
        leds = (leds >> 1);
    } else {
        leds = (leds << 1);
    }
   
    return leds;
}

void Delay10KTCYx() {
    for(int i = 0; i < 10000; i++) {
        
    }
}

void main(void) {
    TRISA=0;
    TRISB=0;
    TRISC=0;
    PORTA=0xff;
    PORTB=0xff;
    PORTC=0xff;
    
    ADCON1=0b00001111;
    T1CONbits.TMR1CS = 0;
    T1CONbits.T1OSCEN = 0;
    
//    PORTE=0xff;
        
   
//    PORTAbits.RA0 = 1;
//    PORTAbits.RA1 = 0;
//    PORTAbits.RA2 = 1;
//    PORTAbits.RA3 = 0;
//    PORTAbits.RA4 = 1;
//    PORTAbits.RA5 = 0;
//    PORTAbits.RA6 = 1;
//    PORTAbits.RA7 = 03;
    
//    PORTB=0;
//    PORTA=0;
////    update_leds();
//    
//    PORTB=0xf;
    
    unsigned int direction = 1;
    unsigned long leds = 0b0000000000000011;

    while(1) {
        leds = update_leds(leds, &direction);
        
        unsigned char portb = (leds >> 8) & 0xff;
        unsigned char porta = leds & 0xff;
        unsigned char portc = (porta & 0b11100000) >> 5;
        
        PORTA = porta;
        PORTB = portb;
        PORTC = portc;
        
        Delay10KTCYx();
    }
 
    return;
}
