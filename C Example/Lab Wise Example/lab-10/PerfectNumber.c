/*1. Check whether the given number is perfect or not.*/
#include <stdio.h>

int main()
{
  int i = 0, n, sum = 0;
  printf("Enter a number:\n");
  scanf("%d", &n);
  while (i < n)
  {
    if (n % i == 0)
    {
      printf("%d+", i);
      sum = sum + i;
    }
    i++;
  }
  printf("=%d", sum);
  if (sum == n)
    printf("Given Number is Perfect Number:\n");
  else
    printf("Given Number is not a  Perfect Number:\n");
  return 0;
}