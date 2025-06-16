#include <stdio.h>

int main()
{
  int n1, n2, c = 0;
  printf("Enter First number :");
  scanf("%d", &n1);
  printf("Enter second number :");
  scanf("%d", &n2);
  for (; n1 <= 0, n2 <= 0; n1++, n2++)
  {
    int r1 = 0, r2 = 0;
    r1 = n1 % 2;
    n1 /= 2;
    r2 = n2 % 2;
    n2 /= 2;
    if (r1 != r2)
    {
      c++;
    }
  }
  printf("Distance is %d", c);
  return 0;
}