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

void halfOne() {
                    // 1
            PORTAbits.RA0=1;
            PORTAbits.RA0=1;
            PORTAbits.RA0=1;
            PORTAbits.RA0=1;
            PORTAbits.RA0=1;
            PORTAbits.RA0=0;
            PORTAbits.RA0=0;
            PORTAbits.RA0=0;
}

void one() {
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
}

void halfZero() {
                // 0
            PORTAbits.RA0=1;
            PORTAbits.RA0=1;
            PORTAbits.RA0=1;
            PORTAbits.RA0=0;
            PORTAbits.RA0=0;
            PORTAbits.RA0=0;
            PORTAbits.RA0=0;
            PORTAbits.RA0=0;
            PORTAbits.RA0=0;

}

void zero() {
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
    
    short ledState0[24] = { 0, 1, 0, 1,  0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1 }; 
    
    while(1) {
        for(int ledCount = 0; ledCount < 12; ledCount++) {
            (ledState0[0] == 0) ? zero() : one();
            (ledState0[1] == 0) ? zero() : one();
            (ledState0[2] == 0) ? zero() : one();
            (ledState0[3] == 0) ? zero() : one();
            (ledState0[4] == 0) ? zero() : one();
            (ledState0[5] == 0) ? zero() : one();
            (ledState0[6] == 0) ? zero() : one();
            (ledState0[7] == 0) ? zero() : one();
            (ledState0[8] == 0) ? zero() : one();
            (ledState0[9] == 0) ? zero() : one();
            (ledState0[10] == 0) ? zero() : one();
            (ledState0[11] == 0) ? zero() : one();
            (ledState0[12] == 0) ? zero() : one();
            (ledState0[13] == 0) ? zero() : one();
            (ledState0[14] == 0) ? zero() : one();
            (ledState0[15] == 0) ? zero() : one();
            (ledState0[16] == 0) ? zero() : one();
            (ledState0[17] == 0) ? zero() : one();
            (ledState0[18] == 0) ? zero() : one();
            (ledState0[19] == 0) ? zero() : one();
            (ledState0[20] == 0) ? zero() : one();
            (ledState0[21] == 0) ? zero() : one();
            (ledState0[22] == 0) ? zero() : one();
            (ledState0[23] == 0) ? zero() : one();
        }
        
        for(int i = 0; i < 1000; i++) {
            PORTAbits.RA0=0;
        }
    }
 
    return;
}
