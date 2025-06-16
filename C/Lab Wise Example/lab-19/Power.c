/*2. Scan a character string passed as an argument and convert all lowercase string to
uppercase string.*/
#include <stdio.h>
int power(int base, int exponent);
int main()
{
  int base, exponent;
  printf("Enter base: ");
  scanf("%d", &base);
  printf("Enter exponent: ");
  scanf("%d", &exponent);
  int result = power(base, exponent);
  printf("%d^%d = %d\n", base, exponent, result);
  return 0;
}
int power(int base, int exponent)
{
  if (exponent == 0)
  {
    return 1;
  }
  else
  {
    return base * power(base, exponent - 1);
  }
}