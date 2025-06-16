/*3. Read and store the roll no and marks of 20 students using 2D array..*/
#include <stdio.h>

int main()
{
  int arr[20][3], i, j;
  for (i = 0; i < 20; i++)
  {
    for (j = 0; j < 3; j++)
    {
      if (j == 0)
        printf("Enter %d th roll number Student maths mark ", i + 1, j + 1);
      scanf("%d", &arr[i][j]);
      if (j == 1)
        printf("Enter %d th roll number Student Df mark ", i + 1, j + 1);
      scanf("%d", &arr[i][j]);
      if (j == 2)
        printf("Enter %d th roll number Student cpc mark ", i + 1, j + 1);
      scanf("%d", &arr[i][j]);
    }
  }
  for (i = 0; i < 20; i++)
  {
    for (j = 0; j < 3; j++)
    {
      if (j == 0)
        printf("Enter %d th roll number Student maths mark is = %d \n", i + 1, arr[i][j]);
      if (j == 1)
        printf("Enter %d th roll number Student Df mark is= %d \n ", i + 1, arr[i][j]);
      if (j == 2)
        printf("Enter %d th roll number Student cpc mark is %d \n ", i + 1, arr[i][j]);
    }
    printf("\n");
  }
  return 0;
}
