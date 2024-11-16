/*2. Find HCF and LCM of two numbers.*/
#include <stdio.h>

int main()
{
  int n1, n2, hcf, lcm;
  printf("Enter first number :\n");
  scanf("%d", &n1);
  printf("Enter second number :\n");
  scanf("%d", &n2);
  int a = n1, b = n2;
  while (b != 0)
  {
    int temp = b;
    b = a % b;
    a = temp;
  }
  hcf = a;
  lcm = (n1 * n2) / hcf;
  printf("LCM of given numbers is %d\n", lcm);
  printf("GCD (HCF) of given numbers is %d\n", hcf);

  return 0;
}
