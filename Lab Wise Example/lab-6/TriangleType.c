/*3. Three sides of a triangle are entered through the keyboard, WAP to check whether the
triangle is isosceles, equilateral, scalene or right angled triangle.*/
/*This prorgram is calculate the type of triangle*/
#include <stdio.h>
#include <math.h>

int main()
{
  int a, b, c;

  printf("Enter First side of triangle:\n");
  scanf("%d", &a);
  printf("Enter second side of triangle:\n");
  scanf("%d", &b);
  printf("Enter Third side of triangle\n");
  scanf("%d", &c);

  if (a == b && a == c)
  {
    printf("This Triangle is   Equilateral Triangle\n");
  }
  if ((a = sqrt(pow(b, 2) + pow(c, 2))) || (b = sqrt(pow(a, 2) + pow(c, 2))) || (c = sqrt(pow(b, 2) + pow(a, 2))))
  {
    printf("This Triangle is Right-Angled Triangle\n");
  }
  if ((b == a || a == c || c == b) && (!(a == b && a == c)))
  {
    printf("This Triangle is Isosceles Triangle\n");
  }
  if (!((b == a || a == c || c == b) && (!(a == b && a == c))))
  {
    printf("This Triangle is Scalene Triangle\n");
  }
  return 0;
}