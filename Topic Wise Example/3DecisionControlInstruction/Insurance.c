/*Insurance of driver - using logical operators*/
#include <stdio.h>

int main()
{
  char gender, ms;
  int age;
  printf("Enter a age , gender ,materital status :");
  scanf("%d %c %c", &age, &gender, &ms);
  if ((ms == 'M' || (ms == 'U' && gender == 'M' && age > 30) || (ms == 'U' && gender == 'F' && age > 25)))
    printf("Driver should be insured \n");
  else
    printf("Driver should not be insured \n");
  return 0;
}