/*3. Multiply and divide a number by 2 without using multiplication/division operator.*/
#include<stdio.h>

int main()
{
    int x;
    printf("Enter a number:\n");
    scanf("%d",&x);
    int y=x<<1;//BitWise Operator
    printf("The Multiplication with 2 is :%d",y);
    int z = x >> 1;  //BitWise Operator
    printf("The Division By 2 is : %d\n", z);
    return 0;
}