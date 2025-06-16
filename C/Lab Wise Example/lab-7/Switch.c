/*3. Perform Addition, Subtraction, Multiplication and Division of 2 numbers as per user’s
choice using switch.*/
#include <stdio.h>

int main()
{
  float x, y;
  int z;

  printf("Enter Your First Number:\n");
  scanf("%f", &x);
  printf("Enter Your Second Number :\n");
  scanf("%f", &y);
  printf("Enter 1 to Addition :\n");
  printf("Enter 2 to Subtract :\n");
  printf("Enter 3 to Multiplication :\n");
  printf("Enter 4 to Divide :\n");
  scanf("%d", &z);

  switch (z)
  {
  case 1:
    printf("Ansewr is :%f", x + y);
    break;
  case 2:
    printf("Ansewr is :%f", x - y);
    break;
  case 3:
    printf("Ansewr is :%f", x * y);
    break;
  case 4:
    printf("Ansewr is :%f", x / y);
    break;
  default:
    printf("Please Type valied number:\n");
    break;
  }
  return 0;
}