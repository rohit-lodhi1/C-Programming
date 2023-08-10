#include<stdio.h>
struct node{
  int data;
  struct node *next;
}*tail=NULL;

int addAtTail(int data)
{
 struct node *temp=(struct node*)malloc(sizeof(struct node));
 temp->data=data;
 temp->next=temp;
 if(tail==NULL)
 tail=temp;
 else
 {
    temp->next=tail->next;
    tail->next=temp;
    tail=temp;
 }
 temp=NULL;
}

int addAtFirst(int data)
{
struct node *temp=(struct node*)malloc(sizeof(struct node));
if(tail==NULL)
{
   addAtTail(data);
   return 1;
}
     temp->data=data;
     temp->next=tail->next;
     tail->next=temp;
     temp=NULL;
}

int addAtNthPos(int data,int pos)
{
   struct node *temp=(struct node*)malloc(sizeof(struct node)),*temp1=tail->next;
    int posCount=1;
	temp->data=data;
	if(tail==NULL || pos<2)
	{
	  addAtFirst(data);
	  return 1;
	}
    while(posCount++<pos-1)
    {
       temp1=temp1->next;
    }
    temp->next=temp1->next;
    temp1->next=temp;
}

void deleteAtFirst()
{
  struct node *temp=tail;
  temp=temp->next;
  tail->next=temp->next;
  temp->next=NULL;
  free(temp);
}

void deleteAtTail()
{
  struct node *temp=tail;
  temp=temp->next;
  while(temp->next!=tail)
  {
    temp=temp->next;
  }
  temp->next=tail->next;
  free(tail);
  tail=temp;
}
int countNode(struct node *temp)
{
  int count=0;
  temp=temp->next;
  while(temp!=tail)
  {
  count++;
   temp=temp->next;
  }
  return count;
}


int deleteAtNthPos(int pos)
{
  struct node *temp=tail->next,*temp1=tail->next;
  int posCount=1;
  if(tail==NULL || pos<2)
  {
     deleteAtFirst();
     return 1;
  }
  if(pos>=countNode(tail))
  {
     deleteAtTail();
     return 1;
  }
  while(posCount++<pos)
  {
     temp=temp->next;
  }
  temp1=temp->next;
  temp->next=temp1->next;
  temp1->next=NULL;
  free(temp1);
}

struct node* reverse(struct node *temp)
{
  struct node *pre=temp,*curr=temp->next,*nxt=NULL;
  while(curr!=tail)
  {
    nxt=curr->next;
    curr->next=pre;
    pre=curr;
    curr=nxt;
  }
  tail=tail->next;
  curr->next=pre;
}


void deleteAtMthNth(struct node *temp,int m,int n)
{
   struct node *temp1;
   int count=1,c1=1;
   while(temp!=NULL)
   {
      while(temp!=NULL && count++<m)
	 temp=temp->next;

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

void viewData(struct node *temp)
{
    while(temp!=tail)
    {
      printf("%d ->",temp->data);
      temp=temp->next;
    }
	  printf("%d  ",temp->data);
}

void main()
{
clrscr();
//addAtFirst(300);
//addAtFirst(200);
addAtTail(10);
addAtTail(20);
addAtTail(30);
addAtTail(40);
addAtTail(99);
addAtFirst(100);
//addAtNthPos(300,1);
//deleteAtFirst();
//deleteAtTail();
//deleteAtNthPos(9);
reverse(tail);

viewData(tail->next);
puts("");
getch();
}