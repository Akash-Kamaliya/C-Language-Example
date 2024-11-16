/*2. Get a decimal number from user and convert it into roman digits. (Symbol: I:1, IV:4, V:5,
IX:9, X:10, XL:40, L:50, XC:90, C:100, CD:400, D:500, CM:900, M:1000)*/
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