/*Write a program that interchange element at odd position wtith element at even position in array of 10 element:*/
#include <stdio.h>

int main()
{
    int num[] = {12, 4, 5, 1, 9, 13, 11, 19, 54, 34};
    int i, t;
    for (i = 0; i <= 9; i = i + 2)
    {
        t = num[i];
        num[i] = num[i + 1];
        num[i + 1] = t;
    }
    for (i = 0; i <= 9; i++)
    {
        printf("%d\t", num[i]);
    }
    return 0;
}