#include <stdio.h>
#include <stdlib.h>

struct Node {
    int info;
    struct Node *link;
};

struct Node *first = NULL;

void insertAtLast(int x) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->info = x;
    newNode->link = NULL;

    if (first == NULL) {
        first = newNode;
    } else {
        struct Node *save = first;
        while (save->link != NULL) {
            save = save->link;
        }
        save->link = newNode;
    }
}

void printList() {
    struct Node *temp = first;
    printf("Linked List: ");
    while (temp != NULL) {
        printf("%d ", temp->info);
        temp = temp->link;
    }
    printf("\n");
}

int main() {
    insertAtLast(10);
    insertAtLast(20);
    insertAtLast(30);
    insertAtLast(40);

    printList();
    return 0;
}
