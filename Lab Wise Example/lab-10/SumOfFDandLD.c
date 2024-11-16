/*1. Find out sum of first and last digit of a given number.*/
#include <stdio.h>

int main()
{
  int n, fd, ld, d;
  printf("Enter a number:\n");
  scanf("%d", &n);
  d = printf("%d", n);
  ld = n % 10;
  while (d != 0)
  {
    fd = n % 10;
    n = n / 10;
    d--;
  }
  printf("\n");
  printf("The sum of First Digit and Last Digit is :%d\n", fd + ld);
  return 0;
}