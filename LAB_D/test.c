#include <stdio.h>
#include <math.h>

// Function to calculate f(x) = e^(-x)
double f(double x) {
    return exp(-x);
}

// Function to calculate the first derivative of f(x) using the analytical formula
double firstDerivative(double x) {
    return -exp(-x);
}

// Function to calculate the first derivative of f(x) using the forward difference method
double firstDerivativeFD(double x, double h) {
    return (f(x + h) - f(x)) / h;
}

// Function to calculate the second derivative of f(x) using the analytical formula
double secondDerivative(double x) {
    return exp(-x);
}

// Function to calculate the second derivative of f(x) using the forward difference method
double secondDerivativeFD(double x, double h) {
    return (firstDerivativeFD(x + h, h) - firstDerivativeFD(x, h)) / h;
}

int main() {
    double a, b, h, x;
    // Obtain values of a, b, and precision from the user
    printf("Enter the values of a, b, and precision (h): ");
    scanf("%lf %lf %lf", &a, &b, &h);

    // Open a file to save the results
    FILE *file = fopen("derivative.dat", "w");

    // Print the header for the table
    fprintf(file, "x\tf(x)\tf'(x)\tf'(x) FD\tf''(x)\tf''(x) FD\n");

    // Loop to calculate and save the values of f(x), f'(x), f''(x) between a and b
    for (x = a; x <= b; x += h) {
        fprintf(file, "%.2lf\t%.6lf\t%.6lf\t%.6lf\t%.6lf\t%.6lf\n", x, f(x), firstDerivative(x), firstDerivativeFD(x, h), secondDerivative(x), secondDerivativeFD(x, h));
    }

    // Close the file
    fclose(file);

    return 0;
}
