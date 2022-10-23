#include<stdio.h>

int main()
{
char a = 10; //divas darbibas -
		// 1) mainigaa deklaresana(char a) 
		//vietas pieskirsana atminjaa(kur(adrese)
		// un cik daudz(atbilstosi datu tipam-saja gad. -char)
		// 1byte : si baita saturs nav zinams (0001 1110 vai 1100 1111 utt)

		// 2) un vertibas pieskirsana a = 10
			//10 - vesela tipa konstante
			//int - vesela tipa konstante
			//double - reala tipa konsante  

		// 1byte : 0000 1010   (desmitnieks)

		// mainiaa nosaukums(vards,identifikators) nevar saturet atstarpes,
		// nevar sakties ar skaitli
		// var but ar mneimonisko nosaukumu, piem. cilindra_tilpums

printf("mainiga vertiba ka simbols: %c",a); //pedinjaas statisks teksts, redzesim uz ekrana
printf("mainiga vertiba ka decimals skaitlis: %d\n",a); // \n parcelj jaunaa rindaa
printf("mainiga vertiba ka heksadecimals skaitlis %#x\n",a);
printf("mainiga vert attelosana ka oktals skaitlis: %#o\n",a);// hastags liek nulli  prieks lai viglak saprast kuraa sistemaa

//char a: //nedrikst pardeklaret mainigo, tadel ievies jaunu -

char b;
printf("b mainiga vertibas pirms vertibas pieskiersanas ka simbols): %c\n",b;
printf("b mainiga vertiba-\"- (ka decimals skaitlis): %d\n",b;
printf("b mainiga vertiba -\"- ka heksidecimals skaitlis: %#x\n",b;
printf("b mainiga vertiba -\"- ka oktals skaitlis: %#o\n",b;

b = 250
// ja ir vesela skaitla datu tips un ja vecakais bits ir negativs skaitlis, ir jainvertee un tikai tad gala rezultatu jainterpretee

unsigned char c = 320; //unsigned nozime ka nebus ziimes

printf("b mainiga vertibas pirms vertibas pieskiersanas ka simbols): %c\n",b;
printf("b mainiga vertiba-\"- (ka decimals skaitlis): %d\n",b;
printf("b mainiga vertiba -\"- ka heksidecimals skaitlis: %#x\n",b;
printf("b mainiga vertiba -\"- ka oktals skaitlis: %#o\n",b;

return 0;

}
