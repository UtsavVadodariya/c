// Write a Program to print the below pattern using nested for loop.
// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2
// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5

//  Write a Program to print the below pattern using nested for loop.
// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2
// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5


#include<stdio.h>
main()
{

   for(int i=5;i>=1;i--)
   {

      for(int j=1;j<=i;j++)
      {
         printf("%d",j);
      }
            for(int k=i;k<=4;k++)
      {
         printf(" ",k);
      }
      printf("\n");
   }
   for(int i=2 ;i<=5;i++)
   {
      for(int j=1;j<=i;j++)
      {
         printf("%d",j);
      }
            for(int k=i;k<=4;k++)
      {
         printf(" ",k);
      }
      printf("\n");
   }
   
}