#include<stdio.h>
struct node{
   int data;
   struct node *next;
}*start=NULL,*current=NULL;

struct node1{
 int data;
 struct node1 *next;
}*start2=NULL,*current2=NULL;

struct node2{
   int data;
   struct node2* next;
}*start3=NULL,*current3=NULL;

int addAtFirst()
{
   struct node *temp;
   int data;
   puts("Entre the data");
   scanf("%d",&data);
   temp=(struct node*)malloc(sizeof(struct node));
   temp->data=data;
   temp->next=start;
   if(start==NULL)
      current=temp;
   start=temp;
   temp=NULL;
	return 1;
}

int addAtLast(int data)
{
   struct node *temp;
 //  int data;
  // puts("Entre the data");
  // scanf("%d",&data);
   temp=(struct node*)malloc(sizeof(struct node));
     temp->data=data;
     temp->next=NULL;
   if(start==NULL)
      start=temp;
   else
      current->next=temp;
   current=temp;
   temp=NULL;
	return 1;
}

int addAtLast2(int data)
{
   struct node *temp1;
 //  int data;
  // puts("Entre the data");
  // scanf("%d",&data);
   temp1=(struct node1*)malloc(sizeof(struct node1));
   temp1->data=data;
   temp1->next=NULL;
   if(start2==NULL)
      start2=temp1;
   else
      current2->next=temp1;
   current2=temp1;
   temp1=NULL;
	return 1;
}

int addAtLast3(int data)
{
   struct node *temp1;
 //  int data;
  // puts("Entre the data");
  // scanf("%d",&data);
   temp1=(struct node2*)malloc(sizeof(struct node2));
     temp1->data=data;
     temp1->next=NULL;
   if(start3==NULL)
      start3=temp1;
   else
      current3->next=temp1;
   current3=temp1;
   temp1=NULL;
//	return temp1;
}


struct node2* arrange()
{
  struct node *temp=start;
  struct node *temp2=start2;
  struct node *temp3=start3;
   while(temp!=NULL)
   {
     if(temp->data<temp2->data)
     {
       addAtLast3(temp->data);
       addAtLast3(temp2->data);
     }
     else
     {
       addAtLast3(temp2->data);
       addAtLast3(temp->data);
     }
     temp=temp->next;
     temp2=temp2->next;
   }
}

void viewData(struct node *temp)
{
    while(temp!=NULL)
    {
      printf("%d ->",temp->data);
      temp=temp->next;
    }
    puts("NULL");
}
/*
void viewData2(struct node *temp)
{
    while(temp!=NULL)
    {
	printf("%d ->",temp->data);
	temp=temp->next;
    }
    puts("NULL");
} */

void menu()
{
   struct node *p=NULL,*c=start,*n=NULL;
   int a;
   clrscr();
   puts("         MENU\n\n");
   puts(" 1. ADD AT FIRST");
   puts(" 2. ADD AT LAST");
 //  puts(" 3. ADD AT NTH POSITION");
   puts(" 4. VIEW DATA");
   puts("12. EXIT");
   scanf("%d",&a);
   switch(a)
   {
     case 1: addAtFirst();break;
//     case 2: addAtLast();break;
 //    case 3: addAtNthPos();break;
 //    case 4: viewData();getch();break;
      case 12: exit(); break;
    }
    menu();
}

void main()
{
   clrscr();
   addAtLast(1);
   addAtLast(3);
   addAtLast(5);
   addAtLast(7);
   addAtLast(9);
//   viewData(start);
   puts("");
//start=revByRecur(start);
   viewData(start);
   puts("");
   addAtLast2(2);
  addAtLast2(4);
   addAtLast2(6);
   addAtLast2(2);
   addAtLast2(10);
//   addAtLast2(6);
 //  current2->next2=NULL;
 //  viewData(lets);
//   start2=revByRecur2(start2);
   viewData(start2);
   getch();
   arrange();
   puts("");
   viewData(start3);
//      viewData(start2);
   getch();
  // menu();
}