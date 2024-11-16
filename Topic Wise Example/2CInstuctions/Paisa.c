/*We have 1 Rs note ,2 Rs note ,5 Rs note ,10 Rs note ,50 Rs note And 100 Rs note ,
but our Pocket is Small so We Calculate Smallest number of note of Given Amount*/
#include<stdio.h>

int main()
{
  int amount , nohun , nofifty , noten , nofive , notwo , noone , totle ;
  
  printf("Enter THe Amount :\n");
  scanf("%d",&amount);
  nohun = amount/100;
  amount%=100;
  nofifty = amount/50;
  amount%=50;
  noten = amount/10;
  amount%=10;
  nofive = amount/5;
  amount%=5;
  notwo = amount/2;
  amount%=2;
  noone = amount/1;
  amount%=1;

totle = nohun + nofifty +  noten +  nofive +  notwo + noone ;

printf("Smallest Number of Notes is :%d\n", totle);

return 0;

}