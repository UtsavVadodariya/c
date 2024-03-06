//Design a program that reads two integers using scanf() and calculates their average. give example input output

#include<stdio.h>

main(){

    float first,second,average;

    printf("enter the first value :");
    scanf("%f",&first);

    printf("enter the second value :");
    scanf("%f",&second);

    average=(first+second)/2;

    printf("Average of first and second is %f",average);
}