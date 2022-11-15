#include <stdio.h>
/*
int main()
{
char phrase[40];
printf(ievadi savu vardu un uzvardu: ");
fgets(phrase, 40, stdin); //stdin ir standart input
printf("tavs vards un uzvards ir %s ", phrase)
printf("tas sastav no - "
return 0;
}

// 2. piem
#include <stdio.h>
int main()
{
    char name[30];
    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);  // read string
    printf("Name: ");
    puts(name);    // display string
    return 0;
}

*/
//3.piemers 
#define N 100
int main()
{
   char string [N];
   char mystring [N];
   printf ("ievadi vardu un uzvardu: ");
   if ( fgets (mystring , 100, stdin) != NULL );
   {
   printf ("tavs vards ir  (fgets used): ");
   puts (mystring);
   }

   for(int i=0;i<N;i++)
   {
   printf("%c",mystring[i]);
   }
   return 0;
}


//4.piemers

