#include<stdio.h>

int main()
{
int a;
char c;
printf("Enter a value of a\n");
scanf("%d",&a);
printf("Enter a value of c\n");
scanf(" %c",&c);//This is Very coman Problem For only Character 
printf("Vale is %d and %c\n",a,c);
return 0;
}