#include <stdio.h>

int main()
{
  int arr[32], n, n1, i, arr1[32];
  printf("Enter a number:");
  scanf("%d", &n1);
  if (n1 < 0)
  {
    n = (-1) * n1;
    for (i = 0; i < 32; i++)
    {
      arr[i] = n % 2;
      n = n / 2;
      if (i == 0)
      {
        arr1[i] = 1;
      }
      else
      {
        arr1[i] = 0;
      }
    }
    for (i = 31; i >= 0; i--)
    {
      arr[i] = arr[i] + arr1[i];
      if (arr[i] == 2)
      {
        arr[i] = 0;
        arr1[i + 1] = 1;
        printf("%d", arr[i]);
      }
      else
      {
        printf("%d", arr[i]);
      }
    }
  }
  else
  {
    for (i = 0; i < 32; i++)
    {
      arr[i] = n % 2;
      n = n / 2;
    }
    for (i = 32; i >= 0; i--)
    {
      printf("%d", arr[i]);
    }
  }
  return 0;
}