/*2. Print number of days in a month considering leap year using switch.*/
#include <stdio.h>

int main()
{
  int y, m, l;
  printf("Enter Current Year:\n");
  scanf("%d", &y);
  printf("Enter Current Month :\n");
  scanf("%d", &m);

  l = ((y % 4 == 0 || y % 400 == 0) && (y % 100 != 0));
  switch (m)
  {
  case 1:
    printf("There are 31 Days in January:\n");
    break;
  case 2:
    switch (l)
    {
    case 0:
      printf("There are 28 days: \n");
      break;
    case 1:
      printf("There are 29 days:\n");
      break;
    }
    break;
  case 3:
    printf("There are 31 Days in March:\n");
    break;
  case 4:
    printf("There are 30 Days in April:\n");
    break;
  case 5:
    printf("There are 31 Days in May:\n");
    break;
  case 6:
    printf("There are 30 Days in June:\n");
    break;
  case 7:
    printf("There are 31 Days in July:\n");
    break;
  case 8:
    printf("There are 31 Days in August:\n");
    break;
  case 9:
    printf("There are 30 Days in September:\n");
    break;
  case 10:
    printf("There are 31 Days in October:\n");
    break;
  case 11:
    printf("There are 30 Days in November:\n");
    break;
  case 12:
    printf("There are 31 Days in December:\n");
    break;
  default:
    printf("Plese Enter Valid Number:\n");
    break;
  }
}