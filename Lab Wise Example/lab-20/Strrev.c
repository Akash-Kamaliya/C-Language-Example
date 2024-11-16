#include <stdio.h>

void reverseString(char *str)
{
  int start = 0;
  int end = 0;
  while (str[end] != '\0')
  {
    end++;
  }
  end--;
  char temp;
  while (start < end)
  {
    temp = str[start];
    str[start] = str[end];
    str[end] = temp;
    start++;
    end--;
  }
}

int main()
{
  char str[100];
  printf("Enter a string: ");
  scanf("%99[^\n]", str);
  reverseString(str);
  printf("Reversed String: %s\n", str);
  return 0;
}
