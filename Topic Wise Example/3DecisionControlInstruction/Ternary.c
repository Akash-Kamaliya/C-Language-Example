#include <stdio.h>

int main()
{
  int age;
  printf("Enter Your Age : \n");
  scanf("%d", &age);
  age < 18 ? printf("You are Adult\n") : printf("You are not Adult \n");
  // This is Ternary operator of condition operator
  // The conditinol = ternary;
  return 0;
}