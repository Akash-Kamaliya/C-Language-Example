/*3. Calculate sum of two numbers using pointer.*/
#include <stdio.h>

int main()
{
  int num1, num2, temp;
  int *ptr1, *ptr2;
  printf("Enter the first number: ");
  scanf("%d", &num1);
  printf("Enter the second number: ");
  scanf("%d", &num2);
  ptr1 = &num1;
  ptr2 = &num2;
  temp = *ptr1;
  *ptr1 = *ptr2;
  *ptr2 = temp;
  printf("After swapping:\n");
  printf("First number: %d\n", *ptr1);
  printf("Second number: %d\n", *ptr2);
  return 0;
}
