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
   else
   {   if(start2==NULL)
	 start2=temp;
       else
      current2->next=temp;
   current2=temp;
   temp=NULL;
    }
}

int add(int data)
{
      struct node  *temp=(struct node*)malloc(sizeof(struct node));
      temp->data=data;
      temp->next=NULL;
      if(start3==NULL)
	 start3=temp;
       else
      current3->next=temp;
   current3=temp;
   temp=NULL;

}

void deleteAtMthNth(struct node *temp,int m,int n)
{
   struct node *temp1;
   int count=1,c1=1;
   while(temp!=NULL)
   {
      while(temp!=NULL && count++<m)
      {
	 temp=temp->next;
      }
      while(temp!=NULL && c1++<=n)
      {
	 temp1=temp->next;
	 temp->next=temp1->next;
	 temp1=NULL;
      }

    temp=temp->next;
    count=1;
    c1=1;
   }

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


struct node* revByGroup(struct node *temp,int k)
{
  struct node *pre=NULL,*curr=temp,*nxt=NULL;
  int count=1;
  while(curr!=NULL)
  {
    while(curr!=NULL&& count++<k)
    {
      nxt=curr->next;
      curr->next=pre;
      pre=curr;
      curr=nxt;
    }
    temp->next=curr;
    count=1;
    while(curr!=NULL && count++<=k)
    {
      temp=temp->next;
      curr=curr->next;
    }
    curr=curr->next;

    pre=NULL;
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
//currentnext=
addAtLast(1,1);
addAtLast(2,1);
addAtLast(3,1);
//addAtLast(40,1);
addAtLast(4,1);
addAtLast(5,1);
addAtLast(6,1);

addAtLast(7,1);
addAtLast(8,1);
addAtLast(9,1);

addAtLast(10,1);
addAtLast(11,1);
addAtLast(12,1);
//addAtLast(70,0);
list1=start1;
viewData(list1);
//deleteAtMthNth(list1,2,2);
list1=revByGroup(list1,3);
viewData(list1);
//list1=revByRecur(list1,current1);
puts("");
//viewData(list1);
//list2=start2;
//viewData(list2);
//list2=revByRecur(list2,current2);
//puts("");
//viewData(list2);
//printf("\n");
//addition(list1,list2);
//list3=start3;
//list3=revByRecur(list3,current3);
//viewData(list3);
getch();

}