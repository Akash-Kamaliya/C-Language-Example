#include <stdio.h>
int main()
{
    char *list[] = {"akshay", "paraag", "raman", "shrinivas", "gopal", "rajesh"};
    char *temp;
    printf("Original :%s %s\n", list[2], list[3]);
    temp = list[2];
    list[2] = list[3];
    list[3] = temp;
    printf("New :%s %s\n", list[2], list[3]);
    return 0;
}