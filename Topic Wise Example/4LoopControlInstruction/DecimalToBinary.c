/*This Program is convert Decimal number to Binary number .*/
#include <stdio.h>

int main()
{
  int number;

  printf("Enter Decimal Value\n");
  scanf("%d", &number);
  while (number != 0)
  {
    int reminder;
    reminder = number % 2;
    number = number / 2;
    printf("%d", reminder);
  }
  return 0;
}
