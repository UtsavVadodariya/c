//Develop a program that takes two integers, base and exponent, as input and calculates the power.

#include<stdio.h>

main(){

    int a,b,c;

    printf("enter the base :");
    scanf("%d",&a);

    
    printf("enter the exponent :");
    scanf("%d",&b);

    c=a*a*a;

    printf("the Power is :%d",c);
}