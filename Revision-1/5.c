// 5. Develop a program to count the number of vowels in a given string.

#include <stdio.h>

int main() {
    char name[100];
    int vowelCount = 0;

    printf("Enter a string: ");
    scanf("%s", &name); 

    for (int i = 0; name[i] != '\0'; i++) {
        name[i] = (name[i]);
    }

    for (int i = 0; name[i] != '\0'; i++) {
        if (name[i] == 'a' || name[i] == 'e' ||
            name[i] == 'i' || name[i] == 'o' ||
            name[i] == 'u') {
            vowelCount++;
        }
    }   

    printf("Number of vowels in the string: %d\n", vowelCount);

}
