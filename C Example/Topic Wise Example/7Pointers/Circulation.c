#include <stdio.h>
void Circulation(int *a,int *b,int *c);
int main()
{
    int x = 5, y = 8, z = 10;
    printf("Before CIrculation :\n");
    printf("X=%d Y=%d Z=%d\n", x, y ,z);
    printf("After CIrculation :\n");
    Circulation(&x,&y,&z);
    printf("X=%d Y=%d Z=%d\n", x, y ,z);
    return 0;
}
void Circulation(int *a, int *b, int *c)
{
    int temp = *a;
    *a = *c;
    *c = *b;
    *b = temp;
    
}