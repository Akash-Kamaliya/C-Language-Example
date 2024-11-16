#include <stdio.h>

int main()
{
    char footballer[40];
    puts("Enter name");
    gets(footballer); /*Sends base address of array*/
    puts("Happy footballing !");
    puts(footballer);
    return 0;
}