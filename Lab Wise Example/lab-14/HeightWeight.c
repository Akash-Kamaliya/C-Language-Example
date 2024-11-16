/*5. Read five person height and weight and count the number of person having height
greater than 170 and weight less than 50.*/
#include <stdio.h>

int main()
{
  int hi[5], we[5], i, j, h = 0, w = 0;

  for (i = 0, j = 0; i < 5, j < 5; i++, j++)
  {
    printf("Enter a number:\n");
    scanf("%d", &hi[i]);
    printf("Enter a number:\n");
    scanf("%d", &we[j]);
  }
  for (i = 0, j = 0; i < 5, j < 5; i++, j++)
  {
    if (hi[i] >= 170)
    {
      h++;
    }
    if (we[j] <= 50)
    {
      w++;
    }
  }
  printf(" height greater than 170: %d\n ", h);
  printf("weight less than 50 :%d \n", w);
  return 0;
}