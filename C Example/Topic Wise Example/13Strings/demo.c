#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[100];
    char str1[100] = "";
    char str2[100] = "";

    printf("Enter a string :");
    gets(str);
    int j = 0, k = 0, a = 0, b = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if( (str[i]>='A'&&str[i]<='Z')|| (str[i]>='a'&&str[i]<='z'))
        {
            str1[j++] = str[i];
            a++;
        }
        else
        {
            str2[k++] = str[i];
            b++;
        }
    }
    str1[j++] = a + '0';///This is main
    str1[j] = '\0';
    str2[k++] = b + '0';///This is main
    str2[k] = '\0';

    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);

    return 0;
}
