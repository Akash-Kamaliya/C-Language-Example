/*3. Count number of even or odd number from an array of n numbers..*/
#include <stdio.h>

int main()
{
  int marks[5], i, e = 0, o = 0;
  for (i = 0; i < 5; i++)
  {
    printf("Enter a number:\n");
    scanf("%d", &marks[i]);
  }
  for (i = 4; i >= 0; i--)
  {
    if (marks[i] % 2 == 0)
    {
      e++;
    }
    else
    {
      o++;
    }
  }
  printf("In This Array Even Number is:%d\n", e);
  printf("In This Array Odd Number is:%d\n", o);
  return 0;
}