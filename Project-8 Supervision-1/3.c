// 3. Write a C program to find the smallest element in an array.

#include <stdio.h>

main()
{
    int a, min = 0;

    printf("Enter Size Of Array :");
    scanf("%d", &a);

    int arr[a];

    for (int i = 0; i < a; i++)
    {
        printf("Enter Value of Array :");
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < a; i++)
    {
        if (arr[0] >= arr[i])
        {
            min = arr[i];
        }
    }
    printf("Largest Element is : %d", min);
}