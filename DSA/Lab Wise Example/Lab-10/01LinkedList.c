#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int info;
    struct Node *link;
};

int main()
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));

    if (newNode == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter info for the node: ");
    scanf("%d", &newNode->info);

    newNode->link = NULL;

    printf("\nNode info:\n");
    printf("info: %d\n", newNode->info);
    printf("link: %p\n", (void *)newNode->link);

    free(newNode);

    return 0;
}
