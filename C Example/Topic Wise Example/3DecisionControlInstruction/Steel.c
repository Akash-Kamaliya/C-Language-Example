/*This Program is Find Steel's Grade according three condition
1 . Hardness must be grater then 50 
2 . Carbon content must be less then 0.7
3 . Tensile strenght must be greater than 5600

The Grade Are  as follow ;

Grade is 10 if all three conditions are met 
Grade is 9 if conditions (i) and (ii) are met
Grade is 8 if conditions (ii) and (iii) are met
Grade is 7 if conditions (i) and (iii) are met
Grade is 6 if only one cindition is met
Grade is 5 if nonne of the condition are met*/
#include<stdio.h>

int main()
{
  float hd , cc , ts ;//hardness , carbon content , tensile strenght
  
  printf("Enter Hardness of Steelin(0 to 100):\n");
  scanf("%f",&hd);
  printf("Enter Carbon content of Steel(0.0 to 1.0):\n");
  scanf("%f",&cc);
  printf("Enter Tensile strenght of Steel(1000 to 10000):\n");
  scanf("%f",&ts);

if((hd>=50)&&(cc<=0.7)&&(ts>=5600))
{
  printf("Your Steel Grade is 10 . \n");
}
else if((hd>=50)&&(cc<=0.7)&&(!(ts>=5600)))
{
  printf("Your Steel Grade is 9 . \n");
}
else if((!(hd>=50))&&(cc<=0.7)&&(ts>=5600))
{
  printf("Your Steel Grade is 8 . \n");
}
else if((hd>=50)&&(!(cc<=0.7))&&(ts>=5600))
{
  printf("Your Steel Grade is 7 . \n");
}
else if(((!(hd>=50))&&(!(cc<=0.7))&&(ts>=5600))||((!(hd>=50))&&(cc<=0.7)&&(!(ts>=5600)))||((hd>=50)&&(!(cc<=0.7))&&(!(ts>=5600))))
{
  printf("Your Steel Grade is 6 . \n");
}
else if(((!(hd>=50))&&(!(cc<=0.7))&&(!(ts>=5600))))
{
  printf("Your Steel Grade is 5 . \n");
}
  return 0;
}
