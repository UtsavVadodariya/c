//Write a Program to input electricity unit charges and calculate the total electricity bill according to the given condition:

#include<stdio.h>

main(){

    float amount,price,unit,total;

    printf("Enter Units :");
    scanf("%f",&unit);

    if(unit<=50)
    {
        amount= unit * 0.50;

    }
    else if(unit <=150)
    {
        amount = 25 + ((unit-50)*0.75);
    }
    else if(unit <=250 )
    {
        amount = 100 + ((unit-150)*1.20);
    }
    else
    {
        amount = 220 + ((unit-250)*1.50);
    }

    price= amount * 0.20;
    total= amount + price;

    printf("Electricity Bill : %f",total);
}