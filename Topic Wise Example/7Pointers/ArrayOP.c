#include <stdio.h>

int main()
{
  int a[3][3] = {{11, 22, 33}, {44, 55, 66}, {77, 88, 99}};
  int b[5] = {1, 2, 3, 4, 5};

  // printf("%d", *(b + 1));
  // printf("%d", *(*(a + 1) + 1));

  char city[3][25] = {"Akash", "Sandip", "Het"};
  // printf("%d", &city[0]);
  // printf("%d", &city[1]);
  // printf("%d", &city[1]);

  // printf("%d", (city[0] + 2));
  printf("%s", (*(city[0] )));
  // printf("%d", *(city[0] + 2) + 3);

  return 0;
}