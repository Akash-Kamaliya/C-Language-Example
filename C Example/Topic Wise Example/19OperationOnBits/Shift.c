#include <stdio.h>
void showbits(unsigned char);
int main()
{
    unsigned char num = 225, k;
    printf("\nDecimal %d is same as binar", num);
    showbits(num);
    k = num >> 1;
    printf("\n%d right shift 1 gives", num);
    showbits(k);
    k = num >> 2;
    printf("\n%d right shift 2 gives", num);
    showbits(k);
    k = num << 1;
    printf("\n%d right left 1 gives", num);
    showbits(k);
    k = num << 2;
    printf("\n%d right left 2 gives", num);
    showbits(k);
    return 0;
}
void showbits(unsigned char n)
{
    int i;
    unsigned char j, k, andmask;
    for (i = 7; i >= 0; i--)
    {
        j = i;
        andmask = 1 << j;
        k = n & andmask;
        k == 0 ? printf("0") : printf("1");
    }
}