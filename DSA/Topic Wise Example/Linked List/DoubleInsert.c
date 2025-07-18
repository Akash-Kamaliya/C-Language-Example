#include <stdio.h>
#include <stdlib.h>

struct Node {
    int info;
    struct Node *prev;
    struct Node *link;
};

struct Node *L = NULL;
struct Node *R = NULL;

void DOU_INS(struct Node *M, int X) {
    struct Node *NEW = (struct Node *)malloc(sizeof(struct Node));
    if (NEW == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }

    NEW->info = X;

    if (R == NULL) {
        NEW->prev = NULL;
        NEW->link = NULL;
        L = R = NEW;
        return;
    }

    if (M == L) {
        NEW->prev = NULL;
        NEW->link = M;
        M->prev = NEW;
        L = NEW;
        return;
    }

    NEW->prev = M->prev;
    NEW->link = M;
    M->prev = NEW;
    if (NEW->prev != NULL)
        NEW->prev->link = NEW;
}

void displayList() {
    struct Node *temp = L;
    printf("Doubly Linked List: ");
    while (temp != NULL) {
        printf("%d <-> ", temp->info);
        temp = temp->link;
    }
    printf("NULL\n");
}

void insertAtEnd(int x) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->info = x;
    newNode->link = NULL;
    newNode->prev = NULL;

    if (R == NULL) {
        L = R = newNode;
    } else {
        R->link = newNode;
        newNode->prev = R;
        R = newNode;
    }
}

struct Node *findNode(int val) {
    struct Node *temp = L;
    while (temp != NULL) {
        if (temp->info == val)
            return temp;
        temp = temp->link;
    }
    return NULL;
}

int main() {
    insertAtEnd(20);
    insertAtEnd(40);
    insertAtEnd(60);

    printf("Before insertion:\n");
    displayList();

    struct Node *position = findNode(40); 
    if (position != NULL) {
        DOU_INS(position, 30); 
    }

    position = findNode(20);
    if (position != NULL) {
        DOU_INS(position, 10);
    }

    printf("\nAfter insertions:\n");
    displayList();

    return 0;
}
