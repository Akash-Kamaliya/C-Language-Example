#include <stdio.h>

int main()
{
  int a[3][3] = {{11, 22, 33}, {44, 55, 66}, {77, 88, 99}};
  int *ptr[3];       // This line create a array to pointer
  ptr[0] = *(a);     // assigning a first row's address to ptr[0]
  ptr[1] = *(a + 1); // assigning a second row's address to ptr[1]
  ptr[2] = *(a + 2); // assigning a Third row's address to ptr [1]
  // int (*ptr) [3] creates a Pointer to an array of 3 integer not an array of pointers
  // Row wise staring address will be printed
  printf("%d ", *(ptr[0]));
  printf("%d ", *(ptr[0] + 1));
  printf("%d ", *(ptr[0] + 2)); // column wise first Row element will be printed
  printf("\n");
  printf("%d ", *(ptr[1]));
  printf("%d ", *(ptr[1] + 1));
  printf("%d ", *(ptr[1] + 2)); // column wise first Row element will be printed
  printf("\n");
  printf("%d ", *(ptr[2]));
  printf("%d ", *(ptr[2] + 1));
  printf("%d ", *(ptr[2] + 2)); // column wise first Row element will be printed
  printf("\n");
  printf("Traanspose Matrix:\n");
  printf("\n");
  // Row wise first column element will be printed
  printf("%d %d %d\n", *(ptr[0]), *(ptr[1]), *(ptr[2]));
  // Row wise second column element will be printed
  printf("%d %d %d\n", *(ptr[0] + 1), *(ptr[1] + 1), *(ptr[2] + 1));
  // Row wise Third column element will be printed
  printf("%d %d %d\n", *(ptr[0] + 2), *(ptr[1] + 2), *(ptr[2] + 2));
  return 0;
}