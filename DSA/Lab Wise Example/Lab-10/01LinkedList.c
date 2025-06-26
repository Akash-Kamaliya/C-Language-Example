#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    struct Node *node = (struct Node *)malloc(sizeof(struct Node));

    if (node == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter data for the node: ");
    scanf("%d", &node->data);

    node->next = NULL;

    printf("\nNode data:\n");
    printf("Data: %d\n", node->data);
    printf("Next: %p\n", (void *)node->next);

    free(node);

    return 0;
}
