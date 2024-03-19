// Write a Program to print the sum of all numbers from 1 to N using for loop.
// For example,
// Input:
// Enter any number: 8

// Output:
// The sum of all numbers: 36


#include<stdio.h>

main(){

    int n,sum;

    printf("Enter Value of N :");
    scanf("%d",&n);

    for (int i = 0; i <=n; i++)
    {
        sum += i;

    }
    printf("%d",sum);
    
}