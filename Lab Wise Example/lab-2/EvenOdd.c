/*3. Check whether the given number is odd or even.*/
#include <stdio.h>

int main()
{
  int x;

  printf("Enter a number to check number is even or odd:\n");
  scanf("%d", &x);

  if (x % 2 == 0)
  {
    printf("the given number is even :\n");
  }
  else if (x % 2 != 0)
  {
    printf("the given number is odd :\n");
  }
  return 0;
}
