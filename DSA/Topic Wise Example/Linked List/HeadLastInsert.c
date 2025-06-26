#include <stdio.h>
#include <stdlib.h>

struct Node {
    int info;
    struct Node *link;
};

struct Node *head = NULL;
struct Node *last = NULL;

void headLastInsert(int x) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->info = x;

    newNode->link = head;
    last->link = newNode;
    last = newNode;
}
void initializeHeadList() {
    head = (struct Node *)malloc(sizeof(struct Node));
    head->link = head;
    last = head;
}
void printList() {
    struct Node *temp = head->link;
    if (temp == head) {
        printf("List is empty\n");
        return;
    }
    while (temp != head) {
        printf("%d ", temp->info);
        temp = temp->link;
    }
    printf("\n");
}
int main() {
    initializeHeadList();

    headLastInsert(10);
    headLastInsert(20);
    headLastInsert(30);
    headLastInsert(40);
    headLastInsert(50);

    printf("Circular Linked List (using HEAD node):\n");
    printList();

    return 0;
}
