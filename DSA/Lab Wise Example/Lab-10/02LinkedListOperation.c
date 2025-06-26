#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *head = NULL;

void insertAtFront(int value) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = head;
    head = newNode;
    printf("Inserted %d at front.\n", value);
}

void display() {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }
    struct Node *temp = head;
    printf("Linked List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

void deleteFirst() {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }
    struct Node *temp = head;
    head = head->next;
    printf("Deleted node with value %d from front.\n", temp->data);
    free(temp);
}

void insertAtEnd(int value) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
    } else {
        struct Node *temp = head;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = newNode;
    }
    printf("Inserted %d at end.\n", value);
}

void deleteLast() {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }
    if (head->next == NULL) {
        printf("Deleted node with value %d from end.\n", head->data);
        free(head);
        head = NULL;
        return;
    }

    struct Node *temp = head;
    while (temp->next->next != NULL)
        temp = temp->next;

    printf("Deleted node with value %d from end.\n", temp->next->data);
    free(temp->next);
    temp->next = NULL;
}

void deleteFromPosition(int pos) {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    if (pos == 1) {
        deleteFirst();
        return;
    }

    struct Node *temp = head;
    for (int i = 1; i < pos - 1 && temp->next != NULL; i++) {
        temp = temp->next;
    }

    if (temp->next == NULL) {
        printf("Invalid position.\n");
        return;
    }

    struct Node *delNode = temp->next;
    temp->next = delNode->next;
    printf("Deleted node with value %d from position %d.\n", delNode->data, pos);
    free(delNode);
}

void countNodes() {
    int count = 0;
    struct Node *temp = head;
    while (temp != NULL) {
        count++;
        temp = temp->next;
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
