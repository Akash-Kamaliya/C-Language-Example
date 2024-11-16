#include <stdio.h>
void myStrncat(char *dest, const char *src, int n);

int main()
{
  char str1[100];
  char str2[100];
  int  n;
  printf("Enter the first string: ");
  scanf("%99[^\n]", str1);
  printf("Enter the second string: ");
  getchar();
  scanf("%99[^\n]", str2);
  printf("Enter the number of characters to concatenate: ");
  scanf("%d", &n);
  myStrncat(str1, str2, n);
  printf("Concatenated String: %s\n", str1);
  return 0;
}

void myStrncat(char *dest, const char *src, int n)
{
  while (*dest)
  {
    dest++;
  }
  while (n > 0 && *src)
  {
    *dest = *src;
    dest++;
    src++;
    n--;
  }

  *dest = '\0';
}