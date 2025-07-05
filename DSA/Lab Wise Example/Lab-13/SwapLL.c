//68. Write a program to swap two consecutive nodes in the linked list. Don’t change the values of nodes, implement by changing the link of the nodes.
// Input: 1 → 2 → 3 → 4 → 5 → 6 → 7 → 8
// Output: 2 → 1 → 4 → 3 → 6 → 5 → 8 → 7
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int info;
    struct Node *link;
};

struct Node *First = NULL;

void create(int arr[], int n) {
    struct Node *temp, *last;
    First = (struct Node *)malloc(sizeof(struct Node));
    First->info = arr[0];
    First->link = NULL;
    last = First;

    for (int i = 1; i < n; i++) {
        temp = (struct Node *)malloc(sizeof(struct Node));
        temp ->info = arr[i];
        temp ->link = NULL;
        last->link = temp;
        last = temp;
    }
}

void display(struct Node *p) {
    while (p != NULL) {
        printf("%d ", p->info);
        p = p->link;
    }
    printf("\n");
}

void swap() {
    if (First == NULL || First->link == NULL)
        return;

    struct Node* prev = NULL;
    struct Node* current = First;

    First = current->link;

    while (current != NULL && current->link != NULL) {
        struct Node* link = current->link;
        struct Node* linkPair = link->link;

        link->link = current;
        current->link = linkPair;

        if (prev != NULL)
            prev->link = link;

        prev = current;
        current = linkPair;
    }
}

int main() {
    int arr[] = {7, 3, 9, 1, 5,4};
    int n = sizeof(arr) / sizeof(arr[0]);
    create(arr, n);
    printf("Original List: ");
    display(First);
    swap(First);
    printf("swaped List: ");
    display(First);
    return 0;
}