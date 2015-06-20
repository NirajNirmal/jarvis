/*
Program to implement merge sort.
*/


#include<stdio.h>

void mergeSort(int[],int,int);
void merge(int[],int,int, int);


int a[20];
int lower,upper,n,t;

void main()
{ int i,n;
  printf("Enter the limit of the array.\n");
  scanf("%d",&n);


 printf("Enter the elements for sorting: \n");
 for(i=0; i<n;i++)
   scanf("%d", &a[i]);

  lower=0;
  upper=n-1;

 mergeSort(a,lower,upper);

  printf("Array after sorting: \n");
 for(i=0; i<n;i++)
  printf("%d\n", a[i]);

 }

void mergeSort(int a[20],int lower, int upper)
 {
  int mid;
  if(lower<upper)
  {mid=(lower+upper)/2;
   mergeSort(a, lower, mid);
   mergeSort(a, mid+1, upper);
   merge(a,lower,mid, upper);
  }
 }

void merge(int a[20], int lower, int mid, int upper)
 {
  int temp[20],i,j,k;
   i=lower;
   j=mid+1;
   k=lower;

  while(i<=mid && j<=upper)
 {
  if(a[i]<=a[j])
   temp[k++]=a[i++];
  else
   temp[k++]=a[j++];
 }
  while(i<=mid)
 { temp[k++]=a[i++];
 }
  while(j<=upper)
 {
  temp[k++]=a[j++];
 }
  for(i=0;i=upper;i++)
 a[i]=temp[i];
 }
