/*Given Point's x and y cordinator then find the location of x and y cordinates*/
#include<stdio.h>

int main()

{
  float x , y;

  printf("Enter Point's x cordinates\n");
  scanf("%f",&x);
  printf("Enter points y cordinates\n");
  scanf("%f",&y);

  if((x==0)&&(y==0))
  {
    printf("Given point is on Origin\n");
  }
  else if((x<0)&&(y<0))
  {
    printf("Given point is in (-X) - (-Y) Plane\n");
  }
  else if((x<0)&&(y>0))
  {
    printf("Given point is in (-X) - (Y) Plane\n");
  }
  else if((x>0)&&(y<0))
  {
    printf("Given point is in (X) - (-Y) Plane\n");
  }
  else if((x>0)&&(y>0))
  {
    printf("Given point is in (X) - (Y) Plane\n");
  }
  else if((x==0)&&(!(y==0)))
  {
    printf("Given point is in (Y) axis \n");
  }
  else if((!(x==0))&&(y==0))
  {
    printf("Given point is in (X) axis\n");
  }
  return 0;
}