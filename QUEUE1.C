#define MAX 4

int front=-1;
int rear=-1;
int queue[MAX];

int isEmpty()
{
  return  front==-1||front==rear+1;
}

int isFull()
{
  int Count=rear-front+1;
  return Count==0||rear+1==MAX;
}

void enqueue(int data)
{
  if(!isFull())
  {
    queue[++rear]=data;
    if(front==-1)
      ++front;
  }
  else
  {
     puts("\nQUEUE OVERFLOW");
     delay(1000);
     exit();
  }

}

int dequeue()
{
  if(!isEmpty())
    return queue[front++];
  else
  {
     puts("\nEMPTY QUEUE");
     delay(1000);
     exit();
     }
     return -1;
}

int peak()
{
   if(!isEmpty())
   return queue[front];
   return -1;
}

void main()
{
clrscr();
enqueue(10);
enqueue(20);
enqueue(30);
enqueue(40);
printf("%d\n",dequeue());
printf("%d\n",dequeue());
printf("%d\n",dequeue());
printf("%d\n",dequeue());
printf("%d\n",dequeue());
printf("%d\n",dequeue());
printf("%d",peak());
getch();
}