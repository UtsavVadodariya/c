// Using UDF swap between 3 numbers using pointer.

#include <stdio.h>
void swap(int *n1, int *n2, int *n3)
{
    int *i;

    i = n1;
    n1 = n2;
    n2 = n3 ;
    n3 = i;

    printf("The Swap Value Is  : %d %d %d",*n1,*n2,*n3);
}
void main()
{
    int a, b, c;

    printf("Enter First Number :");
    scanf("%d", &a);

    printf("Enter Second Number :");
    scanf("%d", &b);

    printf("Enter Third Number :");
    scanf("%d", &c);

    swap(&a, &b, &c);
}