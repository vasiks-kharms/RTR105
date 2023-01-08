//SORTING

//info avoti
//https://www.sanfoundry.com/c-program-sort-array-ascending-order/


#include <stdio.h>

int main(void) 
{
char letter1, letter2, letter3;
char order;

printf("Ievadi 1. burtu: ");
scanf(" %c", &letter1);
printf("Ievadi 2. burtu: ");
scanf(" %c", &letter2);
printf("Ievadi 3. burtu: ");
scanf(" %c", &letter3);
printf("Ievadi burtu a, lai sakartotu visu alfabetiska seciba;\n Ievadi burtu p, lai sakarotu visu preteja seciba: ");
scanf(" %c", &order);


if (order == 'a')
{
if (letter1 > letter2)
{
char temp = letter1;

letter1 = letter2;
letter2 = temp;

}
if (letter2 > letter3)
{
char temp = letter2;
letter2 = letter3;
letter3 = temp;

}
if (letter1 > letter2)
{
char temp = letter1;
letter1 = letter2;
letter2 = temp;

}
}
else if (order == 'p')
{
if (letter1 < letter2)
{
char temp = letter1;
letter1 = letter2;
letter2 = temp;
}

if (letter2 < letter3)
{
char temp = letter2;
letter2 = letter3;
letter3 = temp;
}
if (letter1 < letter2)
{
char temp = letter1;
letter1 = letter2;
letter2 = temp;

}
}


printf("Burti (Jusu ieprieks izveletajaa secibaa) ir: %c %c %c\n", letter1, letter2, letter3);

return 0;
}
