#include <stdio.h>

int main()
{
  int arr[8], n, i;
  printf("Enter a number:");
  scanf("%d", &n);
  for (i = 0; i < 8; i++)
  {
    arr[i] = n % 2;
    n = n / 2;
  }
  for (i = 7; i >= 0; i--)
  {
    printf("%d", arr[i]);
  }
  return 0;
}