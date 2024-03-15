//Write a Program to print leap years between two given numbers using a while loop.

#include<stdio.h>

main(){

    int first,sec;

    printf("Enter the first number:");
    scanf("%d",&first);

    printf("Enter the second number:");
    scanf("%d",&sec);


    while (first<=sec)
    {
        if (first%4==0)
        {
            printf("%d\n",first);
        }

        first++;
        
    }
    
}