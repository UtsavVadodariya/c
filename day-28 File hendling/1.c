// Use file file handling method and perform read , write and append.

#include <stdio.h>
main()
{
    FILE *p;

    p = fopen("demo.txt", "r");

    char data[100];

    if (p == NULL)
    {
        printf("Can't Open File ..");
    }
    else
    {

        while (fgets(data, 50, p) != NULL)
        {
            printf("%s", data);
        }
    }
}