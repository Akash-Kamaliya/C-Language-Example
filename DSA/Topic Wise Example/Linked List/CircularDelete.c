#include <stdio.h>
#include <stdlib.h>

struct Node {
    int info;
    struct Node *link;
};

struct Node *first = NULL;
struct Node *last = NULL;

void deleteNode_Circular(int x) {
    if (first == NULL) {
        printf("Linked List is Empty\n");
        return;
    }

    struct Node *save = first;
    struct Node *pred = NULL;

    while (save->info != x && save != last) {
        pred = save;
        save = save->link;
    }

    if (save->info != x) {
        printf("Node not found\n");
        return;
    }

    if (save == first) {
        if (first == last) {
            first = last = NULL;
        } else {
            first = first->link;
            last->link = first;
        }
    } else {
        pred->link = save->link;
        if (save == last) {
            last = pred;
        }
    }
    free(save);
}
void insertAtEnd_Circular(int x) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->info = x;

    if (first == NULL) {
        newNode->link = newNode;
        first = last = newNode;
    } else {
        newNode->link = first;
        last->link = newNode;
        last = newNode;
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
    insertAtEnd_Circular(5);
    insertAtEnd_Circular(10);
    insertAtEnd_Circular(15);
    insertAtEnd_Circular(20);
    insertAtEnd_Circular(25);
    insertAtEnd_Circular(30);

    printf("Original Circular List:\n");
    printCircularList();

    deleteNode_Circular(20);
    printf("After deleting 20:\n");
    printCircularList();

    deleteNode_Circular(5);
    printf("After deleting 5 (first node):\n");
    printCircularList();

    deleteNode_Circular(30);
    printf("After deleting 30 (last node):\n");
    printCircularList();

    deleteNode_Circular(100);

    return 0;
}
