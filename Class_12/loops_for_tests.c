
#include<stdio.h>
int main()
{
int a=10;
/* for( ; ; ) VIENMER SATUR DIVUS ;

 for( ;izteiksme ;) 
 ;

*/
for(a=10; a>=0 ; a-- )
// darbiba(s) pirms pirma ; tiek izpilditas tikai vienu reizi, cikla sakuma
// talak izteiksmes rezultata aprekins jeb nosacijuma parbaude
// cikla kermenja (seko aiz apalajam iekavam) darbibas pildisana
// cikla mainiigo izmainja atbilstosi aprakstam aiz otraa ;
// turpinajumaa cikla izteiksmes (nosacijuma) rezultata aprekins

{

printf("a: %d\n",a);

a--; //a = a - 1; a -= 1;
// 1. a>10 - 0000 0000 0000 0000 0000 0000 0000 0001 (true)
// 2. printf -> 10
// 3. samazin'as par 1 -> 9
// 4. a (9) >= (true)
// printf -> 9
// ...
// i. a (0) >= 0 (true)
// i+1. printf -> 0
// 1+2 a samazinas par 1 -> -1
// 1+3 a (-1) >= false



}
printf("a (pec cikla): %d\n",a);

return 0;
}
