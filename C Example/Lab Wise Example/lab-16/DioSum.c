/*3. Read a matrix and print diagonal elements and its sum..*/
#include <stdio.h>

int main()
{
  int arr[3][3], i, j, sum = 0;
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
      if (i == j)
      {
        sum = sum + arr[i][j];
      }
    }
    printf("\n");
  }
  printf("Diagonal Element Sum is %d\n", sum);
  return 0;
}
