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
        printf("%d-> ", p->info);
        p = p->link;
    }
    printf("\n");
}

int findGcd(int a , int b){
    while (b != 0)
    {
    int temp = b;
    b = a % b;
    a = temp;
    }
    return a;
}
void gcdLL(){
    struct Node *save = First;
    struct Node *pred = NULL;
    pred = save;
    save= save->link;
    while(save!=NULL){
        struct Node * newNode = (struct Node *)malloc(sizeof(struct Node));
        int a = pred->info;
        int b = save->info;
        int c = (int)findGcd(a,b);
        newNode->info = c;
        newNode->link = save;
        pred->link = newNode;
        pred = save;
        save = save->link;
    }

}

int main() {
    int arr[] = {2,4,8,12};
    int n = sizeof(arr) / sizeof(arr[0]);
    create(arr, n);
    printf("Original List: ");
    display(First);
    gcdLL();
    display(First);
    return 0;
}