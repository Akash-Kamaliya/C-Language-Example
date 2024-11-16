#include <stdio.h>

int main()
{
  int x, y, z = 0;

  scanf("%d", &x);

  for (int y = 2; y < x; y++)
  {
    if (x % y == 0)
    {
      z++;
      break;
    }
  }
  if (z == 0 && x != 1)
  {
    printf("this is prime number");
  }
  else
  {
    printf("this is not prime number");
  }
  return 0;
}