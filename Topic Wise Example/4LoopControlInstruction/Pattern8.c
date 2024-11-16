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
    for (j = 1; j <= ( i) + 1; j++)
    {
      if (i % 2 == 0)
      {
        printf(" ");
        printf("%c", ch);
        ch++;
      }
      else
      {
        int m = i + j;
        printf(" ");
        printf("%d", m - 1);
      }
    }
    printf("\n");
  }
  return 0;
}
/*
      A
     1 2
    B C D
   3 4 5 6
  E F G H I
 */