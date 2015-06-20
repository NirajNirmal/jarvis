/*
Program to implement circular queue.
*/


#include<stdio.h>
  void insert();
  void del();
  void dispq();

 int r=-1;
 int f=-1;
 int a[20]; 
 int max;
 void main()
 {
  int ch, flag;

  printf("Enter the size of the queue. \n");
    scanf("%d", &max);
   
  
  do
  { 
  printf("Enter choice.\n 1.Insert\n 2.Delete \n 3.Display\n 4.Exit\n");
  scanf("%d", &ch);
  
  switch(ch)
  {
   case 1: insert();
           break;
   case 2: del();
           break;
   case 3: dispq();
           break;
   default: break;
  }

   printf("Do you wish to continue?[0/1]\n");
 scanf("%d",&flag);
  }while(flag==1);
 }


 void insert()
 { int item;
  if(r==max-1 && f==0 || r+1==f)
  printf("Queue is full. \n");
  else if(r==max-1)
  { printf("Enter the element: ");
    scanf("%d", &item);
    printf("\n"); 
    r=0;
   a[r]=item;}
  else
  { printf("Enter the element: ");
    scanf("%d", &item);
    printf("\n"); 
    if(f==-1 && r==-1)
     { f=0;
     }
   a[++r]=item;}
   
   
  
  dispq();
 }
 
 
 void del()
 {
  if( f==-1 )
     printf("The Queue is Empty.\n");
  else if(f==r)
   {printf("The deleted element: %d \n", a[f++]);
    f=-1;
    r=-1;
   }
  else if(f == max-1)
    { printf("The deleted element: %d \n", a[f]);
      f=0;
     }
  else
    printf("The deleted element: %d \n", a[f++]);
 
  dispq();
 }
 
 void dispq()
 { 
    int i;
 if( f==-1 && r==-1 )
     printf("The Queue is Empty.\n");
  else 
  {printf("The Queue: \n");
  
   for(i=f;i!=r;i=(i+1)%max)
   printf("%d  ", a[i]);

  printf("%d \n", a[r]);
  printf(" Front: %d  Rear: %d \n", f,r);
 }

 }


  



