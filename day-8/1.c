// Write a Program to find the minimum number from the given 3 numbers using nested if else. Also, draw a Flowchart in your book.

#include<stdio.h>

void main()
{

    int a,b,c;

    printf("Enter a value of first number :");
    scanf("%d",&a);
    
    printf("Enter a value of second number :");
    scanf("%d",&b);
    printf("Enter a value of third number :");
    scanf("%d",&c);

    if(a<b)
    {
        if(a<c)
        {
            printf("a is minimum");
        }
        else{
            printf("c is minimum");
        }
    }

    else{
        if(b<c){
            printf("b is minimum");
        }
        else{
            printf("c is minimum");
        }
    }

    
    
}
