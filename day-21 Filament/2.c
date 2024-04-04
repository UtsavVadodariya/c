// Q.2 Write a Program to convert the given string in toggle case without using any string function.
// For example,
// Input:
// Enter any string: HelLo worLD

// Output:
// Toggle case string: hELlO WORld


#include<stdio.h>
main()
{

    char hel[]="HelLo worLD";

    for (int i = 0; hel[i] != NULL; i++)
    {
        if ( hel[i] >= 'A' && hel[i]<='Z')
        {
            
            hel[i] +=32;
        }
        else if (hel[i] >='a' && hel[i] <= 'z')
         {
            hel[i] -=32;
        }

        
        printf("%c",hel[i]);
    }
    
}