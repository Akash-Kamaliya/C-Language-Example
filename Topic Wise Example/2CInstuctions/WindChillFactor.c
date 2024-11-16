/*This Program is About Wind Chill Factor is felt air temperature on exposed skin due to wind . The wind chill Tempareture is always 
lower than the air than the air temperature and is calculated as per the following formula ;
where t is temperature and v is wind velocity . write a program to recive values of t and v and calculate wind chill factor (wcf)*/
#include<stdio.h>
#include<math.h>

int main()
{
  float v , t ;
  float wcf ;
  printf("Enter the value of velocity of wind :\n");
  scanf("%f",&v);
  printf("Enter the value of temperature :\n");
  scanf("%f",&t);
  wcf = 35.74 + (0.6215 * t) +((0.4275*t) - (35.75)) * pow( v , 0.16) ;
  printf("The Wind chill Factor is : %f",wcf);
  return 0 ;
}