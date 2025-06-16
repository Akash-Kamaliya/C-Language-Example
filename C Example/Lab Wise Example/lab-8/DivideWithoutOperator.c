/*3. Take two numbers input from user and perform a division operation and find out quotient
and reminder (without using / and % operator) also note that a smaller number should
divide a bigger number.*/
#include <stdio.h>

int main()
{
  int n1, n2, r, q = 0;
  printf("Enter first Number :");
  scanf("%d", &n1);
  printf("Enter Second Number:");
  scanf("%d", &n2);
  while (r >= n1)
  {
    r = n2 - n1;
    n2 = r;
    q++;
  }
  printf("Reminder is :%d\n", n2);
  printf("Quotient is :%d\n", q);
  return 0;
}