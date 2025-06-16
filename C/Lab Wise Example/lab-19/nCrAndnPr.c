/*2. C Program 􀆒nd nCr (Combination) and nPr (Permutation). (Formula: nCr = n!/(r!*(n-r)!),
nPr = n!/(n-r)!)*/
#include <stdio.h>
long long factorial(int num);
long long nCr(int n, int r);
long long nPr(int n, int r);
int main()
{
  int n, r;
  printf("Enter value of n: ");
  scanf("%d", &n);
  printf("Enter value of r: ");
  scanf("%d", &r);
  long long combination = nCr(n, r);
  long long permutation = nPr(n, r);
  printf("nCr (%dC%d) = %lld\n", n, r, combination);
  printf("nPr (%dP%d) = %lld\n", n, r, permutation);
  return 0;
}
long long factorial(int num)
{
  long long fact = 1;
  for (int i = 1; i <= num; i++)
  {
    fact *= i;
  }
  return fact;
}
long long nCr(int n, int r)
{
  if (r > n)
  {
    return 0;
  }
  return factorial(n) / (factorial(r) * factorial(n - r));
}
long long nPr(int n, int r)
{
  if (r > n)
  {
    return 0;
  }
  return factorial(n) / factorial(n - r);
}
