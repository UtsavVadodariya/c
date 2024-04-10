// **Question 3:**Write a C program to find the factorial of a given positive integer using a user-defined function. The program should prompt the user to enter a positive integer and then calculate its factorial using a function called calculateFactorial(). Display the calculated factorial in the main function.

#include <stdio.h>
int factorial(int i)
{
    int fact = 1;
    for (int j = i; j >= 1; j--)
    {
        printf("%d\n",j);
        fact *= j;
    }
    return fact;

}

int main()
{
    int n;

    printf("Enter The Numbers :");
    scanf("%d",&n);

    int all = factorial(n);

    printf("The Factorial Number  :%d", all);
}