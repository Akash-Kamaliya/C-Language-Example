/*2. Swap two numbers. (Using No temporary variable)*/
#include <stdio.h>

int main()
{
  int x = 3;
  int y = 5;
  int z; // Temporory Vriable
  z = x;
  x = y;
  y = z;
  printf("x = %d\n", x);
  printf("y =%d\n", y);
  return 0;
}