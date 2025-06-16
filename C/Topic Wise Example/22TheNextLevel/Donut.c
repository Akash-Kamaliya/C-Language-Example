#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    float A = 0, B = 0;
    float i, j;
    int k;
    float z[1760];
    char b[1760];
    printf("\x1b[2J"); // Clear screen
    for (;;)
    {
        memset(b, ' ', 1760);
        memset(z, 0, 7040);
        for (j = 0; j < 6.28; j += 0.07)
        {
            for (i = 0; i < 6.28; i += 0.02)
            {
                float c = sin(i), d = cos(j), e = sin(A), f = sin(j), g = cos(A);
                float h = d + 2, D = 1 / (c * h * e + f * g + 5);
                float l = cos(i) * h * g - f * e;
                int x = 40 + 30 * D * (cos(i) * h * g - f * e);
                int y = 12 + 15 * D * (c * h * g + d * e);
                int o = x + 80 * y;
                int N = 12 * ((f * e - c * d * g) * D - c * h * e - f * g - 5);
                if (y > 0 && y < 22 && x > 0 && x < 80 && D > z[o])
                {
                    z[o] = D;
                    b[o] = ".@"[N > 0 ? N : 0]; // Character array for shadow effect
                }
            }
        }
        printf("\x1b[H"); // Reset cursor to top
        for (k = 0; k < 1760; k++)
        {
            putchar(k % 80 ? b[k] : 10); // Print characters with newline after each line
        }
        A += 0.04;
        B += 0.02;
    }
    return 0;
}
