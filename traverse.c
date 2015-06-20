/*
Program to traverse an array
*/


#include<stdio.h>

 void main()
{
 int a[50],n,i;

 
   printf("Enter the number of elements in the array.\n");
   scanf("%d", &n);
 
    printf("Enter the array\n");
 
   for(i=0;i<n;i++)
   {
    scanf("%d", &a[i]);
   }
 
   printf("The input array: \n");
    for(i=0;i<n;i++)
   {
     printf("%d ", a[i]);
   }
  printf("\n");
}
