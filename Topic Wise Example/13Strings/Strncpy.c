#include <stdio.h>
void myStrncpy(char *dest, const char *src, size_t n);

int main()
{
  char source[100];
  char destination[100];
  size_t n;
  printf("Enter the source string: ");
  scanf("%99[^\n]", source);
  printf("Enter the number of characters to copy: ");
  scanf("%zu", &n);
  myStrncpy(destination, source, n);
  printf("Copied String: %s\n", destination);
  return 0;
}

void myStrncpy(char *dest, const char *src, size_t n)
{
  size_t i;
  for (i = 0; i < n && src[i] != '\0'; i++)
  {
    dest[i] = src[i];
  }
  for (; i < n; i++)
  {
    dest[i] = '\0';
  }
}