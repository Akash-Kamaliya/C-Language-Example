/*Find the sum of 1 + (1+2) + (1+2+3) + (1+2+3+4) + …+ (1+2+3+4+…. +n).*/
#include <stdio.h>

int main()
{
  int n, sum = 0;
  printf("Enter a number:\n");
  scanf("%d", &n);
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      sum = sum + j;
    }
  }
  printf("Sum is :%d", sum);
  return 0;
}