/*THis Program is About co - ordinators. Here , two type of co ordinators 1. Cartesian co ordinator and 2. Polar co ordinators
Hint is : r = sqrt(x2 + y2)  and  f = tan-1 (y/x)  */
#include<stdio.h>
#include<math.h>

int main()
{
  float x , y ; // This is Cartesian co - ordinator (x,y)
  float r , f ; //  This is Polar co - ordinator (r , f) Here , f is indicate value of phi

  printf("Enter Cartesian co - ordinators . \n");
  printf("Enter value of x:\n");
  scanf("%f",&x);
  printf("Enter value of y:\n");
  scanf("%f",&y);

  r = sqrt(pow(x , 2) + pow (y , 2));
  f = atan(y/x);

  printf("The Polar Cordinators is ( %f  ,  %f  )" , r , f );

  return 0 ;

}