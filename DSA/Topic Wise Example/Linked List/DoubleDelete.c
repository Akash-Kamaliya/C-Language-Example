#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *prev;
    struct Node *next;
};

struct Node *L = NULL, *R = NULL;

void DOU_DEL(struct Node *OLD) {
    if (R == NULL) {
        printf("UNDERFLOW\n");
        return;
    }

    if (L == R) {
        L = R = NULL;
    } else if (OLD == L) {
        L = L->next;
        if (L != NULL)
            L->prev = NULL;
    } else if (OLD == R) {
        R = R->prev;
        if (R != NULL)
            R->next = NULL;
    } else {
        OLD->prev->next = OLD->next;
        OLD->next->prev = OLD->prev;
    }

    free(OLD);
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

void displayList() {
    struct Node *temp = L;
    printf("Doubly Linked List: ");
    while (temp != NULL) {
        printf("%d <-> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    insertAtEnd(10);
    insertAtEnd(20);
    insertAtEnd(30);
    insertAtEnd(40);
    insertAtEnd(50);

    printf("Before deletion:\n");
    displayList();

    struct Node *nodeToDelete = findNode(10);
    if (nodeToDelete != NULL) {
        DOU_DEL(nodeToDelete);
    }

    nodeToDelete = findNode(50);
    if (nodeToDelete != NULL) {
        DOU_DEL(nodeToDelete);
    }

    nodeToDelete = findNode(30);
    if (nodeToDelete != NULL) {
        DOU_DEL(nodeToDelete);
    }

    printf("\nAfter deletions:\n");
    displayList();

    return 0;
}
