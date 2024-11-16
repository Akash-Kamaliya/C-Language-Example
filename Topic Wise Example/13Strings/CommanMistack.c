#include <stdio.h>

int main()
{
    char str1[] = "Hello", str2[20] = "Hi";
    char *p = "Hello", *s = "Hi";
    str1 = "Adieu"; /* error, constant pointer cannot change */
    str1 = str2;    /*error, constant pointer cannot change */
    str1++;         /* error, constant pointer cannot change */
    *str1 = 'Z';    /*works, because string is not constant */
    p = "Adieu";    /*works, because pointer is not constant */
    p = s;          /* works, because pointer is not constant */
    p++;            /* works, because pointer is not constant */
    *p = 'M';       /* error, because string is constant */
    return 0;
}