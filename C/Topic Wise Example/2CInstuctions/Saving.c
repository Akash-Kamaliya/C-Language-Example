#include<stdio.h>

int main()
{
float bp , he , hr , tax, ts ;

printf("Enter Basic Salary of Akash:\n");
scanf("%f",&bp);
printf("Enter Household expence :\n");
scanf("%f", &he);
printf("Enter House Rent\n");
scanf("%f",&hr);
printf("Enter Totle tex:\n");
scanf("%f",&tax);

printf("Total Saving of Akash%f\n", bp-(he+hr+tax));

return 0;

}