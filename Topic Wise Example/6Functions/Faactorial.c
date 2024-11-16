#include <stdio.h>
int fact1(int n);
int main()
{
    int num;
    int fact;
    printf("Enter a number");
    scanf("%d", &num);
    fact = fact1(num);
    printf("Factorial of %d=%d\n", num, fact);
    return 0;
}
int fact1(int n)
{
    int i;
    int fact = 1;
    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}