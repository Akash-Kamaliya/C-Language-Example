#include <stdio.h>
#include <stdlib.h>

struct Node {
    int info;
    struct Node *link;
};

struct Node *first = NULL;
struct Node *last = NULL;

void insertInOrder_Circular(int x) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->info = x;

    // 1: Empty list
    if (first == NULL) {
        newNode->link = newNode;
        first = last = newNode;
        return;
    }

    //2: Insert before the first node
    if (x <= first->info) {
        newNode->link = first;
        last->link = newNode;
        first = newNode;
        return;
    }

    //3: Traverse to find the correct position
    struct Node *save = first;
    while (save != last && x >= save->link->info) {
        save = save->link;
    }

    // Insert after save
    newNode->link = save->link;
    save->link = newNode;

    //4: If inserted at the end, update last
    if (save == last) {
        last = newNode;
    }
}
void printCircularList() {
    if (first == NULL) {
        printf("List is empty\n");
        return;
    }

    struct Node *temp = first;
    do {
        printf("%d ", temp->info);
        temp = temp->link;
    } while (temp != first);
    printf("\n");
}
int main() {
    insertInOrder_Circular(30);
    insertInOrder_Circular(10);
    insertInOrder_Circular(50);
    insertInOrder_Circular(20);
    insertInOrder_Circular(5);

    printf("Ordered Circular Linked List:\n");
    printCircularList();

    return 0;
}
