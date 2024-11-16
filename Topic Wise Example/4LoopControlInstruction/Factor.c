#include <stdio.h>

int main()
{
  int i = 1, r, n;
  printf("Enter a number\n");
  scanf("%d", &n);
  while (i <= n)
  {
    r = n % i;
    if (r == 0)
    {
      printf("%d\t", i);
    }
    i++;
  }
  return 0;
}