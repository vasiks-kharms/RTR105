//FUNKCIJA f(x)=e^(-x)
//NB! kompilejot atslega -lm

//izmantotie info avoti
//https://www.youtube.com/watch?v=KbvD6FlIJGU
//https://www.youtube.com/watch?v=3d6DsjIBzJ4
//https://www.youtube.com/watch?v=JYQqml4-4q4
//https://estudijas.rtu.lv/file.php/252149/RTR105_2019_2020_L17_20200118_14_49.pdf


#include <stdio.h>
#include <math.h>

double f(double x, int i)
{
double s = 1.0, a = 1.0;
for (int n = 1; n <= i; n++)
{
a = a * (-x / n);
s = s + a;
}

return s;
}

void main( )
{
double x, y, my;
long double aE499 = 1.L, aE500 = 1.L;
int k=500;
printf("e^(-x) calculation\n");
printf("Ievadi x vertibu: ");
scanf(" %lf", &x);

y = exp(-x);
printf("standarta funkcija exp(-%f) = %f\n",x,y);

my = f(x, k);
printf("Mana funkcija f(%f) = %f\n",x ,my);


//darbibas attelojums ASCII
printf("\n");
printf("\n");
printf("							\n");
printf("		%d					\n",k);
printf("		____					\n");
printf("	       \\        	(-x)^n			\n");
printf("e^(-%.2f) =>    _____             			\n",x);
printf("	       /___					\n");
printf("	       n=0  n!		                	\n");
printf("							\n");
printf("							\n");

}




