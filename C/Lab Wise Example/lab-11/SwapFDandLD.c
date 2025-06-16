/*1. Swap first and last digits of a number.*/
#include <stdio.h>

int main()
{
  int num, fd, ld, temp, div = 1, dig = 0;
  printf("Enter any number: ");
  scanf("%d", &num);
  temp = num;
  ld = temp % 10;
  for (temp = num; temp >= 10; temp /= 10)
  {
    div *= 10;
    dig++;
  }
  fd = temp;
  int swap = ld * div + (num % div) - ld + fd;
  printf("Number after swapping first and last digit: %d\n", swap);
  return 0;
}
