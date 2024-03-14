//Write a Program to input electricity unit charges and calculate the total electricity bill according to the given condition:

#include<stdio.h>

main(){

    float unit,rs1,rs2,rs3,rs4,p1;


    printf("Enter Unit :");
    scanf("%f",&unit);

    rs1=unit*0.50;
    rs2=unit*0.75;
    rs3=unit*1.20;
    rs4=unit*1.50;



    if(unit<=50){
        printf("the total electricity bill :%f",rs1);
    }

    else if(unit>50 && unit<=150)
    {
        printf("the total electricity bill :%f",rs2*0.20);
    }
    else if(unit>150 && unit<=250)
    {
        printf("the total electricity bill :%f",rs3*0.20);
    }
    else{
         printf("the total electricity bill :%f",rs4*0.20);
  
    }
}