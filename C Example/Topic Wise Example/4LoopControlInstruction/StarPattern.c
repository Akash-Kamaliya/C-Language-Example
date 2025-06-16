/*Make a Pattern From Astarics ( * ).*/
#include <stdio.h>

int main()
{
  char ch = '*';
  for (int i = 0; i < 5; i++)
  {
    for (int i = 0; i < 5; i++)
    {
      printf("%c\t", ch);
    }
    printf("%c\n", ch);
  }
  return 0;
}