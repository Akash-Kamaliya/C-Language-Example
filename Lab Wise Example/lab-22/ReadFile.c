#include <stdio.h>

int main()
{
  FILE *fptr;
  char ch;
  fptr = fopen("text.txt", "r");
  do
  {
    ch = getc(fptr);
    putchar(ch);
  } while (ch != EOF);
  fclose(fptr);
  return 0;
}