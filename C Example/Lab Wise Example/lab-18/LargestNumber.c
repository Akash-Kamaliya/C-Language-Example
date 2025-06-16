/*4. Return the maximum of three floating-point numbers..*/
#include <stdio.h>
int large(int a, int b, int c);
int main()
{
  int a, b, c;

  printf("Enter 1st Person's Age :\n");
  scanf("%d", &a);
  printf("Enter 2nd Person's Age : \n");
  scanf("%d", &b);
  printf("Enter 3rd Person's Age : \n");
  scanf("%d", &c);
  large(a, b, c);
  return 0;
}
int large(int a, int b, int c)
{
  if ((a > b) && (a > c))
  {
    printf("a is largest \n");
  }
  else if ((b > c) && (b > a))
  {
    printf("b is largest \n");
  }
  else if ((c > a) && (c > b))
  {
    printf("c is largest.\n");
  }
  else
  {
    printf("Sorry , Either Tow or Three number  are equal :");
  }
  return 0;
}