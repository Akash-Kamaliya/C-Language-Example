/*2. Count number of positive, negative and zero elements from 3 X 3 matrix..*/
#include <stdio.h>

int main()
{
  int arr[3][3], i, j, p = 0, n = 0;
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
      if (arr[i][j] >= 0)
      {
        p++;
      }
      else
      {
        n++;
      }
    }
    printf("\n");
  }
  printf("Positive Number in this matrix : %d\n", p);
  printf("Negative Number in this matrix : %d\n", n);
  return 0;
}
