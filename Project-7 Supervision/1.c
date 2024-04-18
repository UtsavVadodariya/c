// Q.1 Write a Program to create a book Record System with an Array of objects for a given N number of books using structure. Consider the following attributes in the book structure:
// - book_id
// - book_title
// - book_author
// - book_genre
// - book_publisher
// - book_publication_year
// - book_price

#include <stdio.h>

struct book
{
    int id;
    char title[100];
    char author[100];
    char genre[100];
    char publisher[100];
    int publication_year;
    int price;
} book[];

int main()
{
    int n;

    printf("Enter The SIze Of books :");
    scanf("%d", &n);
    printf("\n");

    for (int i = 0; i < n; i++)
    {
        printf("Enter Id Of book :");
        scanf("%d", &book[i].id);

        printf("Enter Title Of book :");
        scanf("%s", &book[i].title);

        printf("Enter Author Of book :");
        scanf("%s", &book[i].author);

        printf("Enter Genre Of book :");
        scanf("%s", &book[i].genre);

        printf("Enter Publisher Of book :");
        scanf("%s", &book[i].publisher);

        printf("Enter Publication_year Of book :");
        scanf("%d", &book[i].publication_year);
    }

    printf("\n");

    for (int i = 0; i < n; i++)
    {
        printf("Id : %d\n Title : %s\n Author : %s\n Genre : %s\n Publisher : %s\n Publication_year : %d\n", book[i].id, book[i].title, book[i].author, book[i].genre, book[i].publisher, book[i].publication_year);
        printf("\n");
    }
    
}