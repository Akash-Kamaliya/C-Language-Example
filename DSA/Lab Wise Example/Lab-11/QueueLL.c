#include<stdio.h>
#include<stdlib.h>

struct Node {
    int info;
    struct Node * link;
};
struct Node *First = NULL;

int dequeue(){//Remove From Queue From First
    if(First==NULL){
        printf("Linkked List is Empty");
        return -1;
    }
    struct Node *save = First;
    save = save->link;
    int x = First->info;
    First->link = NULL;
    free(First);
    First = save;
    return x;
}
void enqueue(int value) {//Insert Queue From First
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->info = value;
    newNode->link = First;
    First = newNode;
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
int main(){
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    printList(First);
    int a = queue();
    printf("%d \n",a);
    int b = queue();
    printf("%d \n",b);
    printList(First);
    return 0;
}