#include <stdio.h>
void myStrcpy(char *arr1, const char *arr2);
int main()
{
  char arr2[100];
  char arr1[100];
  printf("Enter a string: ");
  scanf("%99[^\n]", arr2);
  myStrcpy(arr1, arr2);
  printf("Copied String: %s\n", arr1);
  return 0;
}
void myStrcpy(char *arr1, const char *arr2)
{
  while (*arr2)
  {
    *arr1 = *arr2;
    arr1++;
    arr2++;
  }
  *arr1 = '\0';
}
