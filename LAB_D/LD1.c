// f(x)=e^-x

#include <stdio.h>
#include <math.h>

// Function definition for factorial
int factorial(int n) {
    if (n == 0) {
        return 1;
    }
    else {
        return n * factorial(n - 1);
    }
}

// Function definition
double f(double x) {
    return exp(-x);
}

// Taylor series expansion of f(x) around x = 0
double taylor_series(double x, int n) {
    // Initialize the sum to the first term
    double sum = 1;

    // Initialize the recurrence factor
    double r = -x;

    // Initialize the term to the first term
    double term = 1;

    // Loop through the remaining terms of the series
    for (int i = 1; i <= n; i++) {
        // Update the term and the recurrence factor
        term *= r / i;
        r *= -x;

        // Add the term to the sum
        sum += term;
    }

    return sum;
}

int main(void) {
    // Get the value of x from the user
    double x;
    printf("Enter the value of x: ");
    scanf("%lf", &x);

    // Calculate and display the Taylor series expansion of f(x)
    printf("Taylor series expansion of f(x):\n");
    for (int n = 1; n <= 10; n++) {
        printf("n = %d: %f\n", n, taylor_series(x, n));
    }

    // Calculate and display the value of f(x) using the Taylor series
    printf("\nValue of f(x) using Taylor series: %f\n", taylor_series(x, 10));

    // Calculate and display the value of f(x) using the function
    printf("Value of f(x) using function: %f\n", f(x));

    // Calculate and display the values of the penultimate and last terms
    double h = pow(-x, 9) / factorial(9);
    double i = pow(-x, 10) / factorial(10);
    printf("\nPenultimate term: %f\n", h);
    printf("Last term: %f\n", i);

    return 0;
}

