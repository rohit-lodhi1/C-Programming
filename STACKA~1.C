#define MAXSIZE 7
#define true 1
#define false 0

int stack[MAXSIZE];
int top=-1;

int isFull()
{
	return top==MAXSIZE?true:false;
}

int isEmpty()
{
	return top==-1?true:false;
}

int push(int data)
{
	if(!isFull())
	{
	   stack[++top]=data;
	}
	else
	  printf("Over FLow\n");
}

int pop()
{
	int data=-1;
	if(!isEmpty())
	{
	  data=stack[top--];
	}
	return  data;
}

int peak()
{
	return stack[top];
}

void reverse(char *ptr,int length)
{
 int i;
 for(i=0;i<length;i++)
 {
    push(*(ptr+i));
 }
 for(i=0;i<length;i++)
 {
    *(ptr+i)=pop();
 }
}

void binaryNumber(int number)
{
  int r;
  while(number!=0)
  {
     r=number%2;
     push(r);
     number=number/2;
  }
  while(!isEmpty())
  {
     printf("%d\n",pop());
  }

}

void main()
{
 char s[]="hello";
 int i,length;
  clrscr();

length=  printf("%s",s);
/* push(10);
  push(20);
  push(30);
  push(40);
  push(50);
  push(100);
  push(300);
  printf("%d\n",pop());
  printf("%d\n",pop());
  printf("%d\n",pop());
  printf("%d\n",peak());
  printf("%d\n",peak());   */
  reverse(s,length);
//  binaryNumber(10);
  printf("%s",s);

getch();
}



