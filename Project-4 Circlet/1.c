// Q.1 Write a Program to print the below pattern using nested for loop.
// 41
// 41 42
// 41 42 43
// 41 42 43 44
// 41 42 43 44 45

#include<stdio.h>
main(){

    for (int i = 41; i <=45; i++)
    {
        for (int k = 41; k <=i; k++)
        {
            printf("%d ",k);
        }
        printf("\n");
    }
    
}

