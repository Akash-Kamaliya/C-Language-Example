//Write a program to copy a linked list.
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int info;
    struct Node *link;
};

struct Node *first = NULL; 

struct Node *AVAIL, *NEW, *BEGIN, *SAVE, *PRED;
struct Node* copyList(struct Node *FIRST) {

    if (FIRST == NULL)
        return NULL;
///////////////////////////////////////////////////TO MAKE BEGIN NODE
    AVAIL = (struct Node *)malloc(sizeof(struct Node));
    if (AVAIL == NULL) {
        printf("Underflow\n");
        return NULL;
    }
    NEW = AVAIL;
    NEW->info = FIRST->info;
    BEGIN = NEW;
    AVAIL = NULL; 
/////////////////////////////////////////////////TO COPY LL
    SAVE = FIRST;

    // Step 4: Traverse the list and copy each node
    while (SAVE->link != NULL) {
        // Step 5: Update predecessor and move SAVE to next
        PRED = NEW;
        SAVE = SAVE->link;

        AVAIL = (struct Node *)malloc(sizeof(struct Node));
        if (AVAIL == NULL) {
            printf("Underflow\n");
            return NULL;
        }

        NEW = AVAIL;
        NEW->info = SAVE->info;
        AVAIL = NULL;  // Mark AVAIL used

        PRED->link = NEW;  // Link previous node to new
    }

    NEW->link = NULL;
    return BEGIN;
}
void insertAtFirst(int x) {
    struct Node *newNode;
    newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->info = x;
    newNode->link = first;
    first = newNode;
}

void printList(struct Node *x) {
    struct Node *temp = x;
    while (temp != NULL) {
        printf("%d ", temp->info);
        temp = temp->link;
    }
    printf("\n");
}

int main() {
    insertAtFirst(10);
    insertAtFirst(20);
    insertAtFirst(30);
    insertAtFirst(40);
    insertAtFirst(50);
    printList(first);
    copyList(first);
    printList(BEGIN);
    return 0;
}