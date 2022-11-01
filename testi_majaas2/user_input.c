#include <stdio.h>
#include <stdlib.h>

int main()
{

int age; // izveidojam mainiigo, kas buus lietotaja ievaditais cipars

printf("Ievadi savu vecumu: \n");

scanf("%d", &age); //mums janorada kaadu datu tipu gribam,lai programma atlauj ievadit, saja gadijuma - %d
	// ar age noradam kaadaa mainigajaa mes so info uzglabasim
	// jaizmanto ari & (pointer)
printf("tu esi %d gadus vecs\n", age);


/*
//piemers ar vardu-

char phrase[20]; // kvadratiekavaas simbolu skaitu ievada
printf("ievadi savu vardu: ");
scanf("%s", phrase);
printf(" tavs vards ir %s", phrase); // dotaa atbilde nedos vardus kas seko pec atstarpes ko esi ievadijis

*/

/*

// 2.  piemers ar vardu(iem)

char phrase[40];
printf(ievadi savu vardu un uzvardu: ");
fgets(phrase, 40, stdin); //stdin ir standart input
prinf("tavs vards un uzvards ir %s ", phrase)

*/
return 0;
}
