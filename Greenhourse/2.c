//Design a program that reads the weight (in kilograms) and height (in meters) of a person from the user and calculates their BMI. 

#include<stdio.h>

void main(){
    float  weight,height,BMI;

    printf("Enter weight in kilograms : ");
    scanf("%f",&weight);

    printf("Enter height in meters :");
    scanf("%f",&height);

    BMI=weight/(height*height);

    printf("BMI calucates :%f",BMI);



}