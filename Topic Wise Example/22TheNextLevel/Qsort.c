#include <stdio.h>
#include <stdlib.h>
int icmp(const void *, const void *);
int fcmp(const void *, const void *);

int main()
{
    int iarr[] = {23, 43, 21, 55, 23, 67, 18, 29, 37, 87};
    float farr[] = {1.2, 5.3, 0.21, 5.8, 2.9, 1.23, 6.7, 8.11};
    int i, sz;
    sz = sizeof(iarr) / sizeof(iarr[0]);
    qsort(iarr, sz, sizeof(int), icmp);
    for (i = 0; i < sz; i++)
    {
        printf("%d ", iarr[i]);
    }
    printf("\n");
    sz = sizeof(farr) / sizeof(farr[0]);
    qsort(farr, sz, sizeof(float), fcmp);
    for (i = 0; i < sz; i++)
    {
        printf("%.2f ", farr[i]);
    }
    return 0;
}

int icmp(const void *p, const void *q)
{
    const int *pint;
    const int *qint;
    pint = (int *)p;
    qint = (int *)q;
    if (*pint > *qint)
        return 1;
    else if (*pint < *qint)
        return -1;
    else
        return 0;
}

int fcmp(const void *p, const void *q)
{
    const float *pfloat;
    const float *qfloat;
    pfloat = (float *)p;
    qfloat = (float *)q;
    if (*pfloat > *qfloat)
        return 1;
    else if (*pfloat < *qfloat)
        return -1;
    else
        return 0;
}