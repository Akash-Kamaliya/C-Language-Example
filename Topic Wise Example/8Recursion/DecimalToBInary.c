#include <stdio.h>
void binary(int n);
int main()
{
    int number = 10;
    printf("Binary of %d (without recursion): ", number);
    binary(number);
    return 0;
}
void binary(int n)
{
    int binary[32];
    int i = 0;
    if (n == 0)
    {
        printf("0");
        return;
    }
    while (n > 0)
    {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", binary[j]);
    }
}