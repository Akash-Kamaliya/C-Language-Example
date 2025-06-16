#include <stdio.h>

int countLenght(char arr[]);
int main()
{
  char name[100];
  fgets(name, 100, stdin);
  printf("lenght is : %d", countLenght(name));
  return 0;
}
int countLenght(char arr[])
{
  int count = 0;
  for (int i = 0; arr[i] != '\0'; i++)
  {
    count++;
  }
  return count;
}