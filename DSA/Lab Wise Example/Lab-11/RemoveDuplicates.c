// Write a program to remove the duplicates nodes from given Linked List.
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int info;
    struct Node *link;
};

struct Node *newNode(int info)
{
    struct Node *save = (struct Node *)malloc(sizeof(struct Node));
    save->info = info;
    save->link = NULL;
    return save;
}

void insertEnd(struct Node **First, int info)
{
    struct Node *save = newNode(info);
    if (*First == NULL)
    {
        *First = save;
        return;
    }
    struct Node *curr = *First;
    while (curr->link != NULL)
        curr = curr->link;
    curr->link = save;
}

void printList(struct Node *First)
{
    while (First != NULL)
    {
        printf("%d", First->info);
        if (First->link != NULL)
            printf(" -> ");
        First = First->link;
    }
    printf("\n");
}

void removeDuplicates(struct Node *First)
{
    struct Node *curr1 = First;
    while (curr1 != NULL && curr1->link != NULL)
    {
        struct Node *prev = curr1;
        struct Node *curr2 = curr1->link;
        while (curr2 != NULL)
        {
            if (curr1->info == curr2->info)
            {
                prev->link = curr2->link;
                free(curr2);
                curr2 = prev->link;
            }
            else
            {
                prev = curr2;
                curr2 = curr2->link;
            }
        }
        curr1 = curr1->link;
    }
}

int main()
{
    struct Node *First = NULL;
    int arr[] = {1, 13, 6, 13, 1, 13, 27, 27};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
        insertEnd(&First, arr[i]);

    printf("Original List:\n");
    printList(First);

    removeDuplicates(First);

    printf("List after removing duplicates:\n");
    printList(First);

    // Free memory
    struct Node *save;
    while (First != NULL)
    {
        save = First;
        First = First->link;
        free(save);
    }
    return 0;
}