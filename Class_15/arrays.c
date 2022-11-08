/*

 MASIIVI - secigi novietotas vertibas atminjaa,
 izgustamas ar viena identifikatora palidzibu
 alternatiiva - a0, a2, a2 - nav erti, jo nav
 iespejama algoritmizacija, jo tiksana pie vertibam 
 ir manuali jamaina mainiga vards, bet masiiva gadijuma
 jamaina indekss, tatad. 1=0; a[i]; i=1; a[i]; i=2; a[i];

 NB! masiiva pirmaa elementa indekss ir - 0
 masiivam ari ir adrese (masiva vards ir norade) - ta ir 0. elementa adrese

*/


#include <stdio.h>

int main()
{
// deklaresanas piemers
int i_array1[10]; // int lieluma masiiva deklaresana (deklaresana- tiek pie vertibaam, bet kadam - nav zinams vel)

// definesanas piemeri
int i_array2[3]={1,2,3}; // int lieluma masiva DEFINESANA
int i_array3[5]={4,5,6}; // masiva pedejie divi elementi bus ar 0 vertibaam
int i_array_with_zeros[] = {0}; //masiiva vertibas ir nulles

int i_array2D[2][3] = {{7,8,9}, // divu dimensiju masiivs - 2 ir rindu skaits, 3 ir kolonnu skaits. dimensijas var but vairaakas
	        	{10,11,12}};

printf("masiiva i_array2 adrese ir: %p\n",i_array2); // kada ir masivu adrese

printf("masiiva i_array2 0. elementa  adrese ir: %p\n",&i_array2[0]);
printf("masiiva i_array2 0. elementa  adrese ir: %d\n",i_array2[0]);
printf("masiiva i_array2 0. elementa  adrese ir: %d\n",*i_array2+0);//var ari nelikt klat 0


printf("masiiva i_array2 1. elementa  adrese ir: %p\n",&i_array2[1]);
printf("masiiva i_array2 1. elementa  adrese ir: %d\n",i_array2[1]);
printf("masiiva i_array2 1. elementa  adrese ir: %d\n",*(i_array2+1)); //parvietojamies gar adresem


printf("masiiva i_array2 2. elementa  adrese ir: %p\n",&i_array2[2]);
printf("masiiva i_array2 2. elementa  adrese ir: %d\n",i_array2[2]);
printf("masiiva i_array2 2. elementa  adrese ir: %d\n",*(i_array2+2));


printf("masiiva i_array2D 0.2. elementa  adrese ir: %p\n",&i_array2D[0][2]);
printf("masiiva i_array2D 0.2. elementa  adrese ir: %d\n",i_array2D[0][2]);
printf("masiiva i_array2D 0.2. elementa  adrese ir: %d\n",*(i_array2D+0+1*2));


printf("masiiva i_array2D 0.2. elementa  adrese ir: %p\n",&i_array2D[1][0]);
printf("masiiva i_array2D 0.2. elementa  adrese ir: %d\n",i_array2D[1][0]);
printf("masiiva i_array2D 0.2. elementa  adrese ir: %d\n",*(i_array2D+2+1*0));


return 0;
}
