/*2. Find the sum and average of different numbers which are accepted by user as many as
user wants.*/
#include <stdio.h>

int main()
{
  char another;
  int num, sum = 0;
  float c = 0;
  do
  {
    printf("Enter a number\n");
    scanf("%d", &num);
    sum = sum + num;
    printf("Want to enter another number ( y / n )\n ");
    fflush(stdin);
    scanf("%c", &another);
    c++;
  } while (another == 'y');
  printf("The sum of Given numbers is : %d\n", sum);
  printf("Average of Given number is :%f\n", (sum) / c);
  return 0;
}