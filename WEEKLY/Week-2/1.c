// Enter the value of N: 5
// The sum of the first 5 natural numbers is: 15

#include<stdio.h>

main(){
    int a,sum=0;

    printf("Enter the size=");
    scanf("%d",&a);

    for(int i=0; i<=a; i++){
        sum=sum+i;
    }
    printf("%d",sum);
}