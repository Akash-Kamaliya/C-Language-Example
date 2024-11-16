/*This Program is find pythagoras triplate with side length less then or equal to 30.*/
#include <stdio.h>
#include <math.h>

int main()
{
  for (float a = 1; a <= 30; a++)
  {
    for (float b = 1; b <= 30; b++)
    {
      for (float c = 1; c <= 30; c++)
      {
        float sum = sqrt(pow(a, 2) + pow(b, 2));
        if (c == sum)
        {
          printf("%f and %f and %f and \n", a, b, c);
          continue;
        }
      }
    }
  }
  return 0;
}