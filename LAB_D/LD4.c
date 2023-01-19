//INTEGRAL
// NB! kompilejot -lm

//info avoti:
//https://en.wikipedia.org/wiki/Simpson%27s_rule
//https://www.youtube.com/watch?v=aY6Y66cc4rE
//https://en.wikipedia.org/wiki/Numerical_integration
//https://estudijas.rtu.lv/file.php/252149/RTR105_2019_2020_L20_20200118_14_51.pdf

#include <stdio.h>
#include <math.h>


double f(double x)
{
return exp(-x);

}


//rectangle -taisnsturis
double rectangle_rule(double a, double b, double h)
{

double area = 0;

//pa solim pievieno a vertiba h lidz ta ir lielaka vai vienada par b
for (double x = a; x < b; x += h)
{

//katraa punkta izrekjina taisnstura laukumu
area += f(x) * h;
}

return area;

}

//trapezoid - ar trapeces likumu
double trapezoidal_rule(double a, double b, double h) {
double area = 0;


for (double x = a; x < b; x += h) {

//izrekjina trapeces laukumu katra punkta
area += (f(x) + f(x + h)) * h / 2;

}
return area;
}



double simpson_rule(double a, double b, double h)
{

double area = 0;

for (double x = a; x < b; x += h) {

//izrekinat laukumu ar simpsona likumu
area += (f(x) + 4 * f(x + h / 2) + f(x + h)) * h / 6;
}

return area;
}



int main()
{

double a, b, precision;

//jautajam lietotajam -
printf("Ievadi a vertibu: ");
scanf("%lf", &a);
printf("Ievadi b vertibu: ");
scanf("%lf", &b);
printf("ievadi precizitati: ");
scanf("%lf", &precision);


//izrekina solja lielumu
double h = (b - a) * precision;

//resultzz~
printf("Laukuma (starp f(x) un x ass) vērtība (aprēķins izmantojot taisnstūru metodi) ir: %lf\n", rectangle_rule(a, b, h));
printf("Laukuma (starp f(x) un x ass) vērtība (aprēķins izmantojot trapeču metodi) ir :  %lf\n", trapezoidal_rule(a, b, h));
printf("Laukuma (starp f(x) un x ass) vērtība (aprēķins izmantojot Simpson's metodi) ir: %lf\n", simpson_rule(a, b, h));


 return 0;
}



