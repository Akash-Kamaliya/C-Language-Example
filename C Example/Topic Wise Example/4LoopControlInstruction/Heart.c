#include <stdio.h>

int main()
{
  for (int i = 1; i <= 5; i++)
  {
    for (int j = 1; j <= 5; j++)
    {
      if (i == 1 && j == 5)
        printf("  *     *  ");
      if (i == 2 && j == 4)
        printf("* *  *  * *");
      if (i == 3 && j == 3)
        printf(" * * * * * ");
      if (i == 4 && j == 2)
        printf("  * * * *  ");
      if (i == 5 && j == 1)
      {
        printf("   * * *   ");
        printf("\n");
        printf("     *");
      }
    }
    printf("\n");
  }
  return 0;
}
