/*4. Check whether the given number is odd or even.*/
#include <stdio.h>

int main()
{
    int a;
    printf("Enter A number :\n");
    scanf("%d", &a);
    (a & 1) ? (printf("Number is Odd\n")) : (printf("Number is Even"));
    return 0;
}