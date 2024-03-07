//Write C Program to find the third angle of a right triangle if two other angles are given.

#include<stdio.h>
void main(){
    int a,b,c;

    printf("Enter the first value :");
    scanf("%d",&a);

    printf("Enter the second value :");
    scanf("%d",&b);

    c=180-(a+b);

    printf("Tiangle of : %d",c);
}