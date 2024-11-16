#include <stdio.h>

int main()
{
  FILE *fptr1, *fptr2;
  char ch;
  char Akash[10] ;
  fptr1 = fopen("text.txt", "a+");
  fscanf(fptr1, "%s", &Akash);
  printf("%s",Akash);
  fclose(fptr1);
  return 0;
}