// operacijas:
//	 operands_1(atbilst kkads datu tips)
//	 operacija operands_2(ari atbildst kkads datu tips)
//---> operacijas rezultats(kads datu tips veidojas) 
//		operacijas datu tips ir "lielakais" datu tips, kas piedalas operacija
// piemeram, matematiskas(+ - * / %mods)
// logiskas: && (un); || (vai)
// logiskas: pa bitiem: ;, |; ^ (or); ! (noliegums)
// bitu operacijas: >> (nobide); <<

//ka strada operacija
//vai operacijaa drikst izmantot jebkuru datu tipu
//operaciju izpildisanas seciba? to nosaka prioritate, secibas kontrolei izmanto iekavas
//pameginat izdalit int/int vai char/char  % & | ^ ! || >> << 


#include<stdio.h>

int main()
{
char c1 = 'A', c2 = 0x45;
int i1 = 2000, i2 = 01056;
float f1 = 2.3, f2 = -770.896;
double d1 = -5.6e4, d2 = 456.8e-3;

printf("%d1 (%ld bytes) * %d1 (%ld bytes)",c1,sizeof(c1),i,sizeof(i1));
printf(" = %d (%ld bytes)\n",c1*i1,sizeof(c1*i1));


return 0;
}


