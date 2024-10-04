#include <stdio.h>
#include <math.h>

double factorial(int n);
double calculateExponential(double x, double epsilon);

int main() {
    const double x = 10;
    const double epsilon = 1;

    const double result = calculateExponential(x, epsilon);
    printf("%lf\n", result);

    return 0;
}

double factorial(const int n) {
    double result = 1.0;

    for (int i = 1; i <= n; i++) {
        result *= i;
    }

    return result;
}

double calculateExponential(const double x, const double epsilon) {
    double sum = 1.0;  // Початковий елемент суми
    double term = 1.0; // Термін ряду (член)
    int n = 1;

    while (fabs(term) > epsilon) {
        term = pow(-1, n) * pow(x * x, n) / factorial(n); // Обчислення наступного члена
        sum += term;
        n++;
    }

    return sum;
}