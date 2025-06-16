/*4. Find factorial of the given number.*/
#include <stdio.h>

int Fact(int n);
int main()
{
  int n;
  printf("Enter A Number:\n");
  scanf("%d", &n);
  printf("Factorial of number n is :%d", Fact(n));
  return 0;
}
int Fact(int n)
{
  if (n == 1)
  {
    return 1;
  }
  int FactNm1 = Fact(n - 1);
  int FactN = FactNm1 * n;
  return FactN;
}