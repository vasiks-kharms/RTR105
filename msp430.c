#include <msp430.h>
int main(void)
{
	WDRCTL = WDTPW + WDTHOLD; 	// STOP WATCHDOG TIMER
	volatile unsigned int j;
	//P1DIR |= 0b00010000;
	//P1DIR |= BIT4;
	P1DIR |= 0x10;  //Pasludinam P1.4 par izeju
	P1OUT |= BIT4;  //Padodam uz p1.4 HIGH signalu
	for(;;)
	{
		//darbiba
		P1OUT ^=BIT4; //mainit P1OUT stavoklis uz preteju
		for(j=65535;j>2;j--)
		{
			;//darbiba
		}
}
