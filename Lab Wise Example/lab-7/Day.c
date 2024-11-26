/*1. Print day name of week using switch.*/
#include <stdio.h>

int main()
{
  int a;
  printf("enter day\n");
  scanf("%d", &a);
  switch (a)
  {
  case 1:
    printf("Sunday\n");
    break;
  case 2:
    printf("Monday\n");
    break;
  case 3:
    printf("tuesday\n");
    break;
  case 4:
    printf("Wednesday\n");
    break;
  case 5:
    printf("Thursday\n");
    break;
  case 6:
    printf("Friday\n");
    break;
  case 7:
    printf("Satarday\n");
    break;
  default:
    printf("Plese Enter Valid Number:\n");
    break;
  }
  return 0;
}