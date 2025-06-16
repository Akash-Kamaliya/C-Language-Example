#include <stdio.h>

int main()
{
  int i;
  char ch;
  char str1[20];
  printf("Enter A string :");
  gets(str1);
  printf("Enter a Chacter :");
  scanf("%c", &ch);
  i = 0;
  while (str1[i] != '0')
  {
    if (str1[i] == ch)
    {
      break;
    }
    i++;
  }
  printf("%s", str1 + i);
}