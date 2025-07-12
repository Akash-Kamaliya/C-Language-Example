#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX 100

char stack[MAX];
int top = -1;

void push(char ch) {
    if (top < MAX - 1) {
        stack[++top] = ch;
    }
}

char pop() {
    if (top >= 0) {
        return stack[top--];
    }
    return '\0';
}

bool isPalindrome(char str[]) {
    int len = strlen(str);
    int i;

    for (i = 0; i < len / 2; i++) {
        push(str[i]);
    }

    if (len % 2 != 0) {
        i++;
    }

    while (i < len) {
        char ch = pop();
        if (ch != str[i]) {
            return false;
        }
        i++;
    }

    return true;
}

int main() {
    char *strings[] = {"aca", "bcb", "abcba", "abbcbba"};
    int n = sizeof(strings) / sizeof(strings[0]);

    printf("Checking palindrome using stack:\n\n");
    for (int i = 0; i < n; i++) {
        top = -1; 
        printf("String: %s => ", strings[i]);
        if (isPalindrome(strings[i])) {
            printf("(Palindrome)\n");
        } else {
            printf("(Not Palindrome)\n");
        }
    }
    return 0;
}
