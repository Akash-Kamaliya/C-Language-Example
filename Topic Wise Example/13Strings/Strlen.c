#include <stdio.h>
#include<string.h>
int StrLen(char str[100]);
int main()
{
  char name[100] ;
  gets(name);
  int length = StrLen(name);
  int len =strlen(name);
  printf("Length is  %d", length);
  printf("Length is  %d", len);
  return 0;
}
int StrLen(char str[100])
{int c=0;
  for(int i=0;str[i]!='\0';i++)
  {
    c++;
  }
  return c;
}