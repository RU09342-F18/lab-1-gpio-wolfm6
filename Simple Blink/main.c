#include <msp430.h> 


/**
 * main.c
 * Simple Blink G2
 */
int main(void)
{
	WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer
	P1SEL &= ~BIT0;             // enables P1.0 to be a GPIO
	P1DIR |= BIT0;              // sets P1.0 to be an output

	    while(1)
	    {
	        P1OUT ^= BIT0;          //AN XOR Statement to change the BIT from 1 to 0
	        _delay_cycles(100000);
	    }
	return 0;
}
