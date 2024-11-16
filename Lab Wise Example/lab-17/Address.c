/*1. Print value and address of a variable.*/
#include <stdio.h>

int main()
{
  int x = 5, *ptr;
  ptr = &x;
  printf("Value of X is : %d\n", x);
  printf("Address of X is :%d\n", ptr);
  return 0;
}