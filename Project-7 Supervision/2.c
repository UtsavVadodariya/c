// Q.2 Write a Program to create a Car Inventory System with an Array of objects for a given N number of cars using structure. Consider the following attributes in the Car structure:
// - car_id
// - car_company
// - car_model
// - car_year
// - car_color
// - car_price
// - car_mileage

#include <stdio.h>

struct car
{
    int id;
    char Company[100];
    char Modal[100];
    int Year;
    char Color[100];
    int Price;
    int Mileage;
} car[];

int main()
{
    int n;

    printf("Enter The Size Of cars :");
    scanf("%d", &n);
    printf("\n");

    for (int i = 0; i < n; i++)
    {
        printf("Enter Id Of car :");
        scanf("%d", &car[i].id);

        printf("Enter Company Of car :");
        scanf("%s", &car[i].Company);

        printf("Enter Modal Of car :");
        scanf("%s", &car[i].Modal);

        printf("Enter Year Of car :");
        scanf("%d", &car[i].Year);

        printf("Enter Color Of car :");
        scanf("%s", &car[i].Color);

        printf("Enter Price Of car :");
        scanf("%d", &car[i].Price);

        printf("Enter Mileage Of car :");
        scanf("%d", &car[i].Mileage);
    }

    printf("\n");

    for (int i = 0; i < n; i++)
    {
        printf("Id : %d\n Company : %s\n Modal : %s\n Year : %d\n Color : %s\n Price : %d\n Mileage : %d\n", car[i].id, car[i].Company, car[i].Modal, car[i].Year, car[i].Color, car[i].Price);
        printf("\n");
    }
    
}