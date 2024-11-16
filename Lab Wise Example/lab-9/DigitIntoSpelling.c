/*1. Convert given number in words. (i.e. n=3456 output: Three Four Five Six)*/
#include <stdio.h>

int main()
{
  int n, r = 0, n1 = 0;
  printf("Enter a number:\n");
  scanf("%d", &n);
  int n2 = printf("%d", n);
  while (n > 0)
  {
    n1 = n1 * 10 + n % 10;
    n = n / 10;
  }
  while (n2 != 0)
  {

    r = n1 % 10;
    n1 = n1 / 10;
    n2--;
    if (r == 1)
    {
      printf("One ");
    }
    if (r == 2)
    {
      printf("Two ");
    }
    if (r == 3)
    {
      printf("Three ");
    }
    if (r == 4)
    {
      printf("Four ");
    }
    if (r == 5)
    {
      printf("Five ");
    }
    if (r == 6)
    {
      printf("Six ");
    }
    if (r == 7)
    {
      printf("Seven ");
    }
    if (r == 8)
    {
      printf("Eight ");
    }
    if (r == 9)
    {
      printf("Nine ");
    }
    if (r == 0)
    {
      printf("Zero ");
    }
  }
  return 0;
}