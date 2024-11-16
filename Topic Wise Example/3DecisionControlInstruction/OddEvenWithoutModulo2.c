#include<stdio.h>

int main()
{
  int n;
  printf("Enter A number :\n");
  scanf("%d",&n);
  n&1?printf("Number is Odd"):printf("Number is  Even");
  return 0;
}