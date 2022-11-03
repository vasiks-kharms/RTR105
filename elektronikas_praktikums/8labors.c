#include <msp430g2202.h>

char i;

//function declarations

int main(void)
{
    WDTCTL = WDTPW + WDTHOLD; // atsleedz watchdog
    BCSCTL1 = CALBC1_12MHZ; // uzstada timera freq uz 12MHz
    DCOCTL = CALDCO_12MHZ; // uzstada taimera freq uz 12MHz
    P1DIR = 0xFF; // konfiguree visus ciparu segmentus kaa izejas
    P2DIR = 0xF; // konfiguree visus ciparu pozicijas pinus kaa izejas
    P2OUT &= ~0b00001111; // iedarbinam visas 4 ciparu pozicijas
    P2OUT |= 0b00000001;  // vienaa no tiem 3.3v spriegums, ja grib, lai visi deg - 0b00001111;


    unsigned char j=0; // deklaree unsigned char kaa mainigo j un pieskir tam vertibu 0
                  //unsigned char is a character datatype where the variable consumes all the 8 bits of the memory and there is no sign bit

    char digit_position=0; // nodeklarejam "digit pozition" kaa mainigo
    for(;;)
    {
      j=(j+1)%100; //  why ?
      digit_position = (digit_position+1)%4; // ar so vares automatiski mainit ciparu poziciju
      indication(j,j,digit_position); //mainot x - (j,x) mainam ciparu poziciju, kas aktivizejas (0,1,2,3)
      delay(100000);
    }
}
void indication ( unsigned char digit12, unsigned char digit34, unsigned char which_digit )
{
  P2OUT &= ~0x0F;
//display(digit34);

if (which_digit == 0)
{ P2OUT |= BIT0;
  display(digit12/10);
  }

if (which_digit == 1)
{ P2OUT |= BIT1;
  display(digit12%10);
  }

if (which_digit == 2)
{
  P2OUT |= BIT2;
  display(digit34/10);
}

if (which_digit == 3)
{
  P2OUT |= BIT3;
  display(digit34%10);
}
}

void display(unsigned char digit)
{
if(digit==0) P1OUT = 0xF5;
if(digit==1) P1OUT = 0x05;
if(digit==2) P1OUT = 0x73;
if(digit==3) P1OUT = 0x57;
if(digit==4) P1OUT = 0x87;
if(digit==5) P1OUT = 0xD6;
if(digit==6) P1OUT = 0xF6;
if(digit==7) P1OUT = 0x45;
if(digit==8) P1OUT = 0xF7;
if(digit==9) P1OUT = 0xD7;

 
}

void delay(unsigned long ms)
{
  unsigned long ims;
  for(ims = 0; ims<ms ; ims++)
  {
    __delay_cycles(120);
  }
}
