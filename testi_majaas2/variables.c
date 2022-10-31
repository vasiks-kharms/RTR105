#include <stdio.h>
#include <stdlib.h>

int main()
{

//VARIABLES
char cipara_nosaukums[] = "cetri"; //vaardu uzgalbatt; kvadratiekavas noaka ka velos vairakas uzglabat
int cipars = 13; // CIPARU uzgalaba

printf("viens divi tris %s pieci %d sesi\n", cipara_nosaukums, cipars); // %s nozimee ka atainos to, o noradam velaak aiz komata
								// %d izmanto cipariem

printf("viens divi tris %s pieci 12 sesi\n", cipara_nosaukums);
printf("viens divi tris %s pieci %d sesi\n", cipara_nosaukums, cipars);

return 0;

}
