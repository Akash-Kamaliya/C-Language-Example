#include <stdio.h>

int main()
{
  int a[] = {1, 2, 3, 4, 5};
  int *ptr, i, sum = 0;
  ptr = a;
  for (i = 0; i < 5; i++)
  {
    sum = sum + (*ptr + i);
  }
  printf("%d", sum);
  return 0;
}