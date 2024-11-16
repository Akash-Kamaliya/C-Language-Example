#include <stdio.h>
#include <math.h>
int factorial(int n);
double calculate_series(double x, int n);
int main()
{
    double x;
    int n;
    printf("Enter the value of x: ");
    scanf("%lf", &x);
    printf("Enter the highest odd value of n: ");
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        printf("Please enter an odd value for n.\n");
        return 1;
    }
    double result = calculate_series(x, n);
    printf("F(x) = %.6f\n", result);
    return 0;
}

int factorial(int n)
{
    if (n <= 1)
        return 1;
    return n * factorial(n - 1);
}

double calculate_series(double x, int n)
{
    if (n == 1)
        return x;
    double term = pow(x, n) / factorial(n);
    if ((n / 2) % 2 == 1)
    {
        term = -term;
    }
    return term + calculate_series(x, n - 2);
}