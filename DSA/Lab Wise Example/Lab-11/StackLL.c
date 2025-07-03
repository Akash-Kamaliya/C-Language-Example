#include<stdio.h>
#include<stdlib.h>

struct Node {
    int info;
    struct Node * link;
};
struct Node *First = NULL;
void push(int x){//Insert In Stack From Last
    struct Node * newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->info = x;
    newNode->link = NULL;
    if(First == NULL){
        First = newNode;
        return;
    }
    struct Node *save = First;
    while (save->link!=NULL)
    save = save->link;
    save->link = newNode;
    return;
}
int pop(){//Remove From Stack From First
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
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    printList(First);
    int a = pop();
    printf("%d \n",a);
    int b = pop();
    printf("%d \n",b);
    printList(First);
    return 0;
}