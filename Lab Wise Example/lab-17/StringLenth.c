/*1. Find length of string using pointers.*/
#include <stdio.h>

int stringLength(char *str)
{
  char *ptr = str;
  int length = 0;
  while (*ptr != '\0')
  {
    length++;
    ptr++;
  }
  return length;
}
int main()
{
  char str[100];
  printf("Enter a string: ");
  gets(str);
  int len = stringLength(str);
  printf("Length of the string: %d\n", len);
  return 0;
}
