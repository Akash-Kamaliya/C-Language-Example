/*2. Calculate an age from current date to user’s birth date*/
#include<stdio.h>

int main()
{
  int Bmonth,month,Byear,year;
  month=9;
  year=2024;

  printf("Enter Your Birthdate in form of mm and yyyy\n");
  scanf("%d ",&Bmonth);
  scanf("%d",&Byear);
  if(Bmonth>month)
  {
    printf("Your Age is %d month and %d Year",(12 + Bmonth - month),((year-Byear)-1) );
  }
  if(Bmonth<month)
  {
    printf("Your Age is %d month and %d Year",(month - Bmonth),(year-Byear) );
  }
  return 0;

}