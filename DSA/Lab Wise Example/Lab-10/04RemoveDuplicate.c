//Write a program to remove the duplicates nodes from given sorted Linked List.
// Input: 1 → 1 → 6 → 13 → 13 → 13 → 27 → 27
// Output: 1 → 6 → 13 → 27
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int info;
    struct Node* link;
};

struct Node* newNode(int info) {
    struct Node* save = (struct Node*)malloc(sizeof(struct Node));
    save->info = info;
    save->link = NULL;
    return save;
}

void insertEnd(struct Node** First, int info) {
    struct Node* save = newNode(info);
    if (*First == NULL) {
        *First = save;
        return;
    }
    struct Node* curr = *First;
    while (curr->link != NULL)
        curr = curr->link;
    curr->link = save;
}

void printList(struct Node* First) {
    while (First != NULL) {
        printf("%d", First->info);
        if (First->link != NULL)
            printf(" -> ");
        First = First->link;
    }
    printf("\n");
}

void removeDuplicates(struct Node* First) {
    struct Node* curr = First;
    while (curr != NULL && curr->link != NULL) {
        if (curr->info == curr->link->info) {
            struct Node* save = curr->link;
            curr->link = curr->link->link;
            free(save);
        } else {
            curr = curr->link;
        }
    }
}

int main() {
    struct Node* First = NULL;
    int arr[] = {1, 1, 6, 13, 13, 13, 27, 27};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
        insertEnd(&First, arr[i]);

    printf("Original List:\n");
    printList(First);

    removeDuplicates(First);

    printf("List after removing duplicates:\n");
    printList(First);

    // Free memory
    struct Node* save;
    while (First != NULL) {
        save = First;
        First = First->link;
        free(save);
    }
    return 0;
}