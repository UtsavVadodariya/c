// Q.2 Write a Program to find MINIMUM between 2 numbers in TSRN.

#include <stdio.h>
void min(int *n1, int *n2)
{
    if (*n1 < *n2)
    {
        printf("Minimum Number is :%u",*n1);
    }
    else{
        printf("Minimum Number is :%u",*n2);
    }
}
void main()
{
    int a;
    int b;

    printf("Enter First Number:");
    scanf("%d",&a);
    printf("Enter Second Number:");
    scanf("%d",&b);

    min(&a,&b);
}