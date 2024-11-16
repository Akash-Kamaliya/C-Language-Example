#include <stdio.h>
#include <string.h>
int main()
{
    char list[10][20] = {"het", "sandip", "akash", "harsh", "mann", "meet", "dhruv", "krish", "vandan", "dev"};
    int i;
    char yourname[20];
    printf("Enter Your name:");
    scanf("%s", yourname);
    for (i = 0; i <= 9; i++)
    {
        if (strcmp(&list[i][0], yourname) == 0)
        {
            printf("Welcome , you can enter the palace\n");
            return 0;
        }
    }
    printf("Sorry,You are a trespasser");
    return 0;
}