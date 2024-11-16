#include <stdio.h>

struct Distance
{
  int feet;
  int inches;
};
struct Distance addDistances(struct Distance d1, struct Distance d2)
{
  struct Distance result;
  result.inches = d1.inches + d2.inches;
  result.feet = d1.feet + d2.feet + (result.inches / 12);
  result.inches = result.inches % 12;
  return result;
}

int main()
{
  struct Distance distance1, distance2, totalDistance;
  printf("Enter the first distance:\n");
  printf("Feet: ");
  scanf("%d", &distance1.feet);
  printf("Inches: ");
  scanf("%d", &distance1.inches);
  printf("\nEnter the second distance:\n");
  printf("Feet: ");
  scanf("%d", &distance2.feet);
  printf("Inches: ");
  scanf("%d", &distance2.inches);
  totalDistance = addDistances(distance1, distance2);
  printf("\nTotal Distance: %d feet, %d inches\n", totalDistance.feet, totalDistance.inches);
  return 0;
}
