/*2. Print all integer greater than 100 and less than 200 that are divisible by 7 but not
divisible by 5.*/
#include <stdio.h>

int main()
{
  int n1 = 100, n2 = 200, i;
  while (n1 < n2)
  {
    if ((n1 % 7 == 0) && (n1 % 5 != 0))
    {
      printf("%d\n", n1);
    }
    n1++;
  }
}