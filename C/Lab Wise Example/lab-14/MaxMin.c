/*2. Count number of positive or negative number from an array of n numbers.*/
#include <stdio.h>

int main()
{
  int marks[5], i;
  int sum = 0;

  for (i = 0; i < 5; i++)
  {
    printf("Enter a number:\n");
    scanf("%d", &marks[i]);
  }
  int max = marks[0];
  int min = marks[0];
  for (i = 0; i < 5; i++)
  {
    if (marks[i] > max)
      max = marks[i];
    if (marks[i] < min)
      min = marks[i];
    sum += marks[i];
  }
  printf("Sum of Array is :%d\n", sum);
  printf("Average of Array is :%f\n", sum / 5.0);
  printf("Minimum Number is :%d\n", min);
  printf("Maximum number is %d\n", max);
  return 0;
}