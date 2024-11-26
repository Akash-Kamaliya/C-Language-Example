/*5. Swap two numbers using call by Reference .*/
#include <stdio.h>

void Swap(int *x, int *y); 

int main()
{
    int a, b;
    printf("Enter a value of A: ");
    scanf("%d", &a);
    printf("Enter a value of B: ");
    scanf("%d", &b);
    Swap(&a, &b); 
    printf("After swapping in main:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0; 
}

void Swap(int *x, int *y)
{
    int t = *x;
    *x = *y;
    *y = t;
    printf("Inside Swap function:\n");
    printf("a = %d\n", *x);
    printf("b = %d\n", *y);
}
