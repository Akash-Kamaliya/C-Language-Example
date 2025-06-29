#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *prev;
    struct Node *next;
};

struct Node *L = NULL;
struct Node *R = NULL;

void DOU_INS(struct Node *M, int X) {
    struct Node *NEW = (struct Node *)malloc(sizeof(struct Node));
    if (NEW == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }

    NEW->data = X;

    if (R == NULL) {
        NEW->prev = NULL;
        NEW->next = NULL;
        L = R = NEW;
        return;
    }

    if (M == L) {
        NEW->prev = NULL;
        NEW->next = M;
        M->prev = NEW;
        L = NEW;
        return;
    }

    NEW->prev = M->prev;
    NEW->next = M;
    M->prev = NEW;
    if (NEW->prev != NULL)
        NEW->prev->next = NEW;
}

void displayList() {
    struct Node *temp = L;
    printf("Doubly Linked List: ");
    while (temp != NULL) {
        printf("%d <-> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

void insertAtEnd(int x) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = x;
    newNode->next = NULL;
    newNode->prev = NULL;

    if (R == NULL) {
        L = R = newNode;
    } else {
        R->next = newNode;
        newNode->prev = R;
        R = newNode;
    }
}

struct Node *findNode(int val) {
    struct Node *temp = L;
    while (temp != NULL) {
        if (temp->data == val)
            return temp;
        temp = temp->next;
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
