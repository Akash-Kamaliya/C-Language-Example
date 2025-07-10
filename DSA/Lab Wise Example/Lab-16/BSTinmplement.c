#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int info;
    struct Node *left;
    struct Node *right;
};
struct Node *root = NULL;

void insert(int x)
{
    root = insertRecord(root, x);
}
struct Node *insertRecord(struct Node *root, int x)
{
    if (root == NULL)
    {
        struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
        root = newNode;
        newNode->info = x;
        return root;
    }
    if (x <= root->info)
    {
        root->left = insertRecord(root->left, x);
    }
    else
    {
        root->right = insertRecord(root->right, x);
    }
    return root;
}
void printPreorder(struct Node *root)
{
    if (root == NULL)
    {
        return;
    }
    printf(root->info + " ");
    printPreorder(root->left);
    printPreorder(root->right);
}
int main()
{
    insert(5);
    printPreorder(root);
    return 0;
}