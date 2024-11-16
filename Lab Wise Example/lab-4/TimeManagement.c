/*1. Convert seconds into hours, minutes & seconds and print in HH:MM:SS. [e.g. 10000
seconds = 02:46:40)]*/
#include<stdio.h>

int main()
{
  int s , h , m ;
  printf("Enter Time in Second: \n");
  scanf("%d",&s);
  h= s/3600;
  s%=3600;//same
  m= s/60;
  s=s%60;//same
  printf("The time is  %02d : %02d : %02d \n",h,m,s);//02 means 02:01:03
  return 0;
}