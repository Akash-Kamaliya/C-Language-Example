/*Given Value of Location of Three Point (x1 , y1) , (x2 , y2) and (x3 , y3) And Calculate All Point are in Stright Line*/
#include <stdio.h>

int main()
{
  float x1, x2, x3, y1, y2, y3;

  printf("Enter 1st point's x  cordinate\n");
  scanf("%f", &x1);
  printf("Enter 1st point's y cordinate \n");
  scanf("%f", &y1);
  printf("Enter 2nd point's x  cordinate\n");
  scanf("%f", &x2);
  printf("Enter 2nd point's y cordinate \n");
  scanf("%f", &y2);
  printf("Enter 3rd point's x  cordinate\n");
  scanf("%f", &x3);
  printf("Enter 3rd point's y cordinate \n");
  scanf("%f", &y3);

  if ((x1 < x2) && (x1 < x3))
  {

    if ((y1 < y2) && (y1 < y3))
    {
      if ((x1 = x2 + x3) && (y1 = y2 + y3))
      {
        printf("Three Points Are in Stright Line \n");
      }
      else
      {
        printf("Three Points Are not in Stright Line \n");
      }
    }
    else if ((y2 < y3) && (y2 < y1))
    {
      if ((x1 = x2 + x3) && (y2 = y1 + y3))
      {
        printf("Three Points Are in Stright Line \n");
      }
      else
      {
        printf("Three Points Are not in Stright Line \n");
      }
    }
    else if ((y3 < y1) && (y3 < y2))
    {
      if ((x1 = x2 + x3) && (y3 = y1 + y2))
      {
        printf("Three Points Are in Stright Line \n");
      }
      else
      {
        printf("Three Points Are not in Stright Line \n");
      }
    }
  }
  else if ((x2 < x3) && (x2 < x1))
  {
    if ((y1 < y2) && (y1 < y3))
    {
      if ((x2 = x1 + x3) && (y1 = y2 + y3))
      {
        printf("Three Points Are in Stright Line \n");
      }
      else
      {
        printf("Three Points Are not in Stright Line \n");
      }
    }
    else if ((y2 < y3) && (y2 < y1))
    {
      if ((x2 = x1 + x3) && (y2 = y1 + y3))
      {
        printf("Three Points Are in Stright Line \n");
      }
      else
      {
        printf("Three Points Are not in Stright Line \n");
      }
    }
    else if ((y3 < y1) && (y3 < y2))
    {
      if ((x2 = x3 + x1) && (y3 = y2 + y1))
      {
        printf("Three Points Are in Stright Line \n");
      }
      else
      {
        printf("Three Points Are not in Stright Line \n");
      }
    }
  }
  else if ((x3 < x1) && (x3 < x2))
  {
    if ((y1 < y2) && (y1 < y3))
    {
      if ((x3 = x2 + x1) && (y1 = y2 + y3))
      {
        printf("Three Points Are in Stright Line \n");
      }
      else
      {
        printf("Three Points Are not in Stright Line \n");
      }
    }
    else if ((y2 < y3) && (y2 < y1))
    {
      if ((x3 = x2 + x1) && (y2 = y1 + y3))
      {
        printf("Three Points Are in Stright Line \n");
      }
      else
      {
        printf("Three Points Are not in Stright Line \n");
      }
    }
    else if ((y3 < y1) && (y3 < y2))
    {
      if ((x3 = x2 + x1) && (y3 = y2 + y1))
      {
        printf("Three Points Are in Stright Line \n");
      }
      else
      {
        printf("Three Points Are not in Stright Line \n");
      }
    }
  }
  return 0;
}