#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int info;
    struct Node *link;
};

struct Node *head = NULL;

void headInsertFirst(int x)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->info = x;

    newNode->link = head->link;
    head->link = newNode;
}
void initializeList()
{
    head = (struct Node *)malloc(sizeof(struct Node));
    head->link = head;
}
void printList()
{
    struct Node *temp = head->link;
    if (temp == head)
    {
        printf("List is empty\n");
        return;
    }
    while (temp != head)
    {
        printf("%d ", temp->info);
        temp = temp->link;
    }
    printf("\n");
}
int main()
{
    initializeList();

    headInsertFirst(10);
    headInsertFirst(20);
    headInsertFirst(30);
    headInsertFirst(40);
    headInsertFirst(50);

    printf("List after head insertions:\n");
    printList();

    return 0;
}
