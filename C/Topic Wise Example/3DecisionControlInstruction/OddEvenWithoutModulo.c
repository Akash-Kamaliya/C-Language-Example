/*5.c.2. Check whether the given number is odd or even without using % operator.*/
#include<stdio.h>

int main()
{
    float x;
    printf("Enter a number:\n");
    scanf("%f",&x);
    int a=x/2;
    float b=x/2;
    if(a==b)
    {
        printf("Given Number is Even");
    }
    else{
        printf("Given Number is Odd");
    }
    return 0;
}