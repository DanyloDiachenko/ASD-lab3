#include <stdio.h>
#include <math.h>

double factorial(int n);

double calculateExponential(double x, double epsilon);

int main() {
    double x = 4;
    double epsilon = 0.001;

    double result = calculateExponential(x, epsilon);

    printf("%f\n", result);

    return 0;
}

double calculateExponential(double x, double epsilon) {
    double term = 1.0;
    double sum = 1.0;
    int n = 1;

    while (fabs(term) > epsilon) {
        term = pow(-1, n) * pow(x, 2 * n) / factorial(n);
        sum += term;
        n++;
    }

    return sum;
}

double factorial(int n) {
    double factorial = 1.0;

    for (int i = 2; i <= n; i++) {
        factorial *= i;
    }

    return factorial;
}