/*Keep taking numbers as input from user untill users enters an odd number.*/
#include<stdio.h>
int main()
{
  int n;
  do{
    printf("enetr number :\n");
    scanf("%d",&n);
    if(n%2!=0)
    {
      break;
    }
    printf("This is not odd number:\n");
  }while(1);
  printf("This is Odd number:\n");
  printf("Thank You\n");
  return 0;
}