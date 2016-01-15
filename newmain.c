/*
 * File:   newmain.c
 * Author: mike
 *
 * Created on 14 January 2016, 11:07 PM
 */

#include <pic18f2455.h>
//#include <delays.h>
#include "config.h"

unsigned long update_leds(unsigned char porta, unsigned char portb) {
    if(porta > 0) {
        porta = (porta >> 1);
        portb = (portb >> 1);
    } else {
        porta = 0xff;
        portb = 0xff;
    }
    
    return (portb << 8) + porta;
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
    
    PORTB=0;
    PORTA=0;
//    update_leds();
    
    PORTB=0xf;

    while(1) {
        unsigned long leds = update_leds(PORTA, PORTB);
        
        unsigned char porta = (leds >> 8) & 0xff;
        unsigned char portb = leds & 0xff;
        unsigned char portc = (porta & 0b11100000) >> 5;
        
        PORTA = porta;
        PORTB = portb;
        PORTC = portc;
        
        Delay10KTCYx();
    }
    /*
    */

    
    
    return;
}
