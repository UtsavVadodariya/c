// **Question 2:**
// Write a C program to take a string input from the user and convert it to lowercase.


#include<stdio.h>
#include<string.h>

main()
{
	char a[100];
	printf("Enter Name :");
	gets(a);
	
	puts(strlwr(a));
	
    
}