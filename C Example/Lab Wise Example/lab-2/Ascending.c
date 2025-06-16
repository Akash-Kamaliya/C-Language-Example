/*2. Accept three numbers from user and print them in ascending and descending order. (use
only three conditions for each order)*/
#include <stdio.h>

int main()
{
  int a, b, c;
  a = 22;
  b = 3;
  c = 14;

  if (a > b)
  {
    a = a + b;
    b = a - b;
    a = a - b;
  }
  if (b > c)
  {
    b = b + c;
    c = b - c;
    b = b - c;
  }
  if (a > b)
  {
    a = a + b;
    b = a - b;
    a = a - b;
  }
  printf("%d is Second Largeset Number:\n", b);
  return 0;
}