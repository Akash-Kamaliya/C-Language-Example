/*2. Scan a character string passed as an argument and convert all lowercase string to
uppercase string.*/
#include <stdio.h>
void toUpperCase(char str[]);
int main()
{
  char str[100];
  printf("Enter a string: ");
  gets(str);
  toUpperCase(str);
  printf("Uppercase string: %s\n", str);
  return 0;
}
void toUpperCase(char str[])
{
  for (int i = 0; str[i] != '\0'; i++)
  {
    if (str[i] >= 'a' && str[i] <= 'z')
    {
      str[i] = str[i] - 32;
    }
  }
}