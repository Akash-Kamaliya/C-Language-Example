/*psper of size A0 has dimensions 1189 mm x 841 mm . Each subsequent size A(n) is Defined as A(n-1) cut in half parallel to its
  shorter sides thus paper of size A1 would have dimensions 841 mm x 594 mm  . Write a Program to calculate and print paper sizes
  A1,A2,A3.......A8.*/
#include <stdio.h>

int main()
{
  float m, n;
  float x = 1189;
  float y = 841;
  int a;

  printf("Enter Your Paper Size Code Ex : A( x ) , x : \n");
  scanf("%d", &a);

  for (n = 1, m = 1; n < a, m < a; n++, m++)
  {
    x = x / 2;
    y;
    x = x + y;
    y = x - y;
    x = x - y;
  }
  printf("Your Paper Size A (  %d )is %f X %f :\n", a, x, y);

  return 0;
}