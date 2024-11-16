/*4. Check whether given number is positive or negative.*/
#include<stdio.h>

int main()
{
  int num;
  printf("Enter a number:");
  scanf("%d",&num);
  if(num>0)
  {
    printf("The given number is positive\n");
  }
  else if(num<0)
  {
    printf("The given number is nagetive\n");
  }
  else{
    printf("The given number is Zero\n");
  }
  return 0;
}