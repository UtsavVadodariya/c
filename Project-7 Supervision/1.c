// Q.1 Write a Program to create a car Record System with an Array of objects for a given N number of cars using structure. Consider the following attributes in the car structure:
// - car_id
// - car_title
// - car_author
// - car_genre
// - car_publisher
// - car_publication_year
// - car_price

#include <stdio.h>

struct car
{
    int id;
    char title[100];
    char author[100];
    char genre[100];
    char publisher[100];
    int publication_year;
    int price;
} car[];

int main()
{
    int n;

    printf("Enter The SIze Of cars :");
    scanf("%d", &n);
    printf("\n");

    for (int i = 0; i < n; i++)
    {
        printf("Enter Id Of car :");
        scanf("%d", &car[i].id);

        printf("Enter Title Of car :");
        scanf("%s", &car[i].title);

        printf("Enter Author Of car :");
        scanf("%s", &car[i].author);

        printf("Enter Genre Of car :");
        scanf("%s", &car[i].genre);

        printf("Enter Publisher Of car :");
        scanf("%s", &car[i].publisher);

        printf("Enter Publication_year Of car :");
        scanf("%d", &car[i].publication_year);
    }

    printf("\n");

    for (int i = 0; i < n; i++)
    {
        printf("Id : %d\n Title : %s\n Author : %s\n Genre : %s\n Publisher : %s\n Publication_year : %d\n", car[i].id, car[i].title, car[i].author, car[i].genre, car[i].publisher, car[i].publication_year);
        printf("\n");
    }
    
}