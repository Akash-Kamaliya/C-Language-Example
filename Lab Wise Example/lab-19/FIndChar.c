/*4. Find a character from given string.*/
#include <stdio.h>
#include <string.h>
void findCharacter(char str[], char ch);
int main()
{
  char str[100], ch;
  printf("Enter a string: ");
  gets(str);
  printf("Enter the character to find: ");
  scanf("%c", &ch);
  findCharacter(str, ch);
  return 0;
}
void findCharacter(char str[], char ch)
{
  int found = 0;
  printf("Character '%c' found at position(s): ", ch);
  for (int i = 0; i < strlen(str); i++)
  {
    if (str[i] == ch)
    {
      printf("%d ", i + 1);
      found = 1;
    }
  }
  if (!found)
  {
    printf("Character not found in the string.");
  }
}