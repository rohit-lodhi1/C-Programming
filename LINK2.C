#include<stdio.h>
struct node{
  int data;
  struct node *next;
}*list1,*list2,*list3,*start1=NULL,*current1=NULL,*start2=NULL,*current2=NULL,*start3=NULL,*current3=NULL;

int addAtLast(int data,int flag)
{
   struct node *temp;
//   int data;
  // puts("Entre the data");
//   scanf("%d",&data);
   temp=(struct node*)malloc(sizeof(struct node));
     temp->data=data;
     temp->next=NULL;
  if(flag==1)
  {
   if(start1==NULL)
      start1=temp;
   else
      current1->next=temp;
   current1=temp;
   temp=NULL;
  }
   else if(flag==2)
   {   if(start2==NULL)
	 start2=temp;
       else
      current2->next=temp;
   current2=temp;
   temp=NULL;
    }
   else if(flag==3)
   {   if(start3==NULL)
	 start3=temp;
       else
      current3->next=temp;
   current3=temp;
   temp=NULL;
  }
}

struct node* revgrp(struct node *temp,int grp)
{
 struct node *curr=temp,*nxt=NULL,*pre=NULL;
 int c=1;
// start1=curr;
  while(curr!=NULL && c++<=grp)
  {
     nxt=curr->next;
     curr->next=pre;
     pre=curr;
     curr=nxt;
  }
  if(curr!=NULL)
   temp->next=revgrp(curr,grp);
   return pre;
}


struct node* revByRecur(struct node *temp,struct node *current)
{
   struct node *revHead;
   if(temp==NULL||temp->next==NULL)
   {
      current=temp;
      return temp;
   }
   revHead=revByRecur(temp->next,current);
   temp->next->next=temp;
   temp->next=NULL;
   return revHead;
}

struct node* arrange(struct node *temp,struct node *temp2)
{
   while(temp!=NULL||temp2!=NULL)
   {
     if(temp->data<temp2->data)
     {
       addAtLast(temp->data,3);
       addAtLast(temp2->data,3);
     }
     else if(temp->data>temp2->data)
     {
       addAtLast(temp2->data,3);
       addAtLast(temp->data,3);
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
void main()
{
clrscr();
addAtLast(1,1);
addAtLast(2,1);
addAtLast(3,1);
addAtLast(4,1);
addAtLast(5,1);
addAtLast(6,1);
addAtLast(7,1);

addAtLast(8,1);
addAtLast(9,1);
addAtLast(10,1);
addAtLast(2,2);
addAtLast(4,2);
addAtLast(6,2);
addAtLast(8,2);
list1=start1;
start1=revgrp(start1,3);
viewData(start1);

puts("");
list2=start2;
//viewData(list2);
printf("\n");
//arrange(list1,list2);
list3=start3;
//viewData(list3);
getch();
}