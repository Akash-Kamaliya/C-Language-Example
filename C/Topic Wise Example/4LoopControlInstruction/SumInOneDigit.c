#include <stdio.h>

int main()
{
  int n, sum = 0;
  printf("Enter a number n:");
  scanf("%d", &n);

  while (sum > 9 || n != 0)
  {
    if (n == 0)
    {
      n = sum;
      sum = 0;
    }
    int rem = n % 10;
    sum = sum + rem;
    n /= 10;
  }
  printf("%d", sum);
  return 0;
}