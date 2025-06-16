/*1. Read values in two-dimensional array and print them in matrix form.*/
#include <stdio.h>

int main()
{
  int arr[3][3], i, j;
  for (i = 0; i <= 2; i++)
  {
    for (j = 0; j <= 2; j++)
    {
      printf("Enter %d th row and %d th colum eliment ", i + 1, j + 1);
      scanf("%d", &arr[i][j]);
    }
  }
  for (i = 0; i <= 2; i++)
  {
    for (j = 0; j <= 2; j++)
    {
      printf("%d   ", arr[i][j]);
    }
    printf("\n");
  }
  return 0;
}
