#include<stdio.h>
struct queue{
  int data;
  struct queue *next;
}*front=NULL,*rear=NULL;

int isEmpty()
{
   return front==NULL;
}

struct queue* createMemory(int data)
{
    struct queue *temp=(struct queue*)malloc(sizeof(struct queue));
    temp->data=data;
    temp->next=NULL;
    return temp;
}

void enqueue(int data)
{
  struct queue *temp=createMemory(data);
   if(front==NULL)
       front=temp;
   else
      rear->next=temp;
   rear=temp;
   temp=NULL;
}

int dequeue()
{
  int data=-1;
  if(!isEmpty())
  {
    data=front->data;
    front=front->next;
   }
   else{
     printf("QUEUE IS EMPTY");
     exit(1);
   }
   return data;
}

int peak()
{
  if(!isEmpty())
    return front->data;
  else{
     printf("QUEUE IS EMPTY");
     exit(1);
   }
}

/*
void view()
{
   struct node *temp=front;
   while(temp!=NULL)
   {
       printf("%d",temp->data);
       temp=temp->next;
   }
}
  */
void main()
{
  clrscr();
  enqueue(100);
 // view();
  printf("%d",dequeue());
//printf("%d",dequeue());

//printf("%d",isEmpty());
  getch();
}