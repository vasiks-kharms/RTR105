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

/*
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
*/  

// PASNIEDZEJAS PIEMERI - 

// masīvi - _secīgi_ novietotas vērtības atmiņa izgūstāmas ar viena
// identifikatora palīdzību: a[0], a[1], a[2]
// alternatīva - a0, a1, a2 - kas nav ērti? - nav iespējama algoritmizācija, jo
// tikšanai pie vērtībām ir manuāli jamaina mainīga vārds, bet masīva gadījumā
// jāmaina indekss, tātad, i=0; a[i]; i=1; a[i]; i=2; a[i];

// NB! masīva pirmā elementa indekss ir - 0
// NB! masīvam arī ir adrese (masīva vārds ir norāde) - tā ir 0. elementa adrese

#include<stdio.h>

int main()
 {
 int i_array_1[10]; // int lielumu masīva deklarēšana
                    // (piesaukt drīkst, bet vērtības nav zināmas)

 int i_array_2[3] = {1,2,3}; // int lielumu masīva definēšana
 int i_array_3[5] = {4,5,6}; // masīva pēdējie divi elementi būs ar 0 vērtībām
 int i_array_with_zeros[5] = {0}; // masīva vērtības ir nulles

 int i_array_2D[2][3] = {{7,8,9},     // [2 - rindu sskaits][3 - kolonu skaits]
                         {10,11,12}}; // dimensijas var būt vairākas

 printf("masīva i_array_2 adrese: %p\n",i_array_2);

 printf("masīva i_array_2 0. elementa adrese: %p\n",&i_array_2[0]);
 printf("masīva i_array_2 0. elementa vērtība: %d\n",i_array_2[0]);
 //printf("masīva i_array_2 0. elementa vērtība: %d\n",*(i_array_2));
 printf("masīva i_array_2 0. elementa vērtība: %d\n",*(i_array_2+0));

 printf("masīva i_array_2 1. elementa adrese: %p\n",&i_array_2[1]);
 printf("masīva i_array_2 1. elementa vērtība: %d\n",i_array_2[1]);
 printf("masīva i_array_2 1. elementa vērtība: %d\n",*(i_array_2+1));

 printf("masīva i_array_2 2. elementa adrese: %p\n",&i_array_2[2]);
 printf("masīva i_array_2 2. elementa vērtība: %d\n",i_array_2[2]);
 printf("masīva i_array_2 2. elementa vērtība: %d\n",*(i_array_2+2));


 printf("\n\nmasīva i_array_2D 0.2. elementa adrese: %p\n",&i_array_2D[0][2]);
 printf("masīva i_array_2D 0.2. elementa vērtība: %d\n",i_array_2D[0][2]);
 //printf("masīva i_array_2D 0.2. elementa vērtība: %d\n",*(i_array_2D+0*2+1*2));
 printf("masīva i_array_2D 0.2. elementa vērtība: %d\n",*(*(i_array_2D+0)+2));

 printf("masīva i_array_2D 1.0. elementa adrese: %p\n",&i_array_2D[1][0]);
 printf("masīva i_array_2D 1.0. elementa vērtība: %d\n",i_array_2D[1][0]);
 //printf("masīva i_array_2D 1.2. elementa vērtība: %d\n",*(i_array_2D+1*2+1*0));
 printf("masīva i_array_2D 1.2. elementa vērtība: %d\n",*(*(i_array_2D+1)+0));

 return 0;
 }
