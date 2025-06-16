/*5. Input a string in character array and print string and length of string.*/
#include <stdio.h>

int main()
{
  char str[100];
  int length = 0;
  printf("Enter a string: ");
  fgets(str, sizeof(str), stdin);
  while (str[length] != '\0' && str[length] != '\n')
  {
    length++;
  }
  printf("You entered: %s", str);
  printf("Length of the string: %d\n", length);
  return 0;
}
