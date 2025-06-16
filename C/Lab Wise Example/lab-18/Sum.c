/*Add two numbers using function.*/
#include <stdio.h>
int sum(int n, int m);
int main()
{
  int a, b;
  printf("Enter a number :");
  scanf("%d", &a);
  printf("Enter a number");
  scanf("%d", &b);
  sum(a, b);
}
int sum(int n, int m)
{
  printf("Sum is %d\n", n + m);
  return 0;
}