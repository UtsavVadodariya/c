// **Question 2:**Write a C program to calculate the area of a rectangle using a user-defined function. Implement a function called calculateArea() that takes the length and width of the rectangle as inputs and returns the calculated area. Display the area in the main function.

#include <stdio.h>
int  calculatearea(float height,float width)
{
    float sum=0;

    sum = height*width;

    return sum;
}

int main()
{
    float height, width;

    printf("Enter Height Of Rectangle :");
    scanf("%f", &height);

    printf("Enter Width Of Rectangle :");
    scanf("%f", &width);

    float ans = calculatearea(height,width);

    printf("%f",ans);
}