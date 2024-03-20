// Write a Program to print all alphabets from a to z by skipping 3 alphabets using do do-while loop.
// For example,
// Output: 
// a, e, i, m, q, u, y

#include <stdio.h>

main() {
    char alphabet = 'a';  
    int step = 4; 

    do {
        printf("%c ", alphabet);

        alphabet += step;

    } while (alphabet <= 'z');  

    printf("%c\n",alphabet);  
}
