#define MAX 4

int front=-1;
int rear=-1;
int queue[MAX];


int isEmpty()
{
   return front==-1;
}
int isFull(){
//int count=rear-front+1;
  return front==rear+1||rear==MAX-1 && front==0;
}

void enqueue(int data)
{
  if(isFull())
  {
    puts("QUEUE IS FULL");
    exit(1);
  }
  if(front==-1)
    ++front;

  else  if(rear==MAX-1)
      rear=0;
    else
      ++rear;
    queue[rear]=data;
}

int dequeue()
{
  int data=queue[front];
   if(isEmpty())
   {
    front=rear=-1;
     puts("QUEUE IS EMPTY");
     exit(1);
   }
else   if(front==MAX-1)
      front=0;
   else
    ++front;
    return data;
}

void print()
{
  int temp=front;
  if(front==0)
  {
    while(temp<=rear)
     printf("%d=>",queue[temp++]);

  }
  else{
      if(front>rear)
      {
	 while(temp<MAX)
	  printf("%d=>",queue[temp++]);
	    temp=0;
	 while(temp<=rear)
	  printf("%d=>",queue[temp++]);
      }
  }

}

int main()
{
  int temp;
   clrscr();
   enqueue(10);
   enqueue(20);
   printf("%d ",dequeue());
   printf("%d ",dequeue());

   enqueue(20);
   puts("");
	    temp=0;
	 while(temp<MAX)
	  printf("%d=>",queue[temp++]);
getch();
 return 0;
}