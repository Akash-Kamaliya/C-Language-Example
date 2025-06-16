#include <stdio.h>
void binary(int n);
int main()
{
    int number = 10;
    printf("Binary of %d (using recursion): ", number);
    if (number == 0)
    {
        printf("0");
    }
    else
    {
        binary(number);
    }
    return 0;
}
void binary(int n)
{
    if (n == 0)
    {
        return;
    }
    binary(n / 2);
    printf("%d", n % 2);
}
