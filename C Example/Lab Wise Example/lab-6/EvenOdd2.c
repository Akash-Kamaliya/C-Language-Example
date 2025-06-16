/*5. Check whether number is even number or odd number using conditional operator.*/
#include <stdio.h>

int main()
{
  int num, lg;
  printf("Enter A Number:\n");
  scanf("%d", &num);
  lg = num % 10;
  lg %= 2;
  if (lg == 0)
  {
    printf("This Number is Even:\n");
  }
  if (lg == 1)
  {
    printf("This Number is Odd:\n");
  }
  return 0;
}