#include <stdio.h>
#include <math.h>

double calculateExponential(double x, double epsilon);

int main() {
    const double x = 1;
    const double epsilon = 0.001;

    const double result = calculateExponential(x, epsilon);
    printf("%lf\n", result);

    return 0;
}

double calculateExponential(const double x, const double epsilon) {
    double sum = 1.0;
    double term = 1.0;
    int n = 1;

    while (fabs(term) > epsilon) {
        term *= x / n;
        sum += term;
        n++;
    }

    return sum;
}