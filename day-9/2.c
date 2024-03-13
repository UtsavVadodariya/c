//Write a Program to create a menu-driven program for Telecom call service conversation using nested switch case.

#include<stdio.h>

main(){

    int a,b,c;

    printf("Press 1 for English\n");
    printf("Press 2 for Hindi\n");
    printf("Press 3 for Gujarati\n");


    printf("Enter your chice :");
    scanf("%d",&a);

    switch (a)
    {
    case 1:
    printf("Press 1 for Internet Recharge\n");
    printf("Press 2 for Top-up Recharge\n");
    printf("Press 3 for Special Recharge\n");
    printf("Enter your chice :");
    scanf("%d",&a);

        switch (a)
        {
        case 1:
        printf("You have successfully done a Internet Recharge.");
            break;
        case 2:
        printf("You have successfully done a Top-up Recharge");
            break;
        case 3:
        printf("You have successfully done a Special Recharge.");
            break;

        
        default:
            break;
        }
            break;


    case 2:
    printf("Press 1 for Internet Recharge\n");
    printf("Press 2 for Top-up Recharge\n");
    printf("Press 3 for Special Recharge\n");
    printf("Enter your chice :");
    scanf("%d",&b);


            switch (b)
        {
        case 1:
        printf("You have successfully done a Internet Recharge.");
            break;
        case 2:
        printf("You have successfully done a Top-up Recharge");
            break;
        case 3:
        printf("You have successfully done a Special Recharge.");
            break;


    default:
        break;
    }
            break;





        case 3:
    printf("Press 1 for Internet Recharge\n");
    printf("Press 2 for Top-up Recharge\n");
    printf("Press 3 for Special Recharge\n");
    printf("Enter your chice :");
    scanf("%d",&c);


            switch (c)
        {
        case 1:
        printf("You have successfully done a Internet Recharge.");
            break;
        case 2:
        printf("You have successfully done a Top-up Recharge");
            break;
        case 3:
        printf("You have successfully done a Special Recharge.");
            break;


        break;



    default:
        break;
    }


}}