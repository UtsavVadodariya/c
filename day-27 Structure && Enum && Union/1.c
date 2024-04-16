// Q.1 Write a Program to create Student Record System for 3 students using structure. Consider the below-mentioned attributes in the Student structure:
// - stu_id
// - stu_name
// - stu_age
// - stu_course
// - stu_city
// - stu_standard
// - stu_school

#include <stdio.h>
#include <string.h>

struct student
{
    int id;
    char name[100];
    int age;
    char course[100];
    char city[100];
    int standard;
    char school[100];
} s[100];

main()
{
    int n;

    printf("Enter Number of Students :");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter id :");
        scanf("%d", &s[i].id);

        printf("Enter name :");
        scanf("%s", &s[i].name);

        printf("Enter age :");
        scanf("%d", &s[i].age);

        printf("Enter course :");
        scanf("%s", &s[i].course);

        printf("Enter city :");
        scanf("%s",&s[i].city);

        printf("Enter standard :");
        scanf("%d", &s[i].standard);

        printf("Enter school :");
        scanf("%s", &s[i].school);
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("Id :%d\n Name:%s\n  Age:%d\n  Course:%s\n  City:%s\n  Standard:%d\n  School:%s\n", s[i].id, s[i].name, s[i].age, s[i].course, s[i].city, s[i].standard, s[i].school);
    }
    printf("\n");
}