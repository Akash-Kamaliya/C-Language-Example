#include <stdio.h>
#include <stdlib.h>

struct Node {
    int info;
    struct Node *link;
};

struct Node *first = NULL;
struct Node *last = NULL;

void insertAtFirst_Circular(int x) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->info = x;

    if (first == NULL) {
        newNode->link = newNode;  // Self loop
        first = last = newNode;
    } else {
        newNode->link = first;
        last->link = newNode;
        first = newNode;
    }
}
void printCircularList() {
    if (first == NULL) {
        printf("List is empty\n");
        return;
    }

    struct Node *temp = first;
    do {
        printf("%d ", temp->info);
        temp = temp->link;
    } while (temp != first);
    printf("\n");
}
int main() {
    insertAtFirst_Circular(10);
    insertAtFirst_Circular(20);
    insertAtFirst_Circular(30);
    insertAtFirst_Circular(40);
    insertAtFirst_Circular(50);

    printf("Circular Linked List:\n");
    printCircularList();

    return 0;
}
