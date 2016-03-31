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
    short ledState1[24] = { 0, 1, 0, 1,  0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1 }; 
    short ledState2[24] = { 0, 1, 0, 1,  0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1 }; 
    
    long ledColour0 = 0x00ff00;
    long ledColour1 = 0xff0000;
    long ledColour2 = 0x0000ff;
    
    while(1) {
        ledColour0++;
        ledColour1++;
        ledColour2++;
        if(ledColour0 > 0x1f1f1f) {
            ledColour0 = 0x00ff00;
        }
        if(ledColour1 > 0x1f1f1f) {
            ledColour1 = 0xff0000;
        }
        if(ledColour2 > 0x1f1f1f) {
            ledColour2 = 0x0000ff;
        }
        
        long tempLedColour0 = ledColour0;
        for(int bitIndex = 0; bitIndex < 24; bitIndex++) {
           int curBit = tempLedColour0 & 0b1;
           ledState0[bitIndex] = curBit;
           
           tempLedColour0 = (tempLedColour0 >> 1);
        }
        
        long tempLedColour1 = ledColour1;
        for(int bitIndex = 0; bitIndex < 24; bitIndex++) {
           int curBit = tempLedColour1 & 0b1;
           ledState1[bitIndex] = curBit;
           
           tempLedColour1 = (tempLedColour1 >> 1);
        }

        long tempLedColour2 = ledColour2;
        for(int bitIndex = 0; bitIndex < 24; bitIndex++) {
           int curBit = tempLedColour2 & 0b1;
           ledState2[bitIndex] = curBit;
           
           tempLedColour2 = (tempLedColour2 >> 1);
        }
        for(int ledCount = 0; ledCount < 4; ledCount++) {
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

            (ledState1[0] == 0) ? zero() : one();
            (ledState1[1] == 0) ? zero() : one();
            (ledState1[2] == 0) ? zero() : one();
            (ledState1[3] == 0) ? zero() : one();
            (ledState1[4] == 0) ? zero() : one();
            (ledState1[5] == 0) ? zero() : one();
            (ledState1[6] == 0) ? zero() : one();
            (ledState1[7] == 0) ? zero() : one();
            (ledState1[8] == 0) ? zero() : one();
            (ledState1[9] == 0) ? zero() : one();
            (ledState1[10] == 0) ? zero() : one();
            (ledState1[11] == 0) ? zero() : one();
            (ledState1[12] == 0) ? zero() : one();
            (ledState1[13] == 0) ? zero() : one();
            (ledState1[14] == 0) ? zero() : one();
            (ledState1[15] == 0) ? zero() : one();
            (ledState1[16] == 0) ? zero() : one();
            (ledState1[17] == 0) ? zero() : one();
            (ledState1[18] == 0) ? zero() : one();
            (ledState1[19] == 0) ? zero() : one();
            (ledState1[20] == 0) ? zero() : one();
            (ledState1[21] == 0) ? zero() : one();
            (ledState1[22] == 0) ? zero() : one();
            (ledState1[23] == 0) ? zero() : one();

            (ledState2[0] == 0) ? zero() : one();
            (ledState2[1] == 0) ? zero() : one();
            (ledState2[2] == 0) ? zero() : one();
            (ledState2[3] == 0) ? zero() : one();
            (ledState2[4] == 0) ? zero() : one();
            (ledState2[5] == 0) ? zero() : one();
            (ledState2[6] == 0) ? zero() : one();
            (ledState2[7] == 0) ? zero() : one();
            (ledState2[8] == 0) ? zero() : one();
            (ledState2[9] == 0) ? zero() : one();
            (ledState2[10] == 0) ? zero() : one();
            (ledState2[11] == 0) ? zero() : one();
            (ledState2[12] == 0) ? zero() : one();
            (ledState2[13] == 0) ? zero() : one();
            (ledState2[14] == 0) ? zero() : one();
            (ledState2[15] == 0) ? zero() : one();
            (ledState2[16] == 0) ? zero() : one();
            (ledState2[17] == 0) ? zero() : one();
            (ledState2[18] == 0) ? zero() : one();
            (ledState2[19] == 0) ? zero() : one();
            (ledState2[20] == 0) ? zero() : one();
            (ledState2[21] == 0) ? zero() : one();
            (ledState2[22] == 0) ? zero() : one();
            (ledState2[23] == 0) ? zero() : one();
        }
        
        for(int i = 0; i < 1000; i++) {
            PORTAbits.RA0=0;
        }
        
        
    }
 
    return;
}
