#include <stdio.h>

int main()
{
  int a[3][3] = {{11, 22, 33}, {44, 55, 66}, {77, 88, 99}};
  int b[5] = {1, 2, 3, 4, 5};

  printf("%d\n", *(b + 1));
  printf("%d\n", *(*(a + 1) + 1));

  char city[3][25] = {"Akash", "Sandip", "Het"};
  printf("%d\n", &city[0]);
  printf("%d\n", &city[1]);
  printf("%d\n", &city[1]);

  printf("%d\n", (city[0] + 2));
  printf("%d\n", *(city[0] + 2) + 3);

  return 0;
}