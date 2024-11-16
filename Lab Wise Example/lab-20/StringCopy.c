/*2. Using a String pointer remove a space and special character from string.*/
#include <stdio.h>
void copyString(char *str1, char *str2);
int main()
{
  char str1[100];
  char str2[100];
  printf("Enter a string: ");
  fgets(str1, sizeof(str1), stdin);
  copyString(str1, str2);
  printf("Copied string: %s", str2);
  return 0;
}
void copyString(char *str1, char *str2)
{
  while (*str1)
  {
    *str2 = *str1;
    str1++;
    str2++;
  }
  *str2 = '\0';
}
