/*write a program to print all the ASCII values and their equivalent character using a while loop in c language.
The Ascii values vary from 0 to 255.*/
#include <stdio.h>

int main()
{
    int i = 0;
    while (i <= 255)
    {
        printf("ASCII value of %d is: %c\n", i, i);
        i++;
    }
    return 0;
}
