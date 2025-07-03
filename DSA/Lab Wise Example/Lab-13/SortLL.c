//Write a program to sort elements of a linked list.
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

void sort() {
    struct Node *i, *j;
    int temp;
    for (i = First; i != NULL; i = i->link) {
        for (j = i->link; j != NULL; j = j->link) {
            if (i->info > j->info) {
                temp = i->info;
                i->info = j->info;
                j->info = temp;
            }
        }
    }
}

int main() {
    int arr[] = {7, 3, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    create(arr, n);
    printf("Original List: ");
    display(First);
    sort();
    printf("Sorted List: ");
    display(First);
    return 0;
}