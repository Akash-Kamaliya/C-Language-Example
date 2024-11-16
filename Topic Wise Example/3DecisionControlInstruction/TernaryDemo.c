#include <stdio.h>

int main()
{
  int x, y;
  printf("Enter Value of x:\n");
  scanf("%d", &x);
  printf("Enter Value of y:\n");
  scanf("%d", &y);
  (x > y) ? printf("The X is Grater") : printf("The Y is Grater:");
  return 0;
}
