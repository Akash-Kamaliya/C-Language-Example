/*Our Earth Has two tyoe of atitude 1. latitude  2. longitude and we wants to find the nautical miles Distance between two point
for Calculate this eqatioon we should take a Hint 
Hint  :  latitude( L1 , L2) AND logitude( G1 , G2) 
The Formula to find Distance is D = 3963 cos-1(sinL1 sinL2 +cos L1 cosL2 *cos(G2 - G1))*/
#include<stdio.h>
#include<math.h>

int main ()
{
  float D; // Distance 
  float L1 , L2 ;// latitude
  float G1 , G2;//longitude
  
printf("write first location's latitude (L1) : \n");
scanf("%f",&L1);
printf("write first location's logitude (G1) : \n");
scanf("%f",&G1);
printf("write first location's latitude (L2) : \n");
scanf("%f",&L2);
printf("write first location's longitude (G2) : \n");
scanf("%f",&G2);

//Calculate The distance betwwen Two location 
D = 3963 * acos(( sin(L1)*sin(L2))+(cos(L1)*cos(L2)*cos(G2-G1)));

printf("The Distance Between Two Location : %d" , D);

return 0;

}