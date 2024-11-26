    /*2. Find maximum and minimum between two numbers using function.*/
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
  if (n > m)
  {
    pritnf("%d is Max Number:\n", n);
    printf("%d is Minimum :\n", m);
  }
  else
  {
    pritnf("%d is Max Number:\n", m);
    printf("%d is Minimum :\n", n);
  }
}