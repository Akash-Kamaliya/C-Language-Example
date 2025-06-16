#include <stdio.h>
int power(float x, int y);
int main()
{
    float x, pow;
    int y;
    printf("Enter a numbr");
    scanf("%f%d", &x, &y);
    pow = power(x, y);
    printf("%f to the power %d=%f\n", x, y, pow);
    return 0;
}
int power(float x, int y)
{
    int i;
    float p = 1;
    for (i = 1; i <= y; i++)
    {
        p = p * x;
    }
    return p;
}