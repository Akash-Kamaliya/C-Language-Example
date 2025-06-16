/*Take a stirng input from the user using %c*/
#include <stdio.h>
#include <string.h>

int main()
{
  char str[100];
  printf("Enter Your Name :");
  scanf("%[^\n]s",str);
  printf("Entered Name :%s",str);
  return 0;
}