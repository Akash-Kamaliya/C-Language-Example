/*WAP to declare time  structuren and read two different time period and display it using function :*/
#include <stdio.h>
struct Time
{
  int hours;
  int minutes;
  int seconds;
};
struct Time input();
int main()
{
  struct Time t;
  t = input();
  printf("Hours : Minutes : Seconds\n %d : %d : %d", t.hours, t.minutes, t.seconds);
  return 0;
}
struct Time input()
{
  struct Time tt;
  printf("Enter Hours:\n");
  scanf("%d", &tt.hours);
  printf("Enter Minutes:\n");
  scanf("%d", &tt.minutes);
  printf("Enter Seconds:\n");
  scanf("%d", &tt.seconds);
  return tt;
}