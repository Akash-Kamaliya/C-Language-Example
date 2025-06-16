/*Calculate of Totle expenses*/
#include <stdio.h>

int main()
{
  int qty, dis;
  float rate, tot;
  printf("Enter quntity and rate ");
  scanf("%d%f", &qty, &rate);
  if (qty > 1000)
    dis = 10;
  else
    dis = 0;
  tot = (qty * rate) - (qty * rate * dis / 100);
  printf("Totle expenses = Rs. %f\n", tot);
  return 0;
}