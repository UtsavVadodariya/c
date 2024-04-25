// 1. Write a C program to find the sum of elements in an integer array.

#include<stdio.h>
main()
{
    int a;

    printf("Enter Size of Array :");
    scanf("%d",&a);

    int arr[a],sum=0;

    for (int i = 0; i < a; i++)
    {
        printf("Enter Value of Array :");
        scanf("%d",&arr[i]);

        sum += arr[i];
    }
    printf("Sum of Elements :%d",sum);
    
}