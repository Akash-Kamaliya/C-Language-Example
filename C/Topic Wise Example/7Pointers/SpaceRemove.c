#include <stdio.h>

int main()
{
  int i;
  char str[100];
  char str1[100];
  printf("Enter a String\n");
  gets(str);
  char *ptr;
  char *ptr1;
  ptr = str;
  ptr1 = str1;
  for (; *ptr != '\0';)
  {
    if (*ptr != ' ')
    {
      *ptr1 = *ptr;
      ptr1++;
    }
    ptr++;
  }
  *ptr1 = '\0';
  puts(str1);
  return 0;
}