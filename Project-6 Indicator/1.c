// Using UDF find  cube of a number using pointer.

#include <stdio.h>
void cube(int *a)
{
    int b;

    b = *a;

    printf("%d",b*b*b);
}
void main()
{
    int i;

    printf("Enter Any Number :");
    scanf("%d", &i);

    cube(&i);

}