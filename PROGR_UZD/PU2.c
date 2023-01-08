//DEC2BIN

#include <stdio.h>

int main()
{

unsigned char c1;

printf("Ievadi skaitli(no 1 lidz 9): ");
scanf(" %c", &c1);
c1 = (unsigned char)c1 & 0x0f;
printf("Tavs skaitlis binaraja koda: ");
for (int i = 7; i >= 0; i--)

{
printf("%u", (c1 >> i) & 0x01);
//(c1 >> i)operacija pabida c1 bitus uz labo pusi pa i pozicijam
// tad tiek izpildita & operacija, kas LSB izdod ka 0 vai 1
}

printf("\n");
return 0;

}
