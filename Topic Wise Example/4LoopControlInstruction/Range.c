// Write a program to find the range of a set of numbers entered through the keyboard .
// Range is the difference between the smallest and biggest number in the list.
#include <stdio.h>

int main()
{
  int mini;
  int maxi;
  int a;
  printf("how many number you want to enter \n");
  scanf("%d", &a);
  int i = 1;
  while (i <= a)
  {
    int number;
    printf("Enetr the number\n");
    scanf("%d", &number);
    if (number < mini)
    {
      mini = number;
    }
    if (number > maxi)
      maxi = number;
    i++;
  }
  printf("Range is %d\n", maxi - mini);
}