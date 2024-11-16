/*Check whether a triangle is valid or not*/
#include <stdio.h>

int main()
{
  int side1, side2, side3, largeside, sum;
  printf("Enter First side of triangle:\n");
  scanf("%d", &side1);
  printf("Enter second side of triangle:\n");
  scanf("%d", &side2);
  printf("Enter Third side of triangle\n");
  scanf("%d", &side3);

  if (side1 > side2)
  {
    if (side1 > side3)
    {
      sum = side2 + side3;
      largeside = side1;
    }
    else
    {
      sum = side1 + side2;
      largeside = side3;
    }
  }
  else
  {
    if (side2 > side3)
    {
      sum = side1 + side3;
      largeside = side2;
    }
    else
    {
      sum = side1 + side2;
      largeside = side3;
    }
  }
  if (sum > largeside)
  {
    printf("The triangle is a valid triangle\n");
  }
  else
  {
    printf("The triangle is not valid triangle\n");
  }
  return 0;
}