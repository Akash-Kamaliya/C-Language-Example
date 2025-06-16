/*1. Check whether the given year is leap year or not. [If a year can be divisible by 4 but not
divisible by 100 then it is leap year but if it is divisible by 400 then it is leap year].*/
#include <stdio.h>

int main()
{
  int yr, year;
  printf("Enter a year\n");
  scanf("%d", &yr);
  year = ((yr % 4 == 0 || yr % 400 == 0) && (yr != 100));
  switch (year)
  {
  case 1:
    printf("%d is Leap Year. \n", yr);
    break;
  case 0:
    printf("%d is not a leap year.  \n", yr);
    break;
  }
  return 0;
}