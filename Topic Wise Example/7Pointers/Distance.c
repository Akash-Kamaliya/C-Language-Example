#include <stdio.h>
#include <math.h>

double calDis(double x1, double y1, double x2, double y2)
{
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

double calculateArea(double x1, double y1, double x2, double y2, double x3, double y3)
{

    double AB = calDis(x1, y1, x2, y2);
    double BC = calDis(x2, y2, x3, y3);
    double CA = calDis(x3, y3, x1, y1);

    double s = (AB + BC + CA) / 2;

    return sqrt(s * (s - AB) * (s - BC) * (s - CA));
}

int main()
{
    double x1, y1, x2, y2, x3, y3;

    printf("Enter the coordinates of point A (x1 y1): ");
    scanf("%lf %lf", &x1, &y1);

    printf("Enter the coordinates of point B (x2 y2): ");
    scanf("%lf %lf", &x2, &y2);

    printf("Enter the coordinates of point C (x3 y3): ");
    scanf("%lf %lf", &x3, &y3);

    double area = calculateArea(x1, y1, x2, y2, x3, y3);

    printf("The area of the triangle is: %.2lf\n", area);

    return 0;
}
