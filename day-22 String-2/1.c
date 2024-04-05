//**Question 1:**
//Write a C program to take a string input from the user and convert it to uppercase

#include<stdio.h>
#include<string.h>
main()
{
	char a[100];
	printf("Enter Name :");
	gets(a);
	
	puts(strupr(a));
	
}
