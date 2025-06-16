/*2. Print the upper triangular matrix.*/
#include <stdio.h>

int main()
{
  int rows, cols, i, j;
  printf("Enter the number of rows and columns of the matrix: ");
  scanf("%d %d", &rows, &cols);
  int matrix[rows][cols];
  printf("Enter the elements of the matrix:\n");
  for (i = 0; i < rows; i++)
  {
    for (j = 0; j < cols; j++)
    {
      scanf("%d", &matrix[i][j]);
    }
  }
  printf("Upper Triangular Matrix:\n");
  for (i = 0; i < rows; i++)
  {
    for (j = 0; j < cols; j++)
    {
      if (i > j)
      {
        printf("0 ");
      }
      else
      {
        printf("%d ", matrix[i][j]);
      }
    }
    printf("\n");
  }
  return 0;
}
