//Write a program that reads an integer representing the number of hours worked by an employee using scanf() and calculates their weekly pay based on a fixed hourly rate. 


#include<stdio.h>

main(){

    int hour, rate=15, total;
    
    printf("enter the working hour of week : ");
    scanf("%d",&hour);

    total= hour*rate;

    printf("the total salery of week is : %d",total);
}