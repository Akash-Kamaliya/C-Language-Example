/*1. Check whether the given number is Armstrong or not.*/
#include <stdio.h>

int main()
{
  int n, n1, r, r1=0,sum = 0;
  printf("Enter a number :\n");
  scanf("%d", &n1);
  n= n1;
  while (n > 0)
  {
    r1 = r1* 10 + n % 10;
    n = n / 10;
  }
  n1=r1;
  while (n1 != 0)
  {
    r = n1 % 10;
    n1 = n1 / 10;
    printf("%d^3+", r);
    sum = sum + (r * r * r);
  }
  printf("=%d", sum);
  if (sum == n)
  {
    printf("\nGiven Number is Armstrong Number :\n");
  }
  else
  {
    printf("\nGiven Number is Not Armstrong Number:\n");
  }
  return 0;
}