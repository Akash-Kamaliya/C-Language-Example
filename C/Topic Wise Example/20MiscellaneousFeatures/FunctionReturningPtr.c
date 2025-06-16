#include <stdio.h>
int *fun();
int main()
{
    int *p;
    p = fun();
    return 0;
}
int *fun()
{
    static int i = 20;
    return (&i);
}
