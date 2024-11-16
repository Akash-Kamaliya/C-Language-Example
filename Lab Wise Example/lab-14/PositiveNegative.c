/*2. Count number of positive or negative number from an array of n numbers.*/
#include <stdio.h>

int main()
{
  int marks[5], i, p = 0, n = 0;
  for (i = 0; i < 5; i++)
  {
    printf("Enter a number:\n");
    scanf("%d", &marks[i]);
  }
  for (i = 4; i >= 0; i--)
  {
    if (marks[i] >= 0)
    {
      p++;
    }
    else
    {
      n++;
    }
  }
  printf("In This Array Positive Number is:%d\n", p);
  printf("In This Array Negative  Number is:%d\n", n);
  return 0;
}