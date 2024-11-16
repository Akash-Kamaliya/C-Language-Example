#include <stdio.h>
#include <stdbool.h>
#define MAX 10

char deque[MAX];
int left = -1, right = -1;

bool isFull()
{
    return (left == 0 && right == MAX - 1) || (left == right + 1);
}

bool isEmpty()
{
    return left == -1;
}
void insertLeft(char item);
void insertRight(char item);
void retrieveLeft();
void retrieveRight();
int main()
{
    int choice;
    char item;
    while (1)
    {
        printf("\nDeque Operations:\n");
        printf("1. Insert Left\n");
        printf("2. Insert Right\n");
        printf("3. Retrieve Left\n");
        printf("4. Retrieve Right\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter character to insert at left: ");
            scanf(" %c", &item);
            insertLeft(item);
            break;
        case 2:
            printf("Enter character to insert at right: ");
            scanf(" %c", &item);
            insertRight(item);
            break;
        case 3:
            retrieveLeft();
            break;
        case 4:
            retrieveRight();
            break;
        case 5:
            return 0;
        default:
            printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}
void retrieveRight()
{
    if (isEmpty())
    {
        printf("Deque is empty!\n");
        return;
    }
    printf("Element retrieved from right: %c\n", deque[right]);
    if (left == right)
    {
        left = right = -1; // Reset to empty state
    }
    else if (right == 0)
    {
        right = MAX - 1;
    }
    else
    {
        right--;
    }
}

void retrieveLeft()
{
    if (isEmpty())
    {
        printf("Deque is empty!\n");
        return;
    }
    printf("Element retrieved from left: %c\n", deque[left]);
    if (left == right)
    {
        left = right = -1; // Reset to empty state
    }
    else if (left == MAX - 1)
    {
        left = 0;
    }
    else
    {
        left++;
    }
}
void insertRight(char item)
{
    if (isFull())
    {
        printf("Deque is full!\n");
        return;
    }
    if (isEmpty())
    {
        left = right = 0;
    }
    else if (right == MAX - 1)
    {
        right = 0;
    }
    else
    {
        right++;
    }
    deque[right] = item;
}

void insertLeft(char item)
{
    if (isFull())
    {
        printf("Deque is full!\n");
        return;
    }
    if (isEmpty())
    {
        left = right = 0;
    }
    else if (left == 0)
    {
        left = MAX - 1;
    }
    else
    {
        left--;
    }
    deque[left] = item;
}
