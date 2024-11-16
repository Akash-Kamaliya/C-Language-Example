#include <stdio.h>

void myStrcat(char *arr2, const char *arr1,int n)
{
  while (*arr2!='\0')
  {
    arr2++;
  }

  while (n>0)
  {
    *arr2 = *arr1;
    arr2++;
    arr1++;
    n--;
  }
  *arr2 = '\0';
}

int main()
{
  char str1[100];
  char str2[100];
  int n;
  printf("Enter the first string: ");
  gets(str1);
  printf("Enter the second string: ");
  gets(str2);
  printf("How many Char to concat :");
  scanf("%d",&n);
  myStrcat(str1, str2,n);
  printf("Concatenated String: %s\n", str1);
  return 0;
}