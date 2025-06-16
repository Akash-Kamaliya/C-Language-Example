/*1. Shutdown Windows/Linux Shutdown Machine. [#include <stdlib.h> to be used for system
() function]*/
#include <stdlib.h> //Header file is  stdlib.c

int main()
{
    system("shutdown /s /f /t 0"); // to print something in terminal...
    return 0;
}
