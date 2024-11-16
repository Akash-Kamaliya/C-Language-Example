/*Write a program for a matchstick game being played being played between the computer and a user . 
your program should ensure that the computer always wins rules are as follows :
_There are 21 matchsticks.
_The coputer asks the player to pick 1 ,2 ,3 or 4 matchsticks.
_After the person picks , the computer to picks , the computer does its picking.
_Whoever is forced to pick up the last matchstic loses the game */

#include<stdio.h>

int main()
{
  int totlematchstic = 21;

  while(1)
  {
    printf("now its your turn\n");
    printf("totle number of matchstic left are %d !!\n",totlematchstic);
    int u,c;
    printf("Please Enter the number of matchstic u want to pick !!\n");
    scanf("%d",&u);
    if(u>4||u<1)
    {
      continue;
    }
    c = 5 - u ;
    printf("computer's turn .\n");
    printf("computer pics %d matchstics :\n",c);
    totlematchstic=totlematchstic-5;
    if(totlematchstic==1)
    {
      printf("%d matchstics are left !!\n");
      printf("\n\n\n");
      printf("You Lose the game");
      break;
    }
    
  }
  return 0;
}


