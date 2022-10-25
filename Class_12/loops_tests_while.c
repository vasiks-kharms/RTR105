//cikla operatori:

/*
kamer while - 
while(izteiksme);
 
while(izteiksme)
;

while(izteiksme){;;;}

aiz while () esosaa darbiba vai darbibas tiks pilditas tikmer
 kamer izteiksmes rezultats ir-
-true (izteiksmes rezultataa bitu seciba ir vismaz viens 1)
-false vai absolutaa nulle (visi biti ar 0 stavokli)
*/

#include<stdio.h>
int main()
{
int a=10;
while(a>=0)
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
