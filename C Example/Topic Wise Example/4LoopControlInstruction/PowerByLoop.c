/*Compute Value of one number raised to another*/
#include<stdio.h>

int main()
{
  float x , power ;
  int i,y ;
  printf("Enter a Number :\n");
  scanf("%f",&x);
  printf("Enter power of number:\n");
  scanf("%d",&y);
  power = i = 1;
  while (i<=y)
  {
    power = power * x;
    i++;
  }
  printf("%f to the power %d is %f \n",x,y,power);
  return 0;
}