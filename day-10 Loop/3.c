//Write a Program to print 1 to N using a while loop.

#include<stdio.h>

main(){

    int a,b=1;

    printf("Enter Value :");
    scanf("%d",&a);

    while (b<=a)
    {
        printf("%d\n",b);

        b++;
    }
    
}