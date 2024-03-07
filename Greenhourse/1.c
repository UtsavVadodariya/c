//Design a program that reads the original price and discount percentage from the user and calculates the discount amount.

#include<stdio.h>
void main(){
    float a,b,c;

    printf("Enter the price :");
    scanf("%f",&a);
    printf("Enter the Percentage :");
    scanf("%f",&b);

    c=(a*b)/100;

    printf("The calculates the discount :%f",c);
}