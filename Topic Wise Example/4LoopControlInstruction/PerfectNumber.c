#include <stdio.h>

int main()
{
  int n, sum = 0;
  printf("Enter a number:\n");
  scanf("%d", &n);
  for (int i = 1; i < n; i++)
  {
    if (n % i == 0)
    {
      printf("%d+", i);
      sum = sum + i;
    }
  }
  printf("=%d    ", sum);
  if (sum == n)
  {
    printf("Perfect Number:\n");
  }
  else
  {
    printf("Not a Perfect number:\n");
  }
  return 0;
}