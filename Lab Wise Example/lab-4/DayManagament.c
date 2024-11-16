/*2. Convert number of days into year, week & days. [e.g. 375 days mean 1 year, 1 week and 3
days]*/
#include<stdio.h>

int main()
{
  int d ,  w , y ;
  printf("Enter Time in Days: \n");
  scanf("%d",&d);
  y= d/365;
  d%=365;
  w= d/7;
  d%=7;
  printf("The time is  %d year : %d week : %d days \n",y,w,d);
  return 0;
}