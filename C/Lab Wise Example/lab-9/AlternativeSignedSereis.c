/*1. Print sum of series 1 – 2 + 3 – 4 + 5 – 6 + 7 … n.*/
#include <stdio.h>

int main()
{
  int n, sum, sum1 = 0, c = 0, n1 = 1, n2;
  printf("Enter A number :");
  scanf("%d", &n);
  while (c != n)
  {
    n2 = n1 + 1;
    sum = n1 - n2;
    n1 = n1 + 2;
    sum1 = sum1 + sum;
    c = c + 2;
  }
  printf("%d\n", sum1);
  return 0;
}