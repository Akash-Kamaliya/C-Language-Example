#include <stdio.h>

#define MAX 10
void mul(int A[][MAX], int B[][MAX], int C[][MAX], int r1, int c1, int r2, int c2) ;
void display(int M[][MAX], int r, int c);
int main() {
    int A[MAX][MAX], B[MAX][MAX], C[MAX][MAX];
    int r1, c1, r2, c2;
    printf("Enter rows and columns for matrix A: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and columns for matrix B: ");
    scanf("%d %d", &r2, &c2);
    if (c1 != r2) {
        printf("Matrix multiplication is not possible.\n");
        return 0;
    }
    printf("\nEnter elements of matrix A:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    printf("\nEnter elements of matrix B:\n");
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            scanf("%d", &B[i][j]);
        }
    }
    mul(A, B, C, r1, c1, r2, c2);
    printf("\nResultant matrix is: \n");
    display(C, r1, c2);
    return 0;
}
void mul(int A[][MAX], int B[][MAX], int C[][MAX], int r1, int c1, int r2, int c2) {
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            C[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

void display(int M[][MAX], int r, int c) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }
}