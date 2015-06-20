/*
Program to maintain records of registered members and list of books
*/


#include<stdio.h>

 struct library
 {int sno;
  char member[20];
  char book[20];
 }lib[20];

void main()
{
  int ch,num, num1,i, c,d,flag;
  c=0;
  d=0;

  do
{
  printf("Enter your choice. \n 1. Add Members \n 2. Add Books \n 3. List of Members \n 4.List of Books \n 5.Exit\n");
  scanf("%d", &ch);

  switch(ch)
  {
   case 1: printf("Enter number of new members.\n");
           scanf("%d", &num);
           
           for(i=c;i<num+c;i++)
           {
            printf("Member %d:\n", i+1);
            scanf("%s", lib[i].member);
           }
           c=c+num;
           break;

  case 2: printf("Enter number of new books.\n");
           scanf("%d", &num1);
           
           for(i=d;i<num1+d;i++)
           {
            printf("Book %d:\n", i+1);
            scanf("%s", lib[i].book);
           }
           d=d+num1;
           break;

  case 3: printf("The list of members of the library is as follows: \n");
          for(i=0;i<c;i++)
           {
            printf("Member %d: %s \n", i+1,lib[i].member );
            
           }
           break;

  case 4:printf("The list of books in the library: \n");
          for(i=0;i<d;i++)
           {
            printf("Book %d: %s \n", i+1,lib[i].book );
            
           }
           break;

 default:  break;

  }

printf("Do you wish to continue?[0/1]\n");
 scanf("%d",&flag);
 }while(flag==1);

 }
    
