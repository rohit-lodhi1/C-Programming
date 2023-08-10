#include<stdio.h>
#define MAXSIZE 20
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
 int stock[10]={100,120,30,40,60,80,130},outPut[10],i=1,j=0;
 push(0);
 clrscr();
 outPut[j++]=1;
 while(stock[i]!=NULL)
 {
    if(stock[stack[top]]<stock[i])
    {
       outPut[j++]=i+1;
       pop();
       push(i);
    }
    else if(stock[stack[top]]>stock[i])
    {
	outPut[j++]=i-stack[top];
    }
    i++;
 }
 outPut[j]=NULL;
 for(i=0;outPut[i]!=NULL;i++)
 printf("%d  ",outPut[i]);
  getch();
}