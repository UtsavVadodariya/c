// .Create a program that reads two floating-point numbers using scanf() and swaps their values . code in c give example input output

#include<stdio.h>

main(){

    float first,second,swap;

    printf("enter the first value :");
    scanf("%f",&first);

    printf("enter the second value :");
    scanf("%f",&second);

    printf("after swaping..\n");

    swap=first;
    first=second;
    second=swap;

    printf("first value :%f",first);
    printf("\nsecond value :%f",second);
}