//WHILE + FACTORIAL

//info avoti:
//https://www.programming9.com/programs/c-programs/92-c-program-to-find-factorial-of-a-number-using-while-loop
//https://www.tutorialspoint.com/cprogramming/c_logical_operators.htm
//https://www.tutorialspoint.com/c_standard_library/limits_h.htm

#include <stdio.h>
#include <stdlib.h> //for general purpose functions
#include <string.h>// for handling strings
#include <limits.h>//satur konstantes dazadiem datu tipiem - CHAR_MAX, INT_MAX un LLONG_MAX


int main(void)
{

printf("Ievadi decimalu skaitli: ");
double n;
scanf("%lf", &n);


printf("Izvelies kadu datu tipu (char, int, long_long): ");
//NB! izveloties long long - jalieto underscore!
char dataType[10];
scanf("%s", dataType);


long long result = 1;
double i = 1;
while (i <= n) {

//ja izvelaas char -
if (strcmp(dataType, "char") == 0)
{
char r = result;
char ii = i;

//ja lielums ir pozitivs un ietilpst char tipa robezaas,veic darbibu, ja ne tad error
if (r > 0 && r <= CHAR_MAX / ii)
{
result *= ii;
}
else
{
printf("error: Nevar izrekinat faktoriali izmantojot char datu tipu.\n");
return 1;
}
}

//ja izvelas int
else if (strcmp(dataType, "int") == 0) {
int r = result;
int ii = i;
if (r > 0 && r <= INT_MAX / ii) {
result *= ii;
}
else
{
printf("error: Nevar izrekinat faktoriali izmantojot int datu tipu.\n");
return 1;
}
}

//long long
else if (strcmp(dataType, "long_long") == 0)
{
if (result > 0 && result <= LLONG_MAX / i)
{
result *= i;
}
else
{
printf("error: Nevar izrekinat faktoriali izmantojot long long datu tipu.\n");
return 1;
}
}


//ja ievadits vispar nederigs datu tips / ir typo
else
{
printf("Nederigs datu tips.\n");
return 1;
}
i++;
}


printf("Faktorialis no %.lf ir %lld.\n", n, result);

return 0;
}
