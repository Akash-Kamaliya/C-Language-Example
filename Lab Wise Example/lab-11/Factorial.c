/*5. Find factorial of the given number.*/
#include <stdio.h>

int main()
{
  int n, multy = 1;
  printf("Enter a number:\n");
  scanf("%d", &n);
  for (int i = 1; i <= n; i++)
  {
    multy = i * multy;
  }
  printf("Factorial is %d", multy);
  return 0;
}