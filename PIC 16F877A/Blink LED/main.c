/*
 * File:   main.c
 * Author: DCLAP
 *
 * Created on December 25, 2021, 3:15 PM
 */


#include <xc.h>
#include "config.h"
#define _XTAL_FREQ 4000000
void main(void) {
    TRISB=0;
    PORTB=0;
    unsigned char matrix[10]={0xFC,0x60,0xDA,0xF2,0x66,0xB6,0xBE,0xE0,0xFE,0xF6};
    unsigned char counter=0;
    
    while(1){
        PORTB=matrix[counter];
        counter++;
        __delay_(1000);
        if(counter==10){
            counter=0;
        }
    }
    return;
}
