#include <stdio.h>
void increment();
int main()
{
  increment();
  increment();
  increment();
  return 0;
}
void increment()
{
  auto int i = 1;//delete in {}
  static int j = 1;//ignore ( detele when end of program)
  i++;
  j++;
  printf("%d %d \n", i, j);
}