// **Question 6:**
// Write a C program to take two strings as input from the user and compare if they are equal. If they are equal, print "Strings are equal," else print "No, they are not equal."

#include <stdio.h>
#include <string.h>

main()
{
    char n1[100],n2[100];

    printf("Enter First Name :");
    gets(n1);

    printf("Enter Second Name :");
    gets(n2);


    printf("%d", strcmp(n1, n2));
}