//Design a program that takes three integers as input and calculates their average.

#include<stdio.h>

main(){

    int a,b,c,d;

    printf("enter the first value :");
    scanf("%d",&a);
    printf("enter the second value :");
    scanf("%d",&b);
    printf("enter the third value :");
    scanf("%d",&c);

    d=(a+b+c)/3;
    printf("Average of Three Numbers :%d",d);
}