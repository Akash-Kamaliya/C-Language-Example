#include <stdio.h>
#include <stdlib.h>

struct Node {
    int info;
    struct Node *link;
};

struct Node *First = NULL;

void insertAtFront(int value) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->info = value;
    newNode->link = First;
    First = newNode;
    printf("Inserted %d at front.\n", value);
}

void display() {
    if (First == NULL) {
        printf("List is empty.\n");
        return;
    }
    struct Node *temp = First;
    printf("Linked List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->info);
        temp = temp->link;
    }
    printf("NULL\n");
}

void deleteFirst() {
    if (First == NULL) {
        printf("List is empty.\n");
        return;
    }
    struct Node *temp = First;
    First = First->link;
    printf("Deleted node with value %d from front.\n", temp->info);
    free(temp);
}

void insertAtEnd(int value) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->info = value;
    newNode->link = NULL;

    if (First == NULL) {
        First = newNode;
    } else {
        struct Node *temp = First;
        while (temp->link != NULL)
            temp = temp->link;
        temp->link = newNode;
    }
    printf("Inserted %d at end.\n", value);
}

void deleteLast() {
    if (First == NULL) {
        printf("List is empty.\n");
        return;
    }
    if (First->link == NULL) {
        printf("Deleted node with value %d from end.\n", First->info);
        free(First);
        First = NULL;
        return;
    }

    struct Node *temp = First;
    while (temp->link->link != NULL)
        temp = temp->link;

    printf("Deleted node with value %d from end.\n", temp->link->info);
    free(temp->link);
    temp->link = NULL;
}

void deleteFromPosition(int pos) {
    if (First == NULL) {
        printf("List is empty.\n");
        return;
    }

    if (pos == 1) {
        deleteFirst();
        return;
    }

    struct Node *temp = First;
    for (int i = 1; i < pos - 1 && temp->link != NULL; i++) {
        temp = temp->link;
    }

    if (temp->link == NULL) {
        printf("Invalid position.\n");
        return;
    }

    struct Node *delNode = temp->link;
    temp->link = delNode->link;
    printf("Deleted node with value %d from position %d.\n", delNode->info, pos);
    free(delNode);
}

void countNodes() {
    int count = 0;
    struct Node *temp = First;
    while (temp != NULL) {
        count++;
        temp = temp->link;
    }
    printf("Total number of nodes: %d\n", count);
}

int main() {
    int choice, value, pos;

    while (1) {
        printf("\n--- Singly Linked List Menu ---\n");
        printf("1. Insert at front\n");
        printf("2. Display all nodes\n");
        printf("3. Delete first node\n");
        printf("4. Insert at end\n");
        printf("5. Delete last node\n");
        printf("6. Delete node from specific position\n");
        printf("7. Count total nodes\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to insert at front: ");
                scanf("%d", &value);
                insertAtFront(value);
                break;
            case 2:
                display();
                break;
            case 3:
                deleteFirst();
                break;
            case 4:
                printf("Enter value to insert at end: ");
                scanf("%d", &value);
                insertAtEnd(value);
                break;
            case 5:
                deleteLast();
                break;
            case 6:
                printf("Enter position to delete: ");
                scanf("%d", &pos);
                deleteFromPosition(pos);
                break;
            case 7:
                countNodes();
                break;
            case 8:
                printf("Exiting program...\n");
                exit(0);
            default:
                printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}
