#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

int main(void) {

printf("Ievadi decimalu skaitli: ");
double n;
scanf("%lf", &n);


printf("Izvelies kadu datu tipu (char, int, long long): ");
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
else if (strcmp(dataType, "long long") == 0)
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
//paradit erroru, ja nederigs datu tips
else {
printf("Nederigs datu tips.\n");
return 1;
}
i++;
}


printf("Faktorialis no %.lf ir %lld.\n", n, result);

return 0;
}
