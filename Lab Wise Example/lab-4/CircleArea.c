/*3. Find area of circle. (pie*r*r)*/
#include <stdio.h>
#include <math.h>
int main()
{

  int r;

  printf("enter the radius of circle:\n");
  scanf("%d", &r);
  // Solution 1
  printf("Area of Cicle is:%f\n", 3.14 * r * r);
  // Solution 2
  printf("Areaa of Circle is %f\n", 3.14 * pow(r, 2));
  // Power function must need float value:
  return 0;
}