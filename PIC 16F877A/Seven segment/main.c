/*
 * File:   main.c
 * Author: DCLAP
 *
 * Created on December 25, 2021, 4:06 PM
 */


#include <xc.h>
#include "config.h"
#define _XTAL_FREQ 4000000

void main(void) {
    TRISB=0;
    PORTB=0;
    unsigned char number[10]={0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x67};
    unsigned char counter=0;
    while(1){
        PORTB=number[counter];
        counter++;
        if(counter==10){
            counter=0;
        } 
        __delay_ms(1000);
    }
    return;
}
