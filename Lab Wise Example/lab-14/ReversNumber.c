/*1. Read n numbers from user and print in normal and reverse order.*/
#include <stdio.h>

int main()
{
  int marks[5], i;
  for (i = 0; i < 5; i++)
  {
    printf("Enter a number:\n");
    scanf("%d", &marks[i]);
  }
  for (i = 4; i >= 0; i--)
  {
    printf("%d", marks[i]);
  }
  return 0;
}