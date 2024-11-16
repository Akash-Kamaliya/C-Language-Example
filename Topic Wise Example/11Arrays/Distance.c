#include <stdio.h>
#include <math.h>
#define POINTS 10
typedef struct
{
    double x;
    double y;
} Point;
double distance(Point p1, Point p2);
int main()
{
    Point points[POINTS];
    double total_distance = 0.0;
    printf("Enter the coordinates of %d points (x y):\n", POINTS);
    for (int i = 0; i < POINTS; i++)
    {
        printf("Point %d: ", i + 1);
        scanf("%lf %lf", &points[i].x, &points[i].y);
    }
    for (int i = 0; i < POINTS - 1; i++)
    {
        total_distance += distance(points[i], points[i + 1]);
    }
    double last_to_first = distance(points[POINTS - 1], points[0]);
    total_distance += last_to_first;
    printf("Total distance of last point from first (sum of consecutive distances): %.2f\n", total_distance);
    return 0;
}
double distance(Point p1, Point p2)
{
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}