#include <stdio.h>
#include <string.h>

int main()
{
    enum department
    {
        assembly,
        manufacturing,
        accounts,
        stores
    };
    struct employee
    {
        char name[30];
        int age;
        enum department dept;
    };
    struct employee e;
    strcpy(e.name, "Akash kamaliya");
    e.age = 18;
    e.dept = manufacturing;
    printf("Name = %s\n", e.name);
    printf("Age = %d\n", e.age);
    printf("Departament = %d\n", e.dept);
    if (e.dept == accounts)
    {
        printf("%s is an account \n ", e.name);
    }
    else
    {
        printf("%s is not an accounant\n", e.name);
    }
    return 0;
}