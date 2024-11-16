/*2. Using a String pointer remove a space and special character from string..*/
#include <stdio.h>
void removeSpacesAndSpecialChars(char *str);
int main()
{
  char str[100];
  printf("Enter a string: ");
  fgets(str, sizeof(str), stdin);
  removeSpacesAndSpecialChars(str);
  printf("String after removing spaces and special characters: %s\n", str);
  return 0;
}
void removeSpacesAndSpecialChars(char *str)
{
  char *result = str;
  while (*str)
  {
    if ((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z') || (*str >= '0' && *str <= '9'))
    {
      *result = *str;
      result++;
    }
    str++;
  }
  *result = '\0';
}
