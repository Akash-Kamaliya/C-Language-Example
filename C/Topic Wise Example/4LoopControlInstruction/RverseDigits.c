#include<stdio.h>
int main()
{
  int n;
  int revnum=0;
  printf("Enter five digit number :");
  scanf("%d",&n);
  while (n > 0)
    {
      revnum *= 10 + n % 10; 
      n /= 10; 
    }
  printf("The Reversed Number is : %d\n", revnum);
  return 0;
}