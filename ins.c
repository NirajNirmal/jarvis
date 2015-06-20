/*
Program to implement insertion sort.
*/


#include<stdio.h>

 void insertionSort(int *a, int n);

 int main(){

 int arr[5],i;
 printf("Enter 5 elements for sorting: \n");
 for(i=0; i<5;i++)
   scanf("%d", &arr[i]);

 insertionSort(arr, 5);
  printf("Array after sorting: \n");
 for(i=0; i<5;i++)
  printf("%d\n", arr[i]);

 }

 void insertionSort(int *a, int n){

  int k,j,temp;
  for(k=1; k<=n-1;k++){
   temp= a[k];
  j=k-1;
   while(temp<a[j]&& j>=0){
   a[j+1]=a[j];
   j--;
  }
   a[j+1]=temp;

                     }
                                }
