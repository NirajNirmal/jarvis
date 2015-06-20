/*
Program to implement stack and queue.
*/


#include<stdio.h>
 void stack();
 void queue();
 void push();
 void pop();
 void insert();
 void del();
 void dispst();
 void dispq();


 int top=-1, max1,max2,i;
 int f=-1;
 int r=-1;
 int a[20];

 void main()
 {
  int ch;
  printf("Enter choice.\n 1.Stack\n 2.Queue \n 3.Exit \n");
  scanf("%d", &ch);
  
  switch(ch)
  {
   case 1: stack();
           break;
   case 2: queue();
           break;
   default: break;
  }
 }

 void stack()
 {
  int ch, flag;

    printf("Enter the limit of the stack. \n");
    scanf("%d", &max1);
   
 
  do
  { 
  printf("Enter choice.\n 1.Push\n 2.Pop \n 3.Display\n 4.Exit \n");
  scanf("%d", &ch);
  
  switch(ch)
  {
   case 1: push();
           break;
   case 2: pop();
           break;
   case 3: dispst();
           break;
   default: break;
  }

  printf("Do you wish to continue?[0/1]\n");
 scanf("%d",&flag);
  }while(flag==1);
 }

  void queue()
 {
  int ch, flag;

  printf("Enter the size of the queue. \n");
    scanf("%d", &max2);
   
  
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

 void push()
 {int item;
  if( top== max1-1)
   printf ("Stack is full.\n");
  else
   {printf("Enter the element: ");
    scanf("%d", &item);
   
     a[++top]=item;
   }
  dispst();
  }

 void pop()
 {
  if(top==-1)
   printf("Stack is Empty.\n");
  else
   printf("Popped item: %d \n", a[top--]);

  dispst();
 }

 void dispst()
 {  if(top==-1)
   printf("Stack is Empty.\n");
   else
   {
  printf("Stack: \n");
  for(i=top;i>=0;i--)
  {
   printf("%d \n", a[i]);
  }
   }
 }

 void insert()
 { int item;
  if(r==max2-1)
  printf("Queue is full. \n");
  else
  { printf("Enter the element: ");
    scanf("%d", &item);
    printf("\n"); 
    if(f==-1 && r==-1)
     { f=0;
     }
   a[++r]=item;
   
  }
  dispq();
 }
 
 
 void del()
 {
  if( f==-1)
     printf("The Queue is Empty.\n");
  else if(f==r)
   {printf("The deleted element: %d \n", a[f++]);
    f=-1;
    r=-1;
   }
  else
     printf("The deleted element: %d \n", a[f++]);
 
  dispq();
 }
 
 void dispq()
 { printf("The Queue: \n");
  for(i=f;i<=r;i++)
   printf("%d  ", a[i]);

  printf("\n");
 }



 



