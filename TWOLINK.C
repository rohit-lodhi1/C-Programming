#include<stdio.h>

struct node{
  int data;
  struct node *next;
}*list1=NULL,*list2=NULL;

struct node* createMemory(int data)
{
   struct node *temp=(struct node*)malloc(sizeof(struct node));
     temp->data=data;
     temp->next=NULL;
     return temp;
}

int addAtFirst(struct node **start,int data)
{
   struct node *temp=createMemory(data);
    temp->next=*start;
    *start=temp;
}


int addAtLast(struct node **start,int data){
  struct node *temp=createMemory(data),*current=*start;

  if(*start==NULL)
      *start=temp;
  else
    {
	while(current->next!=NULL)
	  current=current->next;
	  current->next=temp;
	  current=temp;
    }
}

struct node* reverse(struct node* temp)
{
  struct node *pre=NULL,*curr=temp,*nxt=NULL;
  while(curr!=NULL)
  {
     nxt=curr->next;
     curr->next=pre;
     pre=curr;
     curr=nxt;
  }
 return pre;
}





/*
void rev(struct node *temp)
{
  struct node* pre=NULL,*curr=temp,*nxt=NULL;
  while(curr!=NULL)
  {
    nxt=curr->next;
    curr->next=pre;
    pre=curr;
    curr=nxt;
  }
  current=temp;
  start=pre;
}
  */
void viewData(struct node *temp)
{
    while(temp!=NULL)
    {
      printf("%d ->",temp->data);
      temp=temp->next;
    }
    puts("NULL");
}
void main()
{
struct node *start1=NULL,*start2=NULL;
clrscr();
addAtLast(&start1,10);
addAtLast(&start1,20);
addAtLast(&start1,30);
addAtLast(&start1,40);
list1=start1;
list1=reverse(list1);
addAtLast(&start2,100);
addAtLast(&start2,200);

addAtLast(&start2,300);
addAtLast(&start2,400);
list2=start2;
list2=reverse(list2);
viewData(list2);
getch();
}
