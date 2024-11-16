#include <stdio.h>

int main()
{
    int a[5][5] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15}, {16, 17, 18, 19, 20}, {21, 22, 23, 24, 25}}, *n[5];
    printf("Answar (a) is= %d\n", *(*(a + 2) + 1));
    printf("Answar (b) is= %d\n", *(*a + 2) + 5);
    printf("Answar (c) is= %d\n", *(*(a + 1)));
    printf("Answar (d) is= %d\n", *(*(a) + 2) + 1);
    printf("Answar (e) is= %d\n", *(*(a + 1) + 3));
    printf("Answar (f) is= %d\n", *n);
    printf("Answar (g) is= %d\n", *(n + 2));
    printf("Answar (h) is= %d\n", *(n + 2));
    printf("Answar (i) is= %d\n", (*(n + 3) + 1));
    printf("Answar (j) is= %d\n", *(n + 5) + 1);
    printf("Answar (k) is= %d\n", ++*n);
    printf("Answar (l) is= %d\n", **a);
    printf("Answar (m) is= %d\n", **a < *(*a + 2));
    printf("Answar (n) is= %d\n", **(a + 2) / (*(*a + 1) > **a));
    printf("Answar (o) is= %d\n", *(a[1] + 1) | a[1][2]);
    printf("Answar (p) is= %d\n", *(a[0]) | *(a[2]));
    printf("Answar (q) is= %d\n", a[1][1] < a[0][1]);
    printf("Answar (r) is= %d\n", a[2][1] & a[2][0]);
    printf("Answar (s) is= %d\n", a[2][2] | a[0][1]);
    printf("Answar (t) is= %d\n", a[0][1] ^ a[0][2]);
    printf("Answar (u) is= %d\n", ++**a + --a[1][1]);
    return 0;
}