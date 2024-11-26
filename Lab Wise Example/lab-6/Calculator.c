/*1. Perform Addition, Subtraction, Multiplication and Division of 2 numbers as per user’s
choice.*/
#include <stdio.h>

int main()
{
  int z;
  float x, y;
  printf("Enter a number : \n");
  scanf("%f", &x);
  printf("Enter a number : \n");
  scanf("%f", &y);
  printf("Click 1 to do addition :\n");
  printf("Click 2 to do Subtraction:\n");
  printf("Click 3 to do Multyplication :\n");
  printf("Click 4 to do Division :\n");
  scanf("%d", &z);
  if (z == 1)
  {
    printf("Addition of to number = %f \n", x + y);
  }
  else if (z == 2)
  {
    printf("Subtraction of to number = %f \n", x - y);
  }
  else if (z == 3)
  {
    printf("Multyplication of to number = %f \n", (x * y));
  }
  else if (z == 4)
  {
    printf("Division of to number = %f \n", x / y);
  }
  else
  {
    printf("Please Enter Valid Number :\n");
  }
  return 0;
}