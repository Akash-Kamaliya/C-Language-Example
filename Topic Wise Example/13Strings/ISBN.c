#include <stdio.h>

int main()
{
    char isbn[11];
    int sum = 0;
    printf("Enter the 10-digit ISBN: ");
    scanf("%10s", isbn);
    for (int i = 0; i < 10; i++)
    {
        int digit = isbn[i] == 'X' ? 10 : isbn[i] - '0';
        sum += digit * (i + 1);
    }
    if (sum % 11 == 0)
    {
        printf("The ISBN is valid.\n");
    }
    else
    {
        printf("The ISBN is invalid.\n");
    }
    return 0;
}
