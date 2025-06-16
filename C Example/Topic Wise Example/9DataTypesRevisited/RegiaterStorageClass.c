#include <stdio.h>

int main()
{
  register int i;//store in cpu's register we can't find it's address.
  for (i = 1; i <= 10; i++)
    printf("%d", i);
  return 0;
}