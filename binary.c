/*
Program to use binary search on an array
*/


#include<stdio.h>

 void main()
{
 int a[50],n,i,j,temp,beg,end,mid,item, flag;
 
 
   printf("Enter the number of elements in the array.\n");
   scanf("%d", &n);
   beg=0;
   end=n-1;
 
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

   printf("Enter the item you want to search for: ");
   scanf("%d", &item);
   
   while(beg<=end)
   {
    mid=(beg+end)/2;
   
      if( a[mid]== item)
     {printf("The item has been found at position %d \n", mid+1);
      flag=1; break;
     }
    else
     {if(a[mid]<item)
       beg=mid+1;
      else if(a[mid]>item)
       end=mid-1;
     }
    }
   
    if(flag!=1)
     { printf("The item is not found.\n");
     }

  
   
}
