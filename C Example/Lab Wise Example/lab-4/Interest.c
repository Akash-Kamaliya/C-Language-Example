/*1. Calculate simple interest. (principal*roi*time period)/100.*/
#include <stdio.h>

int main()
{
    int p, n;
    float r;

    printf("How much Principal Amount:\n");
    scanf("%d", &p);
    printf("How much Rate of Interest:\n");
    scanf("%f", &r);
    printf("How much Time (in month):\n");
    scanf("%d", &n);

    printf("The Simple Interest is :%f", (p * n * r) / 100);

    return 0;
}