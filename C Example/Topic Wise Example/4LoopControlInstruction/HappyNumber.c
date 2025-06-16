#include <stdio.h>

int main()
{
  int num, n, rem, sum, c;
  printf("Enter a number: ");
  scanf("%d", &num);
  n = num;
  c = 0;
  while (num != 1 && c < 1000)
  {
    sum = 0;
    while (num > 0)
    {
      rem = num % 10;
      sum += rem * rem;
      num /= 10;
    }
    num = sum;
    c++;
  }
  if (num == 1)
  {
    printf("%d is a Happy Number!\n", n);
  }
  else
  {
    printf("%d is not a Happy Number.\n", n);
  }
  return 0;
}
