/*5. Get 10 numbers from user print count of odd, even numbers.*/
#include <stdio.h>

int main()
{
  int n, i, j = 1, even = 0, odd = 0;
  while (j <= 10)
  {
    printf("Enter A Number :\n");
    scanf("%d", &n);
    if (n % 2 == 0)
    {
      even++;
    }
    else
    {
      odd++;
    }
    j++;
  }
  printf("Given even Number's Count is :%d\n", even);
  printf("Given odd Number's Count is :%d\n", odd);
  return 0;
}