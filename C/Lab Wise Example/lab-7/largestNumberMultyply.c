/*1. Read 3 numbers, multiply largest number from first two numbers to third one using
conditional.*/
#include <stdio.h>

int main()
{
  int x, y, z, multy;
  printf("Enter X Number : \n");
  scanf("%d", &x);
  printf("Enter Y Number : \n");
  scanf("%d", &y);
  printf("Enter Z Number : \n");
  scanf("%d", &z);
  (x > y) ? (multy = x * z) : (multy = y * z);
  printf("Anser is : %d", multy);
  return 0;
}