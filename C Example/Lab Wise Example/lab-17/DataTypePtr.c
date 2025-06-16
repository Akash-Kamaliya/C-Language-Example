/*2. Demonstrate int, float, double and char pointer.*/
#include <stdio.h>

int main()
{
  int a = 10;
  float b = 5.25;
  double c = 15.75;
  char d = 'A';
  int *intPtr = &a;
  float *floatPtr = &b;
  double *doublePtr = &c;
  char *charPtr = &d;
  printf("Using pointers to print values:\n");
  printf("Value of int a: %d\n", *intPtr);
  printf("Value of float b: %.2f\n", *floatPtr);
  printf("Value of double c: %.2f\n", *doublePtr);
  printf("Value of char d: %c\n", *charPtr);
  printf("\n");
  printf("Address of int a: %p\n", intPtr);
  printf("Address of float b: %p\n", floatPtr);
  printf("Address of double c: %p\n", doublePtr);
  printf("Address of char d: %p\n", charPtr);
  return 0;
}
