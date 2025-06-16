/*4. Take two numbers input from user and perform a multiplication without using a *operator.*/
#include <stdio.h>

int main()
{
  int n1, n2, multy = 0, sum = 0;
  printf("Enter A number :\n");
  scanf("%d", &n1);
  printf("Enter A number :\n");
  scanf("%d", &n2);
  while (sum != n2)
  {
    multy = n1 + multy;
    sum++;
  }
  printf("%d X %d = %d", n1, n2, multy);
  return 0;
}