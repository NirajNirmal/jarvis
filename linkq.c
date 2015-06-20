/*
Program to implement queue using linked list
*/


#include<stdio.h>
 #include<stdlib.h>
 void insert();
 void del();
 void dispq();

 struct node
 {
  int info;
  struct node* link;
 }*ptr, *temp, *front=NULL, *rear=NULL;

  void main()
 {
  int ch, flag;

  
  do
  { 
  printf("Enter choice.\n 1.Insert\n 2.Delete \n 3.Display\n");
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
    

  { printf("Enter the element: ");
    scanf("%d", &item);
    printf("\n"); 
    temp=(struct node*)malloc(sizeof(struct node));
    temp->info=item;
    temp->link=NULL;

    if(front==NULL) 
    rear=front=temp;
    else
    {rear->link=temp;
     rear=temp;
    }
   
  }
  dispq();
 }
 
 
 void del()
 {
  if( front==NULL)
     printf("The Queue is Empty.\n");
  else if(front==rear)
   {printf("The deleted element: %d \n", front->info);
    front=NULL;
    rear=NULL;
   }
  else
    { 
      temp=front;
      printf("The deleted element: %d \n", temp->info);
      front=front->link;
      free(temp);
 
  dispq();
 }
 }
 
 void dispq()
 { 
   if( front==NULL)
     printf("The Queue is Empty.\n");
    else
    { ptr=front;
   printf("The Queue: \n");
   while(ptr!=NULL)
   { printf("%d ", ptr->info);
     ptr=ptr->link;
   } 
    }
  printf("\n");
 }



 
