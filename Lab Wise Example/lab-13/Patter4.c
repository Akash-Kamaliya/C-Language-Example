#include <stdio.h>

int main()
{
  int i, j, n = 5, m;
  for (i = 0; i <= n; ++i)
  {
    for (j = 1; j <= i; ++j)
    {
      m = i + j;
      printf("%d", m - 1);
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
