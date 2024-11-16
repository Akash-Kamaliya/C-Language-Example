#include <stdio.h>

int main()
{
  int n, m, res, counter = 0;
  printf("enter a number:");
  scanf("%d", &n);
  printf("enter a number:");
  scanf("%d", &m);
  res = n ^ m;
  while (res != 0)
  {
    if (res & 1)
    {
      counter++;
    }
    res = res >> 1;
  }
  printf("%d", counter);
  return 0;
}
