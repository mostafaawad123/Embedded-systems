/*
 * File:   main.c
 * Author: DCLAP
 *
 * Created on December 25, 2021, 6:47 PM
 */


#include <xc.h>
#include "config.h"
#define _XTAL_FREQ 4000000
void main(void) {
    TRISB=0;
    PORTB=2;
    while(1){
         __delay_ms(1000);
        PORTB= PORTB<<1 ;
        if(PORTB ==32 ){
            PORTB=2;
        }
    }
    return;
}
