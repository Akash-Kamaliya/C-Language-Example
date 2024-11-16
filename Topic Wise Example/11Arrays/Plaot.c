#include <stdio.h>
#include <math.h>
double calculate_area(double a, double b, double angle);
int main()
{
    double plots[6][3] = {
        {137.4, 80.9, 0.78},
        {155.2, 92.62, 0.89},
        {149.3, 97.93, 1.35},
        {160.0, 100.25, 9.00},
        {155.6, 68.95, 1.25},
        {149.7, 120.0, 1.75}};
    int largest_plot = 0;
    double largest_area = 0.0;
    for (int i = 0; i < 6; i++)
    {
        double a = plots[i][0];
        double b = plots[i][1];
        double angle = plots[i][2];
        double area = calculate_area(a, b, angle);
        printf("Plot %d area: %.2f square units\n", i + 1, area);
        if (area > largest_area)
        {
            largest_area = area;
            largest_plot = i + 1;
        }
    }
    printf("\nThe plot with the largest area is Plot %d with an area of %.2f square units.\n", largest_plot, largest_area);
    return 0;
}
double calculate_area(double a, double b, double angle)
{
    return 0.5 * a * b * sin(angle);
}
