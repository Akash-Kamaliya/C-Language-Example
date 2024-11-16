#include<stdio.h>

int main()
{
  int i,j,n=5;
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=i;j++)
    {
      printf("1");
    }
    printf("\n");
  }
  return 0;
}
/*
1
11
111
1111
11111
*/