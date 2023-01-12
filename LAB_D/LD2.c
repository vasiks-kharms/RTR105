//ROOTS - bisection

//info avoti:
//https://estudijas.rtu.lv/file.php/252149/RTR105_2019_2020_L18_20200118_14_50.pdf
//https://www.youtube.com/watch?v=l-Cu25TG-dQ
//https://www.codesansar.com/numerical-methods/bisection-method-using-c-programming.htm
//https://www.geeksforgeeks.org/program-for-bisection-method/


#include <stdio.h>
#include <math.h>

double f(double x)
{
return exp(-x);
}
double bisect(double a, double b, double precision)
{
double x = (a + b) / 2; //sakuma x vertiba ir viduspunkts a un b
double fx = f(x); // f(x) tiek izrekinats
int iteration = 0;// no sakuma iteraciju skaits 0
while (fabs(fx) > precision)//parbaudit vai f(x) vertiba ir lielaka ka izveleta precizitate
{
iteration++;//palielina atkartojumu skaitu
if (f(a) * fx < 0)
{
b = x;  //ja f(x)un f(a) reizin ir mazaks par nulli -> sakne ir starp x un a, atjauno b vertibu
}

else
{
a = x;   //ja lielaks, tad sakne ir starp x un b, atjauno a vertibu.
}
x = (a + b) / 2;//viduspunkts
fx = f(x);//parrekina
}


printf("x = %lf\n", x); //final x vertiba
printf("f(x) = %lf\n", fx);
printf("Iteracijas: %d\n", iteration);
return x;
}

int main()
{
double a, b, precision;
printf("Ievadi vertibas a, b un precizitatei: ");
scanf("%lf %lf %lf", &a, &b, &precision);
bisect(a, b, precision);

return 0;
}

