#include <stdio.h>
#define MAX 100

int stack[MAX];
int top = -1;

void push(int value) {
    if (top == MAX - 1) {
        printf("Stack Overflow! Cannot push %d\n", value);
    } else {
        top++;
        stack[top] = value;
        printf("%d pushed onto the stack.\n", value);
    }
}

void pop() {
    if (top == -1) {
        printf("Stack Underflow! Cannot pop.\n");
    } else {
        printf("Popped element: %d\n", stack[top]);
        top--;
    }
}

void display() {
    if (top == -1) {
        printf("Stack is empty.\n");
    } else {
        printf("Stack elements (top to bottom): ");
        for (int i = top; i >= 0; i--) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

void peep(int position) {
    if (top - position + 1 < 0) {
        printf("Invalid position! Stack Underflow on peep.\n");
    } else {
        printf("Element at position %d from top: %d\n", position, stack[top - position + 1]);
    }
}

void change(int position, int newValue) {
    if (top - position + 1 < 0) {
        printf("Invalid position! Stack Underflow on change.\n");
    } else {
        stack[top - position + 1] = newValue;
        printf("Element at position %d changed to %d.\n", position, newValue);
    }
}

int main() {
    int choice, value, position;

    do {
        printf("\n--- Stack Operations Menu ---\n");
        printf("1. PUSH\n");
        printf("2. POP\n");
        printf("3. DISPLAY\n");
        printf("4. PEEP (view element at position from top)\n");
        printf("5. CHANGE (modify element at position from top)\n");
        printf("6. EXIT\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("Enter value to PUSH: ");
            scanf("%d", &value);
            push(value);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("Enter position from top to PEEP: ");
            scanf("%d", &position);
            peep(position);
            break;
        case 5:
            printf("Enter position from top to CHANGE: ");
            scanf("%d", &position);
            printf("Enter new value: ");
            scanf("%d", &value);
            change(position, value);
            break;
        case 6:
            printf("Exiting program.\n");
            break;
        default:
            printf("Invalid choice. Please try again.\n");
        }

    } while (choice != 6);

    return 0;
}
