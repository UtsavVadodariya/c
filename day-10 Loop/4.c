// Write a Program to print odd numbers from N to 1 using a while loop.

#include<stdio.h>

main(){

    int a,b=1;

    printf("Enter Value :");
    scanf("%d",&a);

    while (a>=b)
    {
        if(a % 2 != 0)
        {
         printf("%d\n",a);
  
        }

        a--;
    }
    
}