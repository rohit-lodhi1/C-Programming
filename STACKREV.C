#include<stdio.h>
#define MAXSIZE 20
#define true 1
#define false 0

char stack[MAXSIZE];
int top=-1;

int isFull()
{
	return top==MAXSIZE?true:false;
}

int isEmpty()
{
	return top==-1?true:false;
}

int push(char data)
{
	if(!isFull())
	{
	   stack[++top]=data;
	}
	else
	  printf("Over FLow\n");
}

char pop()
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
void insertAtBottom(int data)
{
   if(isEmpty())
   {
     push(data);
   }
   else
   {
     int temp=pop();
     insertAtBottom(data);
     push(temp);
   }
}

void reverse()
{
  if(!isEmpty())
  {
   int temp=pop();
      reverse();
   insertAtBottom(temp);
  }
}
/*
void viewData()
{
  if(stack[top]!='\0')
  {
    int temp=pop();
    viewData();
    printf("%d\n",temp);
  }
}
*/

void main()
{
 clrscr();
 push(1);
 push(2);
 push(3);
 push(4);
// viewData();
 reverse();
// printf("%d\n",pop());
  while(top!=-1)
    printf("%d\n",pop());
  getch();
}