/*1. Input electricity unit charge and calculate the total electricity bill according to the given
condition:
- For first 50 units Rs. 0.50/unit
- For next 100 units Rs. 0.75/unit
- For next 100 units Rs. 1.20/unit
- For unit above 250 Rs. 1.50/unit
- An additional surcharge of 20% is added to the bill.*/
#include <stdio.h>

int main()
{
  int units;
  float rs;
  printf("Enter Your Totle Units :\n");
  scanf("%d", &units);
  if (units <= 50)
  {
    rs = units * (0.50);
    rs = rs + (rs * 0.20);
    printf("Your Totle charge is : %f", rs);
  }
  else if ((units > 50) && (units <= 150))
  {
    units = units - 50;
    rs = (50 * 0.5) + (units * (0.75));
    rs = rs + (rs * 0.20);
    printf("Your Totle charge is : %f", rs);
  }
  else if ((units > 150) && (units <= 250))
  {
    units -= 150;
    rs = (50 * 0.5) + (100 * 0.75) + (units * 1.20);
    rs = rs + (rs * 0.20);
    printf("Your Totle charge is : %f", rs);
  }
  else if (units >= 250)
  {
    units -= 250;
    rs = (50 * 0.5) + (100 * 0.75) + (100 * 1.2) + units * (1.50);
    rs = rs + (rs * 0.20);
    printf("Your Totle charge is : %f", rs);
  }
  return 0;
}