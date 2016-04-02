/*
 * File:   newmain.c
 * Author: mike
 *
 * Created on 14 January 2016, 11:07 PM
 */

#include <pic18f2455.h>
#include "config.h"
#include <math.h>

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

#define LED_COUNT 44
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
    
    int function = 3;
    
    const int ledCount = LED_COUNT;
    long ledColour[LED_COUNT];// = {0x00001f, 0x001f00, 0x1f0000, 0x00001f, 0x00001f, 0x00001f, 0x00001f, 0x00001f, 0x00001f, 0x00001f, 0x00001f, 0x00001f};
    
    for(int i = 0; i < ledCount; i++) {
        ledColour[i] = 0;
    }
    ledColour[0] = 0x00ff01;
    
//    int functionChangeWait = 10;
//    int functionChangeCounter = 10;
    int currentLed = 0;
    long changeDelay = 10;
    long changeDelayCounter = changeDelay;
    while(1) {
        int previousLed = currentLed - 1;
        if(previousLed < 0) {
            previousLed = 0;
        }
        int nextLed = currentLed + 1;
        if(nextLed >= ledCount) {
            nextLed = 0;
        }

        switch(function) {
            case 0: // not sure
                for(int i = 0; i < ledCount; i++) {
                    if(ledColour[i] > 0) {
                        ledColour[i]++;
                    }

                    if(ledColour[i] >= 0xffff) {
                        ledColour[i] = 0;
                        if(i < 11) {
                            ledColour[i + 1] = 0x00ff01;
                        } else {
                            ledColour[0] = 0x00ff01;
                        }
                    }
                }
                break;
            case 1: // clock
                if(changeDelayCounter-- <= 0) {
                    ledColour[currentLed] <<= 1;
                    ledColour[currentLed] += 1;
                    changeDelayCounter = changeDelay;
                }
                if(ledColour[currentLed] >= 0x1f) {
                    ledColour[currentLed] = 0;
                    currentLed++;
                    if(currentLed >= ledCount) {
                        currentLed = 0;
                    }
                }
                break;
            case 2: // ghost
                if(changeDelayCounter-- <= 0) {
                    ledColour[currentLed] = 0;
                    changeDelayCounter = changeDelay;
                    currentLed++;
                    if(currentLed >= ledCount) {
                        currentLed = 0;
                    }
                } else {
                    ledColour[previousLed] = 0x0f1f0f;
                    ledColour[currentLed] = 0x1f1f1f;
                    ledColour[nextLed] = 0x0f1f0f;
                }
                break;
            case 3: // heartspin
                changeDelay = 3;
                if(changeDelayCounter-- <= 0) {
                    ledColour[previousLed] = 0b01111111;
                    ledColour[currentLed] = 0b01111111;
                    ledColour[nextLed] = 0b00000111;
                    changeDelayCounter = changeDelay;
                    currentLed++;
                    if(currentLed >= ledCount) {
                        currentLed = 0;
                    }
                } else {
                    ledColour[previousLed] = 0b01111111;
                    ledColour[currentLed] = 0b00000111;
                    ledColour[nextLed] = 0b01111111;
                }
                break;
            case 4: // lovesin
                changeDelay = 10;
                if(changeDelayCounter-- <= 0) {
                    
                } else {
                    
                }
                break;
        }
       

        for(int ledIndex = 0; ledIndex < ledCount; ledIndex++) {
            long tempColour = ledColour[ledIndex];
            ((tempColour & 1) == 0) ? zero() : one();
            tempColour >>= 1; ((tempColour & 1) == 0) ? zero() : one();
            tempColour >>= 1; ((tempColour & 1) == 0) ? zero() : one();
            tempColour >>= 1; ((tempColour & 1) == 0) ? zero() : one();

            tempColour >>= 1; ((tempColour & 1) == 0) ? zero() : one();
            tempColour >>= 1; ((tempColour & 1) == 0) ? zero() : one();
            tempColour >>= 1; ((tempColour & 1) == 0) ? zero() : one();
            tempColour >>= 1; ((tempColour & 1) == 0) ? zero() : one();

            tempColour >>= 1; ((tempColour & 1) == 0) ? zero() : one();
            tempColour >>= 1; ((tempColour & 1) == 0) ? zero() : one();
            tempColour >>= 1; ((tempColour & 1) == 0) ? zero() : one();
            tempColour >>= 1; ((tempColour & 1) == 0) ? zero() : one();

            tempColour >>= 1; ((tempColour & 1) == 0) ? zero() : one();
            tempColour >>= 1; ((tempColour & 1) == 0) ? zero() : one();
            tempColour >>= 1; ((tempColour & 1) == 0) ? zero() : one();
            tempColour >>= 1; ((tempColour & 1) == 0) ? zero() : one();

            tempColour >>= 1; ((tempColour & 1) == 0) ? zero() : one();
            tempColour >>= 1; ((tempColour & 1) == 0) ? zero() : one();
            tempColour >>= 1; ((tempColour & 1) == 0) ? zero() : one();
            tempColour >>= 1; ((tempColour & 1) == 0) ? zero() : one();

            tempColour >>= 1; ((tempColour & 1) == 0) ? zero() : one();
            tempColour >>= 1; ((tempColour & 1) == 0) ? zero() : one();
            tempColour >>= 1; ((tempColour & 1) == 0) ? zero() : one();
            tempColour >>= 1; ((tempColour & 1) == 0) ? zero() : one();
        }
        
        for(int i = 0; i < 1000; i++) {
            PORTAbits.RA0=0;
        }
        
        
    }
 
    return;
}
