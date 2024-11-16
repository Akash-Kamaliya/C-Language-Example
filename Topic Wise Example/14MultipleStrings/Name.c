#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    printf("Enter the number of names: ");
    scanf("%d", &n);
    getchar();
    char names[n][100];
    for (int i = 0; i < n; i++)
    {
        printf("Enter name %d (first middle last): ", i + 1);
        fgets(names[i], sizeof(names[i]), stdin);
        size_t len = strlen(names[i]);
        if (len > 0 && names[i][len - 1] == '\n')
        {
            names[i][len - 1] = '\0';
        }
    }
    printf("\nAbbreviated Names:\n");
    for (int i = 0; i < n; i++)
    {
        char first[20], middle[20], last[20];
        sscanf(names[i], "%s %s %s", first, middle, last);
        printf("%c. %c. %s\n", first[0], middle[0], last);
    }
    return 0;
}
