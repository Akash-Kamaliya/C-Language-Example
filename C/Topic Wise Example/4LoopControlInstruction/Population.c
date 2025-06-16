/*population of town today is 100000 .
The population has increased stedily at the rate of 10% per year for last 10 years.
write a program to determine the population at the end of each year in the last decade.*/
#include <stdio.h>

int main() {
    double population = 100000; 
    double rate = 0.10; 
    printf("Year\tPopulation\n");
    printf("-------------------\n");
    for (int year = 10; year >= 1; year--) {
        population /= (1 + rate);
        printf("Year %d\t%.2f\n", 2024 - year, population);
    }
    return 0;
}
