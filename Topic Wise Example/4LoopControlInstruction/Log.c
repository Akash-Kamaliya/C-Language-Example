#include <stdio.h>
#include <math.h>

int main()
{
    float x, y, i, sum;
    printf("Enter a number");
    scanf("%f", &x);
    y = x - 1.0;
    sum = y / x;
    for (i = 2; i <= 10; i++)
    {
        sum = sum + (0.5 * pow((y / x), i));
    }
    printf("%f", sum);
    return 0;
}