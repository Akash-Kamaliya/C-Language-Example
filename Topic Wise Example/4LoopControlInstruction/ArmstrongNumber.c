/*Armstrong Number is All Digits Cube's sum is become it self number*/
#include <stdio.h>

int main()
{
    int reminder, n, num, sum;
    for (n = 1; n <= 500; ++n)
    {
        num = n;
        sum = 0;
        while (num != 0)
        {
            reminder = num % 10;
            sum += reminder * reminder * reminder;
            num /= 10;
        }
        if (sum == n)
        {
            printf("%d\n", n);
        }
    }
    return 0;
}