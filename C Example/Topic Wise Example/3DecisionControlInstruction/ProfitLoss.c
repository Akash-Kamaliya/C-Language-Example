/*Calculate Profit and Loss*/
#include<stdio.h>

int main()
{
float cp , sp , p , l ;
printf("Enter Cost Price :\n");
scanf("%f",&cp);
printf("Enter Selling Price:\n");
scanf("%f",&sp);

p = sp - cp ;
l = cp - sp ;

if(p>0)
{
  printf("The seeler made a Profit of Rs.%f\n",p);
}
if(l>0)
{
  printf("The seller incurred loss of Rs%f\n",l);
}
if(p==0)
{
  printf("There is no loss , no profit\n");
}
return 0;
}