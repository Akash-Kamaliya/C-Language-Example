/*4. Find factorial of the given number.*/
#include <stdio.h>

int main()
{
  int num, i, fact;
  printf("Enter a number :\n");
  scanf("%d", &num);
  fact = i = 1;
  while (i <= num)
  {
    fact = fact * i;
    i++;
  }
  printf("Factorial value of %d = %d", num, fact);
  return 0;
}