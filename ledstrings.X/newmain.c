/*
 * File:   newmain.c
 * Author: mike
 *
 * Created on 14 January 2016, 11:07 PM
 */

#include <pic18f2455.h>
#include "config.h"
#include <math.h>

#define PI 3.14159265

void delay(int delay) {
    for(int i = 0; i < delay; i++) {
        
    }
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

#define LED_STRING_COUNT 5
#define LED_STRING_SIZE 47
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
    
    float radiansPerDegree = PI/180.0;
    
    int function = 6;
    
    const int ledCount = LED_STRING_COUNT * LED_STRING_SIZE;
    int ledColour1[LED_STRING_SIZE];// = {0x00001f, 0x001f00, 0x1f0000, 0x00001f, 0x00001f, 0x00001f, 0x00001f, 0x00001f, 0x00001f, 0x00001f, 0x00001f, 0x00001f};
    int ledColour2[LED_STRING_SIZE];
    int ledColour3[LED_STRING_SIZE];
    int ledColour4[LED_STRING_SIZE];
    int ledColour5[LED_STRING_SIZE];
    
    int* ledStringColours[5];
    int ledColourIndex = 0;
    ledStringColours[ledColourIndex++] = &ledColour1;
    ledStringColours[ledColourIndex++] = &ledColour2;
    ledStringColours[ledColourIndex++] = &ledColour3;
    ledStringColours[ledColourIndex++] = &ledColour4;
    ledStringColours[ledColourIndex++] = &ledColour5;
    
    for(int stringIndex = 0; stringIndex < LED_STRING_COUNT; stringIndex++) {
        for(int i = 0; i < LED_STRING_SIZE; i++) {
            ledStringColours[stringIndex][i] = 0;
        }
    }
    ledStringColours[0][0] = 0x00ff01;
    
//    int functionChangeWait = 10;
//    int functionChangeCounter = 10;
    int currentLed = 0;
    long changeDelay = 1;
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
//            case 0: // not sure
//                for(int i = 0; i < ledCount; i++) {
//                    if(ledColour[i] > 0) {
//                        ledColour[i]++;
//                    }
//
//                    if(ledColour[i] >= 0xffff) {
//                        ledColour[i] = 0;
//                        if(i < 11) {
//                            ledColour[i + 1] = 0x00ff01;
//                        } else {
//                            ledColour[0] = 0x00ff01;
//                        }
//                    }
//                }
//                break;
//            case 1: // clock
//                if(changeDelayCounter-- <= 0) {
//                    ledColour[currentLed] <<= 1;
//                    ledColour[currentLed] += 1;
//                    changeDelayCounter = changeDelay;
//                }
//                if(ledColour[currentLed] >= 0x1f) {
//                    ledColour[currentLed] = 0;
//                    currentLed++;
//                    if(currentLed >= ledCount) {
//                        currentLed = 0;
//                    }
//                }
//                break;
//            case 2: // ghost
//                if(changeDelayCounter-- <= 0) {
//                    ledColour[currentLed] = 0;
//                    changeDelayCounter = changeDelay;
//                    currentLed++;
//                    if(currentLed >= ledCount) {
//                        currentLed = 0;
//                    }
//                } else {
//                    ledColour[previousLed] = 0x0f1f0f;
//                    ledColour[currentLed] = 0x1f1f1f;
//                    ledColour[nextLed] = 0x0f1f0f;
//                }
//                break;
//            case 3: // heartspin
//                changeDelay = 3;
//                if(changeDelayCounter-- <= 0) {
//                    ledColour[previousLed] = 0b01111111;
//                    ledColour[currentLed] = 0b01111111;
//                    ledColour[nextLed] = 0b00000111;
//                    changeDelayCounter = changeDelay;
//                    currentLed++;
//                    if(currentLed >= ledCount) {
//                        currentLed = 0;
//                    }
//                } else {
//                    ledColour[previousLed] = 0b01111111;
//                    ledColour[currentLed] = 0b00000111;
//                    ledColour[nextLed] = 0b01111111;
//                }
//                break;
            case 4: // lovesine
//                changeDelay = 1;
//                if(changeDelayCounter-- <= 0) {
//                    int *ledColour;
                    for(int stringIndex = 0; stringIndex < LED_STRING_COUNT; stringIndex++) {
                        int* ledColour = ledStringColours[stringIndex];
                        for(int ledIndex = 0; ledIndex < LED_STRING_SIZE; ledIndex++) {
                            int i = (stringIndex * LED_STRING_SIZE) + ledIndex;
                            float x = sin(radiansPerDegree * (i + currentLed));
                            ledColour[ledIndex] = x * 0x0000ff;
                        }
                    }
                    
                    currentLed++;
                    if(currentLed >= ledCount) {
                        currentLed = 0;
                    }
//                }
                break;
//            case 5: // rainbow
//                if(changeDelayCounter-- <= 0) {
//                    int curColourOffset = currentLed * 10;
//                    for(int i = 0; i < 8; i++) {
//                        ledColour[i] = allBits;
//                        allBits >>= 1;
//                        if(allBits <= 0) {
//                            allBits = 0xffffff;
//                        }
//                   }
//                   currentLed++;
//                   if(currentLed >= ledCount) {
//                       currentLed = 0;
//                   }
//                }
//                break;
            case 6:
                changeDelay = 10;
                int startColour = 0x0f;
                if(changeDelayCounter-- <= 0) {
                    int currentString = (int)(currentLed / LED_STRING_SIZE);
                    int currentStringLed = currentLed % LED_STRING_SIZE;
                    int previousLedString = (int)(previousLed / LED_STRING_SIZE);
                    int previousLedStringLed = previousLed % LED_STRING_SIZE;
                    
                    ledStringColours[currentString][currentStringLed] = 0xff;
                    ledStringColours[previousLedString][previousLedStringLed] = 0;
                    
                    currentLed++;
                    if(currentLed >= ledCount) {
                        currentLed = 0;
                    }
                }
                break;
            case 7:
                changeDelay = 10;
                int startColour = 0x0f;
                if(changeDelayCounter-- <= 0) {
                    int *ledColour;
                    for(int stringIndex = 0; stringIndex < LED_STRING_COUNT; stringIndex++) {
                        ledColour = ledStringColours[stringIndex];
                        for(int ledIndex = 0; ledIndex < LED_STRING_SIZE; ledIndex++) {
                            ledColour[ledIndex] = startColour++;
                        }
                        startColour <<= 3;
                    }
                }
                break;
        }
       
//        int *ledColour;
//        for(int stringIndex = 0; stringIndex < LED_STRING_COUNT; stringIndex++) {
//            ledColour = ledStringColours[stringIndex];
//            for(int ledIndex = 0; ledIndex < LED_STRING_SIZE; ledIndex++) {
//                long tempColour = ledColour[ledIndex];
//                ((tempColour & 1) == 0) ? zero() : one();
//                tempColour >>= 1; ((tempColour & 1) == 0) ? zero() : one();
//                tempColour >>= 1; ((tempColour & 1) == 0) ? zero() : one();
//                tempColour >>= 1; ((tempColour & 1) == 0) ? zero() : one();
//
//                tempColour >>= 1; ((tempColour & 1) == 0) ? zero() : one();
//                tempColour >>= 1; ((tempColour & 1) == 0) ? zero() : one();
//                tempColour >>= 1; ((tempColour & 1) == 0) ? zero() : one();
//                tempColour >>= 1; ((tempColour & 1) == 0) ? zero() : one();
//
//                tempColour >>= 1; ((tempColour & 1) == 0) ? zero() : one();
//                tempColour >>= 1; ((tempColour & 1) == 0) ? zero() : one();
//                tempColour >>= 1; ((tempColour & 1) == 0) ? zero() : one();
//                tempColour >>= 1; ((tempColour & 1) == 0) ? zero() : one();
//
//                tempColour >>= 1; ((tempColour & 1) == 0) ? zero() : one();
//                tempColour >>= 1; ((tempColour & 1) == 0) ? zero() : one();
//                tempColour >>= 1; ((tempColour & 1) == 0) ? zero() : one();
//                tempColour >>= 1; ((tempColour & 1) == 0) ? zero() : one();
//
//                tempColour >>= 1; ((tempColour & 1) == 0) ? zero() : one();
//                tempColour >>= 1; ((tempColour & 1) == 0) ? zero() : one();
//                tempColour >>= 1; ((tempColour & 1) == 0) ? zero() : one();
//                tempColour >>= 1; ((tempColour & 1) == 0) ? zero() : one();
//
//                tempColour >>= 1; ((tempColour & 1) == 0) ? zero() : one();
//                tempColour >>= 1; ((tempColour & 1) == 0) ? zero() : one();
//                tempColour >>= 1; ((tempColour & 1) == 0) ? zero() : one();
//                tempColour >>= 1; ((tempColour & 1) == 0) ? zero() : one();
//            }
//        }
//        
        
            for(int ledIndex = 0; ledIndex < LED_STRING_SIZE; ledIndex++) {
                long tempColour = ledColour1[ledIndex];
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

        
            for(int ledIndex = 0; ledIndex < LED_STRING_SIZE; ledIndex++) {
                long tempColour = ledColour2[ledIndex];
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

        
            for(int ledIndex = 0; ledIndex < LED_STRING_SIZE; ledIndex++) {
                long tempColour = ledColour3[ledIndex];
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

            for(int ledIndex = 0; ledIndex < LED_STRING_SIZE; ledIndex++) {
                long tempColour = ledColour4[ledIndex];
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
        
            for(int ledIndex = 0; ledIndex < LED_STRING_SIZE; ledIndex++) {
                long tempColour = ledColour5[ledIndex];
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
