#include <stdio.h>
#include <stdlib.h>

struct Node {
    int info;
    struct Node* prev;
    struct Node* link;
};

struct Node* First = NULL;

struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->info = value;
    newNode->prev = NULL;
    newNode->link = NULL;
    return newNode;
}

void insertEnd(int value) {
    struct Node* newNode = createNode(value);
    if (First == NULL) {
        First = newNode;
    } else {
        struct Node* temp = First;
        while (temp->link != NULL)
            temp = temp->link;
        temp->link = newNode;
        newNode->prev = temp;
    }
}

void display() {
    struct Node* temp = First;
    while (temp != NULL) {
        printf("%d", temp->info);
        if (temp->link != NULL)
            printf(" <-> ");
        temp = temp->link;
    }
    printf("\n");
}

void deleteAlternate() {
    if (First == NULL || First->link == NULL)
        return;

    struct Node* current = First->link;
    struct Node* prev = First;

    while (current != NULL) {
        prev->link = current->link;
        if (current->link != NULL)
            current->link->prev = prev;

        free(current);

        prev = prev->link;
        if (prev != NULL)
            current = prev->link;
        else
            break;
    }
}

int main() {
    insertEnd(10);
    insertEnd(20);
    insertEnd(30);
    insertEnd(40);
    insertEnd(50);

    printf("Original List:\n");
    display();

    deleteAlternate();

    printf("After Deleting Alternate Nodes:\n");
    display();

    return 0;
}
