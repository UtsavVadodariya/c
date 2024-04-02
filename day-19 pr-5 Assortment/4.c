// Q.4 Write a Program to print and find the sum of all elements of a given row & column from a 2D array.
#include <stdio.h>
main()
{
    int row, col, i, j;

    printf("Enter Size of Array :");
    scanf("%d", &row);
    col = row;

    int arr[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++)
        {
            printf("Enter Value of Array :");
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++)
        {
            printf("%3d", arr[i][j]);
        }
        printf("\n");
    }

    int r, sum = 0, c, sumc = 0;

    printf("Enter Number of row :");
    scanf("%d", &r);

    for (int i = r; i < row; i++)
    {
        if (i == r + 1)
        {
            break;
        }
        for (int j = 0; j < row; j++)
        {
            sum += arr[i][j];
        }
    }
    printf("%d\n", sum);

    printf("Enter Number of col :");
    scanf("%d", &c);

    for (int i = 0; i < row; i++)
    {
        for (int j = c; j < row; j++)
        {
            if (j == c + 1)
            {
                break;
            }
            sumc += arr[i][j];
        }
    }
    printf("%d\n", sumc);
}