/*1. Convert temperature from Fahrenheit to Celsius. (Formula: c=(((f-32)*5))/9)
2. Convert temperature from Celsius to Fahrenheit.*/
#include <stdio.h>

int main()
{
  int x ;
  char ch = 176;
  char ce = 'C';
  char fe = 'F';
  float  c , f ;

  printf("Which type of Convertion you need :\n");
  printf("Enter 1 to Calsius to Fahrenheit:\n");
  printf("Enter 2 to Fahrenheit to Calsius:\n");
  scanf("%d", &x);

  if(x==1)
  {
    printf("Enter Temperature in Calsius :\n");
    scanf("%f", &c);
    printf("Given Temperature in Fahrenheit : %f%c%c\n",(c*(9.0/5.0))+32.0,ch,ce);
  }
  else if(x==2)
  {
    printf("Enter Temperature in Fahrenheit :\n");
    scanf("%f", &f);
    printf("Given Temperature in Calsius : %f%c%c\n",(f-32.0)*(5.0/9.0),ch,fe);
  }
  else
  {
    printf("Invalid Number Please Try Again :\n");
  }

return 0;

}