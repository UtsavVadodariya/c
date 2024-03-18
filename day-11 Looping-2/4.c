// Write a Program to print the Fibonacci series up to N numbers using a for loop.
// For example,
// Input:
// Enter any number: 8

// Output:
// 0, 1, 1, 2, 3, 5, 8, 13

#include<stdio.h>

main(){

    int f=0,s=1,n,a;

    printf("Enter Value of A :");
    scanf("%d",&a);

    for (int i = 0; i <=a; i++)
    {
        printf("%d\n",f);

        n=f+s;
        f=s;
        s=n;

    }
    
}