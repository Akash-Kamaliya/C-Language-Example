/*According to a study , the aproximate level of intelligence of a person can be  calculated using the folloiwing formula 
i = 2 + ( y + 0.5x )
Write a program that will produce a table of values of i , y and x,where y varies from 1 to 6 
and , for each value of y , x varies from 5.5 to 12.5 in steps of 0.5.*/
#include<stdio.h>

int main()
{
  float i;
  for(float x=1;x<=6;x++)
  {
    for(float y=5.5;y<=12.5;y=y+0.5)
    {
      i = 2 + ( y + (x/2));
      printf("When X factor is %f and Y factor is %f then Intelligence Value %f\n",x,y,i);
    }
  }
  return 0;
}