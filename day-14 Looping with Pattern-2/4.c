// Write a Program to print the below pattern using nested for loop.
// 5 4 3 2 1
//    4 3 2 1
//       3 2 1
//          2 1
//             1

#include<stdio.h>
main()
{

    for (int i = 5; i >=1; i--)
    {
        for (int k = i; k <=4; k++)
        {
            printf(" ");
        }
        for (int j = i; j >=1; j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    
}