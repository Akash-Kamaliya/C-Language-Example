/*3. Count simple interest using function.*/
#include <stdio.h>
int interest(int p, int n, float r);
int main()
{
  int p, n;
  float r;

  printf("How much Principal Amount:\n");
  scanf("%d", &p);
  printf("How much Rate of Interest:\n");
  scanf("%f", &r);
  printf("How much Time (in Year):\n");
  scanf("%d", &n);
  interest(p, n, r);
  return 0;
}
int interest(int p, int n, float r)
{
  printf("The Simple Interest is :%f", (p * n * r) / 100);
  return 0;
}