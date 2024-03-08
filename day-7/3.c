//Write a Program to find if a given number is neutral or not using a ladder if else

#include<stdio.h>

main(){

    int a;

    printf("enter any input :");
    scanf("%d",&a);
    
    if(a <= 0)
    {
        printf("This number is Negative");
    }
     else if(a >= 0)
    {
        printf("This number is Positive");
    }
    else{
        printf("This number is Nautral");
    }
}