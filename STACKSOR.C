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

void insertSort(int data)
{
   if(stack[top]<=data||top==-1)
   {
     push(data);
     return ;
   }
   {
    int temp=pop();
    insertSort(data);
    push(temp);
   }
}


void sort()
{
  if(top==-1)
  {
    return ;
  }
  {
    int temp=pop();
    insertSort(temp);
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
 push(2);
 push(1);
 push(7);
 push(9);
 push(10);
  push(11);
   push(13);
//
 sort();
  insertSort(3);
 while(top!=-1)
 printf("%d\n",pop());
  getch();
}