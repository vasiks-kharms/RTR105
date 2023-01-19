//integer

//https://en.wikipedia.org/wiki/Numerical_integration

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


//trapezoid - trapeces likums
double trapezoidal_rule(double a, double b, double h)
{
double area = 0;
for (double x = a; x < b; x += h)
{
//izrekjina trapeces laukumu
area += (f(x) + f(x + h)) * h / 2;
}

return area;
}

// simpson's
double simpson_rule(double a, double b, double h)
{
double area = 0;
for (double x = a; x < b; x += h)

//izrekinat laukumu ar simpsona likumu
 area += (f(x) + 4 * f(x + h / 2) + f(x + h)) * h / 6;
}
 return area;
}

int main()

{
double a, b, precision;


//prasam lietotajam
printf("Ievadi a vertibu: ");
scanf("%lf", &a);
printf("Ievadi b vertibu:");
scanf("%lf", &b);
printf("Ievadi precizitati: ");
scanf("%lf", &precision);

//izrekjina solju lielumu
double h = (b - a) * precision;

//rezultzz~
printf("Laukuma (starp f(x) un x ass) vērtība (aprēķins izmantojot taisnstūru metodi) ir: %lf\n", rectangle_rule(a, b, h));
printf("Laukuma (starp f(x) un x ass) vērtība (aprēķins izmantojot trapeču metodi) ir : %lf\n", trapezoidal_rule(a, b, h));
printf("Laukuma (starp f(x) un x ass) vērtība (aprēķins izmantojot Simpson's metodi) ir: %lf\n", simpson_rule(a, b, h));


return 0;

}
