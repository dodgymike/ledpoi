/*
 * File:   newmain.c
 * Author: mike
 *
 * Created on 14 January 2016, 11:07 PM
 */

#include <pic18f2455.h>
//#include <delays.h>
#include "config.h"

//unsigned long patterns[] = {
//    0b1111111111111111,
//    0b1111111001111111,
//    0b1111110000111111,
//    0b1111100000011111,
//    0b1111000000001111,
//    0b1110000000000111,
//    0b1100000000000011,
//    0b1110000000000111,
//    0b1111000000001111,
//    0b1111100000011111,
//    0b1111110000111111,
//    0b1111111001111111
//};
unsigned long patterns[4][12] = {
    {
    0b1111111111111111,
    0b1111111111111111,
    0b1111111111111111,
    0b1111111111111111,
    0b1100000000000011,
    0b1100000000000011,
    0b1100000000000011,
    0b1100000000000011,
    0b1100000000000011,
    0b1100000000000011,
    0b1100000000000011,
    0b1111111111111111
    },
    {
    0b1111111111111111,
    0b1111111011111111,
    0b1111111011111111,
    0b1111110001111111,
    0b1111000000011111,
    0b1000000000000011,
    0b1111000000011111,
    0b1111110001111111,
    0b1111111011111111,
    0b1111111011111111,
    0b1111111111111111,
    0b1111111111111111,
    },
    {
    0b1111111111111111,
    0b1111111111111111,
    0b1111111110001111,
    0b1111110000000011,
    0b1111000000000001,
    0b1100000000000111,
    0b1000000000001111,
    0b1100000000000111,
    0b1111000000000001,
    0b1111110000000011,
    0b1111111110001111,
    0b1111111111111111
    },
    {
    0b1111111111111111,
    0b1111111001111111,
    0b1111110000111111,
    0b1111100000011111,
    0b1111000000001111,
    0b1110000000000111,
    0b1100000000000011,
    0b1110000000000111,
    0b1111000000001111,
    0b1111100000011111,
    0b1111110000111111,
    0b1111111001111111
    }
};

unsigned long update_leds(unsigned long pattern_group_index, unsigned long pattern_index) {
//    if(leds <= 0b0000000000000011) {
//        leds = 0b0000000000000110;
//        *direction = 1;
//    } else if(leds >= 0b1100000000000000) {
//        *direction = 0;
//        leds = 0b0110000000000000;
//    }
//    
//    if(*direction == 0) {
//        leds = (leds >> 1);
//    } else {
//        leds = (leds << 1);
//    }
//   
//    return leds;
    
    return patterns[pattern_group_index][pattern_index];
}

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

    unsigned long pattern_index = 0;
    unsigned long pattern_group_index = 0;
    
    while(1) {
        leds = update_leds(pattern_group_index, pattern_index++);
        if(pattern_index >=12) {
            pattern_index = 0;
            pattern_group_index++;
        }
        if(pattern_group_index >= 4) {
            pattern_group_index = 0;
        }
        
        unsigned char portb = (leds >> 8) & 0xff;
        unsigned char porta = leds & 0xff;
        unsigned char portc = (porta & 0b11100000) >> 5;
        
        PORTA = porta;
        PORTB = portb;
        PORTC = portc;
        
        delay(500);
    }
 
    return;
}
