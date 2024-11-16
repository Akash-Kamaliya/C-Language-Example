/*Enter Three Angle of Triangle and Decide The Triangle are Valid or not Valid*/
#include<stdio.h>

int main()
{
  float a , b , c ;

  printf("Enter 1st Angle of Triangle :\n");
  scanf("%f",&a);
  printf("Enter 2nd Angle of Triangle :\n");
  scanf("%f",&b);
  printf("Enter 3rd Angle of Triangle :\n");
  scanf("%f",&c);

  if(a+b+c==180)
  {
      printf("Given Triangle is Valide\n");
  }
  else
  {
    printf("Given Triangle is Not Valide \n");
  }
  return 0;
}