/*2. Calculate distance between two points.*/
#include <stdio.h>
#include <math.h>

int main()
{
  float x1, x2, y1, y2, dis;
  printf("Enter A x-cordinator and y-cordinator of First Point \n ");
  printf("X1 = \n");
  scanf("%f", &x1);
  printf("Y1 = \n");
  scanf("%f", &y1);
  printf("Enter A x-cordinator and y-cordinator of Secon Point \n ");
  printf("X2 = \n");
  scanf("%f", &x2);
  printf("Y2 = \n");
  scanf("%f", &y2);
  // d=√((x2 – x1)² + (y2 – y1)²)
  dis = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
  printf("The Distance Between Two Number is : %f", dis);
  return 0;
}