#include<avr/io.h>
#include <util/delay.h>
#include"C1.h"

void C1()
{
     DDRD &= ~(1<<PD1); //input pin port
     DDRD &= ~(1<<PD2); //input pin port

     /* giving logic high for the input pins*/
     PORTD |= (1<<PD1);
     PORTD |= (1<<PD2);

     /*giving the output @ pin0 port B */
     DDRB |= (1<<PB0);

      if ((!(PIND & (1<<PD1)))& (!(PIND & (1<<PD2))))
     {
        PORTB |= (1<<PB0);    //turns ON the LED if both the switches are turned on by
         _delay_ms(1000);

     }
     else
     {
         PORTB &= ~(1<<PB0);    //turns OFF the LED
         _delay_ms(1000);
     }
}
