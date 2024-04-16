// Q.2 Write a Program to create an Employee Record System with an Array of objects for a given N number of employees using structure. Consider the below-mentioned attributes in the Employee structure:
// - emp_id
// - emp_name
// - emp_age
// - emp_role
// - emp_city
// - emp_experience
// - emp_company_name

#include <stdio.h>
#include <string.h>

struct Employee
{
    int id;
    char name[100];
    int age;
    char role[100];
    char city[100];
    int experience;
    char company_name[100];
} e[100];

main()
{
    int n;

    printf("Enter Number of Employee :");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter id :");
        scanf("%d", &e[i].id);

        printf("Enter name :");
        scanf("%s", &e[i].name);

        printf("Enter age :");
        scanf("%d", &e[i].age);

        printf("Enter course :");
        scanf("%s", &e[i].role);

        printf("Enter city :");
        scanf("%s",&e[i].city);

        printf("Enter standard :");
        scanf("%d", &e[i].experience);

        printf("Enter school :");
        scanf("%s", &e[i].company_name);
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("Id :%d\n Name:%s\n  Age:%d\n  role:%s\n  City:%s\n  experience:%d\n company_name:%s\n", e[i].id, e[i].name, e[i].age, e[i].role, e[i].city, e[i].experience, e[i].company_name);
    }
    printf("\n");
}