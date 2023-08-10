#include<stdio.h>
struct node{
  int data;
  struct node *prev;
  struct node *next;
}*tail=NULL;

struct node *createNode(int data)
{

   struct node *temp=(struct node*)malloc(sizeof(struct node));
     temp->data=data;
    temp->prev=temp;
     temp->next=temp;
     return temp;
}

int addAtTail(int data)
{
  struct node *temp=createNode(data);
   if(tail==NULL)
      tail=temp;
   else
   {
      temp->next=tail->next;
	temp->prev=tail;
      tail->next=temp;
      tail=temp;
   }
   temp=NULL;
}
int addAtFirst(int data)
{
  struct node *temp=createNode(data);
    if(tail==NULL)
      tail=temp;
    else
    {
      temp->prev=tail;
      temp->next=tail->next;
      tail->next->prev=temp;
      tail->next=temp;
    }
    temp=NULL;
}

int addAtNthPos(int data,int pos)
{
  struct node*temp=createNode(data);
 struct node*  temp1=tail->next;
  int posCount=1;
  if(tail==NULL || pos<2)
  {
    addAtFirst(data);
      return 1;
  }
  while(temp1!=tail && posCount++<pos)
  {
     temp1=temp1->next;
  }
  temp->prev=temp1->prev;
  temp1->prev->next=temp;
  temp->next=temp1;
  temp1->prev=temp;
  temp=NULL;
}

int deleteAtFirst()
{
   struct node *temp=tail->next;
   if(tail->next==tail)
      free(tail);
    else
   temp->next->prev=temp->prev;
   tail->next=temp->next;
   free(temp);
}

int deleteAtTail()
{
  struct node*temp=tail;
  if(tail->next==tail)
  {
	deleteAtFirst();
	return 1;
  }
temp->prev->next=temp->next;
tail=temp->prev->prev->next;
free(temp);
}

int deleteAtNthPos(int pos)
{
  struct node *temp=tail->next;
  int posCount=1;
  if( pos<2)
  {
    deleteAtFirst();
    return 1;
  }
  while(temp!=tail && posCount++<pos)
  {
    temp=temp->next;
  }
  temp->prev->next=temp->next;
  temp->next->prev=temp->prev;
  free(temp);
}

struct node* reverse(struct node*temp)
{
 struct node *pre=temp,*curr=temp->next,*nxt=NULL;
 while(curr!=tail)
 {
    nxt=curr->next;
    curr->next=pre;
    pre->prev=curr;
    pre=curr;
    curr=nxt;
 }
  curr->next=pre;
  pre->prev=curr;

  return curr->prev;
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
    addAtFirst(50);
  addAtTail(100);
  addAtTail(200);
  addAtTail(300);
  addAtFirst(40);
  addAtNthPos(55,3);
addAtTail(400);
//  deleteAtTail();
//deleteAtFirst();
//deleteAtNthPos(2);
tail=reverse(tail);
//printf("%d",tail->data);
  viewData(tail->next);
//  printf("%d",tail->next->next->next->next->data);
  getch();
}