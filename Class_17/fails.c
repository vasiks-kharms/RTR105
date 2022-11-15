#include <stdio.h>



int main(void) //void - argumentu nebus
{
FILE *fp; //atveram failu
fp = fopen("teksts.dat","wt");// kadam nolukam mes atveram failu
// kur (var noradit celu) un ko (faila nosaukums)kadam nolukam 
//  (wt fails atverts rakstisanai(write) t-TEKSTA fails!!
// ja fails neeksitee -tas tiks izveidos
// ja tas jau eksistee - to parrakstis
if( fp == NULL )
{
printf("Failu nav izdevies atvert.\n");
return 100;
}


/*
while( (ch=fgetc(fp)) != EOF
putc(ch);
fclose(fp);
*/
//fprintf(stdout,,"AA"); = printf()


fprintf(fp,"Izvads faila\n");
fprintf(fp,"Fails ir atverts. sis ir 2. ieraksts faila\n");
double d = 1.6789875;
fprintf(fp, "d mainigaa vertiba: %.3f\n",d);

fclose(fp);// obligati vienmer jaaizver fails kuraa stradaji

return 0;
}
