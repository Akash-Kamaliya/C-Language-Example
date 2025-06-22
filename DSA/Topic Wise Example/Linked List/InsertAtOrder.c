#include <stdio.h>
#include <stdlib.h>

struct Node {
    int info;
    struct Node *link;
};

struct Node *first = NULL;

void insertAtOrder(int x) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->info = x;

    //Location is first one
    if(first == NULL || newNode->info <= first->info){
        newNode->link = first;
        first = newNode;
        return;
    }
    //Search For the predeccessor node
    struct Node *save;
    save = first;
    while(save->link!=NULL&&newNode->info>=save->link->info){
        save = save -> link;
    }
    newNode->link = save->link;
    save->link = newNode;
}

void printList() {
    struct Node *temp = first;
    printf("Linked List: ");
    while (temp != NULL) {
        printf("%d ", temp->info);
        temp = temp->link;
    }
    printf("\n");
}

int main() {
    insertAtOrder(10);
    insertAtOrder(20);
    insertAtOrder(30);
    insertAtOrder(40);
    insertAtOrder(25);


    printList();
    return 0;
}
