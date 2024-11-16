/*2. Check whether character is an alphabet or not using conditional operator.*/
#include <stdio.h>

int main()
{
  char ch;
  printf("Enter A Character:\n");
  scanf("%c", &ch);
  ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) ? (printf("This is Character:\n")) : (printf("This is digit :\n"));
  return 0;
}