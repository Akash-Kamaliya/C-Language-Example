#include <stdio.h>
struct time_struct
{
  int hours;
  int minutes;
  int seconds;
};
int main()
{
  struct time_struct time;
  printf("Enter hours: ");
  scanf("%d", &time.hours);
  printf("Enter minutes: ");
  scanf("%d", &time.minutes);
  printf("Enter seconds: ");
  scanf("%d", &time.seconds);
  printf("The time is: %02d:%02d:%02d\n", time.hours, time.minutes, time.seconds);
  return 0;
}
