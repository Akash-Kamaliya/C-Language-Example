#include <stdio.h>
#include <string.h>

int main()
{
  char firststr[] = "Apple";
  char secstr[] = "Banana";
  printf("%d", strcmp(firststr, secstr));
  return 0;
}