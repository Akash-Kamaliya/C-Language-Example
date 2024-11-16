/*2. Count frequency of digits in an integer.*/
#include <stdio.h>

int main()
{
  int n, num, r, count = 0, n1;
  printf("Enter a number:");
  scanf("%d", &n);
  printf("Which number's frequency you want to find ?:");
  scanf("%d", &num);
  n1 = n;
  for (; n != 0;)
  {
    r = n % 10;
    n = n / 10;
    if (r == num)
    {
      count++;
    }
  }
  printf("frequncy of %d in %d number is %d :\n", num, n1, count);
  return 0;
}