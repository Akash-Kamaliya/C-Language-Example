/*5. Replace a character in given string.*/
#include <stdio.h>
#include <string.h>
void replaceCharacter(char str[], char oldChar, char newChar);
int main()
{
  char str[100], oldChar, newChar;
  printf("Enter a string: ");
  gets(str);
  printf("Enter the character to replace: ");
  scanf("%c", &oldChar);
  getchar();
  printf("Enter the new character: ");
  scanf("%c", &newChar);
  replaceCharacter(str, oldChar, newChar);
  printf("Modified string: %s\n", str);
  return 0;
}
void replaceCharacter(char str[], char oldChar, char newChar)
{
  for (int i = 0; i < strlen(str); i++)
  {
    if (str[i] == oldChar)
    {
      str[i] = newChar;
    }
  }
}
