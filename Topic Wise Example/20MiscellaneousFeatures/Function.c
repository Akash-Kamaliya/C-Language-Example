#include <stdio.h>
void display();
int main()
{
    void (*ptr)();
    ptr = display; /*asingn address of function*/
    printf("Address of function display is %u\n", ptr);
    (*ptr)();  /*invokes the function display()*/
    display(); /*usual way of invking a function*/
    return 0;
}
void display()
{
    printf("Long live excellance!!\n");
}