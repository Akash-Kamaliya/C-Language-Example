#include <stdio.h>
#include"StaticStorageClass.c"
int i;
void increment();
void decrement();
int main()
{
  extern int a;//Globle Variable:
  printf("\ni=%d ", i);
  increment();
  increment();
  decrement();
  decrement();
  return 0;
}
void increment()
{
  i++;
  printf("on incrementing i=%d\n", i);
}
void decrement()
{
  i = i - 1;
  printf("on decrementing i=%d\n", i);
}