//DERIVATIVE
//NB! kompilejot -lm


//info avoti:
//https://en.wikipedia.org/wiki/Numerical_differentiation
//https://mathworld.wolfram.com/FiniteDifference.html

#include<stdio.h>
#include <math.h>


//izrekina pirmas kartas atvasinajumu funkc e^(-x) izmantojot forward difference metodi
double first_derivative(double x, double delta_x)
{
 return (exp(-x+delta_x)-exp(-x))/delta_x;
}

//izrekina otro atvasinajumu e^(-x) izmantojot forward difference metodi
double second_derivative(double x, double delta_x)
{
return (exp(-x+delta_x)-2*exp(-x)+exp(-x-delta_x))/(delta_x*delta_x);
}

int main()
{
    double a, b, x, p, delta_x; 
    char *filename = "derivative.dat"; //kur saglabas rezultatus

//atvert failu rakstisanai (W - write)
FILE *fp;
fp = fopen("derivative.dat", "w");
//parbaudavai failu  var atvert, ja ne - izmest erroru
if (fp == NULL)
{
printf("Nevareja atvert failu %s", filename);

}
  /* Get the range of x and precision from the user */
printf("Funkcijas e^(-x) atvasinajums\n");
printf("Ievadi diapazonu [a;b] un velamo precizitati 10^-p\n");
printf("vertiba a:");
scanf("%lf", &a);
printf("vertiba b:");
scanf("%lf", &b);
printf("precizitate:");
scanf("%lf", &p);

//izrekina solu skaitu
delta_x = 1*pow(10,-p);
x = a;

//izprinte tabulas header failaa
fprintf(fp, "x\t|e^(-x)\t|-e^(-x)\t|(e^(-x+delta_x))-e^(-x)\t|e^(-x+delta_x)-2e^(-x)+e^(-x-delta_x)\n");
fprintf(fp, "__________________________________________________________________________________\n");


    /* Iterate over the range of x and calculate the values of the function and its derivatives */
    while(x<=b)
    {
        fprintf(fp, "%5.2f \t| %5.2f \t| %5.2f \t| %5.2f \t| " ,x, exp(-x), -exp(-x), first_derivative(x, delta_x));
        fprintf(fp, "%5.2f     \t| %5.2f\n", second_derivative(x, delta_x));
        x = x + delta_x;
    }

    fclose(fp);



double first_derivative(double x, double delta_x)
{
    return (exp(-x+delta_x)-exp(-x))/delta_x;
}

double second_derivative(double x, double delta_x)
{
    return (exp(-x+delta_x)-2*exp(-x)+exp(-x-delta_x))/(delta_x*delta_x);
}
}

