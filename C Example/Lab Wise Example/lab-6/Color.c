/*2. In digital world colors are speci􀆒ed in RGB format, with values of R, G, and B varying on
integer scale from 0 to 255. Colors are mentioned in Cyan-Magenta-Yellow-Black (CMYK)
format with values of C, M, Y and K varying on a real scale from 0.0 to 1.0. Convert RGB
color to CMYK as per formula:
- White=Max(red/255,green/255,blue/255)
- Cyan=(white - red/255)/white
- Magenta=(white - green/255)/white
- Yellow=(white - blue/255)/white
- Black=1 - white
Note: if RGB values are all 0, then the CMY values are all 0 and the K value is 1.*/
/*This Program is used for convert RGB color to CMYK color*/
#include <stdio.h>
#include <math.h>
int max(int a, int b, int c);
int main()
{
    float R, G, B;       // Red , Green , Blue ;
    float W, C, M, Y, K; // White , Cyan , Magente , Yellow , Black ;

    printf("Enter Red color Value (0,255):\n");
    scanf("%f", &R); // Red
    printf("Enter Green color Value(0,255):\n");
    scanf("%f", &G); // Green
    printf("Enter Blue color Value(0,255):\n");
    scanf("%f", &B); // Blue

    W = max(R / 255, G / 255, B / 255); // White
    C = (W - (R / 255)) / W;            // Cyan
    M = (W - (G / 255)) / W;            // Magenta
    Y = (W - (B / 255)) / W;            // Yellow
    K = (1 - W);                        // Black

    printf("White color Value is  : %f\n", W);
    printf("Cyan color Value is :%f\n", C);
    printf("Magenta color Value is :%f\n", M);
    printf("Yellow color Value is :%f\n", Y);
    printf("Black color Value is :%f\n", K);

    return 0;
}
int max(int a, int b, int c)
{
    int max_val = a;

    if (b > max_val)
    {
        max_val = b;
    }
    if (c > max_val)
    {
        max_val = c;
    }

    return max_val;
}
