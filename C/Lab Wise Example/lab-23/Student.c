#include <stdio.h>
#include <stdlib.h>

struct Student
{
    int rollNumber;
    char name[50];
    int backlogs;
};
void writeToFile(int n);
void readFromFile();
int main()
{
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    writeToFile(n);
    readFromFile();
    return 0;
}
void writeToFile(int n)
{
    FILE *file = fopen("student.txt", "w");
    if (file == NULL)
    {
        printf("Error opening file.\n");
        exit(1);
    }
    struct Student student;
    for (int i = 0; i < n; i++)
    {
        printf("Enter details for student %d\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &student.rollNumber);
        printf("Name: ");
        scanf("%s", student.name);
        printf("Backlogs: ");
        scanf("%d", &student.backlogs);
        fprintf(file, "%d %s %d\n", student.rollNumber, student.name, student.backlogs);
    }
    fclose(file);
    printf("Data successfully written to student.txt.\n");
}
void readFromFile()
{
    FILE *file = fopen("student.txt", "r");
    if (file == NULL)
    {
        printf("Error opening file.\n");
        exit(1);
    }
    struct Student student;
    printf("Students with more than 5 backlogs:\n");
    while (fscanf(file, "%d %s %d", &student.rollNumber, student.name, &student.backlogs) != EOF)
    {
        if (student.backlogs > 5)
        {
            printf("Roll Number: %d\n", student.rollNumber);
        }
    }
    fclose(file);
}
