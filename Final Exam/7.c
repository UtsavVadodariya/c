#include<stdio.h>
main()
{
    for (int i = 10; i >=6; i--)
    {
        for (int k = i-7; k >=1; k--)
        {
            printf(" ");
        }
        for (int j = i; j<=10; j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    
}