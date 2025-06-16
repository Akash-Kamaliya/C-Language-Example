/*4. Find out largest number from given 3 numbers using conditional operator.*/
#include <stdio.h>

int main()
{
  int a, b, c;
  printf("Enter A number:\n");
  scanf("%d", &a);
  printf("Enter B number:\n");
  scanf("%d", &b);
  printf("Enter C number:\n");
  scanf("%d", &c);
  (a > b) ? ((a > c) ? (printf("A  is Larger\n")) : (printf("B is Larger\n"))) : (printf("C is Larger\n"));
  return 0;
}