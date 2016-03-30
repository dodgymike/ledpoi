/*
 * File:   newmain.c
 * Author: mike
 *
 * Created on 14 January 2016, 11:07 PM
 */

#include <pic18f2455.h>
#include "config.h"


void delay(int delay) {
    for(int i = 0; i < delay; i++) {
        
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
    
    while(1) {
        // first LED
        // 1
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;

        // 0
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;

        // 1
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;

        // 0
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;

        // 1
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;

        // 0
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;

        // 1
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;

        // 0
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;

        // 1
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;

        // 0
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;

        // 1
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;

        // 0
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;

        // 1
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;

        // 0
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;

        // 1
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;

        // 0
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;

        // 1
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;

        // 0
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;

        // 1
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;

        // 0
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;

        // 1
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;

        // 0
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;

        // 1
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;

        // 0
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;

        // second LED
        // 1
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;

        // 0
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;

        // 1
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;

        // 0
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;

        // 1
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;

        // 0
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;

        // 1
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;

        // 0
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;

        // 1
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;

        // 0
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;

        // 1
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;

        // 0
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;

        // 1
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;

        // 0
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;

        // 1
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;

        // 0
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;

        // 1
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;

        // 0
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;

        // 1
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;

        // 0
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;

        // 1
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;

        // 0
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;

        // 1
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;

        // 0
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;

        // third LED
        // 1
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;

        // 0
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;

        // 1
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;

        // 0
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;

        // 1
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;

        // 0
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;

        // 1
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;

        // 0
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;

        // 1
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;

        // 0
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;

        // 1
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;

        // 0
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;

        // 1
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;

        // 0
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;

        // 1
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;

        // 0
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;

        // 1
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;

        // 0
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;

        // 1
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;

        // 0
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;

        // 1
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;

        // 0
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;

        // 1
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;

        // 0
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=1;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;
        PORTAbits.RA0=0;

        for(int i = 0; i < 1000; i++) {
            PORTAbits.RA0=0;
        }
    }
 
    return;
}
