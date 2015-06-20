/*
Program to input and sort an array in ascending order
*/


#include<stdio.h>

 void main()
{
 int a[50],n,i,j,temp;

 
   printf("Enter the number of elements in the array.\n");
   scanf("%d", &n);
 
    printf("Enter the array\n");
 
   for(i=0;i<n;i++)
   {
    scanf("%d", &a[i]);
   }
   
   for(i=0;i<n;i++)
   { for(j=0;j<n-1-i;j++)
     {if(a[j]>a[j+1])
       {temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
       }
     }
   }
  


  
   printf("The sorted array: \n");
    for(i=0;i<n;i++)
   {
     printf("%d ", a[i]);
   }
  printf("\n");
}
