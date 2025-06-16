/*3. Find all prime numbers between given interval using functions.*/
#include <stdio.h>

int isPrime(int a, int b)
{
  int c;
  for (a; a <= b; a++)
  {
    c = 0;
    for (int i = 2; i < a / 2; i++)
    {
      if (a % i == 0)
      {
        c++;
      }
    }
    if (c == 0)
    {
      printf("%d \t", a);
    }
  }
}
int main()
{
  int n1, n2;
  printf("Enter Starting number :");
  scanf("%d", &n1);
  printf("Enter Ending number");
  scanf("%d", &n2);
  isPrime(n1, n2);
  return 0;
}
