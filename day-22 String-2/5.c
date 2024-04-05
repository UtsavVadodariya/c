// **Question 5:**
// Write a C program to take two strings as input from the user and concatenate them. Display the concatenated string.


#include<stdio.h>
#include<string.h>

main()
{
	char a[100];
    char b[100],full[100];

	printf("Enter First Name :");
	gets(a);
	
    printf("Enter Second Name :");
	gets(b);

    
    strcpy(full,strcat(a,b));
    puts(full);
    
}