#include <stdio.h>

char dialogs(); // funkcijas deklaresana


// char dialogs() //funkcijas definesana (var but uzreiz definesana bez deklaresanas)
              // definesana var but ievietota pec main apraksta 
             //deklaresanai vai definesanai ir jabut pirms funkcijas izamntosanas

char_dialogs_i()

void test1(int a, int b, int c); // void nozime ka return nebus
void test2( int 1, double b); 
{
return 0; // funkcijas datu tips sakrit ar atgriezamo vertibu
}

int main() // funkcijas datu tips int saskan ar atgriezamo vertibu - 0
{

char c_main_local;
c_main_local = 10;
printf("ir ievadits skaitlis(izdruka no c_main_local): %hhd\n",c);
return c_main_local;

}
/*
printf("Lietotaj, ludzu ievadi naturalu skaitli: ");
scanf("%hhd", &c);
printf("ir ievadits skaitlis: %hhd\n",c);

// { ... }

printf("Lietotaj, ludzu ievadi naturalu skaitli: ");
scanf("%hhd", &c);
printf("ir ievadits skaitlis: %hhd\n",c);
*/

c_main_local = dialogs();

return 0;
}

char dialogs()
{
char c_dialogs_local;
printf("Lietotaj, ludzu ievadi naturalu skaitli: ");
scanf("%hhd", &c_dialogs_local);
printf("izdruka no dailogs funkcijas: %hhd\n",c_dialogs_local);

return c_dialogs_local;
}
}
 
