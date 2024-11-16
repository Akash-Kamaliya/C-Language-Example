#include <stdio.h>

void myStrcat(char *arr2, const char *arr1)
{
  while (*arr2)
  {
    arr2++;
  }

  while (*arr1)
  {
    *arr2 = *arr1;
    arr2++;
    arr1++;
  }
  *arr2 = '\0';
}

int main()
{
  char str1[100];
  char str2[100];
  printf("Enter the first string: ");
  gets(str1);
  printf("Enter the second string: ");
  gets(str2);
  myStrcat(str1, str2);
  printf("Concatenated String: %s\n", str1);
  return 0;
}

