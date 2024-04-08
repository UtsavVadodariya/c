// **Question 3:**
// Write a TSRN function named `divideNumbers()` that takes two integers as input and calculates their division. Print the result inside the function. Handle the case when the divisor is zero. Call this function from the `main()` function and display the quotient.

#include<stdio.h>

divinumber(int a,int b){
    if (a %b == 0)
    {   
        printf("the divisor is zero.");
    }
    else{
        printf("the divisor is Not zero.");
    }
    
}
void main()
{
    divinumber(5,7);
}