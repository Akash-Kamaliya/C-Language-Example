/*This Program is about the sum of number n Which is taken by user */
#include <stdio.h>
int Sum(int n);
int main()
{
  int a;
  printf("How many number you want to addition it :\n");
  scanf("%d", &a);
  Sum(a);
  return 0;
}
int Sum(int n)
{
  int sum = 0;
  for (int i = 1; i <= n; i++)
  {
    sum += i;
  }
  printf("The sum of %d number is %d", n, sum);
  return 0;
}