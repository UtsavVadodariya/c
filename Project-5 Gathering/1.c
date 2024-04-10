// **Question 1:**  Write a C program that calculates the sum of squares of all even numbers from 1 to a given positive integer `n`. Implement a user-defined function called `calculateSumOfSquares` that takes an integer `n` as input from user  and returns the sum of squares of all even numbers from 1 to `n`. Display the calculated sum in the `main` function use TSRS.

#include<stdio.h>
int square(int i)
{
   int sum=0;
    for (int j = 1; j <=i; j++)
    {
        if (j % 2 == 0)
        {
            printf("Even Number : %d\n",j);
            sum += (j*j);
        }
    }
    return sum;

    
}
int main()
{
    int n;

    printf("Enter Size Of Numbers :");
    scanf("%d",&n);

   int all= square(n);

    printf("The Even Number Sum And Square :%d",all);
}