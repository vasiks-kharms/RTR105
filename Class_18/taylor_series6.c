#include <stdio.h>
#include <math.h>

double my_sin(double x)
{
double a, S;
int k=0;

a = pow(-1,k)*pow(x,2*k+1)/(1.);//a0 = pow(-1,0)*pow(x,2*0+1)/(1.);
S = a; //S0 = a0
printf("%.2f\t%8.2f\t%8.2f\n",x,a,S);

while(k<3){
k++;
a = a*(-1)*x*x/((2*k)*(2*k+1));
S = S + a;
printf("%.2f\t%8.2f\t%8.2f\n",x,a,S);
}
return S;
}

void main()
{
double x=2.05,y,yy;
y=sin(x);
printf("standarta funkcija sin - y=(%.2f)=%.2f\n",x,y);

yy = my_sin(x);
printf("lietotaja funkcija - y=my_sin(%.2f)=%.2f\n",x,yy);

}




