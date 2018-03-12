//Blincking LED



#define F_CPU 8000000UL
#include <avr/io.h>
#include <util/delay.h>

void timer_ini(void);

int main(void){
    DDRC=0xff;
    timer_ini();
    while(1){
        
        if(100<TCNT0){
            PORTC=(1<<PC0)^PORTC;
            TCNT0=0;
        }
    }
    return 0;

}



void timer_ini(void){
    TCCR0=(1<<CS02)|(1<<CS00);
    TCNT0=0;
}
