#define MAX 5
int front=-1;
int rear=-1;
int deque[MAX];

int isEmpty()
{
  return front == -1;
}

int isFull()
{
   return front == rear+1 || front == 0 && rear == MAX-1;
}

void enqueueFront(int data)
{
   if(isFull())
   {
     puts("QUEUE IS FULL");
     exit(1);
   }
   if(front==-1)
     front=rear=0;
   else if(front==0)
       front=MAX-1;
   else
      front--;
   deque[front]=data;
}

void enqueueRear(int data)
{
   if(isFull())
   {
     puts("QUEUE IS EMPTY");
     exit(1);
   }
   if(front==-1)
     front=rear=0;
   else if(rear==MAX-1)
      rear=0;
   else
     rear++;
   deque[rear]=data;
}

int dequeueFront()
{
 int data=deque[front];
  if(isEmpty())
  {
    puts("QUEUE IS EMPTY");
    exit(1);
  }
  if(front==0)
     front=MAX-1;
  else if(front==rear)
       front=rear=-1;
  else
    front++;
  return data;
}

int dequeueRear()
{
  int data=deque[rear];
  if(isEmpty())
  {
    puts("QUEUE IS EMPTY");
    exit(1);
  }
  if(rear==0)
     rear=MAX-1;
  else if(front==rear)
     front=rear=-1;
  else
    --rear;
    return data;
}

void print()
{
  int temp=front;
  if(front==0)
  {
    while(temp<=rear)
     printf("%d=>",deque[temp++]);
  }
  else{
      if(front>rear)
      {
	 while(temp<MAX)
	  printf("%d=>",deque[temp++]);
	    temp=0;
	 while(temp<=rear)
	  printf("%d=>",deque[temp++]);
      }
  }
}

void main()
{
int temp;
  clrscr();
  enqueueFront(10);
    enqueueFront(20);
    enqueueFront(30);
    enqueueFront(40);
    print();
    puts("");
    printf("%d ",dequeueRear());
	printf("%d ",dequeueRear());
	puts("");
		    temp=0;
	 while(temp<MAX)
	  printf("%d=>",deque[temp++]);
    print();
    getch();
}

