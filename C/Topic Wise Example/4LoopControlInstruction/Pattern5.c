#include <stdio.h>

int main()
{
  int i, j, k, n = 4;
  char ch = 'A';
  for (i = 0; i <= n; i++)
  {

    for (k = 4; k >= i; k--)
    {
      printf(" ");
    }
    for (j = 1; j <= (2 * i) + 1; j++)
    {
      if (i % 2 == 0)
      {
        printf("%c", ch);
        ch++;
      }
      else
      {
        int m = i + j;
        printf("%d", m - 1);
      }
    }
    printf("\n");
  }
  return 0;
}
/*
      A
    123
    BCDEF
  3456789
  GHIJKLMNO
 */