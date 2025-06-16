/*1. Print number and its square root for 0 to 9.*/
#include <stdio.h>
#include <math.h>

int main()
{
     int n, i = 1;
     printf("Enter A number:\n");
     scanf("%d", &n);
     while (i <= n)
     {
          printf("%d 's root is =%f\n", i++, pow(i, 0.5));
     }
     return 0;
}