/*2. Print odd numbers between 1 to 10 then modify 1 to n using while and do while loop.*/
#include <stdio.h>

int main()
{
  int n, i = 1;
  printf("Enter A number:\n");
  scanf("%d", &n);
  do
  {
    if (i % 2 != 0)
    {
      printf("%d\n", i);
    }
    i++;
  } while (i < n);
  return 0;
}