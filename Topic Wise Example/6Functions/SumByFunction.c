#include <stdio.h>
int sum(int a, int b, int c);
int main()
{
  int x, y, z;
  printf("enter a number:\n");
  scanf("%d", &x);
  printf("enter a number:\n");
  scanf("%d", &y);
  printf("enter a number:\n");
  scanf("%d", &z);
  sum(x, z, y);
  return 0;
}
int sum(int a, int b, int c)
{
  printf("%d", a + b + c);
  return 0;
}