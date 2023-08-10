#include<stdio.h>
#define MAXSIZE 10
#define true 1
#define false 0
int priority=0;

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

int isOperant(char value)
{
   if(value >='a' && value <= 'z' || value >= 'A' && value <= 'Z' )
	 return 1;
   return 0;
}

int isOperator(char value)
{
   if( value == '*' || value == '+' || value == '-'|| value == '/')
      return 1;
   return 0;
}

int precedence(char value)
{

   switch(value)
   {
       case '/' : priority=2; break;
       case '*' : priority=2; break;
       case '+' : priority=1; break;
       case '-' : priority=1; break;
       case '(' : priority=0; break;
   }
   return priority;
}

void main()
{
 char inFix[100],postFix[100],symbol;
 int i=0,j=0;
  clrscr();
  printf("ENTRE ANY INFIX EXPRESSION :- ");
  gets(inFix);
  push('(');
while(inFix[i]!=NULL)
{
    symbol=inFix[i++];
    if(isOperant(symbol))
    {
       postFix[j++]=symbol;
    }
    else if(symbol=='(')
    {
	push(symbol);
    }
    else if(isOperator(symbol))
    {
	while(precedence(symbol)<=precedence(stack[top]))
	{
	   postFix[j++]=pop();
	}
	push(symbol);
    }
    if(symbol==')')
    {
       while(stack[top]!='(')
       {
	  postFix[j++]=pop();
       }
       pop();
    }
}
while(stack[top]!='(')
{
  postFix[j++]=pop();
}
    postFix[j]=NULL;
    printf("%s",postFix);
    getch();
}