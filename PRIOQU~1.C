#include<stdio.h>

struct queue
{
	int data;
	int priority;
	struct queue *next;
}*front=NULL,*rear=NULL;

int isEmpty()
{
	return front==NULL;
}

struct queue *createMemory(int data,int pr)
{
	struct queue *temp=(struct queue*)malloc(sizeof(struct queue));
	temp->data=data;
	temp->priority=pr;
	temp->next=NULL;
	return temp;
}

int enqueue(int data,int priority)
{
	struct queue *temp=createMemory(data,priority),*temp1=front;
       if(front==NULL)
	{
		front=rear=temp;
	}
       else if(temp1->priority<priority)
       {
	  while(temp1->priority<priority && temp1->next!=NULL)
	  {
	     temp1=temp1->next;
	  }
	    rear->next=temp;
	  temp1->next=temp;
		rear=temp;
       }
       else {
	   temp->next=front;
	   front=temp;
       }
}

int dequeue()
{
struct queue*temp=front;
int data=front->data;
  if(!isEmpty())
  {
     front=front->next;
    free(temp);
  }
  else
  {
    puts("EMPTY");
    exit(1);
  }
  return data;
}


void print()
{
	struct queue*temp=front;
	while(temp!=NULL)
	{
		printf("%d , %d\n",temp->data,temp->priority);
		temp=temp->next;
	}
	puts("NULL");
}

void main()
{
	clrscr();
	enqueue(10,3);
	enqueue(20,5);
//	enqueue(30,9);
	enqueue(40,1);
//	dequeue();
	print();
	getch();
}