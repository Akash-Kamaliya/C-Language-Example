#include <stdio.h>
int main()
{
    char list[][20] = {"akshay", "paraag", "raman", "shrinivas", "gopal", "rajesh"};
    int i;
    char t;
    printf("Original :%s %s\n", &list[2][0], &list[3][0]);
    for (i = 0; i <= 19; i++)
    {
        t = list[2][i];
        list[2][i] = list[3][i];
        list[3][i] = t;
    }
    printf("New %s  %s\n", &list[2][0], &list[3][0]);
    return 0;
}