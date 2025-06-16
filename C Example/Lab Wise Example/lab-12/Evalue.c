/*Estimate the value of the mathematical constant e. (Formula: e=1+1/1!+1/2!+1/3!+1/4!…)*/
#include <stdio.h>

int main()
{
  float e = 1.0, n, multy = 1.0;
  printf("Enter a nuber of Series :");
  scanf("%f", &n);
  for (float i = 1.0; i <= n; i++)
  {
    for (float j = 1.0; j <= i; j++)
    {
      multy = multy * j;
    }
    e = e + (1.0 / multy);
  }
  printf("e=%f", e);
  return 0;
}