//Calculate the area of a circle given the radius (constant value for pi)

#include<stdio.h>

main(){

    float radius, area;

    const float pi=3.14159;

    printf("enter the rasids of circle :");
    scanf("%f",&radius);

    area=pi*radius*radius;

    printf("Area of the circle :%f",area);
}