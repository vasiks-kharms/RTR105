#include<stdio.h>

int main()
{
if(); // ieksh () var but apala nulle(visi biti ir ar nullem)
// vai bitu seciba kas satur kaut vienu bitu ar vieninieku



int a = 10; //int pieskir datu tipu,vietas nozimesana, vertibas pieskirsana
if (a > 7) // ja a ir lielaks par septini tad rezultats bus 0000 0000 0000 0000 0000 0000 0000 0001

printf("Viena darbiba kas tiks izpildita ja \" nosacijums ir speka\".\n");

if (a > 7) // figuriekavas izmanto ja grib veikt darbibu bloku
 {
 printf("Viena darbiba kas tiks izpildita ja \" nosacijums ir speka\".\n");
 printf("pirma darbiba.\n");
 printf("otra darbiba.\n");
 }

if (a > 7) 
 {
 printf("Viena darbiba kas tiks izpildita ja \" nosacijums ir speka\".\n");
 printf("Viena darbiba kas tiks izpildita ja \" nosacijums ir speka\".\n");
 printf("Viena darbiba kas tiks izpildita ja \" nosacijums ir speka\".\n");
 }
else // nesatur nosacijumu
// else vienmer pieder kadam if
// else vienmer atrodas vienas darbibas vai darbibu bloka {;;;} attaluma no if
{
 printf("Viena darbiba kas tiks izpildita ja \" nosacijums ir speka\".\n");
 printf("Viena darbiba kas tiks izpildita ja \" nosacijums ir speka\".\n");
 printf("Viena darbiba kas tiks izpildita ja \" nosacijums ir speka\".\n");
 }
// nosacijums nav speka

return 0;

}
