/*3. Add two matrix using pointers.*/
#include <stdio.h>

int main()
{
  int rows, cols;
  printf("Enter the number of rows and columns of the matrices: ");
  scanf("%d %d", &rows, &cols);
  int matrix1[rows][cols], matrix2[rows][cols], sum[rows][cols];
  printf("Enter elements of the first matrix:\n");
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      scanf("%d", &matrix1[i][j]);
    }
  }
  printf("Enter elements of the second matrix:\n");
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      scanf("%d", &matrix2[i][j]);
    }
  }
  int(*ptr1)[cols] = matrix1;
  int(*ptr2)[cols] = matrix2;
  int(*ptrSum)[cols] = sum;
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      ptrSum[i][j] = ptr1[i][j] + ptr2[i][j];
    }
  }
  printf("Sum of the two matrices:\n");
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      printf("%d ", ptrSum[i][j]);
    }
    printf("\n");
  }
  return 0;
}
