/*creat a structure to store vectors. then make a function to return sum of 2 vectors.*/
#include <stdio.h>

// User Define
struct vector
{
  int x;
  int y;
};
void calcSum(struct vector v1, struct vector v2, struct vector sum);
int main()
{
  struct vector v1 = {5, 10};
  struct vector v2 = {5, 10};
  struct vector sum = {5, 10};
  calcSum(v1, v2, sum);
  return 0;
}
void calcSum(struct vector v1, struct vector v2, struct vector sum)
{
  sum.x = v1.x + v2.x;
  sum.y = v1.y + v2.y;
  printf("Sum of x is : %d\n", sum.x);
  printf("Sum of y is : %d\n", sum.y);
}