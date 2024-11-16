#include<stdio.h>

int main()
{
    int a,b,c,d;
  a=0;
  b=-1;
  c=5;
  d=0;
  d=(++b||c++)&&++a;//Make Vulerable
  printf("%d %d %d %d",a,b,c,d);//all non zero number is true Value :
  return 0;
}