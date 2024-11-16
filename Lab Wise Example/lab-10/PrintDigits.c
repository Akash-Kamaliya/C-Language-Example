/*4. Print digits of given number.*/
#include <stdio.h>

int main()
{
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    if (number < 0)
    {
        number = -number;
    }
    if (number == 0)
    {
        printf("The digit of the iven number is: 0\n");
        return 0;
    }
    printf("The digits of the ven number are: ");
    while (number > 0)
    {
        int digit = number % 10;
        printf("%d ", digit);
        number /= 10;
    }
    printf("\n");
    return 0;
}