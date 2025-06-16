/*1. Find reverse of any number using recursion*/
#include <stdio.h>
int reverseNumber(int num, int rev);
int main()
{
  int num, reversed;
  printf("Enter a number: ");
  scanf("%d", &num);
  reversed = reverseNumber(num, 0);
  printf("Reversed Number: %d\n", reversed);
  return 0;
}
int reverseNumber(int num, int rev)
{
  if (num == 0)
    return rev;
  rev = (rev * 10) + (num % 10);
  return reverseNumber(num / 10, rev);
}