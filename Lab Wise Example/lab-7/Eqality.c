/*1. Check for equality of two numbers without using arithmetic or comparison operator.*/
#include <stdio.h>

int main()
{
  int a, b;
  printf("Enter a number :\n");
  scanf("%d", &a);
  printf("Enter a number :\n");
  scanf("%d", &b);
  (a ^ b) == 0 ? printf("Equal:\n") : printf("Not Equal:\n");
  return 0;
}