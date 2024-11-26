/*2. Enter basic salary of an employee and calculate Gross salary according to given
conditions:
- Basic Salary >= 10000 : HRA(House Rent Allowance) = 20% of basic, DA(Dearness Allowance ) = 80% of basic
- Basic Salary >= 20000 : HRA = 25% of basic, DA = 90% of basic
- Basic Salary >= 30000 : HRA = 30% of basic, DA = 95% of basic*/
#include <stdio.h>

int main()
{
  float s, hra, da;
  printf("Enter Basic Salary:");
  scanf("%f", &s);

  if (s >= 10000)
  {
    hra = s * 0.2;
    da = s * 0.8;
    printf("House Rent Allowance(HRA)=%f\n", hra);
    printf("Dearness Allowance(DA) = %f\n", da);
  }
  if (s >= 20000)
  {
    hra = s * 0.25;
    da = s * 0.9;
    printf("House Rent Allowance(HRA)=%f\n", hra);
    printf("Dearness Allowance(DA) = %f\n", da);
  }
  if (s >= 30000)
  {
    hra = s * 0.3;
    da = s * 0.95;
    printf("House Rent Allowance(HRA)=%f\n", hra);
    printf("Dearness Allowance(DA) = %f\n", da);
  }
  printf("Thank You:\n");
  return 0;
}