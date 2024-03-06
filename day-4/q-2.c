// Write a C program that reads a floating-point number representing the radius of a circle using scanf() and calculates its circumference.

#include<stdio.h>

main(){

    float radius,Circumference;

    printf("the radius of circle :");
    scanf("%f",&radius);

    Circumference=2*3.14*radius;

    printf("the circumference is:%f",Circumference);    
}