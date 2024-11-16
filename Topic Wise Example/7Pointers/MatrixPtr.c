#include <stdio.h>

int main()
{
  int a[3][3] = {{11, 22, 33}, {44, 55, 66}, {77, 88, 99}};
  int(*ptr)[3] = a;
  int i, j;
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      printf("%d\t", ((*(ptr + i))[j]));
    }
    printf("\n");
  }
  return 0;
}