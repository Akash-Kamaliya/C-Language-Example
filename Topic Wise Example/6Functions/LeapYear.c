#include <stdio.h>
void Leap(int n);
int main()
{
    int yr, year;
    printf("Enter a year\n");
    scanf("%d", &yr);
    Leap(yr);
    return 0;
}
void Leap(int n)
{
    int n1;
    n1 = ((n % 4 == 0 || n % 400 == 0) && (n != 100));
    switch (n1)
    {
    case 1:
        printf("%d is Leap Year. \n", n);
        break;
    case 0:
        printf("%d is not a leap year.  \n", n);
        break;
    }
}