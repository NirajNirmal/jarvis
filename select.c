/*
Program to implement selection sort.
*/


#include<stdio.h>

void selectionSort(int *a, int n);

 int main(){

 int arr[5],i;
 printf("Enter 5 elements for sorting: \n");
 for(i=0; i<5;i++)
   scanf("%d", &arr[i]);

 selectionSort(arr, 5);
  printf("Array after sorting: \n");
 for(i=0; i<5;i++)
  printf("%d\n", arr[i]);

 }

 void selectionSort(int *a, int n){

  int k,j,small,pos,temp;
  for(k=1; k<=n-1;k++){
   small=a[k-1];
   pos=k-1;
   for(j=k;j<n;j++)
   { if(a[j]<small)
     {
        small=a[j];
        pos=j;
     }
   }
    if(pos!=k-1)
 {
  temp=a[k-1];
  a[k-1]=a[pos];
  a[pos]=temp;
  }

                     }
                                }
