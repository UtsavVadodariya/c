// Q.1 Write a Program to find the reverse of a 1D array using a Chain of Pointers.

#include <stdio.h>

int main()
{
    int a;
    int *c;

    printf("Enter Size of Array :");
    scanf("%d", &a);

    int arr[a];
    for (int i = 0; i < a; i++)
    {
        printf("Enter Value Of Array :");
        scanf("%d", &arr[i]);
    }

    c = &arr;

    for (int i = a-1; i >= 0; i--)
    {
        printf("%d \n", *(c + i));
    }
}