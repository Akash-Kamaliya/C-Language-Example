/*4. Perform Addition of two matrices..*/
#include <stdio.h>

int main()
{
  int arr1[3][3], arr2[3][3], i, j;
  for (i = 0; i <3; i++)
  {
    for (j = 0; j <3; j++)
    {
      printf("Enter first matrix's %d th row and %d th colum eliment ", i + 1, j + 1);
      scanf("%d", &arr1[i][j]);
    }
  }
  printf("\n");
  printf("\n");
  for (i = 0; i <3; i++)
  {
    for (j = 0; j <3; j++)
    {
      printf("Enter second matrix's %d th row and %d th colum eliment ", i + 1, j + 1);
      scanf("%d", &arr2[i][j]);
    }
  }
  for (i = 0; i <3; i++)
  {
    for (j = 0; j <3; j++)
    {
      printf("%d   ", arr1[i][j]);
    }
    printf("\n");
  }
  printf("\n");
  printf("+\n");
  for (i = 0; i <3; i++)
  {
    for (j = 0; j <3; j++)
    {
      printf("%d   ", arr2[i][j]);
    }
    printf("\n");
  }
  printf("\n=\n");
  for (i = 0; i <3; i++)
  {
    for (j = 0; j <3; j++)
    {
      printf("%d   ", arr1[i][j] + arr2[i][j]);
    }
    printf("\n");
  }
  return 0;
}
