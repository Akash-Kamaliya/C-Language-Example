#include <stdio.h>
#include <stdlib.h>

struct Node {
    int info;
    struct Node *link;
};

struct Node *first = NULL;

void insertAtFirst(int x) {
    struct Node *newNode;
    newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->info = x;
    newNode->link = first;
    first = newNode;
}
void countNodes(){
    struct Node *save = first;
    int c=0;
    while (save!=NULL)
    {
        save = save->link;
        c++;
    }
    printf("There are %d Nodes:\n",c);
}
void printList() {
    struct Node *temp = first;
    while (temp != NULL) {
        printf("%d ", temp->info);
        temp = temp->link;
    }
    printf("\n");
}

int main() {
    insertAtFirst(10);
    insertAtFirst(20);
    insertAtFirst(30);
    insertAtFirst(40);
    insertAtFirst(50);
    printList();
    countNodes();
    return 0;
}
