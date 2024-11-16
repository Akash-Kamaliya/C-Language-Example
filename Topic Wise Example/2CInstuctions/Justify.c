#include <stdio.h>

int main()
{
  int a = 5;
  float b = 15.1212;
  printf("%-10d hello\n", a);
  printf("%010d hello\n", a);
  printf("%10d hello\n", a);
  printf("%10.5f hello\n", b);
  printf("%3.3f hello", b);
  return 0;
}