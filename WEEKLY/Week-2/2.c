// // Write a C program to calculate the compound interest for a given principal, rate, and time using loops.

// // Enter principal amount: 1000
// // Enter annual interest rate (in percentage): 5
// // Enter time (in years): 2
// // Compound Interest: 102.50

#include <stdio.h>
#include<math.h>

int main() {
    float principal, rate, time;
    float amount, compound;

    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the rate of interest (in percentage): ");
    scanf("%f", &rate);

    rate /= 100;

    printf("Enter the time (in years): ");
    scanf("%f", &time);

    amount = principal * pow(1 + rate, time);

    compound = amount - principal;

    printf("Compound Interest is: %.2lf\n", compound);

}
