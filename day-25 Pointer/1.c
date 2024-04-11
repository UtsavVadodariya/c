// Q.1 Write a Program to find MAXIMUM between 2 numbers in TSRN.

#include <stdio.h>
void max(int *n1, int *n2)
{
    if (*n1 > *n2)
    {
        printf("Maximum Number is :%u",*n1);
    }
    else{
        printf("Maximum Number is :%u",*n2);
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

    max(&a,&b);
}