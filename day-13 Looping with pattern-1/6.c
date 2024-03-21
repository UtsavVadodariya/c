// Write a Program to print the below pattern using nested for loop.
// 1 0 1 0 1
// 1 0 1 0
// 1 0 1
// 1 0 
// 1

#include<stdio.h>
main()
{
    for (int i = 1; i <=5; i++)
    {
        for (int j =5; j>=i; j--)
        {
            printf("%d ",j % 2);
        }
        printf("\n");
    }
    
}