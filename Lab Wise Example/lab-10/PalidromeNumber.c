/*3. Check whether the given number is palindrome or not.*/
#include <stdio.h>

int main()
{
  int n, n1;
  int revnum = 0;
  // offers a bigger range of integers
  printf("Enter five digit number :");
  scanf("%d", &n);
  n1 = n;
  while (n > 0)
  {
    revnum = revnum * 10 + n % 10;
    n = n / 10;
  }
  if (revnum == n1)
  {
    printf("Given Number is Palidrom number :");
  }
  else
  {
    printf("Given Number is Not A  Palidrom number :");
  }
  return 0;
}
