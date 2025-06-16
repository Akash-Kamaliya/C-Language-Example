/*4. Calculate n^n without using power function.*/
#include <stdio.h>

int main()
{
  int n1, n2, multy = 1;
  printf("Enter first number :");
  scanf("%d", &n1);
  printf("Enter second number :");
  scanf("%d", &n2);
  for (int i; i < n2; i++)
  {
    multy = multy * n1;
  }
  printf("%d ^ %d = %d\n ", n1, n2, multy);
  return 0;
}