
#define F_CPU 8000000UL
#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>

void init_interrupts(void){
    MCUCR=(1<<ISC01)|(1<<ISC00);
    GICR=(1<<INT0)|(1<<INT1);
    sei();

}

int main(void){
    
	while(1){
        init_interrupts();
 			 
	}	
	
    return 0;
    
}


ISR(INT0_vect){
        PORTC=(1<<PC0);
}


