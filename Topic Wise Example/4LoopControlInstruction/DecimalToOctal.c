/*This Program is convert Decimal number to Octal number .*/
#include <stdio.h>
int Octal(int number1);
int main()
{
  int number1, number;
  printf("Enter a Decimal number :\n");
  scanf("%d", &number);
  number = number1;
  printf("%d\n", Octal(54)); // This progrram is delay till string and structur chatpter is not done by me.
}
int Octal(int number1)
{
  int reminder;
  reminder = number1 % 8;
  number1 = number1 / 8;
  printf("%d", reminder);
}