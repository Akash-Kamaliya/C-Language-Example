#include <stdio.h>
#include <stdlib.h>

struct Node {
    int info;
    struct Node *link;
};

struct Node *head = NULL;
struct Node *last = NULL;

void headInsertAfterP(int x, struct Node *P) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->info = x;

    newNode->link = P->link;

    P->link = newNode;

    if (P == last)
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

    // Insert some nodes at end
    headInsertAfterP(10, head);
    headInsertAfterP(15, last);
    headInsertAfterP(20, last);
    headInsertAfterP(25, last);


    printf("List before inserting 50 after node with 25:\n");
    printList();

    headInsertAfterP(50, last);

    printf("List after inserting 50:\n");
    printList();

    return 0;
}
