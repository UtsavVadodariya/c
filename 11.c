// Write a program that reads principal amount, rate of interest, and time period from the user and calculates the simple interest.

#include<stdio.h>

main(){

    float a,b,c,d;

    printf("enter the Principal :");
    scanf("%f",&a);
    printf("enter the Rate :");
    scanf("%f",&b);
    printf("enter the Time :");
    scanf("%f",&c);

    d=(a*b*c)/100;

    printf("the Simple Interest :%f",d);
    
}