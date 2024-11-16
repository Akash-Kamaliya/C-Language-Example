#include <stdio.h>

int main()
{
  FILE *fptr1, *fptr2;
  char ch;
  fptr1 = fopen("text.txt", "a+");
  printf("character in file is : %c\n", getc(fptr1));
  printf("character in file is : %c\n", getc(fptr1));
  printf("character in file is : %c\n", getc(fptr1));
  printf("character in file is : %c\n", getc(fptr1));
  printf("character in file is : %c\n", getc(fptr1));
  fclose(fptr1);
  return 0;
}