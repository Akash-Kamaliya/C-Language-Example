#include<stdio.h>

int main()
{
  int x=10,y;
  y=(x,x=x*10,x*10,x);//Diff = and * 
  printf("%d",y);
  return 0;
}