#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student
{
    int rollNumber;
    char name[50];
    int backlogs;
};
void modifyBacklog(int targetRollNumber, int newBacklogs);
int main()
{
    int rollNumber, newBacklogs;
    printf("Enter the roll number of the student whose backlog you want to modify: ");
    scanf("%d", &rollNumber);
    printf("Enter the new backlog count: ");
    scanf("%d", &newBacklogs);
    modifyBacklog(rollNumber, newBacklogs);
    return 0;
}
void modifyBacklog(int targetRollNumber, int newBacklogs)
{
    FILE *file = fopen("student.txt", "r");
    if (file == NULL)
    {
        printf("Error opening file.\n");
        exit(1);
    }
    struct Student students[100];
    int count = 0;
    while (fscanf(file, "%d %s %d", &students[count].rollNumber, students[count].name, &students[count].backlogs) != EOF)
    {
        if (students[count].rollNumber == targetRollNumber)
        {
            students[count].backlogs = newBacklogs;
        }
        count++;
    }
    fclose(file);
    file = fopen("student.txt", "w");
    if (file == NULL)
    {
        printf("Error opening file.\n");
        exit(1);
    }
    for (int i = 0; i < count; i++)
    {
        fprintf(file, "%d %s %d\n", students[i].rollNumber, students[i].name, students[i].backlogs);
    }
    fclose(file);
    printf("Data successfully updated in student.txt.\n");
    printf("Updated student data:\n");
    for (int i = 0; i < count; i++)
    {
        printf("Roll Number: %d, Name: %s, Backlogs: %d\n", students[i].rollNumber, students[i].name, students[i].backlogs);
    }
}
