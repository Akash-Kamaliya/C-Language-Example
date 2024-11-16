#include <stdio.h>

int main()
{
  FILE *fptr1, *fptr2;
  char ch = 'A';
  fptr1 = fopen("text.txt", "a+");
  printf("character in file is : %c\n", putc(ch, fptr1));
  ch++;
  printf("character in file is : %c\n", putc(ch, fptr1));
  ch++;
  printf("character in file is : %c\n", putc(ch, fptr1));
  ch++;
  printf("character in file is : %c\n", putc(ch, fptr1));
  ch++;
  printf("character in file is : %c\n", putc(ch, fptr1));
  fclose(fptr1);
  return 0;
}