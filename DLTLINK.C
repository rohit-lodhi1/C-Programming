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

int nodeCount(struct node *temp)
{
  int nodes=0;
  while(temp!=NULL)
  {
    nodes++;
    temp=temp->next;
  }
  return nodes;
}

int countPos(struct node *temp,int pos)
{
int posCount=1;
if(pos>nodeCount(temp))
{
   printf("%d ",nodeCount(temp)-pos);
}
else{
   while(posCount++<pos)
   {
      temp=temp->next;
   }
   printf("%d  ",temp->data);
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

void dltLink(struct node *temp)
{
 if(temp==NULL)
   return ;
 dltLink(temp->next);
 temp->next=NULL;
 free(temp);
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
viewData(start1);
dltLink(start1);
viewData(start1);
getch();
}

