#include <stdio.h>

int main()
{
  int i, j, n = 5, m, r;
  for (i = 0; i <= n; ++i)
  {
    for (j = 1; j <= i; ++j)
    {
      m = i + j;
      r = (m - 1) % 2;
      printf("%d", r);
    }
    printf("\n");
  }
  return 0;
}
/*
1
23
345
4567
56789
*/
