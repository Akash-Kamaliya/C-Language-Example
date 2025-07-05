#include <stdio.h>
#include <stdlib.h>

struct PolyNode {
    int coeff;
    int expo;
    struct PolyNode* link;
};

struct PolyNode* poly1 = NULL;
struct PolyNode* poly2 = NULL;
struct PolyNode* result = NULL;

struct PolyNode* createNode(int c, int e) {
    struct PolyNode* newNode = (struct PolyNode*)malloc(sizeof(struct PolyNode));
    newNode->coeff = c;
    newNode->expo = e;
    newNode->link = NULL;
    return newNode;
}

void insertTerm(struct PolyNode** poly, int c, int e) {
    struct PolyNode* newNode = createNode(c, e);
    if (*poly == NULL) {
        *poly = newNode;
    } else {
        struct PolyNode* temp = *poly;
        while (temp->link != NULL)
            temp = temp->link;
        temp->link = newNode;
    }
}

void display(struct PolyNode* poly) {
    struct PolyNode* temp = poly;
    while (temp != NULL) {
        printf("%dx^%d", temp->coeff, temp->expo);
        if (temp->link != NULL)
            printf(" + ");
        temp = temp->link;
    }
    printf("\n");
}

void addPolynomials() {
    struct PolyNode* p1 = poly1;
    struct PolyNode* p2 = poly2;

    while (p1 != NULL && p2 != NULL) {
        if (p1->expo > p2->expo) {
            insertTerm(&result, p1->coeff, p1->expo);
            p1 = p1->link;
        } else if (p1->expo < p2->expo) {
            insertTerm(&result, p2->coeff, p2->expo);
            p2 = p2->link;
        } else {
            int sum = p1->coeff + p2->coeff;
            if (sum != 0)
                insertTerm(&result, sum, p1->expo);
            p1 = p1->link;
            p2 = p2->link;
        }
    }

    while (p1 != NULL) {
        insertTerm(&result, p1->coeff, p1->expo);
        p1 = p1->link;
    }

    while (p2 != NULL) {
        insertTerm(&result, p2->coeff, p2->expo);
        p2 = p2->link;
    }
}

int main() {
    // Polynomial 1: 4x^5 + 3x^2 + 6
    insertTerm(&poly1, 4, 5);
    insertTerm(&poly1, 3, 2);
    insertTerm(&poly1, 6, 0);

    // Polynomial 2: 5x^3 + 2x^2 + 4
    insertTerm(&poly2, 5, 3);
    insertTerm(&poly2, 2, 2);
    insertTerm(&poly2, 4, 0);

    printf("Polynomial 1: ");
    display(poly1);

    printf("Polynomial 2: ");
    display(poly2);

    addPolynomials();

    printf("Sum of Polynomials: ");
    display(result);

    return 0;
}
