/*
Program to create a binary tree
*/


#include<stdio.h>
 #include<stdlib.h>

 struct tree
 {
  int info;
  struct node *lc;
  struct node *rc;
 }*root, *new;

 int c=0;
 
 int count(struct tree *ptr)
 {return 0;
 }

 void main()
{

 int ch,x;

 do
 {
  printf("Enter choice: \n1.Create a Binary Tree \n2.Calculate Height \n3.Inorder Traversal \n4.Postorder Traversal \n5. Preorder Traversal \n6.Number of Leaf Nodes \n7.Exit \n");

 scanf("%d",&ch);

 if(ch==1)
  {int item;
   c=0;
   root=(struct tree*)malloc(sizeof(struct tree));
   printf("Enter the root element. \n");
   scanf("%d",&item);
   create(root,item);
  }
 else if(ch==2)
 {int p;
  p=height(root);
  printf("Height of tree: %d \n",p);
 }
 else if(ch==3)
 {printf("Inorder Traversal: \n");
  in(root);
 }
 else if(ch==4)
 {printf("PostOrder Traversal: \n");
  post(root);
 }
 else if(ch==5)
 {printf("Preorder Traversal: \n");
  pre(root);
 }
 else if(ch==6)
 {printf("Number of leaf nodes: %d\n",c);
 }
 else if(ch==7)
  {x=0;}

 printf("Do you wish to continue?[0/1]\n");
 scanf("%d", &x);
}while(x==1);
}

void create(struct tree *ptr, int item)
 {
  int ch1,ch2;
  ptr->info=item;
  printf("Does left subtree exist for %d? [0/1]: ", ptr->info);
  scanf("%d",&ch1);
  printf("\n");
  if(ch1==1)
  {
   new= (struct tree*)malloc(sizeof(struct tree));
   ptr->lc=new;
   printf("Enter the element.\n");
   scanf("%d", &item);
   create(ptr->lc, item);
  }
  else if( ch1==0)
 { 
  ptr->lc=NULL;
 }
  else
 {printf("Invalid Entry.\n");
 }
 
 printf("Does right subtree exist for %d? [0/1]: ", ptr->info);
  scanf("%d",&ch2);
  printf("\n");
  if(ch2==1)
  {
   new= (struct tree*)malloc(sizeof(struct tree));
   ptr->rc=new;
   printf("Enter the element.\n");
   scanf("%d", &item);
   create(ptr->rc, item);
  }
  else if( ch2==0)
 { 
  ptr->rc=NULL;
 }
  else
 {printf("Invalid Entry.\n");
 }
 if(ch1==0&& ch2==0)
  c++;

 }

void post(struct tree *ptr)
 {if(ptr!=NULL)
  {
  post(ptr->lc);
  post(ptr->rc);
  printf("%d", ptr->info);
  }
 }

void pre(struct tree *ptr)
 {if(ptr!=NULL)
  {
   printf("%d", ptr->info);
   pre(ptr->lc);
   pre(ptr->rc);
  }
 }

 void in(struct tree *ptr)
 {if(ptr!=NULL)
  {
    in(ptr->lc);
    printf("%d", ptr->info);
    in(ptr->rc);
  }
 }

 int height(struct tree *ptr)
 {
  int lsub,rsub;
  if(ptr==NULL)
  return 0;
  else if(ptr->lc==NULL && ptr->rc==NULL)
  return 0;
  else
  {lsub=height(ptr->lc);
   rsub=height(ptr->rc);
   if(lsub<rsub)
   return rsub+1;
   else
   return lsub+1;
  }
 }
