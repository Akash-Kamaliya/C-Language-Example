//8.WAP to check whether 2 singly linked lists are same or not.
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int info;
    struct Node* link;
};

struct Node* createNode(int info) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->info = info;
    newNode->link = NULL;
    return newNode;
}

void insertEnd(struct Node** First, int info) {
    struct Node* newNode = createNode(info);
    if (*First == NULL) {
        *First = newNode;
        return;
    }
    struct Node* temp = *First;
    while (temp->link != NULL)
        temp = temp->link;
    temp->link = newNode;
}

int areSame(struct Node* First1, struct Node* First2) {
    while (First1 != NULL && First2 != NULL) {
        if (First1->info != First2->info)
            return 0;
        First1 = First1->link;
        First2 = First2->link;
    }
    if (First1 == NULL && First2 == NULL)
        return 1;
    return 0;
}
int main() {
    struct Node* First1 = NULL;
    struct Node* First2 = NULL;
    int n1, n2, val, i;

    printf("Enter number of elements in first list: ");
    scanf("%d", &n1);
    printf("Enter elements of first list:\n");
    for (i = 0; i < n1; i++) {
        scanf("%d", &val);
        insertEnd(&First1, val);
    }

    printf("Enter number of elements in second list: ");
    scanf("%d", &n2);
    printf("Enter elements of second list:\n");
    for (i = 0; i < n2; i++) {
        scanf("%d", &val);
        insertEnd(&First2, val);
    }

    if (areSame(First1, First2))
        printf("Both linked lists are same.\n");
    else
        printf("Linked lists are not same.\n");
    return 0;
}