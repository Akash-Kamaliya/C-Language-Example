#include <stdio.h>

int main()
{
  int n;
  printf("enter number:");
  scanf("%d", &n);
  printf("1\t");
  int fib[n];
  fib[0] = 0;
  fib[1] = 1;
  for (int i = 2; i < n + 1; i++)
  {
    fib[i] = fib[i - 1] + fib[i - 2];
    printf("%d\t", fib[i]);
  }
  printf("\n");
  return 0;
}