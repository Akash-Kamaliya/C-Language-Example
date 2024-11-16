#include<stdio.h>

int main ()
{

int number;
int ans=0;
int reminder;

printf("Enter a Five Digit number:\n");
scanf("%d",&number);

if(number<10000&&number<=99999)
{
reminder=number%10;
number=number/10;
ans=ans+reminder;
reminder=number%10;
number=number/10;
ans=ans+reminder;
reminder=number%10;
number=number/10;
ans=ans+reminder;
reminder=number%10;
number=number/10;
ans=ans+reminder;
reminder=number%10;
number=number/10;
ans=ans+reminder;
printf("The Sum of Digits is :\n%d",ans);
}
else
{
  printf("Please Enter Five Digit Number\n");
}

return 0;

}