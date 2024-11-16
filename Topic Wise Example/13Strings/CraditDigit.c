#include <stdio.h>

int main()
{
    char card_number[17];
    int sum = 0;
    printf("Enter the 16-digit credit card number: ");
    scanf("%16s", card_number);
    for (int i = 15; i >= 0; i--)
    {
        int digit = card_number[i] - '0';
        if ((15 - i) % 2 == 1)
        {
            digit *= 2;
            if (digit > 9)
            {
                digit -= 9;
            }
        }
        sum += digit;
    }
    if (sum % 10 == 0)
    {
        printf("The credit card number is valid.\n");
    }
    else
    {
        printf("The credit card number is invalid.\n");
    }
    return 0;
}
