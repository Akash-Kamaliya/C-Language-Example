#include <stdio.h>
#include <math.h>

int main()
{
    int data[] = {-6, -12, 8, 13, 11, 6, 7, 2, -6, -9, -10, 11, 10, 9, 2};
    int n = sizeof(data) / sizeof(data[0]);
    double sum = 0.0, mean, variance = 0.0, std_deviation;
    for (int i = 0; i < n; i++)
    {
        sum += data[i];
    }
    mean = sum / n;
    for (int i = 0; i < n; i++)
    {
        variance += pow(data[i] - mean, 2);
    }
    variance /= n;
    std_deviation = sqrt(variance);
    printf("Mean = %.2f\n", mean);
    printf("Standard Deviation = %.2f\n", std_deviation);
    return 0;
}
