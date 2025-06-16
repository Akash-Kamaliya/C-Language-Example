#include <stdio.h>

void myStrcpy(char *arr1, const char *arr2,int n);
int main()
{
  int n;
  char arr2[100];
  char arr1[100];
  printf("Enter a string: ");
  gets(arr2);
  printf("How many Character you want to copy:");
  scanf("%d",&n);
  myStrcpy(arr1, arr2,n);
  printf("Copied String: %s\n", arr1);
  return 0;
}
void myStrcpy(char *arr1, const char *arr2,int n)
{
  while (n!=0)
  {
    *arr1 = *arr2;
    arr1++;
    arr2++;
    n--;
  }
  *arr1 = '\0';
}


