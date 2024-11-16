/*5. Swap two numbers using call by Reference .*/
#include <stdio.h>
int Swap(int *x, int *y);
int main()
{
  int a, b;
  printf("Enter a value of A:");
  scanf("%d", &a);
  printf("Enter a value of B:");
  scanf("%d", &b);
  Swap(a, b);
  return 0;
}
int Swap(int *x, int *y)
{
  int t = *x;
  *x = *y;
  *y = t;
  printf("a =%d\n", *x);
  printf("b =%d\n", *y);
}