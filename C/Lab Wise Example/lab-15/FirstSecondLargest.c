/*1. Find two largest elements in a one dimensional array.*/
#include <stdio.h>

int main()
{
  int marks[5], i;
  for (i = 0; i < 5; i++)
  {
    printf("Enter a number:\n");
    scanf("%d", &marks[i]);
  }
  int max1 = marks[0];
  int max2 = marks[0];
  for (int i = 0; i < 5; i++)
  {
    if (marks[i] > max1)
      max1 = marks[i];
    if (marks[i] > max2 && marks[i] < max1)
      max2 = marks[i];
  }
  printf("First Largest Number:%d and Second Largest Number : %d ", max1, max2);
  return 0;
}
