//8.WAP to check whether 2 singly linked lists are same or not.
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void insertEnd(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    struct Node* temp = *head;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = newNode;
}

int areSame(struct Node* head1, struct Node* head2) {
    while (head1 != NULL && head2 != NULL) {
        if (head1->data != head2->data)
            return 0;
        head1 = head1->next;
        head2 = head2->next;
    }
    if (head1 == NULL && head2 == NULL)
        return 1;
    return 0;
}
int main() {
    struct Node* head1 = NULL;
    struct Node* head2 = NULL;
    int n1, n2, val, i;

    printf("Enter number of elements in first list: ");
    scanf("%d", &n1);
    printf("Enter elements of first list:\n");
    for (i = 0; i < n1; i++) {
        scanf("%d", &val);
        insertEnd(&head1, val);
    }

    printf("Enter number of elements in second list: ");
    scanf("%d", &n2);
    printf("Enter elements of second list:\n");
    for (i = 0; i < n2; i++) {
        scanf("%d", &val);
        insertEnd(&head2, val);
    }

    if (areSame(head1, head2))
        printf("Both linked lists are same.\n");
    else
        printf("Linked lists are not same.\n");
    return 0;
}