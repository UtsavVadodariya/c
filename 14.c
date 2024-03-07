//Write a program that evaluates the expression

#include<stdio.h>

main(){

    int a,b,c,d,e;

    printf("enter the first value :");
    scanf("%d",&a);
    printf("enter the second value :");
    scanf("%d",&b);
    printf("enter the third value :");
    scanf("%d",&c);
    printf("enter the fourth value :");
    scanf("%d",&d);


    e=(a+b)*(c-d);

    printf("the Arithmetic Expression is :%d",e);
}