/*1. Display day name for the given number.*/
#include <stdio.h>

int main()
{
  int a;
  printf("enter day\n");
  scanf("%d", &a);

  if (a == 1)
  {
    printf("Sunday\n");
  }
  if (a == 2)
  {
    printf("Monday\n");
  }
  if (a == 3)
  {
    printf("tuesday\n");
  }
  if (a == 4)
  {
    printf("Wednesday\n");
  }
  if (a == 5)
  {
    printf("Thursday\n");
  }
  if (a == 6)
  {
    printf("Friday\n");
  }
  if (a == 7)
  {
    printf("Satarday\n");
  }
  return 0;
}