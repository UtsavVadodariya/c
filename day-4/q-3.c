//Write a program that takes two integers as input from the user using scanf() and calculates their product. give example input output


#include<stdio.h>

main(){

    int first,second,product;

    printf("enter the first value :");
    scanf("%d",&first);

    printf("enter the second value :");
    scanf("%d",&second);

    product= first*second;

    printf("Product of first and second is :%d",product);
}