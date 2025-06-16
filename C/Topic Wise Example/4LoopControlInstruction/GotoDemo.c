/*This Program is demonstrated the Goto Statement in C lnanguage Consept.*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
  int goals;
  printf("Enter the number of goals scored against india\n");
  scanf("%d",&goals);
  if(goals<=5)
  goto sos;
  else{
    printf("About time soccer player learnt C.\n");
    printf("And said good bye to soccer \n");
    exit(1); /*Tearminates Program execution*/
  }
  sos:
  printf("to err is human !\n");
  return 0;
}