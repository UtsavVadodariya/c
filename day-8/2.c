//Write a Program to find the maximum number from the given 4 numbers using nested if else. Also, draw a Flowchart in your book.

#include<stdio.h>

void main(){

    int a,b,c,d;

    printf("Enter a value of first number :");
    scanf("%d",&a);
    
    printf("Enter a value of second number :");
    scanf("%d",&b);
    printf("Enter a value of third number :");
    scanf("%d",&c);
    printf("Enter a value of fourth number :");
    scanf("%d",&d);


    if(a>b)
    {
        if(a>c)
        {
            if(a>d)
            {
                printf("a is maximum");
            }
            else
            {
                printf("d is maximum");
            }

        }
    }
    else if(b>c)
    {
        if(b>d)
        {
            printf("b is maximum");
        }
        else{
            printf("d is maximum");
        }
    }
    else if(c>d)
    {
        printf("c is maximum");
    }
    else
    {
        printf("d is maximum");
    }
}