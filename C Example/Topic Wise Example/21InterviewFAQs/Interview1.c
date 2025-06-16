#include <stdio.h>

int main()
{
  int n1, n, r, sum;
  printf("Enter A number:\n");
  scanf("%d", &n);
  sum = n;
  do
  {
    n1 = n / 3;
    n = n % 3;
    n = n1 + n;
    sum = sum + n1;
  } while (n1 != 0);
  printf("%d", sum);
  return 0;
}