#include <stdio.h>
#include <stdlib.h>

struct Node {
    int info;
    struct Node* link;
};

struct Node* First = NULL;

struct Node* createNode(int val) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->info = val;
    newNode->link = NULL;
    return newNode;
}

void insertEnd(int val) {
    struct Node* newNode = createNode(val);
    if (First == NULL) {
        First = newNode;
        newNode->link = First;
    } else {
        struct Node* temp = First;
        while (temp->link != First)
            temp = temp->link;
        temp->link = newNode;
        newNode->link = First;
    }
}

void printList(struct Node* node) {
    if (node == NULL) return;
    struct Node* temp = node;
    do {
        printf("%d ", temp->info);
        temp = temp->link;
    } while (temp != node);
    printf("\n");
}

void splitCircular(struct Node* First, struct Node** First1_ref, struct Node** First2_ref) {
    struct Node* slow = First;
    struct Node* fast = First;

    if (First == NULL)
        return;

    while (fast->link != First && fast->link->link != First) {
        slow = slow->link;
        fast = fast->link->link;
    }

    if (fast->link->link == First)
        fast = fast->link;

    *First1_ref = First;
    *First2_ref = slow->link;

    slow->link = *First1_ref;

    fast->link = *First2_ref;
}

int main() {
    for (int i = 1; i <= 5; i++) {
        insertEnd(i);
    }

    printf("Original Circular Linked List:\n");
    printList(First);

    struct Node* First1 = NULL;
    struct Node* First2 = NULL;

    splitCircular(First, &First1, &First2);

    printf("\nFirst Half:\n");
    printList(First1);

    printf("Second Half:\n");
    printList(First2);

    return 0;
}
