#include <stdio.h>
int myStrncmp(const char *str1, const char *str2, size_t n);

int main()
{
  char str1[100];
  char str2[100];
  size_t n;
  printf("Enter the first string: ");
  scanf("%99[^\n]", str1);
  printf("Enter the second string: ");
  getchar();
  scanf("%99[^\n]", str2);
  printf("Enter the number of characters to compare: ");
  scanf("%zu", &n);
  int result = myStrncmp(str1, str2, n);
  if (result < 0)
  {
    printf("The first string is less than the second string.\n");
  }
  else if (result > 0)
  {
    printf("The first string is greater than the second string.\n");
  }
  else
  {
    printf("Both strings are equal up to the first %zu characters.\n", n);
  }
  return 0;
}

int myStrncmp(const char *str1, const char *str2, size_t n)
{
  for (size_t i = 0; i < n; i++)
  {
    if (str1[i] == '\0' && str2[i] == '\0')
    {
      return 0;
    }
    if (str1[i] == '\0')
    {
      return -1;
    }
    if (str2[i] == '\0')
    {
      return 1;
    }
    if (str1[i] != str2[i])
    {
      return (unsigned char)str1[i] - (unsigned char)str2[i];
    }
  }
  return 0;
}