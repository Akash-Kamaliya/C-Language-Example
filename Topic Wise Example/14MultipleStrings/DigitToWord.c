#include <stdio.h>
#include <string.h>
void convert_to_words(int num);
int main()
{
    int num;
    printf("Enter an integer (up to 9 digits): ");
    scanf("%d", &num);

    printf("Number in words: ");
    convert_to_words(num);

    return 0;
}
void convert_to_words(int num)
{
    char *single_digits[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    char *two_digits[] = {"Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
    char *tens_multiple[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
    char *tens_power[] = {"Hundred", "Thousand", "Million", "Billion"};

    int digits[10], digit_count = 0;
    while (num > 0)
    {
        digits[digit_count++] = num % 10;
        num /= 10;
    }
    if (digit_count == 0)
    {
        printf("Zero");
    }
    else
    {
        for (int i = digit_count - 1; i >= 0; i--)
        {
            if (digits[i] != 0)
            {
                if (i >= 1 && digits[i] == 1)
                {
                    printf("%s ", two_digits[digits[i - 1]]);
                    i--;
                }
                else if (i == 1)
                {
                    printf("%s ", tens_multiple[digits[i]]);
                }
                else
                {
                    printf("%s ", single_digits[digits[i]]);
                    if (i % 3 == 0 && i > 0)
                    {
                        printf("%s ", tens_power[i / 3]);
                    }
                }
            }
        }
    }
    printf("\n");
}
