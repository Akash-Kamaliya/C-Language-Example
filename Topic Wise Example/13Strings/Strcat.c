#include <stdio.h>
void myStrcat(char *arr2, const char *arr1);
int main()
{
  char str1[100];
  char str2[100];
  printf("Enter the first string: ");
  scanf("%99[^\n]", str1);
  printf("Enter the second string: ");
  getchar();//For Second Scanf();
  scanf("%99[^\n]", str2);
  myStrcat(str1, str2);
  printf("Concatenated String: %s\n", str1);
  return 0;
}
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
