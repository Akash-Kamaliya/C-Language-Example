#include <stdio.h>
int roman(int, int, char);
int main()
{
    int yr;
    printf("Enter number:");
    scanf("%d", &yr);
    yr = roman(yr, 1000, 'm');
    yr = roman(yr, 500, 'd');
    yr = roman(yr, 100, 'c');
    yr = roman(yr, 50, 'l');
    yr = roman(yr, 10, 'x');
    yr = roman(yr, 5, 'v');
    roman(yr, 1, 'i');
    return 0;
}
int roman(int y, int k, char ch)
{
    int i, j;
    j = y / k;
    for (i = 1; i <= j; i++)
    {
        printf("%c", ch);
    }
    return (y % k);
}