/*This Program is demo of Odd Loop 
execution of a loop an unknown number of times*/
#include<stdio.h>

int main()
{
  char another ;
  int num;
  do{
    printf("Enter a number\n");
    scanf("%d",&num);
    printf("square of %d is %d \n", num , num*num);
    printf("Want to enter another number ( y / n )\n ");
    fflush(stdin);
    scanf("%c",&another);
  }while(another=='y');
  return 0;
}