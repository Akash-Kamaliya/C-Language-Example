#include <stdio.h>

int main()
{
  int i, j, n = 5;
  for (int i = 5, m = 1; i >= 1, m <= 5; i--, m++)
  {
    for (j = 1; j <= i; j++)
    {
      printf("%d", m);
    }
    printf("\n");
  }
}
/*
11111
2222
333
44
5
*/