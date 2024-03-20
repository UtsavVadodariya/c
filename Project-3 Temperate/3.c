// Write a Program to find the sum of the first and the last digit of a number.
// For example,
// Input:
// Enter any number: 384

// Output: 
// The sum of the first and the last digit: 7

#include <stdio.h>

main() {
    int num, first, last, sum;

    printf("Enter a Number : ");
    scanf("%d", &num);

    first = num;
    while (first >= 10) {
        first /= 10;
    }

    last = num % 10;

    sum = first + last;

    printf("Sum of first and last digit is : %d \n",sum);

}
