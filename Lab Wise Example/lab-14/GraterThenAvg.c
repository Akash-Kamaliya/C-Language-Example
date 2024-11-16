/*1. Count numbers higher than the average of an array.*/
#include <stdio.h>

int main()
{
  int marks[5], i, c;
  int sum = 0;

  for (i = 0; i < 5; i++)
  {
    printf("Enter a number:\n");
    scanf("%d", &marks[i]);
  }
  for (i = 0; i < 5; i++)
  {
    sum += marks[i];
  }
  float avg = sum / 5.0;
  for (i = 0; i < 5; i++)
  {
    if (marks[i] > avg)
    {
      c++;
    }
  }
  printf(" Count of higher than the average of an array.%d", c);
  return 0;
}