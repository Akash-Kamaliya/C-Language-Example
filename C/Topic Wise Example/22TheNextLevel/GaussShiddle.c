#include <stdio.h>

int main()
{
    float X, Y, Z;
    float A1, A2, A3;
    float B1, B2, B3;
    float C1, C2, C3;
    float P, Q, R;
    printf("----------------------------------------------------------------------\n");
    printf("Enter System like bellow :\n");
    printf("(A1)X + (B1)Y + (C1)Z = P :\n");
    printf("(A2)X + (B2)Y + (C2)Z = Q :\n");
    printf("(A3)X + (B3)Y + (C3)Z = R :\n");
    printf("----------------------------------------------------------------------\n");
    printf("Enter A1 :");
    scanf("%f", &A1);
    printf("Enter B1 :");
    scanf("%f", &B1);
    printf("Enter C1 :");
    scanf("%f", &C1);
    printf("----------------------------------------------------------------------\n");
    printf("Enter A2 :");
    scanf("%f", &A2);
    printf("Enter B2 :");
    scanf("%f", &B2);
    printf("Enter C2 :");
    scanf("%f", &C2);
    printf("----------------------------------------------------------------------\n");
    printf("Enter A3 :");
    scanf("%f", &A3);
    printf("Enter B3 :");
    scanf("%f", &B3);
    printf("Enter C3 :");
    scanf("%f", &C3);
    printf("----------------------------------------------------------------------\n");
    printf("Enter P :");
    scanf("%f", &P);
    printf("Enter Q :");
    scanf("%f", &Q);
    printf("Enter R :");
    scanf("%f", &R);
    printf("----------------------------------------------------------------------\n");
    printf("Enter initial Value of bellow");
    printf("Enter X :");
    scanf("%f", &X);
    printf("Enter Y :");
    scanf("%f", &Y);
    printf("Enter Z :");
    scanf("%f", &Z);
    printf("----------------------------------------------------------------------\n");
    for (int i = 0; i < 20; i++)
    {
        X = (P - (B1 * Y) - (C1 * Z)) / A1;
        Y = (Q - (A2 * X) - (C2 * Z)) / B2;
        Z = (R - (A3 * X) - (B3 * Y)) / C3;
    }
    printf("The Answer is :-------------------------------------------\n");
    printf("X = %f \n", X);
    printf("Y = %f \n", Y);
    printf("Z = %f \n", Z);
    return 0;
}