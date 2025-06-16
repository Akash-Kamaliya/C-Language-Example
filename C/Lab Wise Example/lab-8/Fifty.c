/*3. Print first 50 numbers in series 1, 4, 7, 10…*/
#include <stdio.h>

int main()
{
  int i = 1, c = 0;
  while (c <= 50)
  {
    printf("%d\n", i);
    i = i + 3;
    c++;
  }
  return 0;
}