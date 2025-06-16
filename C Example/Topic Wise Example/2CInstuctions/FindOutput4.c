#include<stdio.h>

int main()
{
  int a=5;
  a+=(a,a+=15,a*10);
  printf("%d\n",a);
  return 0;
}