#include<stdio.h>
#include<stdlib.h>
struct node
{int a;
 struct node *link;
 }*temp,*ptr,*start=NULL;
void main()
{int c,ch,loc,i,x=1,flag=0,b;
 do
 {
 printf("MENU 1.INSERT 2.DELETE \nEnter your choice \n");
 scanf("%d",&c);
 switch(c)
 {case 1:temp=(struct node *)malloc(sizeof(struct node));
        printf("Enter the item ");
        scanf("%d",&temp->a);
        if(start==NULL)
        {start=temp;
          }
        else
        {printf("Enter the location \n");
         scanf("%d",&loc);
         if(loc>x)
         printf("Insertion not possible ");
         else if(loc==1)
         {temp->link=ptr;
          start=temp;
         }
         else
         {ptr=start;
          for(i=1;i<loc-1;i++)
          ptr=ptr->link;
          temp->link=ptr->link;
          ptr->link=temp;
         }
         }
        x++;
        break;
 case 2:if(start==NULL)
        {printf("Empty List \n");
        }
        else
        {flag=0;
         printf("Enter the item \n"); 
         scanf("%d",&b);
         ptr=start;
         while(ptr!=NULL)
         {if(ptr->a==b)
          {flag=1;
           x--;
          if(start==ptr)
          start=ptr->link;
          else
          {temp->link=ptr->link;
           ptr=temp;
          }
         }
         temp=ptr;
         ptr=ptr->link;
         }
        if(flag==0)
        printf("No such element");
        else
        printf("Deleted element :%d",temp->a);
        }
        break;
default:printf("Invalid choice \n");
}
printf("Do you wish to continue ?");
scanf("%d",&ch);
}while(ch==1);
}
