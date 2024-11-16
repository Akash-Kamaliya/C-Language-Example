/*2. Perform Multiplication of two matrices...*/
#include <stdio.h>

int main()
{
  int a, b, c, d, e, f;
  printf("Enter First matrix's parameter  in (N x M) format:");
  scanf("%d%d", &a, &b);
  printf("Enter Second matrix's parameter  in (N x M) format:");
  scanf("%d%d", &c, &d);
  if (b == c)
  {
    e = a;
    f = d;
    int arr1[a][b], arr2[c][d], arr3[e][f], i, j, k, l, sum, sum1;
    for (i = 0; i < a; i++)
    {
      for (j = 0; j < b; j++)
      {
        printf("Enter first matrix's %d th row and %d th colum eliment ", i + 1, j + 1);
        scanf("%d", &arr1[i][j]);
      }
    }
    printf("\n");
    printf("\n");
    for (i = 0; i < c; i++)
    {
      for (j = 0; j < d; j++)
      {
        printf("Enter second matrix's %d th row and %d th colum eliment ", i + 1, j + 1);
        scanf("%d", &arr2[i][j]);
      }
    }
    for (i = 0; i < a; i++)
    {
      for (j = 0; j < b; j++)
      {
        printf("%d   ", arr1[i][j]);
      }
      printf("\n");
    }
    printf("\n");
    printf("X\n");
    for (i = 0; i < c; i++)
    {
      for (j = 0; j < d; j++)
      {
        printf("%d   ", arr2[i][j]);
      }
      printf("\n");
    }
    printf("\n=\n");
    for (k = 0; k < e; k++)
    {
      for (l = 0; l < f; l++)
      {
        sum = 0;
        for (i = 0; i < f; i++)
        {
          arr3[k][l] = (arr1[k][i] * arr2[i][l]);
          sum = sum + arr3[k][l];
        }
        arr3[k][l] = sum;
      }
    }
    for (k = 0; k < e; k++)
    {
      for (l = 0; l < f; l++)
      {
        printf("%4d", arr3[k][l]);
      }
      printf("\n");
    }
  }
  else
  {
    printf("Please Take Valid Parameter :\n");
  }
  return 0;
}
