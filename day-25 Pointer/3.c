// Q.3 Write a Program to swap two variables using Pointers.

#include <stdio.h>
void swap(int *n1, int *n2)
{
    int *t;

    t = *n1;
    *n1 = *n2;
    *n2 = t;
    printf("The swap Value is :");
    printf("%d %d", *n1, *n2);
}
void main()
{
    int a;
    int b;

    printf("Enter First Number:");
    scanf("%d", &a);
    printf("Enter Second Number:");
    scanf("%d", &b);

    swap(&a, &b);
}