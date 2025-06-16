/*This Program is Print Orime numbers in seqence :*/
#include <stdio.h>

int main()
{
  int x, y;
  for (x = 2; x <= 100; x++)
  {
    int z = 0;
    for (int y = 2; y < x; y++)
    {
      if (x % y == 0)
      {
        z++;
      }
    }
    if (z == 0 && x != 1)
    {
      printf("%d\n", x);
    }
  }
}