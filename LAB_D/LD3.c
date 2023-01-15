//DERIVATIVE
//NB! kompilejot -lm

//info avoti:
//https://en.wikipedia.org/wiki/Numerical_differentiation
//https://mathworld.wolfram.com/FiniteDifference.html
//https://www.codesansar.com/numerical-methods/forward-difference-table-generation-using-c-programming.htm
//https://estudijas.rtu.lv/file.php/252149/RTR105_2019_2020_L19_20200118_14_50.pdf
//https://stackoverflow.com/questions/3521209/making-c-code-plot-a-graph-automatically/6934363#6934363


#include <stdio.h>
#include <math.h>

// izrekina f(x)= e^(-x)
double f(double x)
{
return exp(-x);
}

//pirmais atvasinajums izmantojot analytical formula
double firstDerivative(double x)

{
 return -exp(-x);
}

//pirmais atvasinajums ar forward difference
double firstDerivativeFD(double x, double h)
{
return (f(x + h) - f(x)) / h;
}


//otras kartas atvasinajums ar analytical formulu
double secondDerivative(double x)
{
return exp(-x);
}


//otras kartas atvasin ar forward difference
double secondDerivativeFD(double x, double h)
 {
return (firstDerivativeFD(x + h, h) - firstDerivativeFD(x, h)) / h;
}


int main()

{
double a, b, h, x;

//paprasam vertibas
printf("Ievadi a, b un precizitates vertibas:\n");
scanf("%lf %lf %lf", &a, &b, &h);

//atvert failu lai saglabatu rezultatus
FILE *file = fopen("derivative.dat", "w");

//tabulas kolonnu nosaukumi
fprintf(file, "x\tf(x)\tf'(x)\tf'(x) FD\tf''(x)\tf''(x) FD\n");

//loop prieks vertibu izrekinasanas starp a un b
for (x = a; x <= b; x += h)

{
fprintf(file, "%.2lf\t%.6lf\t%.6lf\t%.6lf\t%.6lf\t%.6lf\n", x, f(x), firstDerivative(x), firstDerivativeFD(x, h), secondDerivative(x), secondDerivativeFD(x, h));
}

fclose(file);//aizver failu

return 0;
}
