/*2. Calculate the average, geometric and harmonic mean of n elements in an array.*/
#include <stdio.h>
#include <math.h>

int main()
{
  int n, i;
  float sum = 0.0, product = 1.0, hs = 0.0;
  printf("Enter the number of elements in the array: ");
  scanf("%d", &n);
  float arr[n];
  printf("Enter %d elements: \n", n);
  for (i = 0; i < n; i++)
  {
    printf("Enter a number:\n");
    scanf("%f", &arr[i]);
    sum += arr[i];
    product *= arr[i];
    hs += 1 / arr[i];
  }
  float am = sum / n;
  float gm = pow(product, 1.0 / n);
  float hm = n / hs;
  printf("Arithmetic Mean: %.2f\n", am);
  printf("Geometric Mean: %.2f\n", gm);
  printf("Harmonic Mean: %.2f\n", hm);
  return 0;
}
