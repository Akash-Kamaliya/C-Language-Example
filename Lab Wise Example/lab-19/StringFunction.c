/*3. Use string handling functions strlen(), strcmp(), strcpy(), strcat(), strrev(), strlwr() and
strupr().*/
#include <stdio.h>
#include <string.h>

int main()
{
  char str1[100], str2[100], str3[100];
  printf("Enter the first string: ");
  gets(str1);
  printf("Enter the second string: ");
  gets(str2);
  printf("\nLength of string 1: %lu", strlen(str1));
  printf("\nLength of string 2: %lu", strlen(str2));
  if (strcmp(str1, str2) == 0)
  {
    printf("\nBoth strings are equal.");
  }
  else
  {
    printf("\nStrings are not equal.");
  }
  strcpy(str3, str1);
  printf("\nString 3 (copy of string 1): %s", str3);
  strcat(str1, str2);
  printf("\nConcatenated string (str1 + str2): %s", str1);
  printf("\nReversed string 1: %s", strrev(str1));
  printf("\nString 1 in lowercase: %s", strlwr(str1));
  printf("\nString 1 in uppercase: %s\n", strupr(str1));
  return 0;
}