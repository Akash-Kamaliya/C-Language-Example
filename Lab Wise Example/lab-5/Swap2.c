/*2. Swap two numbers. (Using temporary variable)*/
#include <stdio.h>

int main()
{
  int x = 3;
  int y = 5;
  x = x + y;
  y = x - y;
  x = x - y;
  printf("x =%d\n", x);
  printf("y =%d\n", y);
  return 0;
}