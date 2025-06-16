#include <stdio.h>

int main()
{
  FILE *fptr1, *fptr2;
  char ch;
  char Akash[10] = "Kamaliya";
  fptr1 = fopen("text.txt", "a+");
  fprintf(fptr1, "%s", Akash);
  fclose(fptr1);
  return 0;
}