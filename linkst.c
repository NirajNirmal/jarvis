/*
Program to implement stack using linked list
*/


#include<stdio.h>
 #include<stdlib.h>
 void push();
 void pop();
 void dispst();

 struct node
 {
  int info;
  struct node* link;
 }*ptr, *temp, *top=NULL;


  void main()
 {
  int ch, flag;
   
 
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


  void push()
 {int item;
   
    printf("Enter the element: ");
    scanf("%d", &item);
   
   
   temp=(struct node*)malloc(sizeof(struct node));
   temp->info=item;
   temp->link=top;
   top=temp;
  
  
   
  dispst();
  }

 void pop()
 {
  if(top==NULL)
   printf("Stack is Empty.\n");
  else
   {temp=top;
   printf("Popped item: %d \n", temp->info);
   top=top->link;
   }
  free(temp);
  dispst();
 }

 void dispst()
 {  if(top==NULL)
   printf("Stack is Empty.\n");
   else
   { ptr=top;
     printf("Stack: \n");
     while(ptr!=NULL)
     {
      printf("%d ", ptr->info);
      ptr=ptr->link;
     }
   printf("\n");
 
   }
 }


