/*2. Determine the roots of the equation ax2+bx+c=0.*/
#include <stdio.h>
#include <math.h>
int main()
{
  float x, y, a, b, c, d, rp, ip;
  printf("The Eqation is ax2+bx+c=0\n ");
  printf("Enetr a Vlue of A in This Eqation\n");
  scanf("%f", &a);
  printf("Enetr a Vlue of B in This Eqation\n");
  scanf("%f", &b);
  printf("Enetr a Vlue of C in This Eqation\n");
  scanf("%f", &c);
  printf("Your Eqation is %fx2 + %fx + %f  \n", a, b, c);
  d = b * b - 4 * a * c;
  if (d >= 0)
  {
    x = (-b + sqrt(d)) / (2 * a);
    y = (-b - sqrt(d)) / (2 * a); // You Sould Try in x2-5x+6 to make integer roots
    printf("Your Eqation's Roots Alfa= %f and Beta=%f\n", x, y);
  }
  else
  {
    rp = -b / (2 * a);
    ip = sqrt(-d) / (2 * a);
    printf("Roots are complex: %f + %fi and %f - %fi\n", rp, ip, rp, ip);
  }
  return 0;
}