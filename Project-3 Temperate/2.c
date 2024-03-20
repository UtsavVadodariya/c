//  Write a Program to count the total number of digits in a number.
// For example,
// Input:
// Enter any number: 752

// Output: 
// Total number of digits: 3


#include <stdio.h>

main() {
    int num, count = 0;

    printf("Enter a Number : ");
    scanf("%d", &num);

    int t = num;
    while (t != 0) {
        t /= 10;
        count++;
    }

    printf("The total number of digits is : %d\n",count);

}
