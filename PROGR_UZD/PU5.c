#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {

printf("ievadi decimalu skaitli: ");
double n;
scanf("%lf", &n);


printf("ievadi datu tipu ko izmantot aprekiniem (char, int, long long): ");
char data_type[10];
scanf("%s", data_type);

if (strcmp(data_type, "char") == 0) {
char result = 1;
for (int i = 1; i <= n; i++) {
if (result < 0) {
printf("error: nevar aprekinat faktoriali izmantojot char datu tipu.\n");
break;
}
result *= i;
}
printf("Faktorialis no si skaitla ir %d.\n", result);
} else if (strcmp(data_type, "int") == 0) {
int result = 1;
for (int i = 1; i <= n; i++) {
if (result < 0) {
printf("error: nevar aprekinat faktoriali izmantojot int datu tipu.\n");
break;
 }
result *= i;
 }
printf("Faktorialis no si skaitla ir %d.\n", result);
 }
else if (strcmp(data_type, "long long") == 0) {
long long result = 1;
for (int i = 1; i <= n; i++) {
if (result < 0) {
printf("error: nevar aprekinat faktoriali izmantojot long long datu tipu.\n");
break;
}
result *= i;
}
 printf("Faktorialis no si skaitla ir %lld.\n", result);
}
 else

{
printf("nederigs datu tips.\n");
}

return 0;
}
