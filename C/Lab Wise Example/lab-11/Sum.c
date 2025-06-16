/*2. Print sum of 1 to n numbers.*/
#include <stdio.h>

int main()
{
  int n;
  int sum = 0;
  printf("Enter a number\n");
  scanf("%d", &n);
  for (int i = 1; i <= n; i++)
  {
    sum += i;
  }
  printf("sum is %d", sum);
  return 0;
}