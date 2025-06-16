#include <stdio.h>

int main()
{
  int n, sum = 0, n1 = 1;
  printf("Enter a number");
  scanf("%d", &n);
  for (int i = 1; i <= n; i++)
  {
    sum = sum + n1;
    n1 = n1 + 2;
  }
  printf("The Sum of %d Odd Number is:%d \n", n, sum);
  return 0;
}