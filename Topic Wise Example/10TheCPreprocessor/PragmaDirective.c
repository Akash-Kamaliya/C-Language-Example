#include <stdio.h>
void fun1();
void fun2();
#pragma startup fun1
#pragma exit fun2
int main()
{
  printf("Inside main\n");
  return 0;
}
void fun1()
{
  printf("Inside Fun1\n");
}
void fun2()
{
  printf("Inside Fun2\n");
}