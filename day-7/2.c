// Write a Program to find the maximum number from the given 2 numbers using if else.

#include<stdio.h>
main(){

    int a,b;

    printf("enter the first number :");
    scanf("%d",&a);
    
    printf("enter the second number :");
    scanf("%d",&b);

    if (a > b)
    {
        printf("A is big.. :%d",a);
    }
    else{
        printf("B is big.. :%d",b);
    }
    
}