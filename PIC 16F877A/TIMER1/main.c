


#include <xc.h>
#include "config1.h"
#include <stdint.h>
#define _XTAL_FREQ 4000000

unsigned char x=0;

void __interrupt() ISR(){
if(TMR1IF){
   x++;
    if(x==15){
        RB0=~RB0;
        
        x=0;
    }
   TMR1IF=0;
}    
    


}


void main(void) {
TRISB=0;
RB0=0;
T1CON=0x01;
PEIE=1;
GIE=1;
TMR1IF=0;
TMR1IE=1;
    
  while(1){
      
  }  
    
    return;
}
