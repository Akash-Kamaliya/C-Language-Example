/*This Program is find the carecter are in Upper case or Lower case*/
#include <stdio.h>

int main()
{
  char ch;
  printf("Enter Character:");
  scanf("%c", &ch);
  if (ch >= 'A' && ch <= 'Z')
  {
    printf("Given character is in upper case");
  }
  else if (ch >= 'a' && ch <= 'z')
  {
    printf("Given character is in lower case");
  }
  else
  {
    printf("Please Enter single character");
  }
  return 0;
}