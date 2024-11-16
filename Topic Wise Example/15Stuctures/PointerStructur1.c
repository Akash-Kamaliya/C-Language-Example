/*creat a structure to store complex number cuse arrow operator.*/
#include <stdio.h>

// User Define
struct complex
{
  int real;
  int img;
};
int main()
{
  struct complex num1 = {5, 8};
  struct complex *ptr = &num1;
  printf("Real Part =%d\n", num1.real); //
  printf("Img Part =%d\n", num1.img);
  printf("Real Part =%d\n", ptr->real); //
  printf("Img Part =%d\n", ptr->img);
  printf("Real Part =%d\n", (*ptr).real); //
  printf("Img Part =%d\n", (*ptr).img);
  return 0;
}