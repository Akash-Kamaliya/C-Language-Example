#include <stdio.h>

void convertWeight(double kg, double *grams, double *tons, double *pounds);

int main()
{
    double kg, grams, tons, pounds;

    printf("Enter weight in kilograms: ");
    scanf("%lf", &kg);

    convertWeight(kg, &grams, &tons, &pounds);

    printf("Equivalent weight:\n");
    printf("Grams: %.2lf g\n", grams);
    printf("Tons: %.2lf tons\n", tons);
    printf("Pounds: %.2lf lbs\n", pounds);

    return 0;
}

void convertWeight(double kg, double *grams, double *tons, double *pounds)
{
    *grams = kg * 1000;
    *tons = kg / 1000;
    *pounds = kg * 2.20462;
}
