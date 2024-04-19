// Use file file handling method and perform read , write and append.

#include <stdio.h>
main()
{
    FILE *p;

    p = fopen("demo-2.txt", "a");

    char data[100];

    if (p == NULL)
    {
        printf("Can't Open File ..");
    }
    else
    {
        printf("Enter Message :");
        gets(data);

        fputs(data,p);

    }
}