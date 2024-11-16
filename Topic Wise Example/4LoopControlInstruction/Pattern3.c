#include <stdio.h>

int main()
{
  int i, j, n = 5, m = 1;
  for (i = 1; i <= n; i++)
  {
    for (j = 1; j <= i; j++)
    {
      printf("%d", m);
      if (m == 1)
      {
        m = 0;
      }
      else
      {
        m = 1;
      }
    }
    printf("\n");
  }
}
/*
1
01
010
1010
10101*/
