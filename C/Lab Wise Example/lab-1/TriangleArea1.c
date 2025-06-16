/*4. Find area of triangle. ((height*base)/2)*/
#include<stdio.h>

int main()
{
  float h , b ;
  printf("Enter Hight of Triangle:\n");
  scanf("%f",&h);
  printf("Enter Base of Triangle:\n");
  scanf("%f",&b);
  printf("Area of Triangle is : %f",(h*b)/2);
  return 0;
}