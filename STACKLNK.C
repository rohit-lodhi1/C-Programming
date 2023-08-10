#include<stdio.h>
#define true 1
#define false 0
struct stack{
  int data;
  struct node *link;
}*top=NULL;

int isEmpty()
{
 if(top==NULL)
  return true;
  return false;
}

void push(int data)
{
struct stack *temp=(struct stack*)malloc(sizeof(struct stack));
temp->data=data;
temp->link=NULL;
  if(isEmpty())
   top=temp;

   else
   {
    temp->link=top;
    top=temp;
   }
}

int pop()
{
  struct stack *temp=top;
   int data=-1;
   if(top!=NULL)
   {
    data =temp->data;
    top=temp->link;
    temp->link=NULL;
    free(temp);
   }
   return data;
}


void main()
{
clrscr();
push(10);
push(20);
push(30);
pop();
printf("%d\n",pop());
printf("%d\n",pop());
printf("%d\n",pop());
//printf("%d\n",pop());
getch();
}