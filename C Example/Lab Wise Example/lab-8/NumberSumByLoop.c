/*4. Print sum of 1 to n numbers.*/
#include <stdio.h>

int main()
{
  int n, i = 1, sum = 0;
  printf("Enter A number:\n");
  scanf("%d", &n);
  while (i <= n)
  {
    sum = sum + i;
    i++;
  }
  printf("%d\n", sum);
}