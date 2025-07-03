// 65.WAP to swap Kth node from beginning with Kth node from end in a singly linked list.
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int info;
    struct Node *link;
};

struct Node *first = NULL;

void push(int info)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->info = info;
    newNode->link = first;
    first = newNode;
}

void printList()
{
    struct Node *save = first;
    while (save != NULL)
    {
        printf("%d ", save->info);
        save = save->link;
    }
    printf("\n");
}

int countNodes()
{
    int count = 0;
    struct Node *save = first;
    while (save != NULL)
    {
        count++;
        save = save->link;
    }
    return count;
}

void swapKth(int k)
{
    int n = countNodes();
    if (k > n || k <= 0)
    {
        printf("Invalid value of k\n");
        return;
    }
    if (2 * k - 1 == n)
        return;

    struct Node *x = first, *xprev = NULL;
    for (int i = 1; i < k; i++)
    {
        xprev = x;
        x = x->link;
    }

    struct Node *y = first, *yprev = NULL;
    for (int i = 1; i < n - k + 1; i++)
    {
        yprev = y;
        y = y->link;
    }

    if (xprev)
        xprev->link = y;
    if (yprev)
        yprev->link = x;

    struct Node *save = x->link;
    x->link = y->link;
    y->link = save;

    if (k == 1)
        first = y;
    if (k == n)
        first = x;
}

int main()
{
    for (int i = 8; i >= 1; i--)
        push(i);

    printf("Original list:\n");
    printList();

    int k = 4;
    swapKth(k);

    printf("List after swapping %dth node from start and end:\n", k);
    printList();

    return 0;
}