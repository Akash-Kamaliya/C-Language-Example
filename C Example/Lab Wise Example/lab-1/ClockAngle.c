/*2. Calculate the angle between hour hand and minute hand*/
#include <stdio.h>

int mod(int n1, int n2);
int main()
{
  float angle, ha, ma;
  int h, m;
  printf("Enter Hour :\n");
  scanf("%d", &h);
  printf("Enter Minuts\n");
  scanf("%d", &m);
  printf("YourTime is %d : %d ", h, m);
  ha = (h + (m / 60)) * (360 / 12);
  ma = m * (6);
  angle = mod(ha, ma);
  if (angle > 180) 
  {
    printf("Angle  :%f", angle - 180);
  }
  else
  {
    printf("Angle  :%f", angle);
  }
  return 0;
}
int mod(int n1, int n2)
{
  if (n1 > n2)
  {
    return n1 - n2;
  }
  if (n1 < n2)
  {
    return n2 - n1;
  }
}