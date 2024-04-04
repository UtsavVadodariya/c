//Q.1 Write a Program to convert the given string in lowercase without using any string function.
// For example,
// Input:
// Enter any string: HELLO WORLD

// Output:
// Lowercase string: hello world

#include<stdio.h>
main()
{

    char hel[]="HELLO WORLD";

    for (int i = 0; hel[i] != NULL; i++)
    {
        if ( hel[i] >= 'A' && hel[i]<='Z')
        {
            hel[i] +=32;
        }
        printf("%c",hel[i]);
    }
    
}