#include <stdio.h>

struct Student
{
    char name[50];
    int marks;
};

int main()
{
    FILE *fp;
    struct Student s;
    int n;
    fp = fopen("students.txt", "w");
    if (fp == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }
    printf("Enter the number of students: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter name and marks of student %d: ", i + 1);
        scanf("%s %d", s.name, &s.marks);
        fprintf(fp, "%s %d\n", s.name, s.marks);
    }
    fclose(fp);
    printf("Data saved successfully.\n");
    return 0;
}