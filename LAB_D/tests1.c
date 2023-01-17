//integer

//https://en.wikipedia.org/wiki/Numerical_integration

#include <stdio.h>
#include <math.h>

//function to be integrated
double f(double x) {
    return exp(-x);
}

double rectangle_rule(double a, double b, double h) {
    double area = 0;
    //iterate over the interval [a,b] with step h
    for (double x = a; x < b; x += h) {
        //calculate the area of the rectangle at each point
        area += f(x) * h;
    }
    return area;
}

double trapezoidal_rule(double a, double b, double h) {
    double area = 0;
    //iterate over the interval [a,b] with step h
    for (double x = a; x < b; x += h) {
        //calculate the area of the trapezoid at each point
        area += (f(x) + f(x + h)) * h / 2;
    }
    return area;
}

double simpson_rule(double a, double b, double h) {
    double area = 0;
    //iterate over the interval [a,b] with step h
    for (double x = a; x < b; x += h) {
        //calculate the area of the simpson's rule at each point
        area += (f(x) + 4 * f(x + h / 2) + f(x + h)) * h / 6;
    }
    return area;
}

int main() {
    double a, b, precision;
    //prompt user for input
    printf("Enter the value of a: ");
    scanf("%lf", &a);
    printf("Enter the value of b: ");
    scanf("%lf", &b);
    printf("Enter the precision: ");
    scanf("%lf", &precision);

    //calculate step size
    double h = (b - a) * precision;
    //display results
    printf("Area using rectangle rule: %lf\n", rectangle_rule(a, b, h));
    printf("Area using trapezoidal rule: %lf\n", trapezoidal_rule(a, b, h));
    printf("Area using Simpson's rule: %lf\n", simpson_rule(a, b, h));

    return 0;
}
