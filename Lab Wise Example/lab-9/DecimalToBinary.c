/*2. Convert decimal number to binary. (i.e. n=11  output: 1101)*/
#include <stdio.h>

int main()
{
  int number;
  int reminder, binary = 0, revbinary = 0;

  printf("Enter Decimal Value\n");
  scanf("%d", &number);
  while (number != 0)
  {
    reminder = number % 2;
    number = number / 2;
    binary = binary * 10 + reminder;
  }
  while (binary > 0)
  {
    revbinary = revbinary * 10 + binary % 10;
    binary = binary / 10;
  }
  printf("%d", revbinary);
  return 0;
}