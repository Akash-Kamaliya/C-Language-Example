/*2. Print sum of series 1 + 4 + 9 + 16 + 25 + 36 + …n.*/
#include <stdio.h>

int main()
{
  int n, i = 1, sum = 0;
  printf("Enter A number : ");
  scanf("%d", &n);
  while (i <= n)
  {
    sum = sum + (i * i);
    i++;
  }
  printf("Sum is :%d\n", sum);
  return 0;
}