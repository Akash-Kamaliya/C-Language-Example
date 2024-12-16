#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct emp
{
    char name[50];
    int age;
    float bs;
};

int main()
{
    FILE *fp;
    struct emp e;
    char empname[50];
    int recsize;
    recsize = sizeof(struct emp);
    if ((fp = fopen("text.txt", "rb+")) == NULL)
    {
        printf("Error! Could not open file.\n");
        exit(1);
    }
    printf("\nEnter name of employee to modify: ");
    scanf("%s", empname);
    rewind(fp);
    while (fread(&e, recsize, 1, fp) == 1)
    {
        if (strcmp(e.name, empname) == 0)
        {
            printf("\nEnter new name, age & basic salary: ");
            scanf("%s %d %f", e.name, &e.age, &e.bs);
            fseek(fp,-recsize,SEEK_CUR);
            fwrite(&e, recsize, 1, fp);
            printf("\nRecord updated successfully.\n");
            break;
        }
    }
    fclose(fp);
    return 0;
}
