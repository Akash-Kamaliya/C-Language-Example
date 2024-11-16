#include <stdio.h>
#include<math.h>
int main()
{
  int x;

  printf("enter side of square:");
  scanf("%d", &x);
  //Solution 1
  printf("the Area of Square is :%d", x*x);
  //Solution 2
  printf("the Area of Square is :%f", pow(x,2));
// Power Function must need Flote value :
  return 0;
  
}