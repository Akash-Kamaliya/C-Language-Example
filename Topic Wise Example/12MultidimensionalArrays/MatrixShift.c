#include <stdio.h>

#define ROWS 4
#define COLS 5
void circularLeftShift(int arr[], int size, int positions);
void shiftMatrixRows(int matrix[ROWS][COLS], int positions);
void printMatrix(int matrix[ROWS][COLS]);
int main()
{
    int matrix[ROWS][COLS] = {
        {15, 30, 28, 19, 61},
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15}};
    printf("Original Matrix:\n");
    printMatrix(matrix);
    shiftMatrixRows(matrix, 2);
    printf("\nMatrix after left shifting each row by 2 positions:\n");
    printMatrix(matrix);
    return 0;
}
void circularLeftShift(int arr[], int size, int positions)
{
    positions = positions % size;

    int temp[size];

    for (int i = 0; i < size; i++)
    {
        temp[i] = arr[(i + positions) % size];
    }

    for (int i = 0; i < size; i++)
    {
        arr[i] = temp[i];
    }
}

void shiftMatrixRows(int matrix[ROWS][COLS], int positions)
{
    for (int i = 0; i < ROWS; i++)
    {
        circularLeftShift(matrix[i], COLS, positions);
    }
}

void printMatrix(int matrix[ROWS][COLS])
{
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
