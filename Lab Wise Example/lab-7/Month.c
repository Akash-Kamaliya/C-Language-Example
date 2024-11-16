/*2. Print number of days in a month using switch.*/
#include <stdio.h>

int main()
{
  int a;
  printf("Enter Month :\n");
  scanf("%d", &a);
switch(a)
{
  case 1:
    printf("There are 31 Days in January:\n");
  break;
  case 2:
    printf("There are 28 or 29  Days in Febuary:\n");
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
  return 0;
}