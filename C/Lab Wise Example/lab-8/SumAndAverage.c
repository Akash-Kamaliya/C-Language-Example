/*1. Calculate sum and average of the square of first 10 integers whose square has last digit 3.*/
#include <stdio.h>

int main()
{
  int i = 1, sum1 = 0, sum, c = 0;
  float avg;
  while (i != 10)
  {
    i = i + 1;
    sum = i * i;
    if (sum % 10 == 3)
    {
      sum1 = sum + sum1;
      printf("%d\n", sum);
      c++;
      continue;
    }
  }
  printf("sum of These Number is :%d\n", sum1);
  avg = sum1 / c;
  printf("Avearage of These Number is %f:\n", avg);
  return 0;
}