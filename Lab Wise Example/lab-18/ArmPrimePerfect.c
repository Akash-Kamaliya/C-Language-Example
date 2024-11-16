/*2. Check whether a number is prime, Armstrong or perfect number using functions. (create
custom library)*/
#include <stdio.h>
int ArmstrongNumber(int i);
int Prime(int j);
int Perfect(int k);
int main()
{
  int n;
  printf("Enter a number :");
  scanf("%d", &n);
  ArmstrongNumber(n);
  Perfect(n);
  Prime(n);
  return 0;
}
int ArmstrongNumber(int i)
{
  int num, sum, reminder;
  num = i;
  sum = 0;
  while (num != 0)
  {
    reminder = num % 10;
    sum += reminder * reminder * reminder;
    num /= 10;
  }
  if (sum == i)
  {
    printf("This is Armstorng Number:\n");
  }
  else
  {
    printf("This is Not a Armstorng Number:\n");
  }
  return 0;
}
int Prime(int j)
{
  int x, y, z = 0;
  x = j;
  for (int y = 2; y < x; y++)
  {
    if (x % y == 0)
    {
      z++;
      break;
    }
  }
  if (z == 0 && x != 1)
  {
    printf("this is prime number");
  }
  else
  {
    printf("this is not prime number");
  }
  return 0;
}
int Perfect(int j)
{
  int sum = 0;
  for (int i = 1; i < j; i++)
  {
    if (j % i == 0)
    {
      printf("%d+", i);
      sum = sum + i;
    }
  }
  printf("=%d    ", sum);
  if (sum == j)
  {
    printf("Perfect Number:\n");
  }
  else
  {
    printf("Not a Perfect number:\n");
  }
  return 0;
}