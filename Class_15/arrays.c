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

// mas??vi - _sec??gi_ novietotas v??rt??bas atmi??a izg??st??mas ar viena
// identifikatora pal??dz??bu: a[0], a[1], a[2]
// alternat??va - a0, a1, a2 - kas nav ??rti? - nav iesp??jama algoritmiz??cija, jo
// tik??anai pie v??rt??b??m ir manu??li jamaina main??ga v??rds, bet mas??va gad??jum??
// j??maina indekss, t??tad, i=0; a[i]; i=1; a[i]; i=2; a[i];

// NB! mas??va pirm?? elementa indekss ir - 0
// NB! mas??vam ar?? ir adrese (mas??va v??rds ir nor??de) - t?? ir 0. elementa adrese

#include<stdio.h>

int main()
 {
 int i_array_1[10]; // int lielumu mas??va deklar????ana
                    // (piesaukt dr??kst, bet v??rt??bas nav zin??mas)

 int i_array_2[3] = {1,2,3}; // int lielumu mas??va defin????ana
 int i_array_3[5] = {4,5,6}; // mas??va p??d??jie divi elementi b??s ar 0 v??rt??b??m
 int i_array_with_zeros[5] = {0}; // mas??va v??rt??bas ir nulles

 int i_array_2D[2][3] = {{7,8,9},     // [2 - rindu sskaits][3 - kolonu skaits]
                         {10,11,12}}; // dimensijas var b??t vair??kas

 printf("mas??va i_array_2 adrese: %p\n",i_array_2);

 printf("mas??va i_array_2 0. elementa adrese: %p\n",&i_array_2[0]);
 printf("mas??va i_array_2 0. elementa v??rt??ba: %d\n",i_array_2[0]);
 //printf("mas??va i_array_2 0. elementa v??rt??ba: %d\n",*(i_array_2));
 printf("mas??va i_array_2 0. elementa v??rt??ba: %d\n",*(i_array_2+0));

 printf("mas??va i_array_2 1. elementa adrese: %p\n",&i_array_2[1]);
 printf("mas??va i_array_2 1. elementa v??rt??ba: %d\n",i_array_2[1]);
 printf("mas??va i_array_2 1. elementa v??rt??ba: %d\n",*(i_array_2+1));

 printf("mas??va i_array_2 2. elementa adrese: %p\n",&i_array_2[2]);
 printf("mas??va i_array_2 2. elementa v??rt??ba: %d\n",i_array_2[2]);
 printf("mas??va i_array_2 2. elementa v??rt??ba: %d\n",*(i_array_2+2));


 printf("\n\nmas??va i_array_2D 0.2. elementa adrese: %p\n",&i_array_2D[0][2]);
 printf("mas??va i_array_2D 0.2. elementa v??rt??ba: %d\n",i_array_2D[0][2]);
 //printf("mas??va i_array_2D 0.2. elementa v??rt??ba: %d\n",*(i_array_2D+0*2+1*2));
 printf("mas??va i_array_2D 0.2. elementa v??rt??ba: %d\n",*(*(i_array_2D+0)+2));

 printf("mas??va i_array_2D 1.0. elementa adrese: %p\n",&i_array_2D[1][0]);
 printf("mas??va i_array_2D 1.0. elementa v??rt??ba: %d\n",i_array_2D[1][0]);
 //printf("mas??va i_array_2D 1.2. elementa v??rt??ba: %d\n",*(i_array_2D+1*2+1*0));
 printf("mas??va i_array_2D 1.2. elementa v??rt??ba: %d\n",*(*(i_array_2D+1)+0));

 return 0;
 }
