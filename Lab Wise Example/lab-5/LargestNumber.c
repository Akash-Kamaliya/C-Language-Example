/*The Youngest Person Of Three */
#include <stdio.h>

int main()
{
  int a, b, c;

  printf("Enter 1st Person's Age :\n");
  scanf("%d", &a);
  printf("Enter 2nd Person's Age : \n");
  scanf("%d", &b);
  printf("Enter 3rd Person's Age : \n");
  scanf("%d", &c);

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
    printf("3rd Person is Yongest.\n");
  }
  else
  {
    printf("Sorry , Either Tow or Three number  are equal :");
  }
  return 0;
}